#include <bits/stdc++.h>


using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;



// loop
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    int n=0,c=0;
    cin>>s;
    FOR(i,s.size()){
        if(s[i]=='4' || s[i]=='7')
            n+=1;
    }
    s=to_string(n);
    FOR(i,s.size()){
        if(s[i]!='4' && s[i]!='7')
            c+=1;
    }
    if(c==0)
        cout<<"YES";
    else
        cout<<"NO";

}

 