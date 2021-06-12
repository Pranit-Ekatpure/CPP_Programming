/**********************************************************************
 * 	Description: Vector constructor example
 *
 *********************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void display(vector <int> &v) {
	cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
	cout << "Content of the vector: " << endl;
	for(int p:v) {
		cout << p << ", ";
	}
	cout << endl;
}

int main() {

	vector <int> v1; // empty vector

	vector <int> v2(5);
	
	display(v2);
	cout << endl;

	vector <int> v3(5, -1);

	display(v3);
	cout << endl;

	int x[] = {10, 20, 30, 40, 50};
	vector <int> v4(x, x +5);

	display(v4);
	cout << endl;

	vector <int> v5(v4);

	display(v5);
	cout << endl;

	vector <int> v6(v5.begin(), v5.begin() + 3); // v5.end(), to copy entire v5 into v6

	display(v6);
	cout << endl;

	vector <int> v7(v5.rbegin(), v5.rend()); 

	display(v7);
	cout << endl;

	return 0;
}

