
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int temp[arr.size()];
        int k=d%arr.size();
        for(int i=0; i<arr.size(); i++) {
           if(i-k>=0) {
               temp[i-k]=arr[i];
           }
           else {
               
               temp[i-k+arr.size()]=arr[i];
           }
        }
        for(int i=0; i<arr.size(); i++) {
            arr[i]=temp[i];
        }
    }
};
