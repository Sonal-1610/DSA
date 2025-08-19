#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        
        int pivot_index=partition(arr,low,high);
        quickSort(arr,low,pivot_index-1);
        quickSort(arr,pivot_index+1,high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int pivot=arr[high];
        int i=low-1;
        int j=low;
        for(;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
};
int main() {
    vector<int> arr = {4, 5, 10, 9, 7, 89, 1, 3};
    Solution sol;
    sol.quickSort(arr,0,7);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}