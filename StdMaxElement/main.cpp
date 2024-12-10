#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> randomVector = {5, 7, 2, 8, 9, 4};
	std::vector<int>::iterator it = std::max_element(randomVector.begin(), randomVector.end());
	std::cout << "Max element is " << *it << "\n";

	return 0;
}