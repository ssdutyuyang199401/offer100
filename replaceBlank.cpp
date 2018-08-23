/*
将字符串中的空格替换为“%20”
思路：遍历获取空格数目，计算新的字符串长度，然后由后向前移动字符串，这种题应该想办法设计成只移动一次
*/
#include<iostream>
using namespace std;
class Solution{
public:
    void replaceBlank(char *str, int length){//length存储该指针指向地址的最大长度
        int originLength = 0;
        int blank = 0;
        while(str[originLength] != '\0'){
            if(str[originLength] == ' '){
                blank++;
            }
            originLength++;
        }
        int newLength = originLength + blank * 2;
        if(newLength > length){
            return;
        }
        int indexOfOrigin = originLength;
        int indexOfNew = newLength;
        while(indexOfOrigin >= 0 && indexOfNew > indexOfOrigin){
            if(str[indexOfOrigin] == ' '){
                str[indexOfNew--] = '0';
                str[indexOfNew--] = '2';
                str[indexOfNew--] = '%';
            }
            else{
                str[indexOfNew--] = str[indexOfOrigin];
            }
            indexOfOrigin--;
        }
    }
};