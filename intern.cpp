#include "employee.h"

class Intern : public Employee {
public:
    Intern(std::string name, int id, double baseSalary)
        : Employee(name, id, baseSalary * 0.8) {} // 80% do salário base

    double calculateTotalSalary() const override {
        return baseSalary;
    }
};
