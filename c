# Tell to the script where in which directory bash is
#!bin/bash
#Colors initialisation
red=$'\e[1;31m'
grn=$'\e[1;32m'
blu=$'\e[1;34m'
mag=$'\e[1;35m'
cyn=$'\e[1;36m'
white=$'\e[0m'
purple_underline=$'\e[4;35m'
# We put command line argument in FILE variable.
FILE="$1"
#  Print line in the color of your choice, do not forget to end up by $white to reset terminal.
echo "$red Compilation has suceeded.$white"
# Replacing the characters extension
gcc $FILE -o ${FILE/%c/o}
./${FILE/%c/o}
