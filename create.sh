#!/bin/bash


DB=febex.db
cd $(dirname $0)

rm -f *.out
../setpar --empty $DB batchfile febex.h || exit $?

for i in list slist tlist
do
    ../setpar $DB $i > $i.out
done
