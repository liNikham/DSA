#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);
    ll n;
    cin>>n;
    vector<ll>pos(n),id(n);
    for(ll i=0;i<n;i++) cin>>pos[i];
    for(ll i=0;i<n;i++) cin>>id[i];
    map<int,int>m;
    for(ll i=0;i<n;i++){
        m[pos[i]]=id[i];
    }
    for(auto x:m) cout<<x.second<<endl;
}