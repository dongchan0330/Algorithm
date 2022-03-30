#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, rank = 1;
	cin >> n;
	vector<pair<int, int>>big;
	for (int i = 0; i < n; i++) {
		int hei, wei;
		cin >> hei >> wei;
		big.push_back(make_pair(hei, wei));
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (big[i].first < big[j].first && big[i].second < big[j].second) rank++;
		}
		cout << rank << " ";
		rank = 1;
	}
}