#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        auto up = upper_bound(v.begin(), v.end(), num);
        auto down = lower_bound(v.begin(), v.end(), num);
        auto sum = up - down;
        cout << sum << " ";

    }
}