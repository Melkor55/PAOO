//
// Created by Melkor on 11/19/2022.
//
#include <iostream>
#ifndef HELLO_THERE_EMPLOYEE_H
#define HELLO_THERE_EMPLOYEE_H

using namespace std;
class Employee
{
    public:
        int age;
        string name;
    private:
        int salary;
    public:
        Employee& operator=(const Employee& rhs);
        Employee& operator*=(int rhs)
        {
            return *this;
        }
        void swap(Employee& rhs);

};


#endif //HELLO_THERE_EMPLOYEE_H
