#include <stdio.h>
#include <stdlib.h>

int main()
{
    char option;
cases:
    {
        printf("Enter your Choise: ");
        fflush(stdin);
        scanf("%c",&option);
    }
    switch(option)
    {
    case'A':
            goto cases;
        break;
    case'B':
            printf("Right Door\n");
        break;
    case'C':
            printf("Left Door\n");
        break;
    default:
        printf("Exit\n");
    }
    return 0;
}