#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Newspaper.h"
#include "Subscribers.h"

#include "Delivery.h"
#include "Delivery.c"
#include "DataStructure.h"

int getSum(int a, int b);
void printSomething();

int main(void)
{
    printf("main malloc\n");

    newpaper_details np_det;
    delivery_detail del_det_from_c_file;

    del_det_from_c_file.rating = 5;

    setBook("test set book");
    printf("title is %s \n", getBooksStruct().title );

    /* testers */
    // printf("%d " , del_det_from_c_file.rating );
    // printf("%d", getSum(5,3));
    // printSomething();

    printf("exit\n");
    return 0;
}

int getSum(int a, int b)
{
    return a + b;
}

void printSomething()
{
    printf("i am printing something from void");
}