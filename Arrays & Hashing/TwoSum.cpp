#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        std::unordered_map<int,int> myMap;

        for(int i=0; i<n; i++){
            int diff = target - nums[i];
            if(myMap.find(diff) != myMap.end()){
                return { myMap[diff],i };
            }
            myMap.insert({nums[i],i});
        }
        return {};
    }

int main(){
    std::vector<int> nums = {3,4,5,6};
    std::vector<int> result = twoSum(nums,7);
    
    std::cout<<"\nResult:\n";
    for (auto& x:result){
        std::cout<<x<<" ";
    }
    
    return 0;
}