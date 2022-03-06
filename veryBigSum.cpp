#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    long long t,sum=0;
    cin>>t;

    while (t--){
        long long x;
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;

    return 0;
}
