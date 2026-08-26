/*
You are given an array arr[] of non-negative integers. 
You have to move all the zeros in the array to the right end while maintaining 
the relative order of the non-zero elements. The operation must be performed in place, 
meaning you should not use extra space for another array.

Examples:

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.

Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.

*/

class Solution {
  public:
  void pushZerosToEnd(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);

    // to keep track of the index in temp[]
    int j = 0;

    // Copy non-zero elements to temp[]
    for (int i = 0; i < n; i++){
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }
    while (j < n){                               //brute force O(n)
        temp[j++] = 0;                            //  s.c O(n) 
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
  }

};

//---------------Two Traversals-O(n) Time and O(1) space-------------------

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int count=0;
        for (int i =0;i<arr.size(); i++){
            if (arr[i] != 0)
            arr[count++]=arr[i];
        }
        while(count<arr.size())
          arr[count++]=0;
        
    }
};