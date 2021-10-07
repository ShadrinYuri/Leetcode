class Solution {
public:
		int lengthOfLongestSubstring(string s) {
				vector<int> seen(128, -1);
						int i = 0;
						int j = 0;
						int res = 0;
						while (j < s.size()) {
								char r = s[j];

								int index = seen[r];
								if (index >= i) {
												i = index + 1;
								}

								res = max(res, j - i + 1);
								seen[r] = j;
								j++;

						}
						return res;
		}
};
