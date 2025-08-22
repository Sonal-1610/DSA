#include<iostream>
using namespace std;
#include<vector>
int partition(vector<int> &arr,int f,int l,int k){
int pivot=arr[l];
int i=f-1;
int j=f;
while(j<l){
    if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
    }
    j++;
}
swap(arr[i+1],arr[l]);
return i+1;

}
int quickselect(vector<int> &arr,int f,int l,int k){
if(f>=k){
return -1;
}
else{
    int pi=partition(arr,f,l,k);
    if(pi==k){
        return pi;
    }
    else if(pi<k){
        return quickselect(arr,pi+1,l,k);
    }
    else{
        return quickselect(arr,f,pi-1,k);
    }
}
}
int kthlargest(vector<int> &arr,int k){
    int f=0;
    int l=arr.size()-1;
    quickselect(arr,f,l,k);
}
int main(){
    vector<int> arr={3,7,8,3,4,1,9,0};//0 1 3 3 4 7 8 9
    int k=2;
    int ans=kthlargest(arr,arr.size()-k);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[ans]<<endl;
}