#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
	deque<int> dq;
	int n, k;
	
	cin >> n >> k;


	for (int i = 0; i < n; i++) { 
		dq.push_back(i+1);
	}

	cout << "<";

	deque<int>::iterator iter = dq.begin();
	while (dq.size()!=0) {
		for (int i = 1; i < k;i++) {
			iter++;
			if (iter == dq.end()) {
				iter = dq.begin();
			}
			if (iter > dq.end()) {
				iter = dq.begin();
			}
		}
		
		cout << *iter;
		iter = dq.erase(iter);

		if (dq.size() != 0) {
			cout << ", ";
		}
	}

	cout << ">";

}