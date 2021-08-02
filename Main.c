#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Newspaper.h"
#include "Subscribers.h"
#include "Delivery.h"
#include "Delivery.c"
#include "DataStructure.h"

int main(void)
{
    printf("main malloc\n");

    newpaper_details np_det;
    delivery_detail del_det_from_c_file;

    del_det_from_c_file.rating = 5;

    printf("%d " , del_det_from_c_file.rating );





    printf("exit\n");
    return 0;
}