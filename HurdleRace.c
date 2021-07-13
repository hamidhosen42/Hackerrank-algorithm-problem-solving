#include<stdio.h>
int main(){

    int n,k;
    scanf("%d %d",&n,&k);

    int arr[n],i;
    int Max = 0;
    for(i=0; i < n; i++){

        scanf("%d",&arr[i]);

        if(arr[i] > Max){
            Max = arr[i];
        }
    }
    if(k < Max){
        printf("%d\n",(Max-k));
    }
    else{
        printf("0\n");
    }

}