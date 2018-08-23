/*
在一个二维数组中，每一行按照从左到右递增的顺序排序，每一列按照从上到下递增的顺序排序，查找元素
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    bool Find(int target, vector<vector<int> > array){
        bool isFound = false;
        int rows = array.size();
        int cols = array[0].size();
        int col = cols - 1;
        int row = 0;
        while(col >= 0 && row <= rows - 1){
            if(array[row][col] == target){
                isFound = true;
                break;
            }
            else if(array[row][col] < target){
                row++;
            }
            else{
                col--;
            }
        }
        return isFound;
    }
};