/*Given an array arr[] consisting of n integers, find all the array 
elements which occurs more than floor(n/3) times.
Note: The returned array of majority elements should be sorted.
*/
//------------------brute force----------- O(n*n)
class Solution {
  public:
    vector<int> findMajority(vector<int> &arr) {
        int n = arr.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {
        
            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (arr[j] == arr[i])
                    cnt += 1;
            }

            if (cnt > (n / 3)) {
            
                if (res.size() == 0 || arr[i] != res[0]) {
                    res.push_back(arr[i]);
                }
            }
        
            if (res.size() == 2) {
                if(res[0] > res[1])
                    swap(res[0], res[1]);
                break;
            }
        }

        return res;
    }
};