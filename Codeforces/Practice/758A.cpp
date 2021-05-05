#include<bits/stdc++.h>
using namespace std;

// void swap(int &a,int &b){
//     int c=a;
//     a=b;
//     b=c;
// }

// void printArray(int a[] ,int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }


int main(){
    int n;cin>>n;
    int wlf[n];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        wlf[i]=x;    
    }
    int* mx=max_element(wlf,wlf+n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+= (*mx)-wlf[i];
    }
    cout<<cnt<<endl;
    

}