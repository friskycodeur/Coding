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

bool isEquinox(char ch){
    if(ch=='E' ||ch=='Q' || ch=='U' || ch=='I' ||ch=='N' ||ch=='O' ||ch=='X') return 1;
    return 0;
}

// Solve function
void solve(){
    ll n,a,b,cnt1=0,cnt2=0;
    cin>>n>>a>>b;
    forn(i,n){
        string s;
        cin>>s;
        if(isEquinox(s[0])) cnt1+=a;
        else cnt2+=b;
    }
    if(cnt1>cnt2) cout<<"SARTHAK\n";
    else if(cnt1<cnt2) cout<<"ANURADHA\n";
    else cout<<"DRAW\n";

}

int main(){
    fast_cin();
    ll t;cin>>t;
    while(t--){
        solve();
    }
}

 