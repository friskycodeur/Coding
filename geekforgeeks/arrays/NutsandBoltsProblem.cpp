// Difficulty level : Medium


// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    unordered_map<char,int> m;
	    
	    for(int i=0;i<n;i++)
	        m[nuts[i]]++;
	        
	   //for(int i=0;i<n;i++)
	   //     cout<<nuts[i]<<" "<<m[nuts[i]]<<'\n';
	    
	    int i=0;
	    vector<char> C={'!','#','$','%','&','*','@','^','~'};
	    for(auto x:C){
	        if(m[x]>0){
	            nuts[i]=x;
	            bolts[i]=x;
	            i++;
	        }
	    }
	}
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends