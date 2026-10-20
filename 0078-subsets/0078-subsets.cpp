class Solution {
public:
  void s(vector <int> & nums, int i, vector <int> &curr,vector<vector<int>>&ans){
            if (i==nums.size()){
                ans.push_back (curr);
                return;
            }

            s(nums,i+1,curr,ans);
            curr.push_back(nums[i]);
            s(nums,i+1,curr,ans);
            curr.pop_back();


        }
    vector<vector<int>> subsets(vector<int>& nums) {
      
          vector<vector<int>> ans;
        vector<int> curr;

        s(nums, 0, curr, ans);

        return ans;
        
    }
};