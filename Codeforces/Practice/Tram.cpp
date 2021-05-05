#include <bits/stdc++.h>


using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;



// loop
#define FOr(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n],b[n],min_capacity=0,capacity=0;
    FOR(i,n){
        cin>>a[i]>>b[i];
        capacity-=a[i];
        capacity+=b[i];
        min_capacity=min_capacity<capacity?capacity:min_capacity;
    }
    cout<<min_capacity;

}

 