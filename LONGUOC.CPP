#include <bits/stdc++.h>
const int N=1e6+4;
const int M=1e9+7;
using namespace std;
map<int,int> mp;
void ptts(int x){
    int d=0;
    for(int j=2;j<=sqrt(x);j++){
        while(x%j==0){
            mp[j]++;
            x/=j;
        }
    }
    if(x!=1)
        mp[x]++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("LONGUOC.INP","r",stdin);
    freopen("LONGUOC.OUT","w",stdout);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            ptts(i);
        }
        long long s=1;
        for(pair<int,int> it:mp){
            s*=(it.second+1);
            s%=M;
        }
        mp.clear();
        cout<<s<<'\n';
    }
    return 0;
}