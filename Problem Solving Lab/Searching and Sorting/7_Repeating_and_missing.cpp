class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int repeating = -1, missing = -1;

        vector<int> count(n + 1, 0);

        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                repeating = i;
            }
            else if (count[i] == 0) {
                missing = i;
            }
        }

        return {repeating, missing};
    }
};