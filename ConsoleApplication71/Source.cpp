#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct lol {
	string fname;
	string lname;
	pair <string, string> name;
	double srz;
};
bool sor(lol a, lol b) {
	return a.srz < b.srz;
}
int main() {
	int a, b, c, n;
	string fname, lname;
	vector <lol> allzn;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> fname >> lname >> a >> b >> c;
		double l;
		lol zn;
		zn.fname = fname; 
		zn.lname = lname;
		lol zn; 
		zn.name.first = fname;
		zn.name.second = lname;
		l = (a + b + c) / 3;
		zn.srz = l;
		allzn[i] = zn;
	}
	stable_sort(allzn.begin(), allzn.end(), sor);
	for (auto now : allzn) {
		cout << now.fname << " " << now.lname << endl;
		cout << now.name.first << " " << now.name.second << endl;
	}
	return 0;
}