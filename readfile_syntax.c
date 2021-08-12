#include <stdio.h>


int main(){

    FILE *fp = NULL;
    char c = '\n';

    fp = fopen("somefile.txt", "r");

    if( fp == NULL){
        printf("canntopen ");
        return 1;
    }
    printf("reading file ");

    while(1){
        c = fgetc(fp);
        if (c == EOF){
            break;
        }
        printf("%c", c);
    }


    fclose(fp);

    return 0;
}

