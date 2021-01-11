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

void rArray(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
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

// Approach 1st (using second array)

// int main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);
//     int n;cin>>n;
//     int a[n],b[n];
//     FOR(i,n){
//         cin>>a[i];
//     }
//     FOR(i,n){
//         b[n-i-1]=a[i];
//     }
//     FOR(i,n){
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";
//     FOR(i,n){
//         cout<<b[i]<<" ";
//     }
// }

//  Approach 2nd (Replacing one element at a time)

int main(){
    int n;cin>>n;
    int arr[n];
    inputArray(arr,n);
    cout<<"Original Array is :"<<endl;
    printArray(arr,n);
    rArray(arr,0,n-1);
    cout<<"Reverse of the array is :"<<endl;
    printArray(arr,n);

    return 0;
}
 