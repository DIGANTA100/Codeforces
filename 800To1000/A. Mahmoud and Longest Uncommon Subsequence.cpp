#include<bits/stdc++.h>
using namespace std;

int main(){
string s,t;
cin>>s>>t;

if(s==t)
{
cout<<-1;
return 0;

}

cout<<max(s.size(),t.size());
return 0;




}