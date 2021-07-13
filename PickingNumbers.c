#include<stdio.h>

void pickingNumbers(int arr[], int n, int m);

int main(){

    int n,m;

    scanf("%d",&n);

    int arr[100] = {0};
    int i;

    for(i = 0; i < n; i++){

        scanf("%d",&m);

        arr[m]++;

    }
    pickingNumbers(arr,n,m);

    
return 0;
}

void pickingNumbers(int arr[], int n,int m){

    int max = 0;
    int i;

    for(i = 0; i < n-1; i++){

        if(arr[i]+arr[i+1] > max){
            
            max = arr[i] + arr[i+1];
        }
    }
    printf("%d\n",max);    
}