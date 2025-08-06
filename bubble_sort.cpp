#include <iostream>
using namespace std;
#include <vector>
void bubbleSort(vector<int> &arr){
int n=arr.size();
for(int i=0;i<n-1;i++){
    bool flag=true;
    for(int j=0;j<n-1-i;j++){
        if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=false;
        }
    }
    if(flag==true) return;
}
}

int main(){
vector<int> arr={4,5,10,9,7,89,1,3};
bubbleSort(arr);
for (int i = 0; i < 8; i++)
{
   cout<<arr[i]<<" ";
}

}