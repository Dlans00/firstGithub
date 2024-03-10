#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;

	int K;

	cin >> K;

	int n;

	for (int i = 0; i < K; i++) {
		cin >> n;
		if (n != 0) {
			s.push(n);
		}
		else
			s.pop();
	}
	int sum = 0;
	while (s.empty() == 0) {
		sum += s.top();
		s.pop();
	}

	cout << sum;
}