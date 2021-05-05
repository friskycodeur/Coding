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
    int x=0,y=0,z=0,n;cin>>n;
    FOR(i,n){
            int a,b,c;cin>>a>>b>>c;
            x+=a;y+=b;z+=c;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

 