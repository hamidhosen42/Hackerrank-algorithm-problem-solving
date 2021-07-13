#include<stdio.h>


int main(){

    int squares[8][3][3] = {
		{{8,1,6},{3,5,7},{4,9,2}},
		{{4,3,8},{9,5,1},{2,7,6}},
		{{2,9,4},{7,5,3},{6,1,8}},
		{{6,7,2},{1,5,9},{8,3,4}},
		{{6,1,8},{7,5,3},{2,9,4}},
		{{8,3,4},{1,5,9},{6,7,2}},
		{{4,9,2},{3,5,7},{8,1,6}},
		{{2,7,6},{9,5,1},{4,3,8}}
	};

    int arr[3][3];
    scanf("%d",arr[0][0]);
    scanf("%d",arr[0][1]);
    scanf("%d",arr[0][2]);
    scanf("%d",arr[1][0]);
    scanf("%d",arr[1][1]);
    scanf("%d",arr[1][2]);
    scanf("%d",arr[2][0]);
    scanf("%d",arr[2][1]);
    scanf("%d",arr[2][2]);

    int result = 5000;
    int i,j,k;
    int current;

    for(i = 0; i < 8; i++){

        for(j = 0; j < 3; j++){

            for(k = 0; k < 3; k++){
                current = current + (squares[i][j][k]-squares[j][k]);
            }
        }
        result = 
    }

return 0;
}