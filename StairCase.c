#include<stdio.h>

int main(){

    int num,i,hash,space;

    scanf("%d",&num);

    for(i = 0; i < num; i++){

        for(space = num-1; space > i; space--){

            printf(" ");
        }
        for(hash = 0; hash < i+1; hash++){

            printf("#");
        }
        printf("\n");
    }

return 0;
}