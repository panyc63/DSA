#include <iostream>
using namespace std;

class Employee {
private:
	string _firstname;
	int _monthlysalary;
	string _lastname;


	void setfname(string fname)
	{
		_firstname = fname;
	}
	void setlname(string lname)
	{
		_lastname = lname;
	}
	void setSalary(int salary)
	{
		_monthlysalary = salary;
	}

public:
	string getfname()
	{
		return _firstname;
	}
	string getlname()
	{
		return _lastname;
	}
	int getSalary()
	{
		return _monthlysalary;
	}

	Employee(string fname, string lname, int salary);
	Employee();
};

Employee::Employee(string fname, string lname, int msalary)
{
	setfname(fname);
	setlname(lname);
	if (msalary > 0)
	{
		setSalary(msalary);
	}
	else { setSalary(0); }
}
Employee::Employee() {}

int main()
{
	Employee emparr[3];

	emparr[0] = Employee("Yecheng", "Pan", 3000);
	emparr[1] = Employee("Quan Sheng", "Lee", -1500);
	emparr[2] = Employee("Jonas", "Lim", 500);


	cout << "Before Salary raise" << "\n---------------------------"<< endl;
	int salary1 = emparr[0].getSalary();
	cout << "Salary1 : " << salary1 << endl;
	int salary2 = emparr[1].getSalary();
	cout << "Salary2 : " << salary2 << endl;
	int salary3 = emparr[2].getSalary();
	cout << "Salary3 : " << salary3 << endl;
	cout << "After Salary raise" << "\n---------------------------" << endl;

	salary1 *= 1.1;
	salary2 *= 1.1;
	salary3 *= 1.1;

	emparr[0] = Employee("Yecheng", "Pan", salary1);
	emparr[1] = Employee("Quan Sheng", "Lee", salary2);
	emparr[2] = Employee("Jonas", "Lim", salary3);


	salary1 = emparr[0].getSalary();
	cout << "Salary1 : " << salary1 << endl;
	salary2 = emparr[1].getSalary();
	cout << "Salary2 : " << salary2 << endl;
	salary3 = emparr[2].getSalary();
	cout << "Salary3 : " << salary3 << endl;

};
