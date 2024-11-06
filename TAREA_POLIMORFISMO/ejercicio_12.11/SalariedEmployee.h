#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "Employee.h"
#include "Date.h"

class SalariedEmployee : public Employee {
    public:
        SalariedEmployee(const std::string&, const std::string&,
                const std::string&,const Date&, double = 0.0);
        virtual ~SalariedEmployee() = default;

        void setWeeklySalary(double);
        double getWeeklySalary() const;

        virtual double earnings(int) const override;
        virtual std::string toString() const override;
    protected:
        double weeklySalary;
};

#endif 