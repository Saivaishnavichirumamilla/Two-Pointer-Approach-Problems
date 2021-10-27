/**
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= first < second <= numbers.length.

Return the indices of the two numbers, index1 and index2, as an integer array [index1, index2] of length 2.

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.


CODE: 
**/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int i=0;
        int j=numbers.size()-1;
        while(i<j)
        {
            if((numbers[i]+numbers[j])==target)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                break;
                
            }
            else if((numbers[i]+numbers[j])<target)
                i++;
            else
                j--; 
            
        }
        return res;
    }
};
