#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char rev[100];

    char *sptr = str;
    char *rptr = rev;

    int i = -1;

    printf("enter a string:    ");
    scanf("%s", str);
printf("b4 %s\n", sptr);
    while (*sptr)
    {
        sptr++;
        i++;
    }

printf("aft %s\n", sptr-1);
while(i>= 0){
    sptr--;
    *rptr = *sptr;
    rptr++;
    i--;
}

*rptr = '\0';

rptr = rev;
printf("%s = s\n", rptr);

while(*rptr){
    *sptr = *rptr;
    sptr++;
    rptr++;
}

printf("after rev is: %s\n", str);

}