#include <iostream>
#include "regular_employee.h"
#include "manager.h"
#include "intern.h"

int main() {
    RegularEmployee re("John Doe", 1, 50000);
    Manager m("Jane Smith", 2, 60000, 10000);
    Intern i("Jim Brown", 3, 40000);

    std::cout << "Regular Employee Total Salary: " << re.calculateTotalSalary() << std::endl;
    std::cout << "Manager Total Salary: " << m.calculateTotalSalary() << std::endl;
    std::cout << "Intern Total Salary: " << i.calculateTotalSalary() << std::endl;

    return 0;
}
