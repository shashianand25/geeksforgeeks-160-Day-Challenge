
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int nz=0;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]!=0) {
                swap(arr[nz],arr[i]);
                nz++;
            }
        }
        
    }
};
