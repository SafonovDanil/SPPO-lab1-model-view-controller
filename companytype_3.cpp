#include "companytype_3.h"


CompanyType_3::CompanyType_3()
{
}


CompanyType_3::CompanyType_3(const QString& companyName, QList<QString>& ownersList, double income, double area, int numberOfEmployees):AbstractCompany(companyName, ownersList, income, area, numberOfEmployees)
{
}

double CompanyType_3::getTax()
{
    return(income_*area_/1000);
}

CompanyType_3::COMPANY_TYPE CompanyType_3::getCompanyType()
{
    return COMPANY_TYPE_3;
}
