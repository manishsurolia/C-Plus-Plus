/*
 * A sample program to show how pair is defined and used in c++.
 */
#include <iostream>
using namespace std;

int main(void)
{
	/*
	 * Single pair.
	 */
	pair <int, string> p1;

	/*
	 * Array of pairs.
	 */
	pair <int, int> p2[5];

	/*
	 * Assign values to the pair.
	 */ 
	p1.first = 1;
	p1.second = "some string";
	cout<<p1.first <<" "<<p1.second<<endl;

	for (int i=0; i<5; i++) {
		p2[i].first = i;
		p2[i].second = i*2;
	}

	for (int i=0; i<5; i++) {
		cout << p2[i].first <<" "<< p2[i].second<<endl;
	}
	cout<<endl;
	return 0;
}
