#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double baseSalary;

public:
    Employee(std::string name, int id, double baseSalary)
        : name(name), id(id), baseSalary(baseSalary) {}

    virtual double calculateTotalSalary() const {
        return baseSalary;
    }
};
