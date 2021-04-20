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
    int a,b,x,y,f[n+1];
    cin>>a;
    FOR(i,a){
        cin>>x;
        f[x]=1;
    }
    cin>>b;
    FOR(i,b){
        cin>>y;
        f[y]=1;
    }
    int sum=0;
    FOr(i,1,n+1){
        sum+=f[i];
    }
    if(sum==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

}

 