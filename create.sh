#!/bin/bash


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
echo "commit message: $MSG"
git commit -m "$MSG"
