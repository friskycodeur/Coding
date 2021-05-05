#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;cin>>s;
    for(int i=0,l=s.size();i<l;i++){
        if(s[i]!=97 && s[i]!=101 && s[i]!=105 && s[i]!=111 && s[i]!=117 && s[i]!=121 && s[i]!=65 && s[i]!=69 && s[i]!=73 && s[i]!=79 && s[i]!=85 && s[i]!=89)
            t+=s[i];
    }
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    for(int i=0,l=t.size();i<l;i++){
        cout<<"."<<t[i];
    }
}