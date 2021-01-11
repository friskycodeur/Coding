// Value equal to index value (gfg)


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

int sol(int arr[],int size){
    int temp=0;
    FOR(i,size){
        temp=(arr[i]==(i+1))?(i+1):temp;
    }
    return temp;
}

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
//  Approach 2nd (Replacing one element at a time)

int main(){
    int n;cin>>n;
    int arr[n];
    inputArray(arr,n);
    cout << sol(arr,n) <<endl;
    return 0;
}
 