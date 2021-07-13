#include<stdio.h>

int main(){

    int numberSteps;
    scanf("%d",&numberSteps);

    char path[numberSteps];
    int i;
    for(i = 0; i < numberSteps; i++){

        scanf(" %c",&path[i]);
    }

     int valleyCout = 0, altitude = 0;
    
    for(i = 0; i < numberSteps; i++){

        if(path[i] == 'U'){
            altitude++;

            if(altitude == 0)
                valleyCout++;
        }
        else
            altitude--;
    }
    printf("%d\n",valleyCout);


    return 0;
}