#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,cnt=0;cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x); 
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1) cnt++;
        }
        if(cnt==0) cout<<"YES\n";
        else cout<<"NO\n"; 
    }

}