#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
ll n,target;
 cin>>n>>target;
 map<ll,ll>m;
 vector<ll>v;
 for(ll i=1;i<=n;i++){
    ll x;
    cin>>x;
     v.push_back(x); 
 } 

 for(ll i=1;i<=n;i++){
    if(m.find(target-v[i-1])!=m.end()){
      
        cout<<m[target-v[i-1]]<<" "<<i<<endl;
        return 0;
    }
    m[v[i-1]]=i;
 }
 cout<<"IMPOSSIBLE"<<endl;
 return 0;
}