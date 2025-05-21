
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int s=arr.size(),high,low;
        sort(arr.begin(),arr.end());
        int ans=arr[s-1]-arr[0];
        for(int i=1; i<s; i++) {
            if(arr[i]-k<0)
            continue;
            high=max(arr[s-1]-k,arr[i-1]+k);
            low=min(arr[0]+k,arr[i]-k);
            
            ans=(ans>high-low)?high-low:ans;
        }
        return ans;
    }
};
