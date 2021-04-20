// Difficulty : MEDIUM 

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int cap=0,lmax=arr[0],rmax=arr[n-1];
        int l=0,r=n-1;
        while(l<r){
            lmax=lmax<arr[l]?arr[l]:lmax;
            rmax=rmax<arr[r]?arr[r]:rmax;
            cap+=(lmax>rmax)?rmax-arr[r--]:lmax-arr[l++];
        }
        return cap;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends