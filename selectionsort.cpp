#include <iostream>
using namespace std;
#include <vector>
void Selection_Sort(vector<int> &arr){
int n=arr.size();

for(int i=0;i<n-1;i++){
  int min=i;
   int j=i+1;
   for(;j<n;j++){
    if(arr[j]<arr[min]){
        min=j;
    }
   }
   if(min!=i){
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
   }
  
}
}


int main(){
vector<int> arr={4,5,10,9,7,89,1,3};
Selection_Sort(arr);
for (int i = 0; i < 8; i++)
{
   cout<<arr[i]<<" ";
}

}