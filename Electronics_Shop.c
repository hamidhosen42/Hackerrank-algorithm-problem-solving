#include<stdio.h>

int main(){

    int b, n, m;
    scanf("%d %d %d",&b,&n,&m);

    int i, j, k[n], u[m], r = -1;
    for(i = 0; i < n; i++){
        scanf("%d",&k[i]);
    }
     for(i = 0; i < m; i++){
        scanf("%d",&u[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){

            if(k[i]+u[j] <= b && k[i]+u[j] > r){
                r = k[i] + u[j];
            }
        }
    }
    printf("%d\n",r);

return 0;
}