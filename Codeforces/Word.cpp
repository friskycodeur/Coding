#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c1=0,j=0,c2=0;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            c1+=1;
        }
        if(s[i]>='a' && s[i]<='z'){
            c2+=1;
        }
    }
    if(c1>c2){
        transform(s.begin(), s.end(),s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(),s.begin(), ::tolower);
    }
    cout<<s<<endl;
}