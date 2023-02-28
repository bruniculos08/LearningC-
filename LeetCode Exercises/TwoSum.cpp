#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <time.h>
#include<algorithm>
#include <bits/stdc++.h>

class Solution;
class BetterSolution;

using namespace std;

class BetterSolution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> auxStruct;
            for(int i = 0   ; i < nums.size(); i++) {
                if(auxStruct.find(nums[i]) == auxStruct.end()) auxStruct[nums[i]] = i; 
                int rest = target - nums[i];
                if(auxStruct.find(rest) != auxStruct.end() and auxStruct[rest] != i){
                    if(i <= auxStruct[rest]) return {i, auxStruct[rest]};
                    else return {auxStruct[rest], i};
                }
            }
            return {-1, -1};
        }
};

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> rest;
            for(int i = 0; i < nums.size()-1; i++){
                for(int j = i+1; j < nums.size(); j++) {
                    if(nums[i] + nums[j] == target){
                        return {i, j};
                    }
                }
            }
            return {-1, -1};
        }
};

int main() {
    std::vector<int> myNums{3, 3};
    int target = 6;
    BetterSolution solver;
    std::vector<int> solutionNums = solver.twoSum(myNums, target);  
    for(int x : solutionNums){
        std::cout << x << " ";
    }
}