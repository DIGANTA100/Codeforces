#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    int curpos=1;
    while (m--)
    {
        int x;
        cin>>x;
        if(x>=curpos){
            sum+=x-curpos;
            curpos=x;
        }

        else{
            sum+=n-curpos+x;
            curpos=x;
        }
    }
    cout<<sum;
    
}
