#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long mini=INT_MAX;
    for(int i=0;i<n;i++){
        int start=1;
        long long sum=0;
        for(int j=(i+1)%n;j!=i;j=(j+1)%n){
              sum+= start*v[j];
              start++;
        }
        mini=min(mini,sum);
    }
     cout<<mini<<endl;
     return 0;
}