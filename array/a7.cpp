// Write a program to reverse an array or string


#include <bits/stdc++.h>


using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;



// loop
#define For(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()


void printArray(int arr[],int size){
    FOR(i,size)
        cout<<arr[i]<<" ";

    cout<<endl;
}

void inputArray(int arr[],int size){
    FOR(i,size){
        cin>>arr[i];
    }
}

int kthSmallest(int arr[],int l,int r,int k){
    int n=r+1;
    sort(arr,arr+n);
    return arr[k-1];
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        inputArray(arr,n);
        int k;cin>>k;
        cout<<kthSmallest(arr,0,n-1,k)<<endl;
    }
    return 0;
}
 