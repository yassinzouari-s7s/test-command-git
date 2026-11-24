#include <vector>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);

        int left = 0;
        int res = 0;

        for (int right = 0; right < s.size(); right++) {
            unsigned char c = s[right];

            if (last[c] >= left) {
                left = last[c] + 1;
            }

            last[c] = right;

            res = max(res, right - left + 1);
        }

        return res;
    }
};

//now this is a modification after we pushed using github dashboard
// we will try using the commands to merge