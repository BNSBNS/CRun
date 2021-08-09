#include <stdio.h>
#include <malloc.h>

struct s
{
    int len;
    char array[30];
};

int main(void)
{
   int x = 8;
   printf("sizeof(x) = %d", sizeof(x));

    return 0;
}