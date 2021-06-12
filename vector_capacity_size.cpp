/**********************************************************************
 * 	Description: Vector capacity and size example
 *
 *********************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <string> v1;

	cout << "Capacity: " << v1.capacity()
	     << ", Size: " << v1.size() << endl;

	v1.push_back("Prait");

	cout << "Capacity: " << v1.capacity()
	     << ", Size: " << v1.size() << endl;

	v1.push_back("Ekatpure");

	cout << "Capacity: " << v1.capacity()
	     << ", Size: " << v1.size() << endl;

	v1.push_back("Ekatpure");
	v1.push_back("Ekatpure");
	v1.push_back("Ekatpure");
	cout << "Capacity: " << v1.capacity()
	     << ", Size: " << v1.size() << endl;

	v1.shrink_to_fit();
	cout << "Capacity: " << v1.capacity()
	     << ", Size: " << v1.size() << endl;

	return 0;
}
