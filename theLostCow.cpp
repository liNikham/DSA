#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    ll x,y;
    cin>>x>>y;
    vector<ll>a{1,4,16,64,256,1024},b{2,8,32,128,512,2048};
    if(y>x){
        ll dist=y-x,sum=0,start=0;
        while(a[start]<dist){
            sum+=2*(a[start]+b[start]);
            start++;
        }
        sum+=dist;
        cout<<sum<<endl;
    } 
    else{
    ll dist=x-y,sum=0,start=0;
            while(b[start]<dist){
                sum+=2*(a[start]+b[start]);
                start++;
            }
            sum+=dist;
            sum+=2*a[start];
            cout<<sum<<endl;

    }
}