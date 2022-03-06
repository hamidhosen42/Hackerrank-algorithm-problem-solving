#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int n,temp;
    cin>>temp;
    while(cin>>n)
    {
        if(n<38)
            cout<<n<<endl;
        else if(n%5 >= 3)
            cout<<n+ (5-n%5)<<endl;
        else
            cout<<n<<endl;

    }

    return 0;
}
