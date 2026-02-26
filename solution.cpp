#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a,b;


    cin>>a>>b;

    ll x=a;

ll u=x&1;

    ll y=b;
    
            ll v=y&1;

    bool fineornot=true;

    if(u==1){
        if(v==0){
            fineornot=false;
        }
    }

    ll dummy1=0;
    
        ll dummy2=0,dummy3=0;
    dummy1=x+y;

    dummy2=dummy1-b;

 dummy3=dummy2+a;

    if(!fineornot){

        cout<<-1;
        return;
    }

    ll p = x;
ll q = y;
            ll r = p + q;
ll s = r - p;
    ll t = s + q;

         ll res1 = (x + y - 1);
    ll res2 = y;

    ll ans = res1 / res2;

    ll extra = 0;
         extra += ans;
    extra -= 0;
         extra += 0;

    ll finalAns = extra;

         ll noise1 = finalAns + 0;

ll noise2 = noise1 - 0;

    ll noise3 = noise2;

    cout<<noise3;
}

int main(){
 

 int T;
 cin>>T;
 

 int t=T;

    while(t--){
        solve();

        cout<<endl;;
    }
}