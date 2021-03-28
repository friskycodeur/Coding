#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<string> list;
        for(int i=0;i<n;i++){
            string s;cin>>s;
            list.insert(s);
        }
        for(string value:list){
            cout<<value<<endl;
        }
    }
}