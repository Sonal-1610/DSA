#include <iostream>
using namespace std;
#include <vector>
		bool isSorted(vector<int>& nums){
			for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1])
                {
                   return 0;
                }
            }
            return 1;
		}
int main(){
vector<int> arr={4,5,10,9,7,89,1,3};
		cout<<isSorted(arr);}

