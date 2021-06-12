/**********************************************************************
 * 	Description: inheritance constructor example
 *
 *********************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Employee {
	protected:
		string name;
		int age;
		double basic;

	public:
		Employee(string name, int age, double basic) {
			this->name = name;
			this->age = age;
			this->basic = basic;
		}

		virtual double calculateSalary() {
		//	cout<<"In the calculate salary Employee."<<endl;
			double salary = basic + basic * 0.1;
			return salary;
		}

};

class Manager:public Employee {
	public:
		double hra;
		Manager(string name, int age, double basic):Employee(name, age, basic) {
			hra = basic * 0.15;
		}

		double calculateSalary() {
		//	cout<<"In the calculate salary Manager."<<endl;
			double salary = Employee::calculateSalary();
			salary = salary + hra;
			return salary;
		}

};

class FactoryWorker: public Employee {
	private: 
		double tiffin;
	public:
		FactoryWorker(string name, int age, double basic):Employee(name, age, basic) {
			tiffin = basic * 0.05;
		}

		double calculateSalary() {
		//	cout<<"In the calculate salary FactoryWorker."<<endl;
			double salary = Employee::calculateSalary();
			salary = salary + tiffin;
			return salary;
		}
};

class Clerk: public Employee {
	private:
		int otHrs;
		double otRate;
	public:
		Clerk(string name, int age, double basic, int otHrs, double otRate):Employee(name, age, basic) {
			this->otHrs = otHrs;
			this->otRate = otRate;
		}

		double calculateSalary() {
		//	cout<<"In the calculate salary Clerk."<<endl;
			double salary = Employee::calculateSalary();
			salary = salary + otHrs * otRate;
			return salary;
		}
};

class Club {
	public:
		string getMembershipType(Employee *p) {
			double salary = p->calculateSalary();
			if(salary >= 50000)
				return "Red";
			else if(salary >= 30000)
				return "Orange";
			else 
				return "Yellow";
		}
};

int main(void) {

	Employee *p = new Manager("Pranit", 29, 50000);
	Club club;
	double salary = p->calculateSalary();
	//test
	cout << "hra" << ((Manager*)p)->hra << endl;
	cout<<"\nPranit: Salary-"<<salary<<endl;
	cout<<"Membership: "<<club.getMembershipType(p);
	p = new FactoryWorker("Pranit", 29, 20000);
	salary = p->calculateSalary();
	cout<<"\nPranit: Salary-"<<salary<<endl;
	cout<<"Membership: "<<club.getMembershipType(p);
	p = new Clerk("Pranit", 29, 30000, 10, 250);
	salary = p->calculateSalary();
	cout<<"\nPranit: Salary-"<<salary<<endl;
	cout<<"Membership: "<<club.getMembershipType(p);

	return 0;
}
