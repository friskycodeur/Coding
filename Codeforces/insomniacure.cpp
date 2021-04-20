#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<vector<int>> v2;



// loop
#define FOr(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    FOr(i,1,d+1){
        if(i%k==0 ||i%l==0 ||i%m==0 ||i%n==0)
            c+=1;
    }
    cout<<c;
}

 