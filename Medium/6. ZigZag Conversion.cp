class Solution {
public:
		string convert(string s, int numRows) {
				if (numRows == 1) {
						return s;
				}
				
				string sbuf;
				int n = s.size();
				int clen = 2 * numRows - 2;
				
				for (int i = 0; i < numRows; i++) {
						for (int j = 0; j + i < n; j += clen) {
								sbuf += s[j + i];
								
								if (i != 0 && i != numRows - 1 && j + clen - i < n) {
										sbuf += s[j + clen - i];
								}
						}
				}
				
				return sbuf;
		}
};


// int nrow = numRows;
// if (nrow == 1 || s.size() <= nrow) {
//     return s;
// }
// if (nrow == 2) {
//     string sbuf = "";
//     for (int i = 0; i < s.size(); i += 2) {
//         sbuf += s[i];
//     }
//     for (int i = 1; i < s.size(); i += 2) {
//         sbuf += s[i];
//     }

//     return sbuf;
// }


// int pos = 0;
// int h = s.size();
// for (int i = 0; i < 2 * h; i++) {
//     s += '0';
// }

// vector<vector<char>> v(nrow, vector<char>(h));
// for (int j = 0; j < h; j++) {
//     int k = (j + nrow - 1) % (nrow - 1);
//     if (k == 0) {
//         for (int i = 0; i < nrow; i++) {
//             v[i][j] = s[pos++];
//         }
//     } else {
//         for (int i = 0; i < nrow; i++) {
//             if (i == nrow - k - 1) {
//                 v[i][j] = s[pos++];
//             } else {
//                 v[i][j] = '0';
//             }
//         }
//     }
// }

// string sbuf = "";
// for (int i = 0; i < nrow; i++) {
//     for (int j = 0; j < h; j++) {
//         if (v[i][j] != '0') {
//             sbuf += v[i][j];
//         }
//     }
// }

// return sbuf;

