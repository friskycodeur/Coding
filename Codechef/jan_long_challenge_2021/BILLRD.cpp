#include <bits/stdc++.h>


using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;



// loop
#define For(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        ll n,k,x,y,t1=0,t2=0;cin>>n>>k>>x>>y;
        while(k){
            if((x==0 && y==0) || (x==n && y==0) || (x==0 && y==n) || (x==n && y==n)){
                break;
            }
            if(x>=n){   
                x--;
            }
            if(y>=n){   
                x--;
            }

        }

    }

}

 