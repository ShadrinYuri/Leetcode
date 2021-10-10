class Solution {
public:
		int myAtoi(string s) {
			int i = 0;
			while (s[i] == ' ') {
				i++;
			}

			int negative = 0;
			if (s[i] == '-') {
				negative = 1;
				i++;
			} else if (s[i] == '+') {
				i++;
			}

			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
				return 0;
			}

			int res = 0;
			while (s[i] >= '0' && s[i] <= '9' && s[i] != ' ') {
				int prev = s[i] - '0';
				if (negative == 1) {
						prev = -prev;
				}

				if (res > INT_MAX/10 || (res == INT_MAX / 10 && prev > 7)) return INT_MAX;
				if (res < INT_MIN/10 || (res == INT_MIN / 10 && prev < -8)) return INT_MIN;

				res = res * 10 + prev;
				i++;
			}

			return res;
		}
};
