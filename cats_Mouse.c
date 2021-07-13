#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, x, y, z;
    scanf("%d", &n);

    int i, j, arr[n][3];
    for (i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        int catA = abs(arr[i][0] - arr[i][2]);
        int catB = abs(arr[i][1] - arr[i][2]);

        if(catA > catB){
            printf("Cat B\n");
        }
        else if(catB > catA){
            printf("Cat A\n");
        }
        if(catA == catB){
            printf("Mouse C\n");
        }
    }
return 0;
}
