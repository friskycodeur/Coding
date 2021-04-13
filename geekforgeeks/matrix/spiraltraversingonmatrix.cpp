// Difficulty Level : Medium 

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {
        vector<int> res;
        int top=0,left=0,bottom=r-1,right=c-1;
        int dir=1;
        while(top<=bottom && left<=right){
            if(dir==1){
                for(int i=left;i<=right;i++)
                    res.push_back(m[top][i]);
                ++top;
                dir=2;
            }
            else if(dir==2){
                for(int i=top;i<=bottom;i++)
                    res.push_back(m[i][right]);
                    
                --right;
                dir=3;
            }
            else if(dir==3){
                for(int i=right;i>=left;i--)
                    res.push_back(m[bottom][i]);
                --bottom;
                dir=4;
            }
            else if(dir==4){
                for(int i=bottom;i>=top;i--)
                    res.push_back(m[i][left]);
                ++left;
                dir=1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends