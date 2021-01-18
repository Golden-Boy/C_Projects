/*
* 
CLI Program to count the number of times a recurring value appears

*/

#include <iostream>
// using namespace std;

int main() {

	int currVal = 0, val = 0;
	if (std::cin >> currVal) { // if able to read and store in variable
		int cnt = 1; // store current value for input in cnt 
		while (std::cin >> val) { // read remaining numbers
			if (val == currVal)  // if current value = previous value
				++cnt; // add one

			else {

				std::cout << currVal << " occurs "
					<< cnt << "number of times" << std::endl;
				currVal = val; // reset current value 
				cnt = 1; // reset count
			}
		}
		std::cout << currVal << "occurs " << cnt << "times" << std::endl;

	return 0;
		}

	}

