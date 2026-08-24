/* Given an array of positive integers arr[], 
 return the second largest element from the array.
  If the second largest element doesn't exist then return -1.

 Note: The second largest element should not be equal to the largest element.
*/

// <--------------approach 1--------------->

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size(); 
        sort (arr.begin(),arr.end());              /// O(nlogn)
        for(int i= n - 2 ; i >=  0 ; i-- ){
            if (arr[i]!=arr[n-1]){
                return arr[i];
            }
            
        }
        return -1;
        
    }
};      //brute force 

// <--------------approach 2---------------->

class Solution {
  public:
int getSecondLargest(vector<int> &arr) {
    int n = arr.size();

    int largest = -1, secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];                               //O(2n)= O(n)
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
};

// <--------------approach 3---------------->


class Solution {
  public:
int getSecondLargest(vector<int> &arr) {
    int n = arr.size();

    int largest = -1, secondLargest = -1;

    
    for (int i = 0; i < n; i++) {                                   ///O(n)

       
        if(arr[i] > largest) {
        	secondLargest = largest;
            largest = arr[i];
        }
      
      	else if(arr[i] < largest && arr[i] > secondLargest) {
        	secondLargest = arr[i];
        }
    }
    return secondLargest;
}
};