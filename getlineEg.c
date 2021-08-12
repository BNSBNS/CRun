#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


int main(){
    char *buffer = NULL ;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *) malloc (bufsize * sizeof(char));

    if(buffer == NULL) exit(1);

    printf("buf: %s", buffer);

    characters = getline(&buffer, &bufsize, stdin); //read the whole line

    printf("%zu characters were read\n", characters); //zu print the char
     printf("you type: %s\n", buffer);

    return 0;

}