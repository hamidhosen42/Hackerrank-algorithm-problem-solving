#include<stdio.h>
#include <stdlib.h>

int main(){

    int n,rightDiagonal = 0,leftDiagonal = 0;

    scanf("%d",&n);

    int i,j,arr[n][n];

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            scanf("%d",&arr[i][j]);

            if(i == j)
                rightDiagonal = rightDiagonal + arr[i][j];
         
            if(i + j == n - 1)
                leftDiagonal = leftDiagonal + arr[i][j];
        }
    }

    int ans = abs(rightDiagonal - leftDiagonal);
    
    printf("%d\n",ans);

    return 0;
}