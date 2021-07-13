#include<stdio.h>

void pageCount(int numberPage,int turnPage);

int main(){

    int numberPage;
    scanf("%d",&numberPage);

    int turnPage;
    scanf("%d",&turnPage);

     pageCount(numberPage,turnPage);

    return 0;
}

void pageCount(int numberPage,int turnPage){

    int min = (numberPage/2)-(turnPage/2);

    if(min > turnPage/2){
        
        min = turnPage/2;
    }
    printf("%d\n",min);
}