#include<bits/stdc++.h>
using namespace std;

// int kthLargest(int a[],int n,int k){
//     sort(a,a+n,greater<int>());
//     return a[k-1];
// }

// void printArray(int a[] ,int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }


int main(){
    int n,q;cin>>n>>q;
    int a[n],cnt=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;a[i]=x;
        if(a[i]==1){
            cnt++;
        }
    }
    while(q--){
        int t,x;cin>>t>>x;
        if(t==1){
            a[x]=1-a[x];
            if(a[x]==0){
                --cnt;
            }
            else{
                ++cnt;
            }
        }
        else{
            if(cnt>=x){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
    }
}