#include<stdio.h>

int main(){

    int n, k;
    scanf("%d %d",&n,&k);

    int bill[n], i;
    for(i = 0; i < n; i++){

        scanf("%d",&bill[i]);
    }
    int sum = 0;
    for(i = 0; i < n; i++){

        sum = sum + bill[i];
    }
    int paid;
    scanf("%d",&paid);

    int toBePaid = sum - bill[k];

    if((toBePaid/2) == paid){
        printf("Bon Appetit\n");
    }
    else{
        printf("%d\n",paid-(toBePaid/2));
    }
return 0;
}