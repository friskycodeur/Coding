#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;



// loop
#define For(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define DEC(i,a) for(int i=(a)-1;i>=0;i--)


#define all(x) x.begin(),x.end()



// array print function
void printArray(int arr[],int size){
    FOR(i,size)
        cout<<arr[i]<<" ";

    cout<<endl;
}

// Array input func
void inputArray(int arr[],int size){
    FOR(i,size){
        cin>>arr[i];
    }
}

// Solve function
int solve(){
    int n;string s;
    unordered_map<char,int> umap;
    cin>>n>>s;
    int i=0,j=1;
    while(i<n && j<n){
        umap[s[i]]++;
        while(s[i]==s[j] && j<n){
            j++;
        }
        i=j;
    }
    for(auto it:umap){
        if(it.second>=2){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

 