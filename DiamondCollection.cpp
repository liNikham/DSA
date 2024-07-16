#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("diamond.in","r",stdin);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int maxi=1;
    int start=0;
     sort(v.begin(),v.end());
     int len=1;
     for(int i=1;i<n;i++){
          if((v[i]-v[start])>k){
            maxi=max(maxi,i-start);
            while((v[i]-v[start])>k){
                start++;
            }
            
          }
         
     }
     maxi=max(maxi,n-start);
     freopen("diamond.out","w",stdout);
     cout<<maxi<<endl;
}