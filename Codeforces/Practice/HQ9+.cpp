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
    string s;cin>>s;
    int c=0;
    FOR(i,s.length()){
        if(s[i]=='H' ||s[i]=='Q' ||s[i]=='9'){
            c+=1;
            break;
        }
    }
    if(c!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

 