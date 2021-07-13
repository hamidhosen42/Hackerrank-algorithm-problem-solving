#include<stdio.h>
#include<string.h>

int main(){

    char time[2];
    int hh,mm,ss;

    scanf("%d:%d:%d%s",&hh,&mm,&ss,time);

    int PM = strcmp(time,"PM");
    int AM = strcmp(time,"AM");

    if(PM == 0 && hh != 12){

        hh = hh + 12;
    }
    else if(AM == 0 && hh == 12){

        hh = 0;
    }

    printf("%02d:%02d:%02d\n",hh,mm,ss);

return 0;
}