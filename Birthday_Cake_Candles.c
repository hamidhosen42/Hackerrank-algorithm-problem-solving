#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n],i;
    int maxValue = 0,counter = 0;

    for(i = 1; i <= n; i++){

        scanf("%d",&arr[i]);

        if(maxValue < arr[i]){

            maxValue = arr[i];
        }
        
    }

    for(i = 1; i <= n; i++){

        if(arr[i] == maxValue){

            counter++;
        }
    }
    printf("%d",counter);

return 0;
}
