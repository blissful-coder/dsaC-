#include <iostream>
#include <set>
#include <vector>

bool hasDuplicate(std::vector<int>& nums){
    std::set<int> temp;
    for (auto&x : nums){
        if(temp.find(x) != temp.end()){
            return true;
        }
        temp.insert(x);
    }
    return false; // no duplicate found
}

int main(){
    std::vector<int> nums = {1, 2, 3, 3};
    if ( hasDuplicate(nums) )
        std::cout<<"\nDuplicate\n";
    else
        std::cout<<"\nNo Duplicate\n";

    return 0;
}