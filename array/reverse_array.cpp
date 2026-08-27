//reverse array
 

//-------- Using Two Pointers - O(n) Time and O(1) Space--------


class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n / 2; i++) {
            swap(arr[i], arr[n - 1 - i]);
        }
    }
};

//-------- Using Two Pointers - O(n) Time and O(1) Space--------

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};


//---------Using Inbuilt Methods - O(n) Time and O(1) Space-----------
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        reverse(arr.begin(), arr.end());
    }
};