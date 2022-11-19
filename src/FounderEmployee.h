//
// Created by Melkor on 11/19/2022.
//

#ifndef HELLO_THERE_FOUNDEREMPLOYEE_H
#define HELLO_THERE_FOUNDEREMPLOYEE_H


#include "Employee.h"

class FounderEmployee : public Employee
{
    public:
    FounderEmployee(const FounderEmployee& rhs);
    FounderEmployee& operator=(const FounderEmployee& rhs);

    private:
        bool founder;
};


#endif //HELLO_THERE_FOUNDEREMPLOYEE_H
