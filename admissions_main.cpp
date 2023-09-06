#include <iostream>

#include "admissions.h"

int main()
{
    StudentDetails x;
    priorAcademicDetails y;
    FinancialAid z;
    double fees = 800000;
    x.inputDetails();
    if (y.eligibilityByMarks() && y.eligibilityByExtracurriculars())
        std::cout << "You are eligible to apply to KREA university. Your application will be reviewed and the result will be given to you at a later date." << std::endl;
    else
        exit(0); 
    z.checkFinAidEligibility(x);
    std::cout << "Your payable fees is: " << ((100.0 - z.FinAidPercent)/100 * fees) << std::endl;

    return 0;
}