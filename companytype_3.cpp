#include "companytype_3.h"

double CompanyType_3::getTax()
{
    return(income_*area_/10);
}

CompanyType_3::COMPANY_TYPE CompanyType_3::getCompanyType()
{
    return COMPANY_TYPE_3;
}
