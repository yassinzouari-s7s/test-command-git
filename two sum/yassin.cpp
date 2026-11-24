class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> copie = nums;
        sort(copie.begin(), copie.end());

        int Conflict = 1;
        int a, b;

        for (int i = 0; i < copie.size(); i++) {
            bool test = true;
            int j = i + 1;

            while (test && j < copie.size()) {

                if (copie[i] + copie[j] == target) {
                    test = false;
                    b = copie[j];
                    a = copie[i];
                    m = 0;
                }
                else if (copie[i] + copie[j] > target) {
                    test = false;
                }
                else {
                    j++;
                }
            }

            if (m == 0) break;
        }

        int q = -1, s = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == a && q == -1) {
                q = i;
            }
            else if (nums[i] == b && s == -1) {
                s = i;
            }
        }

        return {q, s};
    }
};