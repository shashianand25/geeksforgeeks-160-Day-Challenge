
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int first=arr[0];
        int second=INT_MIN;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]>first) {
                second=first;
                first=arr[i];
            } else if(arr[i]>second && arr[i]!=first) {
                second = arr[i];
            }
        }
        if(second==INT_MIN) {
            return -1;
        }
        else {
            return second;
        }
        
    }
};
