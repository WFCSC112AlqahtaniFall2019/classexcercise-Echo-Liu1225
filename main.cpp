#include <iostream>
using namespace std;

class Faculty{
public:
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary
    double getSalary() {return salary;}
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/


private:
    double salary;
    double SSN;
};

void Faculty::setSalary(double s){
    salary=s;
}

/* 2) implement each setter and getter */

int main() {
    Faculty prof;

/* 3) use the implemented methods to fill prof' info and print them out */

    return 0;
}
