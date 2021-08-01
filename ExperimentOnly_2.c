#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Subscriber
{

    char phoneNumber[20];
    char name[50];
    float amount;

} subers;

int main()
{

    int choice;
    printf("enter you choice\n");

    printf("1\n2\n");

    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {

        case 1:
            printf("yoou hav 1");
            break;
        case 2:
            printf("two");
            break;

        default:
            printf("wrong  ");
            break;
        }
        printf("enter again");
        scanf("%d", &choice);
    }

    return 0;
}