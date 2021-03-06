/**********************************************************************
 * 	Description: Interfaces example
 *
 *********************************************************************/
#include <iostream>

using namespace std;

class Shape {
	public:
		virtual int getArea() = 0;

		void setWidth(int w) {
			width = w;
		}

		void setHeight(int h) {
			height = h;
		}

	protected:
		int width;
		int height;
};

class Rectangle: public Shape {
	public:
		int getArea() {
			return width * height;
		}
};

class Triangle: public Shape {
	public:
		int getArea() {
			return (width * height)/2;
		}
};

int main(void) {
	Rectangle rect;
	Triangle tri;

	rect.setWidth(5);
	rect.setHeight(7);

	cout<<"Area of rectangle: "<<rect.getArea()<<endl;

	tri.setWidth(4);
	tri.setHeight(6);

	cout<<"Area of triangle: "<<tri.getArea()<<endl;

	return 0;
}
