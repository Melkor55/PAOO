#include "Company.hpp"


using namespace std;

void Company::expectedProfit()
{
    annualProfit = (income - salaryExpenses() - expenses);
}

int Company::salaryExpenses()
{
    return (numberOfEmployees * averageSalary * 12);
}

Company::~Company() {
    // I do not have any dynamically allocated variable
}
