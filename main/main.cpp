#include "main.h"
#include <iostream>
using namespace std;

double bodmas(double a,double b, double c,double d, double e, double f) {
	cout << "Enter any 6 numbers that you want to be worked on\n(remember to separate them using spaces to make it work)\n";
	while (cin >> a >> b >> c >> d >> e >> f) {
		return a * b / c * d + e - f;
	}
}
int main() {
	cout<<endl << bodmas(0, 0, 0, 0, 0, 0) << endl;
}