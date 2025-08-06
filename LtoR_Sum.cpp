#include<iostream>
using namespace std;
int sum(int* arr,int L,int R,int n){
    int prefix[5];
    prefix[0]=arr[0];
    for(int i=0;i<n;i++){
       prefix[i]=prefix[i-1]+arr[i];
    }
    return prefix[R]-prefix[L-1];
}
int main(){
    int arr[5]={2,4,1,3,5};
    int L=1,R=3;
    int ans=sum(arr,L,R,5);
    cout<<ans<<endl;

    L=2,R=4;
     ans=sum(arr,L,R,5);
    cout<<ans<<endl;

    L=1,R=4;
     ans=sum(arr,L,R,5);
    cout<<ans<<endl;

}