#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int s[n];
    int i;
    for(i = 0; i < n; i++){

        scanf("%d",&s[i]);
    }

    int day,month;

    scanf("%d %d",&day,&month);

    int sum = 0,count = 0;

    for(i = 0; i < n; i++){

        int j;
        for(j = i; j < month+i; j++){

            sum = sum + s[j];
            
        }
        if(sum == day){
            count++;
        }
        sum = 0;

    }
    
    printf("%d\n",count);


    return 0;
}
