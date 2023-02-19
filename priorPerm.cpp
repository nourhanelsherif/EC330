/*
MINIMIZING SUM MODULO:

Wenchao wants to find the two students in the class such that the sum of their
BU IDs modulo 330 is the smallest. You can assume that 𝑥 𝑚𝑜𝑑 330 is in the
range of [0, 329] for any integer 𝑥.
For instance, say we have students Alice, Bob and Carol and their BU IDs
(shorter exmaple for simplicity) are 7305, 2204 and 1573 respectively.

The smallest (BU ID #1 + BU ID #2) 𝑚𝑜𝑑 330 is (2204 + 1573) 𝑚𝑜𝑑 330 =
147, and the corresponding students are Bob and Carol.
Implement the findStudents function in findStudents.cpp. Your code must run
asymptotically faster than 𝑶(𝑛^2) where 𝑛 is the number of students in the class.
If there are more than one possible results, you can return any of those
*/
// sources: geeksforgeeks.org, chatGPT

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> priorPerm(std::vector<int> nums) {
    int n = nums.size();
    int i = n - 2; // second to last element
    while (i >= 0 && nums[i] <= nums[i+1]) { // find point where still sorted
        i--;
    }
    if (i < 0) { // fully sorted; array is already the first permutation
        return nums;
    }
    int j = n - 1; // last element
    while (j >= 0 && nums[j] >= nums[i]) {
        j--;
    }
    std::swap(nums[i], nums[j]);
    std::reverse(nums.begin() + i +1, nums.end()); // not same as reverse(nums.begin() + j, nums.end());
    return nums;
}

// int main(){
//     std::vector<int> nums = {2204, 1573, 7305};
//     nums = priorPerm(nums);
//     for(int i = 0; i< nums.size(); i++){
//         std::cout << nums[i] << " ";
//     }
//     return 0;
// }
