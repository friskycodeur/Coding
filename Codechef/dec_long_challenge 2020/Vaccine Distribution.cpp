#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long int N,D;
        cin>>N>>D;
        int a[N];
        int risk=0,days=0;
        
        for(int i=0;i<N;i++){
            cin>>a[i];
            if(a[i]<=9 || a[i]>=80)
                risk+=1;
        }

        days+=risk/D;
        if(risk%D!=0){
            days+=1;
        }
        days+=(N-risk)/D;
        if((N-risk)%D!=0){
            days+=1;
        }

        cout<<days<<endl;
    }
}