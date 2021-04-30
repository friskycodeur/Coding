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

bool tempfnc(char ch){
    if(ch=='1') return 1;
    else return 0;
}


// Solve function
bool solve(){
    ll n;string s;
    cin>>n;cin>>s;
    double sum=0;
    forn(i,n){
        sum+=tempfnc(s[i]);
        // cout<<i<<":"<<float(sum/(i+1))<<endl;
        if(float(sum/(i+1))>=0.5){
            return true;
        }
    }
    return false;
}

int main(){
    fast_cin();
    ll t;cin>>t;
    while(t--){
        if(solve()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

 