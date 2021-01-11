// Maximum and minimum of an array using minimum number of comparisons


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

struct Pair{
    int max;
    int min;
};

struct Pair getMinMax(int arr[],int n){
    struct Pair minmax;
    int i;

    if(n==1){
        minmax.max=arr[0];
        minmax.min=arr[0];
    }

    if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else{
        minmax.max=arr[1];
        minmax.min=arr[0];        
    }

    for (int i=2;i<n;i++){
        if(arr[i]>minmax.max)
            minmax.max=arr[i];
        else if(arr[i]<minmax.min)
            minmax.min=arr[i];
    }
    return minmax;
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
 