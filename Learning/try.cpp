#include <iostream>

using namespace std;

int main() {
	double temperature;
	cout << "Enter a farenheit temperature \n> ";
	cin >> temperature;
	temperature = (temperature - 32) * (static_cast<double>(5) / 9);
	cout << "Celsius: " << temperature;
	return 0;
}