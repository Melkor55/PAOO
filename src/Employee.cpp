//
// Created by Melkor on 11/19/2022.
//

#include "Employee.h"

Employee& Employee::operator=(const Employee &rhs)
{
    Employee temp(rhs);
    swap(temp);
    return *this;
}