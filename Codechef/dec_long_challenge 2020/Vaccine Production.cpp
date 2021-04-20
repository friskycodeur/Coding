#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
        int d1,v1,d2,v2,p;
        cin >> d1>>v1>>d2>>v2>>p;
        int vaccines=0,i=1;
        while(vaccines<p){
            if(i>=d1){
                vaccines+=v1;
            }
            if(i>=d2){
                vaccines+=v2;
            }
            i++;
        }
        cout<<(i-1)<<endl;

}