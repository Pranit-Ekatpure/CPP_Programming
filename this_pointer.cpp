/**********************************************************************
 * 	Description: this pointer example
 *********************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Car {
	string color;
	int topspeed;
	double cc;

	public:
		Car();
		~Car();
		Car(string color, int topspeed, double cc);
		void getCarInfo(void);
};

/* Constructor */
Car::Car(string color, int topspeed, double cc) {
	cout<<"Constructor called"<<endl;
	this->color = color;
	this->topspeed = topspeed;
	this->cc = cc;
}

/* Destructor */
Car::~Car(void) {
	cout<<"Destructor called"<<endl;
}

void Car::getCarInfo(void) {
	cout<<"Car color:"<<this->color<<"\tCar top speed:"<<this->topspeed<<"\tCar cc:"<<this->cc<<endl;
}

int main(void) {
	Car car1("Red", 300, 600), car2("Green", 400, 800);

	car1.getCarInfo();
	car2.getCarInfo();

	return 0;
}

