class Solution {
public:
		vector<string> letterCombinations(string digits) {
			map<int, vector<string>> m {
				{2, {"a", "b", "c"}},
				{3, {"d", "e", "f"}},
				{4, {"g", "h", "i"}},
				{5, {"j", "k", "l"}},
				{6, {"m", "n", "o"}},
				{7, {"p", "q", "r", "s"}},
				{8, {"t", "u", "v"}},
				{9, {"w", "x", "y", "z"}}
			};
			
			vector<string> v;
			vector<string> vbuf;
			
			if (digits.size() == 0) {
				return v;
			}
			
			for (auto c : m[digits[0] - '0']) {
				v.push_back(c);
			}
			
			size_t n = digits.size() - 1;
			int pos = 1;
			
			while (n > 0) {
				int key = digits[pos++] - '0';
				for (int i = 0; i < v.size(); i++) {
					for (auto c : m[key]) {
						vbuf.push_back(v[i] + c);
					}
				}
				
				v.clear();
				v = vbuf;
				vbuf.clear();
				n--;
			}
			
			return v;
		}
};
