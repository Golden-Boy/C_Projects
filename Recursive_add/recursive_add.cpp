/*
 * C++ Recursive Algorithm for summing numbers up to n
 *
 */


#include <iostream>
using namespace std;

int sum(int n) {
	if(n<=0) {
		return 0;
	}
	return n + sum(n-1);

	cout << "Printing : " << sum(3);
}




