#!/bin/sh

printf "[Automake] Cleaning: "

if [ -f bin/cpaste ]; then
    rm -v bin/cpaste
else
    printf "no binary found\n"
fi


printf "[Automake] Compiling\n"

if \
    clang -Weverything \
        src/cpaste.c \
        -o bin/cpaste \
        ; then
    printf "[Automake] Done\n"
    printf "[Automake] bin: %s\n" "$(ls bin/cpaste)"
    
    sha256sum bin/cpaste > sign/sha256sum.txt
    printf "[Automake] sign: %s\n" "$(cat sign/sha256sum.txt)"
else
    printf "[Automake] error\n"
fi

