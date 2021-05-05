#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;cin>>s;
    for(int i=0,l=s.size();i<l;i+=2){
        t+=s[i];
    }

    sort(t.begin(),t.end());

    for(int i=0,l=t.size();i<l;i++){
        if(i==l-1)
            cout<<t[i]<<endl;
        else
            cout<<t[i]<<"+";
    }
}