#include<stdio.h>

int main(){

    long int arr[5];

    int i;
    for(i = 0; i < 5; i++){

        scanf("%ld",&arr[i]);
    }
    long int sum = 0, min = 1000000000, max = 0;

    for(i = 0; i < 5; i++){

        sum = sum + arr[i];

        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)

            min = arr[i];
    }
    printf("%ld %ld",sum-max,sum-min);

return 0;
}
