#!/bin/bash
echo "Running create.sh to create config/febex.db from text files"
DB=febex.db
cd $(dirname $0)

rm -f *.out
../setpar --empty $DB batchfile febex.h || exit $?

for i in list slist tlist
do
    ../setpar $DB $i > $i.out
done
CONFIG=$(../setpar febex.db file list | grep -oE "([0-9]+,? *){4}")

if test -z "$1"
then
    HOSTNAME=$(echo $HOSTNAME | tr A-Z a-z | sed s/[.].*// )
else
    HOSTNAME=$1
fi
git branch | grep $HOSTNAME || git checkout -b $HOSTNAME
git checkout $HOSTNAME 2>/dev/null
git add *.h
MSG="create.sh: created $DB on $HOSTNAME with modules=[$CONFIG]"
#echo "commit message: $MSG"
git commit -m "$MSG"

if ! diff febex.db ../febex.db 
then
    if test "$1" != "--update"
    then
	echo "*******************************************************************"
	echo "Warning, the newly created mbs/config/febex.db is different from"
	echo " mbs/febex.db with the following creation date:"
	ls --full-time ../febex.db
	echo "Please consider updating to the the version."
	echo "*******************************************************************"
    else
	echo "*******************************************************************"
	echo "Warning, replacing febex.db with a newly created version"
	echo "*******************************************************************"
	cp febex.db ..
    fi
else
    echo "mbs/febex.db is up to date with text files."
fi
