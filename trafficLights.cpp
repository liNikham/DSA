#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
 ll x,n;
 cin>>x>>n;
 multiset<int>s;
 s.insert(x);
 set<int>pos;
 pos.insert(0);
 pos.insert(x);
 for(int i=0;i<n;i++){
    ll p;
    cin>>p;
    auto it=pos.upper_bound(p);
    ll nex=*it;
    it--;
    ll pre=*it;
    s.erase(s.find(nex-pre));
    s.insert(nex-p);
    s.insert(p-pre);
    pos.insert(p);
    
    auto ans=s.end();
    --ans;
    cout<<*ans<<" ";
 }
}