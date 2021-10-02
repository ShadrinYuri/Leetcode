class Solution {
public:
		int romanToInt(string s) {
				int sum = 0;
				size_t n = s.size();
				map<char, int> m = {
						{'I', 1},
						{'V', 5},
						{'X', 10},
						{'L', 50},
						{'C', 100},
						{'D', 500},
						{'M', 1000},
				};
				for (int i = 0; i < n; i++) {
						int x = 0;
						if (i < n - 1) {
								if (s[i] == 'I' && s[i+1] == 'V') {
										x = 4;
								} else if (s[i] == 'I' && s[i+1] == 'X') {
										x = 9;
								} else if (s[i] == 'X' && s[i+1] == 'L') {
										x = 40;
								} else if (s[i] == 'X' && s[i+1] == 'C') {
										x = 90;
								} else if (s[i] == 'C' && s[i+1] == 'D') {
										x = 400;
								} else if (s[i] == 'C' && s[i+1] == 'M') {
										x = 900;
								} else {
										x = m[s[i]];
										i--;
								}
								i++;
						} else {
								x = m[s[i]];
						}
						sum += x;
						
				}
				return sum;
		}
};
