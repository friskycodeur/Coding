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
        int n,k;cin>>n>>k;
        ll a[n],sum=0;
        FOR(i,n){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n,greater<int>());

        if(n==1 || sum<2*k){
            cout<<"-1"<<endl;
        }

        else if(sum==2*k ){
            if(sum%2==1 || a[0]>k){
                cout<<"-1"<<endl;
            }
            else if(a[0]==k){
                cout<<n<<endl;
            }
        }
        int x=0,y=0,c=0;
        FOR(i,n){
            if(i%2==0){
                if(x<k)
                    c+=1;
                x+=a[i];
                }
            else{
                if(y<k)
                    c+=1;
                y+=a[i];
            }
        }
        cout<<c<<endl;
    }

}

 