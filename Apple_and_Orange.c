#include<stdio.h>
int main(){

   int s, t;
   scanf("%d %d",&s,&t);

   int a, b; 
   scanf("%d %d",&a,&b);

   int m, n;
   scanf("%d %d",&m,&n);

   int mCount = 0, nCount = 0, temp, d;

   while (m--){

      scanf("%d",&temp);

      if(temp >= s-a && temp <= t-a){

         mCount++;
      }
   }

   while (n--){

      scanf("%d",&temp);

      if(temp >= s-b && temp <= t-b){

         nCount++;
      }
   }

   printf("%d\n",mCount);
   printf("%d\n",nCount);


return 0;
}