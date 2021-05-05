#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}

int latestMin(int a[],int n){
    int min=a[0],index=0;
    for(int i=1;i<n;i++){
        if (a[i] <= min){
        min = a[i];
        index = i;
        }
    }
    return index;
}

// void printArray(int a[] ,int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }


int main(){
    int n;cin>>n;
    int sld[n];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sld[i]=x;
    }
    int cnt=0;
    int max_height=max_element(sld,sld+n)-sld;
    for(int i=max_height;i>0;i--){
        swap(sld[i],sld[i-1]);
        // printArray(sld,n);
        cnt++;
    }
    int min_height=latestMin(sld,n);
    for(int i=min_height;i<n-1;i++){
        swap(sld[i],sld[i+1]);
        // printArray(sld,n);
        cnt++;
    }
    cout<<cnt<<endl;
}