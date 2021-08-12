#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define MAX 41

int has_ch(char ch, const char *line);

int main(int argc, char *argv[])
{
    int n = 0;

    // scanf("%d", &n);
    scanf("%d", &n);
    ungetc(n,stdin);
    scanf("%d", &n);
    
    printf("%d", n);

    return 0;
}
