#include <bits/stdc++.h>


using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;



// loop
#define For(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int w,h,n;cin>>w>>h>>n;
        int count=1,i=0;
        while(w%2==0 || h%2==0){
            if(w%2==0){
                w/=2;
                count+=pow(2,i);
                i++;
            }    
            else if(h%2==0){
                h/=2;
                count+=pow(2,i);
                i++;
            }
        }
        if(count>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}

 