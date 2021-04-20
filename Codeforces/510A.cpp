#include<bits/stdc++.h>
using namespace std;

void pattern(int n,char c){
    for(int i=0;i<n;i++){
        cout<<c;
    }
}


int main(){
    int n,m;cin>>n>>m;
    for(int r=0;r<n;r++){
            if(r%2==0){
                pattern(m,'#');
            }else{
                if((r/2)%2==0){
                    pattern(m-1,'.');
                    cout<<"#";
                }else{
                    cout<<"#";
                    pattern(m-1,'.');
                }
            }
            
        cout<<"\n";
        }

}