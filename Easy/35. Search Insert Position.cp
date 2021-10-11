class Solution {
public:
		int searchInsert(vector<int>& nums, int target) {
			size_t n = nums.size();
			int l = 0;
			int r = n - 1;

			while (l <= r) {
				int mid = (l + r) / 2;
				
				if (nums[mid] < target) {
					l = ++mid;
				} else if (nums[mid] > target){
					r = --mid;
				} else {
					return mid;
				}
			}

			return l;
		}
};


/*
			while (r - l > 0) {
				int mid = (r + l) / 2;
				
				if (nums[mid] > target) {
					r = --mid;
				} else if (nums[mid] < target) {
					l = ++mid;
				} else {
					return mid;
				}
			}
*/
