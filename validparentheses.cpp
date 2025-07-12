// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 // Example 1:
// Input: s = "()"
// Output: true
// Example 2:
// Input: s = "()[]{}"
// Output: true
// Example 3:
// Input: s = "(]"
// Output: false
// Example 4:
// Input: s = "([])"
// Output: true
#include <string>
using namespace std;

class Solution {
    
    bool checkMatch(char c1, char c2){
        return (c1 == '(' && c2 == ')') ||
               (c1 == '[' && c2 == ']') ||
               (c1 == '{' && c2 == '}');
    }

public:
    bool isValid(string s) {
        int n = s.length();
        
       
        if (n % 2 != 0)
            return false;
        
        
        int top = -1;
        
        for (char ch : s) {
           
            if (top < 0 || !checkMatch(s[top], ch)) {
                ++top;         
                s[top] = ch;   
            } else {
                --top;         
            }
        }

        
        return top == -1;
    }
};
