#include<bits/stdc++.h>
using namespace std;

void solve(){
long long p,q;
cin>>p>>q;
if(p>=q)
{
cout<<"Alice";
return;

}

long long diff=q-p;
long long a=2*diff, b=3*diff;
if(p>=a and q>=b)
cout<<"Bob";
else 
cout<<"Alice";



}


int main(){
int t;
cin>>t;
while (t--)
{
solve();
cout<<endl;
}


}
