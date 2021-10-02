class Solution {
public:
		vector<int> twoSum(vector<int>& nums, int target) {
				vector<int> v;
				map<int, int> m;

				for(int i = 0; i < nums.size(); i++) {
						if (m.count(target-nums[i]) == 1) {
								v.push_back(m[target-nums[i]]);
								v.push_back(i);
						} else {
								m.insert({nums[i], i});
						}
				}
				return v;
		}
};
