#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	map<int, int> m;

	int dasom_rnum;
	

	cin >> dasom_rnum;


	int n = dasom_rnum;
	m[0] = 0;
	m[1] = 0;
	m[2] = 0;
	m[3] = 0;
	m[4] = 0;
	m[5] = 0;
	m[6] = 0;
	m[7] = 0;
	m[8] = 0;
	m[9] = 0;
	for (int i = 1; i <= 6;i++) {
		if (n != 0) {
			m[n % 10] += 1;
			n = n / 10;
		}
		else
			break;
	}

	m[6] = m[6] + m[9]; m[9] = 0;
	if ((m[6] % 2) == 0)
		m[6] = m[6] / 2;
	else
		m[6] = m[6] / 2 + 1;

	int max = m[0];
	for (int a = 1; a < 10;a++) {
		if (max < m[a]) {
			max = m[a];
		}
	}

	cout << max;
}