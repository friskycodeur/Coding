#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    int s=0;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for(int i=0;s1[i]!='\0';i++){
        if(int(s1[i]) > int(s2[i])){
            s=1;
            break;
        }
        else if(int(s1[i])<int(s2[i])){
            s=-1;
            break;
        }
        else{
            s=0;
        }
    }
    cout << s;

}