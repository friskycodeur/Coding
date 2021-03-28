#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        unordered_set<int> candies;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            candies.insert(x);
        }
        for(int i=0;i<m;i++){
            int x;cin>>x;
            auto it= candies.find(x);
            if(it!=candies.end()){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
                candies.insert(x);
            }

        }
    }
}