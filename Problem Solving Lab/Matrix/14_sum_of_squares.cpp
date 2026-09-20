#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findTraceAndNormal(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        int trace = 0;
        double sum = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                // Calculate normal
                sum += mat[i][j] * mat[i][j];
                
                // Calculate trace
                if (i == j) {
                    trace += mat[i][j];
                }
            }
        }
        
        double normal = sqrt(sum);
        
        cout << "Trace = " << trace << endl;
        cout << "Normal = " << normal << endl;
    }
};