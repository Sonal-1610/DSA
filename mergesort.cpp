#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
  void merge(vector<int>& arr,int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int A[an],B[bn];
    for(int i=0;i<an;i++){
        A[i]=arr[i+l];
    }
    for(int j=0;j<bn;j++){
        B[j]=arr[j+mid+1];
    }
    int i=0,j=0,k=l;
    while(i<an && j<bn){
        if(A[i]<B[j]){
            arr[k++]=A[i++];
        }
        else{
            arr[k++]=B[j++];
        }
    }
    while(i<an){
        arr[k++]=A[i++];
    }
    while(j<bn){
        arr[k++]=B[j++];
    }
}
    void mergeSort(vector<int>& arr,int l,int r) {
        //base case 
         if(l>=r) return;
        int mid=(l+r)/2;
       

        //recursive case
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
};

int main() {
    vector<int> arr = {4, 5, 10, 9, 7, 89, 1, 3};
    Solution sol;
    sol.mergeSort(arr,0,7);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
