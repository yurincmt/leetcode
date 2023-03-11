#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int> temp{nums};

        for(size_t a{0}; a < temp.size(); a++){
            temp[a+1] += temp[a];
        }
        return temp;
    }
};


int main(){
    Solution obj
    std::vector<int> nums{0,1,2,3};


    return 0;
}