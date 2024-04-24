#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int s, p, i, j, a, c, g, t, res, cnt_a, cnt_c, cnt_g, cnt_t;
	cin >> s >> p;
	vector<char> dna(s);

	for (i = 0; i < s; i++)	{
		cin >> dna[i];
	}
	cin >> a >> c >> g >> t;

	cnt_a = 0; cnt_c = 0; cnt_g = 0; cnt_t = 0; res = 0;

	for (i = 0; i < p; i++) {
		switch (dna[i]) {
		case 'A': cnt_a++; break;
		case 'C': cnt_c++; break;
		case 'G': cnt_g++; break;
		case 'T': cnt_t++; break;
		}
	}
	if (a <= cnt_a && c <= cnt_c && g <= cnt_g && t <= cnt_t)
		res++;

	for (i = p; i < s; i++) {
		j = i - p;
		
		switch (dna[j]) {
		case 'A': cnt_a--; break;
		case 'C': cnt_c--; break;
		case 'G': cnt_g--; break;
		case 'T': cnt_t--; break;
		}

		j = j + 1;

		switch (dna[i]) {
		case 'A': cnt_a++; break;
		case 'C': cnt_c++; break;
		case 'G': cnt_g++; break;
		case 'T': cnt_t++; break;
		}

		if (a <= cnt_a && c <= cnt_c && g <= cnt_g && t <= cnt_t)
			res++;

	}
	cout << res;
	return 0;
 }