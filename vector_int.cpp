/**********************************************************************
 * 	Description: vector example
 *
 *********************************************************************/
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void) {
	
	vector <int>  v;

	ifstream fin;
	fin.open("data.txt");

	if(!fin) {
		cout<<"Unable to open file."<<endl;
		exit(0);
	}


	while(!fin.eof()) {
		int k;
		fin>>k;

		v.push_back(k);
	}

	fin.close();

	for(int i = 0; i < v.size(); ++i) {
		cout<<v[i]<<", ";
	}

	return 0;
}



