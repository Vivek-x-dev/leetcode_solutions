/*
Given an array of integers arr[] of size n,
the task is to rotate the array elements to the left by d positions.
*/

//--------------brute force -------------

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n= arr.size();
        for (int i=0; i<d;i++){
            int first =arr[0];                     // O(n*d)
            for (int j=0; j<n-1; j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=first;
        }
        
    }
};