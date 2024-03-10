#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int seq_len, x, num = 0;
	cin >> seq_len;

	vector<int> m(seq_len);
	for (int i = 0; i < seq_len; i++) {
		cin >> m[i];
	}

	cin >> x;

	sort(m.begin(), m.end());
	
	int start = 0, end = seq_len-1;
	
	while (start < seq_len && end < seq_len && start<end) {
		int sum = m[start] + m[end];
		if (sum > x)
			end--;
		else if (sum < x)
			start++;
		else {
			num++;
			start++;
		}

	}

	cout << num << endl;
}