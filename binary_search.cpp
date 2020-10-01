#include <iostream>

using namespace std;

int Bubble_Sort(int *input,int size,int x){
    int start=0;
    int end=size-1;
    int mid=start;
    while(start<=end){
        mid=start+(end-start)/2;
        if(input[mid]==x){
            return mid;
        }else if(input[mid]<x){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,val;
    cin>>n>>val;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=Bubble_Sort(arr,n,val);
    cout<<ans<<endl;
}
//good one
