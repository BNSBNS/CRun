#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Newspaper.h"
#include "Subscribers.h"
#include "Delivery.h"
#include "DataStructure.h"

int main(void)
{
    printf("main malloc\n");

    newpaper_details nd;
    addName("asd", 5, nd);

    // strcpy(nd.name, "change name");
    // nd.price = 55;
    printf("%s and %d\n", nd.name, nd.price);
    

    printf("exit\n");
    return 0;
}