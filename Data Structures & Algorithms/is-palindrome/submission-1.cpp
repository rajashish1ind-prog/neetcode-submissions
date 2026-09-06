class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int start = 0, end = n - 1;

        while(start <= end)
        {
            // Skip non-alphanumeric from left
            while(start <= end && !isalnum(s[start]))
                start++;

            // Skip non-alphanumeric from right
            while(start <= end && !isalnum(s[end]))
                end--;

            if(start>end)
            break;

            // Compare (as problem is case insensitive use tolower())
            if(tolower(s[start]) != tolower(s[end]))
                return false;

            start++;
            end--;
        }

        return true;
    }
};