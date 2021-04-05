#include "companytype_2.h"



CompanyType_2::CompanyType_2()
{
}


CompanyType_2::CompanyType_2(const QString& companyName, QList<QString>& ownersList, double income, double area, int numberOfEmployees):AbstractCompany(companyName, ownersList, income, area, numberOfEmployees)
{
}


double CompanyType_2::getTax()
{
    return (income_*numberOfEmployees_*2*area_ /100000);
}

CompanyType_2::COMPANY_TYPE CompanyType_2::getCompanyType()
{
    return COMPANY_TYPE_2;
}
