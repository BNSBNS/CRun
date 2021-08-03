#include <stdio.h>
#include "Subscribers.h"

subbersName sn;

// void setNumber(int num, books b1)
// {
//     books b1 ;

// }
void setBook(char temp[30]){
    strcpy(sn.title, temp);
    sn.number = 5;
}

struct subbers getBooksStruct(){
    return sn;
}