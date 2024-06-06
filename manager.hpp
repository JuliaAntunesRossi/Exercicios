#include "employee.h"

class Manager : public Employee {
private:
    double annualBonus;

public:
    Manager(std::string name, int id, double baseSalary, double annualBonus)
        : Employee(name, id, baseSalary), annualBonus(annualBonus) {}

    double calculateTotalSalary() const override {
        return baseSalary + annualBonus;
    }
};
