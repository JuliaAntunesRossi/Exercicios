#include "employee.h"

class RegularEmployee : public Employee {
public:
    RegularEmployee(std::string name, int id, double baseSalary)
        : Employee(name, id, baseSalary) {}
};
