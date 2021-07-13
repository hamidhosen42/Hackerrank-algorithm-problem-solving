#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, c = 0, x;
    cin>> n>> k;

    int arr[n], i, j;
    for(i = 0; i < n; i++){
        cin>> arr[i];
    }
    sort(arr, arr+n);

    i = 0;
    while(i < n){
        
        j = i+1;

        while((arr[i]+k >= arr[j]) && (j < n)){

            j = j + 1;
        }
        x = j;
        j = j - 1;

        while(arr[j] + k >= arr[x] && (x < n)){
            
            x++;
        }
        c++;
        i = x;
    }
    cout<< c;

return 0;
}