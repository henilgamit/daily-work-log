//Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.
// Example 1:
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(), len = 0;
        bool untilSpace = false;
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                len++;
                untilSpace = true;
            } else if (untilSpace)
                break;
        }

        return len;
    }
};
