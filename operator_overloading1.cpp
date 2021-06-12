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

		Circle operator++() {
			Circle c;
			this->radius += 1;
			c.radius = this->radius;

			return c;
		}
		Circle operator++(int) {
			Circle c;
			c.radius = this->radius;
			this->radius += 1;

			return c;
		}
	private:
		int radius;
		
};

int main(void)
{
	Circle c1(2), c;

	c1.display();

	c = ++c1;
	
	c1.display();
	c.display();

	c = c1++;

	c1.display();
	c.display();

	return 0;
}
