#include <iostream>
#include <set>
#include <vector>

std::vector<int> res;
std::set<int> ele;

void backtrack(int n) {
	if ((int)res.size() == n) {
		for (int x : res) { std::cout << x << " \n"[x == res.back()]; }
		exit(0);
	}

	for (int x : ele) {
		if (res.empty() || std::abs(res.back() - x) > 1) {
			res.push_back(x);
			ele.erase(x);
			backtrack(n);
			ele.insert(x);
			res.pop_back();
		}
	}
}

int main() {
	int n;
	std::cin >> n;

	if (n == 2 || n == 3) {
		std::cout << "NO SOLUTION" << '\n';
		return 0;
	}

	for (int i = 1; i <= n; i++) { ele.insert(i); }

	backtrack(n);
}