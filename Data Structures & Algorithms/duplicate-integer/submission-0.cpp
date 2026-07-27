class Solution {
public:
	bool hasDuplicate(vector<int>& nums) {
	int n = (int)nums.size();


	sort(nums.begin(), nums.end());//log(n)

	for (int i = 0; i < n - 1;i++)//(n)
	{
		if (nums[i] == nums[i + 1])
			return true;
	}

	return false;

	//nlog(n)
	}
};