// Kth smallest element


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

int kthSmallest(int arr[],int start,int end,int k){
    int count=0,min=arr[0];
    int n=(start+end);
    FOR(i,n){
        if(arr[i]<min){
            min=arr[i];
        }
    }
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
    struct Pair minmax= getMinMax(arr,n);

    cout<<"The min of this array :" <<minmax.min <<endl;
    cout<<"The max of this array :" <<minmax.max <<endl;
    return 0;
}
 