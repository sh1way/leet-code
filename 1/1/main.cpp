#include <iostream>
#include <vector>

std::vector<int> twoSum() {
	std::vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	//1
	for (size_t i = 0; i < nums.size(); i++) {
		for (size_t j = 0; j < nums.size(); j++) {
			if (i != j) {
				if (target == nums[i] + nums[j]) {
					return {(int)i, (int)j};
					std::cout << i << "  " << j << std::endl;
				}
			}
		}
	}

	return {0, 0};
	//1
}