#include <iostream>
// using namespace std;

int main() {
	int currVal = 0, val = 0;

	// read first number, test data validity
	if (std::cin >> currVal) { // if able to read and store in variable
		int cnt = 1; // store current value for input in cnt 
		while (std::cin >> val) { // read remaining numbers
			if (val == currVal)  // if current value = previous value, add one 
				++cnt;

			else {
				std::cout << currVal << " occurs "
					<< cnt << "number of times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << "occurs " << cnt << "times" << std::endl;

	return 0;
		}

	}

