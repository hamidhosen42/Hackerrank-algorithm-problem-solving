#include<stdio.h>

int main(){

    int n, k;

    scanf("%d %d",&n,&k);

    int i,arr[n];
    for(i = 0; i < n; i++){

        scanf("%d",&arr[i]);
    }

    int count = 0;

    for(i = 0; i < n; i++){

        int j;
        for(j = i+1; j < n; j++){
            
            if((arr[i] + arr[j])%k == 0)
                 count++;
        }
    }
    printf("%d\n",count);

return 0;
}