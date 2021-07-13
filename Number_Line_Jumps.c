#include<stdio.h>

int main(){

    int x1, v1, x2,v2;

    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);

    if(x2 > x1 && v2 > v1){
        printf("NO\n");

    }
    else{
        printf("YES\n");
    }

return 0;

}