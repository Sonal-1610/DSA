#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void countSort(vector<int> &arr)
    {
        // find max
        int max = -1;
        int n = arr.size();
        for (int i = 0; i < n + 1; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }

        // create frequency array of size max +1
        vector<int> freq(max + 1);
        for (int i = 0; i < max; i++)
        {
            freq[arr[i]]++;
        }

        // convert frequency array to cummulative array
        for (int i = 1; i < max + 1; i++)
        {
            freq[i] = freq[i] + freq[i - 1];
        }

        // create a temporary array of size n . for making it stable sort we will traverse given array from backside
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            ans[--freq[arr[i]]] = arr[i];
        }
        // copy to the original
        for (int i = 0; i < n; i++)
        {
            arr[i] = ans[i];
        }
    }
};
int main()
{
    vector<int> arr = {6, 8, 5, 2, 7, 4, 8, 7};
    Solution sol;
    sol.countSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}