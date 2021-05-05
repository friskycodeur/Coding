#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;



// loop
#define aforn(i,a,b) for(int i=a;i<b;i++)
#define forn(i,a) for(int i=0;i<a;i++)
#define dforn(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()

// Solve function
void solve(){
    ll n,cnt=0,temp=0;cin>>n;
    int r = log10(n) + 1;
    for(int i=0;i<r;i++){
        temp=temp*10+1;
        for(int j=1;j<=9;j++){
            if(1<= (temp*j) && (temp*j)<=n){
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}

 