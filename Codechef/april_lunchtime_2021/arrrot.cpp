// Author @friskycodeur

#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> v2di;
typedef vector<vector<ll>> v2dll;

// for modulo
const unsigned int M = 1000000007;


// loop
#define forin(i,a,b) for(ll i=a;i<b;i++)
#define forn(i,a) for(ll i=0;i<a;i++)
#define rforn(i,a) for(ll i=a;i>=0;i--)
#define rforsn(i,a,b) for(ll i=a;i>=b;i--)

// for faster processing
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define all(x) x.begin(),x.end()



// array print function
void printArray(int arr[],int size){
    forn(i,size)
        cout<<arr[i]<<" ";

    cout<<endl;
}

// Array input func
void inputArray(int arr[],int size){
    forn(i,size){
        cin>>arr[i];
    }
}

// Solve function
// ll solve(ll x,ll &sum){
//     sum=(sum+sum)%M;
//     return sum;
// }


int main(){
    fast_cin();
    ll n;cin>>n;
    ll sum=0;
    forn(i,n){
      int x;cin>>x;
      sum=(sum+x+M)%M;  
    }
    int q;
    cin>>q;
    forn(i,q){
        sum=(sum+sum)%M;
        cout<<sum<<'\n';
    }
    return 0;
}

 