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
    int c=0,t=0;string s;cin>>s;
    FOR(i,s.size()-1){
        if(s[i]==s[i+1]){
            c++;
            if(c>=6)
                t++;
        }
        else{
            c=0;
        }
    }
    if(t>=1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

 