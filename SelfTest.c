#include<stdio.h>
#include<stdlib.h>

int x = 200;//These variables can be accessed from anywhere in the program

int *get_val(int y){
    
    x = x  + y;

    return &x;
}

int main(){

    int *p, y = 10;

    p = get_val(y);

    printf("%d\n",*p);

    exit(0);
}