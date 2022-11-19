#include <cmath>
#include <iostream>
#include "Uncopyable.h"

using namespace std;

#ifndef COMPANY_HPP
#define COMPANY_HPP

#define MIL pow(10,6)
#define EUR 5  // conversion 1 EUR = 5 RON

class Company : private Uncopyable
{
    public:
        string name;
        string location;
        int numberOfEmployees;
        int annualProfit;
        int minNumberOfEmployees;
        int minNumberOfEmployeesInADepartament;

    private:
        int averageSalary;
        int income;
        int expenses;

    public:
        ~Company();

    //Company();
         Company(   string _name,
                    string _location,
                    int _numberOfEmployees,
                    int _averageSalary,
                    int _income,
                    int _expenses
                )
        {
            name = _name;
            location = _location;
            numberOfEmployees = _numberOfEmployees;
            averageSalary = _averageSalary;
            income = _income;
            expenses = _expenses;
            numberOfEmployees = minNumberOfEmployeesInADepartament = 25;
        }

    public:
        void expectedProfit();
         int salaryExpenses();

    private:
        bool isTheCompanyGrowingOrDeclining()
        {
            if ( annualProfit >= (income * (30/100)) )
                return true;
            
            return false;
        }
};

#endif