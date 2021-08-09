#include <stdio.h>

int sum(int num){

    static int temp =0;
    temp+=num;
    return temp;
}
int main() {
    printf("%d ",sum(25));
    printf("%d ",sum(15));
    printf("%d ",sum(30));
    return 0;
}
