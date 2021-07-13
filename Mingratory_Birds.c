#include<stdio.h>

//int migratorBirds(int n,int arr[]);

int main(){

    int n;
    scanf("%d",&n);

    int max, height[6] = {0};

    int arr[n],i;
    for(i = 0; i < n; i++){

        scanf("%d",&arr[i]);
        height[arr[i]]++;
    }
    max = height[1];
    int maxValue;
    for(i = 2; i < 6; i++){

        if(max < height[i]){

            max = height[i];
            maxValue = i;
        }
    }

    printf("%d\n",maxValue);

    return 0;
}