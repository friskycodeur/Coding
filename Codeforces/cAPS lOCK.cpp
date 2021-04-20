#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=0;
    cin>>s;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            c+=1;
        }
    }
    if((c+1)==s.size()){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
            else{
                s[i]-=32;
            }
        }
    }
    cout<<s<<endl;

}