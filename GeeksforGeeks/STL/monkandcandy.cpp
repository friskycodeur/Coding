#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;++i){
            long long candies;cin>>candies;
            bags.insert(candies);
        }
        long long total_candies=0;
        for(int i=0;i<k;++i){
            auto last_it=(--bags.end());
            long long candies=*last_it;
            total_candies+=candies;
            bags.erase(last_it);
            bags.insert(candies/2);
        }
        cout<<total_candies<<endl;
    }
}