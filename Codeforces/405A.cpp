#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    multiset<int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.insert(x);
    }    
    for(auto box:a){
        cout<<box<<" ";
    }
}