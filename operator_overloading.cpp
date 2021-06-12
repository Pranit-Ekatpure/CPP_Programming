/**********************************************************************
 * 	Description: Operator overlaoding example
 *
 *********************************************************************/
#include  <iostream>

using namespace std;

class Circle {
	public:
		Circle() {
		}

		Circle(int radius) {
			this->radius = radius;
		}

		void display(void) {
			cout<<"Radius  = "<<this->radius<<endl;
		}

		Circle operator+(const Circle& rhs) {
			Circle c;
			c.radius = this->radius + rhs.radius;

			return c;
		}

	private:
		int radius;
		
};

int main(void)
{
	Circle c1(2), c2(3), c3;

	c1.display();
	c2.display();

	c3 = c1 + c2;

	c3.display();

	return 0;
}
