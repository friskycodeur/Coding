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
    int n,w,wr;
    cin>>n>>w>>wr;
    map<int,int> m;
    forn(i,n){
        int x;cin>>x;
        m[x]++;
    }
    w=w-wr;
    int f=0;
    for(auto it:m){
       if(w<=0){
           f=1;
           break;
           }
       int p=it.second/2;
       w=w-(it.first*p*2);
   }
   if(w<=0) f=1;
   return f;
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

 