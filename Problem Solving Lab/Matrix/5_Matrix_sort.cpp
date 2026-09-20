#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> sortedMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        vector<int> arr;
        
        // Store all elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr.push_back(mat[i][j]);
            }
        }
        
        // Sort elements
        sort(arr.begin(), arr.end());
        
        // Put elements back
        int index = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = arr[index];
                index++;
            }
        }
        
        return mat;
    }
};