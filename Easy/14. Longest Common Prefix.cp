class Solution {
public:
		string longestCommonPrefix(vector<string>& strs) {
				if (strs.size() == 0) {
						return "";
				}

				size_t n = strs.size();
				string first = strs[0];
				for (int i = 1; i < n; i++) {
						int j = 0;
						string res = "";
						while (j < first.size()) { 
								if (first[j] == strs[i][j]) {
										res += first[j++];
								} else {
										first = res;
										break;
								}
						}
				}
				return first;
		}
};
