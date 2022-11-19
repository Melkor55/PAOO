//
// Created by Melkor on 11/19/2022.
//

#include "FounderEmployee.h"
FounderEmployee::FounderEmployee(const FounderEmployee& rhs) : Employee(rhs),founder(rhs.founder)
{
    printf("Founder Customer copy constructor");
};

FounderEmployee& FounderEmployee::operator=(const FounderEmployee &rhs)
{
    printf("Founder Customer copy assigment operator");
    Employee::operator=(rhs); // assign base class parts
    founder = rhs.founder;
    return *this;
};