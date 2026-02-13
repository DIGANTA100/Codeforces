#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int cnt=0;
for(int i=0;i<32;i++){
unsigned int mask=1<<i;
if(n&mask) cnt++;

}

cout<<cnt;


}

