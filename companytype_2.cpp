#include "companytype_2.h"

double CompanyType_2::getTax()
{
    return (income_*numberOfEmployees_*2*area_ /100);
}

CompanyType_2::COMPANY_TYPE CompanyType_2::getCompanyType()
{
    return COMPANY_TYPE_2;
}
