#include <stdio.h>
#include "Subscribers.h"

typedef struct subbers
{
    char title[30];
    int number;
} subbersName;

subbersName sn;
// void setNumber(int num, books b1)
// {
//     books b1 ;

// }
struct subbers setBook(char temp[30]){
    strcpy(sn.title, temp);
}

struct subbers getBooksStruct(){
    return sn;
}