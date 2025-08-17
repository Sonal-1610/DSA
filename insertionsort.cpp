#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && temp < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }
};

int main() {
    vector<int> arr = {4, 5, 10, 9, 7, 89, 1, 3};
    Solution sol;
    sol.insertionSort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
