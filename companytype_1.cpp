#include "companytype_1.h"

double CompanyType_1::getTax()
{
    return( income_*numberOfEmployees_*2/10);
}

CompanyType_1::COMPANY_TYPE CompanyType_1::getCompanyType()
{
    return COMPANY_TYPE_1;
}
