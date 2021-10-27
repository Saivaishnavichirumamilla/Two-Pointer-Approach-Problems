/**
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

 Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

CODE:
**/

class Solution {
public:
    bool isPalindrome(string s) {
      int i=0,j=s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[i]))i++;
            while(i<j && !isalnum(s[j]))j--;
            if(tolower(s[i++])!=tolower(s[j--])) return false;
        }            
        return true;
    }
};
