#include <iostream>
#include <vector>
#include <time.h>
#include<algorithm>
#include <bits/stdc++.h>

class Solution;

class Solution {
    public:
    
        std::vector<int> findTwo(std::vector<int>& nums, int value1, int value2) {
            int n1 = -1, n2 = -1;
            for(int i=0; i < nums.size() and (n1 == -1 and n2 == -1); i++){
                if(nums[i] == value1) n1 = i;
                if(nums[i] == value2) n2 = i;
            }
            return {n1, n2};
        }

        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::vector<int> sortedNums = nums;
            std::sort(nums.begin(), nums.end());
            int n1 = 0;
            int n2 = nums.size() - 1;
            for(int i=0; i <= nums.size(); i++) {
                if(nums[n1] + nums[n2] < target) n1++;
                else if(nums[n1] + nums[n2] > target) n2--;
                else return Solution::findTwo{nums, nums[n1], [n2]};
            }
            return {-1};
    }
};

int main() {
    std::vector<int> myNums{3,2,4};
    int target = 6;
    Solution solver;
    std::vector<int> solutionNums = solver.twoSum(myNums, target);  
    for(int x : solutionNums){
        std::cout << x << " ";
    }
}