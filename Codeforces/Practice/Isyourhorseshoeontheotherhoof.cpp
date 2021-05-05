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
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    set<int> s;
    s.insert(k);s.insert(l);s.insert(m);s.insert(n);
    cout<<4-s.size();
}

 