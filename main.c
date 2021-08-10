#include <stdio.h>
#include <malloc.h>
#include <math.h>

int convertToDeci(long long n);

int main(void)
{
    long long n;
    printf("enter num:");
    scanf("%lld", &n);
    printf("%lld in bi = %d in deci", n, convertToDeci(n));
    return 0;
}


int convertToDeci(long long n){
    int decimalNum = 0, i = 0, remainder;

    while(n!=0){
        remainder = n%10;
        n/=10;
        decimalNum += remainder*pow(2,i);
        ++i;
    }
    return decimalNum;
}
