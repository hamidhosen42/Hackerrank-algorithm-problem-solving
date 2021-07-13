#include<stdio.h>

int main(){

    int n,arr[100];
    long long int sum = 0;
    
    scanf("%d",&n);

    int i;
    for(i = 0; i < n; i++){

        scanf("%d",&arr[i]);

        sum = sum + arr[i];
    }

    printf("%lld\n",sum);

    return 0;
}