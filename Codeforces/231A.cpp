#include<bits/stdc++.h>
using namespace std;

// void printArray(int a[] ,int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }



int main(){
    int n,cnt=0;cin>>n;
    while(n--){
        vector<int> status;
        int x,y,z;cin>>x>>y>>z;
        status.push_back(x);status.push_back(y);status.push_back(z);
        if(accumulate(status.begin(),status.end(),0)>=2){
            cnt++;
        }
    }
    cout<<cnt;
    
}