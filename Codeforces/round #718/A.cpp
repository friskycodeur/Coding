#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;



// loop
#define For(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()



// array print function
void printArray(int arr[],int size){
    FOR(i,size)
        cout<<arr[i]<<" ";

    cout<<endl;
}

// Array input func
void inputArray(int arr[],int size){
    FOR(i,size){
        cin>>arr[i];
    }
}

// Solve function
int solve(){
    ll num;cin>>num;
    ll k=to_string(num).size()-4;
    int cnt=0;
    if(num<2050) return -1;
    if(num<(2050*pow(10,k))) k--;
    while(num>0){
        num=num-2050*pow(10,k);
        cnt++;
        if(num<2050*pow(10,k)) k--;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        cout << solve() <<"\n";
    }
}

 