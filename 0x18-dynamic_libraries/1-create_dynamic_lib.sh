#/bin/bash
gcc -wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o
