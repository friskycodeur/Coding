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

// Solve function
void solve(){
    int n,d;cin>>n>>d;
    vi arr;
    FOR(i,n){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    if((arr[0]+arr[1])<=d || arr[n-1]<=d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}

 