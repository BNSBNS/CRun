#include <string.h>

typedef struct subbers
{
    char title[30];
    int number;
} subbersName;

subbersName sn;

void printBook();

void setBook(char temp[30]);

struct subbers getBooksStruct();