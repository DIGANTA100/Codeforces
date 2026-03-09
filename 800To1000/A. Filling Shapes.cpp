#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int n;
    cin>>n;
    if(n%2==1){
        cout<<0;
        return 0;
    }
    long long res=1;
    for(int i=1;i<=n/2;i++)
    res*=2;

    cout<<res;
}