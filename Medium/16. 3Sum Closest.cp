class Solution {
public:
		int threeSumClosest(vector<int>& nums, int target) {
			int sum = 0;
			int min = 1000000;
			size_t n = nums.size();
			
			sort(nums.begin(), nums.end());
			
			for (int i = 0; i < n; i++) {
				int l = i + 1;
				int r = n - 1;
				int sum1 = target - nums[i];
				
				while(l < r) {
					int sum2 = nums[l] + nums[r];
					if (abs(sum2 + nums[i] - target) < min) {
						min = abs(sum2 + nums[i] - target);
						sum = sum2 + nums[i];
					}
					
					if (sum2 > sum1) {
						r--;
					} else if (sum2 < sum1) {
						l++;
					} else {
						return sum2 + nums[i];
					}
				}
				
				while (i + 1 < n && nums[i] == nums[i + 1]) {
					i++;
				}
			}
			
			return sum;
		}
};

