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
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        if(n==k){
            FOR(i,n){
                cout<<(i+1)<<" ";
            }
        }
        else{
            int output[n];
            if(n&1){
                FOR(i,n){
                    output[i]=(i+1)*pow(-1,i+2);
                }
            }
            else{
                FOR(i,n){
                    output[i]=(i+1)*pow(-1,i+1);
                }
            }
            int sum=1,count,diff=0;
            count=ceil((double)n/2);        
            FOr(i,1,n){
                sum+=output[i];
                if(sum>0){
                    if(count<k){
                        diff=k-count;
                        DEC(j,n){
                            if(output[j]<0){
                                output[j]*=-1;
                                count+=1;
                                if(count==k)
                                    break;
                            }
                        }
                    }
                    if(count>k){
                        diff=count-k;
                        DEC(j,n){
                            if(output[j]>0){
                                output[j]*=-1;
                                count--;
                                if(count==k)
                                    break;
                            }
                        }
                    }
                }
        
            }
        FOR(i,n){
            cout<<output[i]<<" ";
        }
        }
        cout<<"\n";
    }
}