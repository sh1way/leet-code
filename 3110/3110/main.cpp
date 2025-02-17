#include <iostream>
#include <vector>
#include <string>

int main() {
	std::string s = "zaz";

	int score = 0;

	for (int i = 0; i < s.size() - 1; ++i) {
		score += abs(s[i] - s[i + 1]);
	}

	std::cout << score;

	return score;
}