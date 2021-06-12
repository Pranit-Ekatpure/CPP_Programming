/**********************************************************************
 * 	Description: Predefined macros example
 *
 *********************************************************************/
#include <iostream>

using namespace std;

class Macros {
	public:
		Macros(string func, string file, int line) {
			string format_string;
			format_string = "[" + func + "()" + "," + file + "]";
			cout<<format_string<<":"<<line<<endl;
		}
};

int main(void) {
	Macros obj(__func__, __FILE__, __LINE__);

	return 0;
}
