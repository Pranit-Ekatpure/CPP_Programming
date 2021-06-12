/**********************************************************************
 * 	Description: Static member example
 * 		     We can define class members static using static 
 * 		     keyword. When we declare a member of a class as 
 * 		     static it means no matter how many objects of the 
 * 		     class are created, there is only one copy of the 
 * 		     static member.
 * 		     A static member is shared by all objects of the 
 * 		     class. All static data is initialized to zero when 
 * 		     the first object is created, if no other 
 * 		     initialization is present. We can't put it in the 
 * 		     class definition but it can be initialized outside 
 * 		     the class.
 *
 *********************************************************************/
#include <iostream>

using namespace std;

class Box {
	public:
		static int objCount;

		/* Constructor definition */
		Box(double l = 3.0, double w = 4.0, double b =5.0) {
			cout<<"Constructor called"<<endl;
			length = l;
			width = w;
			breadth = b;

			/* Increase every time object is called */
			objCount++;
		}

		double	volume(void) {
			return length * width * breadth;
		}

	private:
		double length;
		double width;
		double breadth;
};

/* Initialize static member of class Box */
int Box::objCount = 0;

int main(void) {

	Box box1(3.3, 4.4, 5.5);
	Box box2(6.6, 7.7, 8.8);

	/* Print total number of objs */
	cout<<"Total Objects: "<<Box::objCount<<endl;

	return 0;
}
