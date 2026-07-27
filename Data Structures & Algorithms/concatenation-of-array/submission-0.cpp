class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();

		vector<int> ans(2*n);

		for (int i = 0;i < n;i++)// O(n)
			ans[i] = nums[i];
		for (int i = 0; i < n; i++)//O(n)
		{
			ans[i+n] = nums[i];
		}

		return ans;
		//total comlexity is O(n)
    }
};