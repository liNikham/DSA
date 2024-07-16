#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
freopen("speeding.in","r",stdin);
    ll n,m;
    cin>>n>>m;
    vector<ll>a(100),b(100);
    ll start=0;
    for(ll i=0;i<n;i++){
        ll dist,speed;
        cin>>dist>>speed;
        for(ll j=start;j<start+dist;j++){
            a[j]=speed;
        }
        start+=dist;
    } 
    start=0;
    ll maxi=0;
        for(ll i=0;i<m;i++){
            ll dist,speed;
            cin>>dist>>speed;
            for(ll j=start;j<start+dist;j++){
              b[j]=speed;
            }
            start+=dist;
        }
        for(ll i=0;i<100;i++){
            maxi=max(maxi,b[i]-a[i]);
        }
        freopen("speeding.out","w",stdout);
    cout<<maxi<<endl;
}