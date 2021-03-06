class Solution {
public:
string convert(string s, int numRows) {
    if (numRows == 1)
    	return s;
	//calcuate the size of matrix for Z-code numRows*{ceil[L/(2(numRows-1)]x(numRows-1)}
	string z;
	int i, j, k, flag;
	float L = s.length();
	int numCols = ceil(L / (2 * (numRows - 1)))*(numRows - 1);
	vector<vector<char>> result(numRows, vector<char>(numCols));
	i = 0;
	flag = 0;

	//divide the s into substring with length of 2(numRows-1) 
	while (i<L) {
		//convert each substring
		for (j = 0; j<numRows && i<L; j++) {
			result[j][flag] = s[i];
			i++;
		}
		j--;		//adjust the row index
		for (k = 0; k<numRows - 2 && i<L; k++) {
			j--;
			flag++;
			result[j][flag] = s[i];
			i++;
		}
		flag++;		//adjust the column index
	}// end while

	// construct the converted string
	for (int m = 0; m < numRows; m++) {
		for (int n = 0; n < numCols; n++) {
			if (result[m][n]) {
				z = z + result[m][n];
			}
			//cout << result[m][n] << ' ';
		}
		//cout << endl;
	}
	return z;
    }
};
