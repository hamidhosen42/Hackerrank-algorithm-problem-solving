#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);

    int scores[num];

    int i;
    for(i = 0; i < num; i++){

        scanf("%d",&scores[i]);
    }

    int maxCount = 0, minCount = 0;
    int maxScores = scores[0], minScores = scores[0];

    for(i = 1; i < num; i++){
        
        if(minScores < scores[i]){

            minScores = scores[i];
            minCount++;
        }
        else if(maxScores > scores[i]){

            maxScores = scores[i];
            maxCount++;
        }
    }
    printf("%d %d\n",minCount,maxCount);
    

    return 0;
}