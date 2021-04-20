#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='z' || s[i]=='Z'){
            x++;
        }
        else{
            y++;
        }
    }
    if(x*2==y){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}