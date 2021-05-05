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
void solve(int n,int m){
    string Map[n];
    forn(i,n) cin>>Map[i];
    vi lands;
    vector<pair<int,int>> d4{{0,1},{0,-1},{1,0},{-1,0}};

    auto inside= [&](pair<int,int> pt){
        auto [x, y]=pt;
        return x>=0 and y>=0 and x<n and y<m;
    };

    auto land_fill=[&](int i , int j){
        queue<pair<int,int>> q;
        Map[i][j]='0';
        q.push({i,j});
        int sz=0;
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop;sz++;
            for(auto [dx,dy]:d4){
                
            }
        }
    } 

}

int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        solve(n,m);
    }
}

 