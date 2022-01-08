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
    char *path = "./";
    DIR *dir;
    struct dirent *dent;
    if(argc > 1){
        path = argv[1];
    }
    dir = opendir(path);
    if (dir==NULL){
        perror(path);
        return 1;
    }
    while ((dent = readdir(dir))!= NULL){
        printf("%s\n", dent->d_name);
    }
    closedir(dir);
    return 0;
}