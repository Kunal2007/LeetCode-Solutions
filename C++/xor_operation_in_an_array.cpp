/* Problem Statement:
Given an integer n and an integer start.
Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
Return the bitwise XOR of all elements of nums.
*/

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0; //The answer after XORing the nums array.

        for(int i=0; i<n; i++){ //Iterating n times.
            ans=(ans^(start+(2*i))); //XORing the required number.
        }

        return ans; //Returning the answer.
    }
};
