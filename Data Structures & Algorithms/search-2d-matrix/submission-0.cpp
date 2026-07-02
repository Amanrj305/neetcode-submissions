class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int m=0;
        while(m <= rows-1){
            int low =0, high = cols-1;
            while(low <= high){
                int mid= (low+high) / 2;
                if(matrix[m][mid] == target){
                    return true;
                }
                else if(matrix[m][mid] > target){
                    high = mid-1;
                }
                else if(matrix[m][mid] < target){
                    low = mid+1;
                }
            }
            m++;
        }
        return false;
    }
};
