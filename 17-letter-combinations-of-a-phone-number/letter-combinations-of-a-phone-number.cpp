class Solution {
public:
   vector<string> ans;
    vector<string> phone = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string &digits, int index, string &temp) {
        if (index == digits.size()) {
            ans.push_back(temp);
            return;
        }

        string letters = phone[digits[index] - '0'];

        for (char ch : letters) {
            temp.push_back(ch);
            solve(digits, index + 1, temp);
            temp.pop_back();   // Backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        string temp = "";
        solve(digits, 0, temp);

        return ans;
    }
};