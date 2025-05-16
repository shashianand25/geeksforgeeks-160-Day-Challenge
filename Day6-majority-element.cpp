class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int cd1=INT_MIN, cd2=INT_MIN, ct1=0, ct2=0;
        for(int num : arr) {
            if(num==cd1)
            ct1++;
            
            else if(num==cd2)
            ct2++;
            
            else if(ct1==0) {
                cd1=num;
                ct1=1;
            }
            
            else if(ct2==0) {
                cd2=num;
                ct2=1;
            }
            
            else {
                ct1--;
                ct2--;
            }
        }
        ct1=0;
        ct2=0;
        for(int num: arr) {
            if(num==cd1) ct1++;
            else if(num==cd2) ct2++;
        }
        
        vector<int> ans;
        if(ct1>arr.size()/3.0) ans.push_back(cd1);
        if(ct2>arr.size()/3.0) ans.push_back(cd2);
        
        if(ans.size()==2 && ans[0]>ans[1])
        swap(ans[0],ans[1]);
        
        return ans;
    }
};
