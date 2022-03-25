#include <iostream>
using namespace std;
int mod(int a, int b) {
	int mod = a % b;
	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int fra_up1, fra_down1, fra_up2, fra_down2;
	cin >> fra_up1 >> fra_down1 >> fra_up2 >> fra_down2;

	int res_fra_up = fra_up1 * fra_down2 + fra_up2 * fra_down1;
	int res_fra_down = fra_down1 * fra_down2;
	int save_mod = mod(res_fra_up, res_fra_down);
	while (1) {
		if (mod(res_fra_up, res_fra_down) == 1)	break;
		else {
			res_fra_up /= save_mod;
			res_fra_down /= save_mod;
		}
	}

	cout << res_fra_up << " " << res_fra_down;

}