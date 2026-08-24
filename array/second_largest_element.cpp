/* Given an array of positive integers arr[], 
 return the second largest element from the array.
  If the second largest element doesn't exist then return -1.

 Note: The second largest element should not be equal to the largest element.
*/
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size(); 
        sort (arr.begin(),arr.end());
        for(int i= n - 2 ; i >=  0 ; i-- ){
            if (arr[i]!=arr[n-1]){
                return arr[i];
            }
            
        }
        return -1;
        
    }
};
//brute force 