#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	const auto& a = 100 - x;
	const auto& b = 100 - y;
	const auto& c = 100 - (a + b);
	const auto& d = a * b;
	const auto& q = d / 100;
	const auto& r = d % 100;

	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
	cout << c + q << ' ' << r;

	return 0;
}