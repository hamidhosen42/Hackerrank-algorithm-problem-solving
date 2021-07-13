#include<stdio.h>

int simpleArraySum (int n,int arr[]){

    long int sum = 0,i;

    for(i=0; i < n; i++){
        
        sum = sum + arr[i];
    }
    return sum;

}

int main(){
    
    int n, arr[1], sum;
    scanf("%d",&n);

    int i;
    for(i = 0; i < n; i++){

        scanf("%d",&arr[i]);
    }

    sum = simpleArraySum (n,arr);

    printf ("%d\n",sum);

    return 0;
}