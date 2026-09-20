#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {

        int n = mat.size();

        vector<int> arr;

        // Store all matrix elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr.push_back(mat[i][j]);
            }
        }

        // Sort all elements
        sort(arr.begin(), arr.end());

        // kth smallest element
        return arr[k - 1];
    }
};