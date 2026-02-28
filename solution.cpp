#include <bits/stdc++.h>
using namespace std;

void solve(){
    int totl, lprot, rport;
    cin >> totl >> lprot >>  rport;

    vector<int> arr  (totl + 1);
    for(int i = 1; i <= totl; i++) cin >>   arr[i];

   
    deque<int> rlcomb;
    for(int i = 1; i <= lprot; i++)
        rlcomb.push_back(arr[i]);
    for(int i = rport + 1; i <= totl; i++)
        rlcomb.push_back(arr[i]);

   
    vector<int> midp;
    for(int i = lprot + 1; i <= rport; i++)
        midp.push_back(arr[i]);

   
    if(midp.empty()){
        bool space = false;
        for(int val : rlcomb){
            if(space) cout << ' ';
            cout << val;
            space = true;
        }
        cout<<endl;
        return;
    }

   
    int smimid = midp[0];


    for(int i = 1; i < (int)midp.size(); i++)

        if(midp  [i] < smimid)


            smimid = midp[i];

    
    int strot = 0;
    for(int i = 0; i < (int)  midp.size(); i++){
        if(midp[i] == smimid){
            strot = i;
            break;
        }
    }

   
    
    vector<int> rotmid;


    int msz = (int)  midp.size();
    for(int i = 0; i < msz; i++)
        rotmid.push_back(midp [ (strot + i) % msz]);

   
    int splt = 0;

    while(splt < (int)rlcomb.size() && rlcomb[splt] < smimid)

        splt++;

    
    vector<int> ans;

    ans.reserve(totl);

    for(int i = 0; i < splt; i++)
        ans.push_back(rlcomb[i]);

    for(int   val : rotmid)

        ans.push_back(val);
    for(int i = splt; i < (int)   rlcomb. size   (); i++)

        ans.push_back(rlcomb   [i]);

   
    for(int i = 0; i < (int)   ans.size(); i++){
        if(i) cout << ' ';
        cout << ans[i];
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
}