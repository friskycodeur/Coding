// Difficulty : Easy

#include<bits/stdc++.h>
using namespace std;

void shiftall(int arr[],int left,int right){
    while(left<=right){
        if(arr[left]<0 && arr[right]<0) left++;
        else if(arr[left]>0 && arr[right]<0){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;right--;
        }
        else if(arr[left]>0 && arr[right]>0) right--;
        else{
            left++;right--;
        }
    }
}

void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[i]=x;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;cin>>n;
    int a[n];
    inputArray(a,n);
    shiftall(a,0,n-1);
    printArray(a,n);
}