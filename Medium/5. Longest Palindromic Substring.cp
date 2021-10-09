class Solution {
public:
		string longestPalindrome(string s) {
				string res = "";
				int resmax = 0;
				
				size_t n = s.size();
				for (int i = 0; i < n; i++) {
						int l = i;
						int r = i;
						
						while (l >= 0 && r < n && s[l] == s[r]) {
								if ((r - l + 1) > resmax) {
										resmax = r - l + 1;
										res = s.substr(l, resmax);
								}
								l--;
								r++;
						}
						
						l = i;
						r = i+1;
						
						while (l >= 0 && r < n && s[l] == s[r]) {
								if ((r - l + 1) > resmax) {
										resmax = r - l + 1;
										res = s.substr(l, resmax);
								}
								l--;
								r++;
						}
				}
				
				return res;
		}
};
