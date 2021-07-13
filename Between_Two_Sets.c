#include<stdio.h>

int main(){

    int n, m;
    int total = 0;
    scanf("%d %d",&n,&m);

    int a[n], b[m];

    int i,j;
    for(i = 0; i < n; i++){

        scanf("%d",&a[i]);
    }
    for(j = 0; j < m; j++){

        scanf("%d",&b[j]);
    }
    int t;
    for(t = n; t <= b[0]; t++){

        int f1 = 0;
        int f2 = 0;

        for(i = 0; i < n; i++){

            if(t % a[i] != 0){

                f1 = 1;
                break;          
            }
        }
        if(f1 == 0){
            int k;
            for(k = 0; k < m; k++){

                if(b[k] % t != 0){
                    
                    f2 = 1;
                    break;
                }
            }
        }
        if(f1 == 0 && f2 == 0){
           total++;
        }
    }
    printf("%d\n",total);

return 0;
}