
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int j=arr.size()-1;
        for(int i=0; i<j;i++) {
            swap(arr[i],arr[j]);
            j--;
        }

    }
};
