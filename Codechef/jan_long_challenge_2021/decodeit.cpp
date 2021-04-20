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
        int l,c=0;cin>>l;
        string s,ds="";cin>>s;
        ll encoder=1,res_enc=0;
        DEC(i,l){
            res_enc+=encoder*(s[i]-'0');
            encoder*=2;
            c++;
            if(c==4){
                char res=(char)(97+res_enc);
                ds.push_back(res);
                c=0;encoder=1;res_enc=0;
            }
        }
        reverse(ds.begin(),ds.end());
        cout<<ds<<endl;
        ds.clear();s.clear();
    }

}

 