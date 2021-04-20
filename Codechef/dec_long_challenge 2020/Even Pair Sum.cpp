#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b,count=0,e_a=0,e_b=0,o_a=0,o_b=0;
        cin >>a>>b;
        e_a+=a/2;
        e_b+=b/2;
        o_a=a-e_a;
        o_b=b-e_b;

        count=(e_a*e_b)+(o_a*o_b);
        cout<<count<<endl;
    }
}