#include<bits/stdc++.h>

using namespace std;

int main(){

    int size;
    cin>> size;

    vector<long>arr(size,0);

    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    for(int i = 0; i < size; i++){

        arr[i] = abs(arr[i] - arr[i+1]);
    }
    int min = 1000000;

    for(int i = 0; i < size; i++){

        if(min > arr[i]){

            min = arr[i];
        }
    }

    cout<< min;

return 0;
}