#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    long long int l,w,h;
    int n;
    cin >> l;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> w>>h;
        if(w>=l && h>=l){
            if(w==h){
                cout<<"ACCEPTED"<<endl;
            }
            else{
                cout<<"CROP IT"<<endl;
            }
        }
        else{
            cout<<"UPLOAD ANOTHER"<<endl;
        }
    } 
}