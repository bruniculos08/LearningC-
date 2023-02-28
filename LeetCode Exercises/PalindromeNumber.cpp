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

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        vector<int> houses;
        while(x != 0){
            houses.push_back(x%10);
            x = (x - x%10)/10;
        }
        for(int i = 0; i < houses.size()/2; i++){
            if(houses[i] != houses[houses.size() - (1 + i)]) return false;
        }
        return true;
    }
};

int main() {
    int num = 102;
    Solution solver;
    bool result = solver.isPalindrome(num);  
    std::cout << result << endl;
}