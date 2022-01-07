#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
/**
struct dirent{
    ino_t dino;
    off_t d_off;
    unsigned short d_reclen;
    unsigned char d_type;
    char d_name[256];
}
*/
int main(int argc, char**argv){
    DIR *dp;
    printf("%d parameters\n", argc);
    for(int i=0;i<argc;i++){
        printf("%s\n", argv[i]);
    }
}