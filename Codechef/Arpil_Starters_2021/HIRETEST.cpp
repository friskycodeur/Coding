// Author @friskycodeur

#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> v2di;
typedef vector<vector<ll>> v2dll;




// loop
#define forin(i,a,b) for(ll i=a;i<b;i++)
#define forn(i,a) for(ll i=0;i<a;i++)
#define rforn(i,a) for(ll i=a;i>=0;i--)
#define rforsn(i,a,b) for(ll i=a;i>=b;i--)

// for faster processing
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define all(x) x.begin(),x.end()



// array print function
void printArray(int arr[],int size){
    forn(i,size)
        cout<<arr[i]<<" ";

    cout<<endl;
}

// Array input func
void inputArray(int arr[],int size){
    forn(i,size){
        cin>>arr[i];
    }
}

// Solve function
int solve(string problems,int x,int y){
    int cnt=0,cnt2=0;
    for(auto s:problems){
        if(s=='P') cnt2++;
        else if(s=='F') cnt++;
    }
    if(cnt>=x || (cnt==(x-1)&&cnt2>=y)) return 1;
    return 0;
}

int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        int n,m,x,y;cin>>n>>m>>x>>y;
        forn(i,n){
            string problems;
            cin>>problems;
            cout<<solve(problems,x,y)<<"";
        }
        cout<<"\n";
    }
}

 