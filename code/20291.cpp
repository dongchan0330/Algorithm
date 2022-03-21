#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<string, int>>clean_file;
vector<string>save_file;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, cnt = 0;
	cin >> n;
	string file_name;
	for (int i = 0; i < n; i++) {
		cin >> file_name;
		int find_str = file_name.rfind(".");
		save_file.push_back(file_name.substr(find_str + 1));
	}
	sort(save_file.begin(), save_file.end());
	string temp = save_file[0];
	for (int i = 0; i < save_file.size(); i++) {
		if (temp == save_file[i]) cnt++;
		else if (temp != save_file[i]) {
			clean_file.push_back(pair<string, int>(temp, cnt));
			temp = save_file[i];
			cnt = 1;
		}
	}
	clean_file.push_back(pair<string, int>(temp, cnt));
	for (int i = 0; i < clean_file.size(); i++) {
		cout << clean_file[i].first << " " << clean_file[i].second << endl;
	}
}