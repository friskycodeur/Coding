// difficulty : Medium 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    
    bool checkPairs(int arr[],int l,int h,int sum){
        while(l<h){
            if(arr[l]+arr[h]==sum){
                return true;
            }else if(arr[l]+arr[h]<sum){
                l++;
            }else h--;
        }
        return false;
    }
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++){
            if(checkPairs(A,i+1,n-1,X-A[i])){
                return true;
            }
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends