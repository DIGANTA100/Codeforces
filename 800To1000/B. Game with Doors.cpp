#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,d;
cin>>a>>b>>c>>d;
int overlap[101]={0};
for(int i=a;i<=b;i++){
    overlap[i]=1;
}
int cnt=0;
int firstol,lastol;
firstol=0;
for(int i=c;i<=d;i++){
if(overlap[i]==1 and firstol==0){
    cnt++;
    firstol=i;
    lastol=i;
}
if(overlap[i]==1 ){
    cnt++;
    lastol=i;
}
}
if(!cnt){
    cout<<1;
    return;
}
cnt=lastol-firstol+2;
if(firstol <= a and firstol <=c)
{cnt--;

}

if(lastol>=b and lastol>=d)
cnt--;
cout<<cnt;
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