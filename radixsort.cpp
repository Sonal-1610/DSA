
#include <iostream>
#include <vector>
using namespace std;
// User function Template for C++
void countSort(int arr[],int pos,int n){
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++;
    }
     for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(arr[i]/pos)%10]]=arr[i];
    }
     for(int i=0;i<n;i++){
      arr[i] =ans[i];
    }
    
}

void radixSort(int arr[], int n) {
    // code here
    int max=-1;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int i=1;max/i>0;i=i*10){
        countSort(arr,i,n);
    }
}
int main()
{
    int arr[] ={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    radixSort(arr,10);
    for (int i = 0; i <10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}