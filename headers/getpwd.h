#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MAX_BUF
#define MAX_BUF 200
#endif

int getpwd(int argc, char * const argv[]) {
    char path[MAX_BUF];

    getcwd(path, MAX_BUF);
    for(int short i = 0; i < 1; i++){
      printf("%s\n", path);
    }

    exit(EXIT_SUCCESS);
}
