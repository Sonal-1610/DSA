#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int maxWater(vector<int> &arr) {
        if (arr.size() < 2) return 0;

        multiset<int> s;
        int l = 0;
        int r = arr.size() - 1;

        while (l < r) {
            int length = min(arr[l], arr[r]);
            int width = r - l;
            s.insert(length * width);

            if (arr[l] < arr[r]) {
                l++;
            } else {
                r--;
            }
        }

        return s.empty() ? 0 : *s.rbegin();
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution sol;
    cout << sol.maxWater(arr) << endl;

    return 0;
}
