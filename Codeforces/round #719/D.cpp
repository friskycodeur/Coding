#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;



// loop
#define afor(i,a,b) for(int i=a;i<b;i++)
#define forn(i,a) for(int i=0;i<a;i++)
#define rfor(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()


// Solve function
void solve(){
    int n;cin>>n;
    map<int,int> omp;
    ll ans=0;
    forn(i,n){
        int x;
        cin>>x;
        x-=i;
        ans+=omp[x];
        omp[x]++;
    }
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}

 