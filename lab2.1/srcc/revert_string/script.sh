gcc -c fPIC revert_string.c -o revert_string.o
gcc -shared revert_string.o -o librevert_d.so
gcc main.c -L$(pwd) -lrevert_d -o RevertProg_D