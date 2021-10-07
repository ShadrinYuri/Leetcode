class Solution {
public:
		int strStr(string haystack, string needle) {
				size_t k = needle.size();
				size_t n = haystack.size();
				
				if (k == 0) {
						return 0;
				}
				if (n < k) {
						return -1;
				}
				
				for(int i = 0; i <= n - k; i++) {
						if (haystack.at(i) == needle.at(0) && haystack.at(i + k - 1) == needle.at(k - 1)) {
								if (haystack.substr(i, k) == needle) {
										return i;
								}
						}
				}
				
				return -1;
		}
};
