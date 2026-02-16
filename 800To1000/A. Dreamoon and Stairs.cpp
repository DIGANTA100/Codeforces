#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;

cin>>n>>m;
if(n<m){
    cout<<-1;
    return 0;
}

int i=1;
while (true)
{
   if(m*i*2>=n)
   break;

   else
   i++;
    

}

cout<<i*m;




}
