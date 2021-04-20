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
        int n,m;cin>>n>>m;
        ll a[n],b[m];
        int t1=0,t2=0,t3=0,t4=0;
        FOR(i,n){
            cin>>a[i];
        } 
        FOR(i,m){
            cin>>b[i];
        }
        t4=m>n?n:m;
        FOR(i,t4){
        if(accumulate(a,a+n,0)>accumulate(b,b+m,0)){
            t3++;
            break;
        }
        if(accumulate(a,a+n,0)<=accumulate(b,b+m,0)){
           sort(a,a+n);
           sort(b,b+m,greater<int>());
           t1=a[0];
           a[0]=b[0];
           b[0]=t1;
           t2++;
        }
        if(accumulate(a,a+n,0)>accumulate(b,b+m,0)){
            t3++;
            break;
        }
        }
        if(t3==0){
            cout<<-1<<endl;
        }
        else{
            cout<<t2<<endl;
        }

    }

}