#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k,cnt=0;cin>>n>>m>>k;
        int mtx[n][m];
        int s=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;cin>>x;
                mtx[i][j]=x;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x=mtx[i][j];
                s+=x;
                if(x>=k){
                    cnt++;
                    for(int p=i,q=j;(n-p)>0,(m-q)>0;p++,q++){
                        if((n-p)==(m-q)){
                            cnt++;
                            cout<<(n-p)<<(m-q)<<endl;
                        } 
                    }
                }
            }
        }
        if(s>k) cnt++;
        cout<<cnt<<endl;

    }
}