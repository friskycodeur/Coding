// Difficulty : Medium

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int k=(r*c +1)/2;
        int a=INT_MAX,b=INT_MIN;
        for(int i=0;i<r;i++){
            a=min(a,matrix[i][0]);
            b=max(b,matrix[i][c-1]);
        }
        while(a<b){
            int m=(a+b)/2;
            int cnt=0;
            for(int i=0;i<r;i++){
                cnt+=upper_bound(matrix[i].begin(),matrix[i].end(),m)-matrix[i].begin();
            }
            if(cnt<k) a=m+1;
            else b=m;
        }
        return a;
    }
};
// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends