#include "Company.hpp"
#include "Employee.h"

#include <iostream>

using namespace std;

double convert_RON_to_MIL_of_EUR(int value)
{
    return ( value / ( MIL * EUR ) );
}

int main()
{
    Company company("UP","Timisoara",600,1000*EUR,100*MIL*EUR,20*MIL*EUR);

    company.expectedProfit();

    string currency = " MIL EUR\n";

    cout << "Salary expenses: " << convert_RON_to_MIL_of_EUR(company.salaryExpenses()) << currency;
    cout << "Profit: " << convert_RON_to_MIL_of_EUR(company.annualProfit) << currency   ;

    //cout << "hello" ;

    Employee employee1 = *new Employee(10);
    Employee employee2 = employee1;

    return 0;
}