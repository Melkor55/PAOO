/*

*/
#include "Company.hpp"

void function13()
{
    //  functia createCompany este ipotetica, practic este o functie care ar apela(more or less) Constructorul Clasei Company
    std::tr1::shared_ptr<Company> company1(createCompany());  // company1 points to the object returned by createCompany()

    std::tr1::shared_ptr<Company> company2(company1);   //  company2 points to company1 which points to the 
                                                            //  result from createCompany() so both point to the same object            
    company1 = company2;    //  both still point to the object
}

void function13_2()
{
    std::auto_ptr<Company> company1(createCompany()); // company1 points to the object returned from createCompany()

    std::auto_ptr<Company> company2(company1); // company2 now points to the object returned by createCompany but
                                                    // company1 becomes NULL, so tehnically the object is being passed
company1 = company2; // now company1 points to the object returned by createCompany and company2 is NULL 
                        //  so the right argument always becomes discarded as the left one takes the refference 
}