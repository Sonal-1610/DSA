#include<iostream>
using namespace std;
int subarray(int* arr,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int arr[5]={1,1,1,1,1};
    int n=5;
    int k=3;
    subarray(arr,n,k);
}