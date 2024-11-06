#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
#include "Employee.h"

class CommissionEmployee : public Employee {
    public:
        CommissionEmployee(const std::string&, const std::string&,
            const std::string&,const Date&, double = 0.0, double = 0.0);      

        void setGrossSales(double); // set gross sales amount
        double getGrossSales() const; // return gross sales amount

        void setCommissionRate(double); // set commission rate (percentage)
        double getCommissionRate() const; // return commission rate

        virtual double earnings(int) const override; // calculate earnings
        virtual std::string toString() const override; // create string representation
            
    protected:
        double grossSales; 
        double commissionRate; 
};

#endif