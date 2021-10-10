class Solution {
public:
		int maxArea(vector<int>& height) {
			size_t n = height.size();
			int maxs = 0;
			int cur = 0;
			
			int l = 0;
			int r = n - 1;
			
			while (l < r) {
				cur = min(height[l], height[r]) * (r - l);
				maxs = max(maxs, cur);
				
				if (height[l] < height[r]) {
					l++;
				} else {
					r--;
				}
			}
			
			return maxs;
		}
};
