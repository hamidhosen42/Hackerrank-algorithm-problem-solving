#include<stdio.h>
#include<string.h>

int main(){

    int h[26];
    int max = 0;
    int i;
    for(i = 0; i < 26; i++){
        scanf("%d",&h[i]);
    }
    char ch[11];
    scanf("%s",ch);

    int a, b;
    a = strlen(ch);

    for(i = 0; i < a; i++){
        b = ch[i] - 97;

        if(h[b] > max){
            max = h[b];
        }
    }
    int area = max * a;

    printf("%d\n",area);

return 0;
}