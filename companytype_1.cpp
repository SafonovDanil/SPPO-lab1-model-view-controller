#include "companytype_1.h"


CompanyType_1::CompanyType_1()
{
}


CompanyType_1::CompanyType_1(const QString& companyName, QList<QString>& ownersList, double income, double area, int numberOfEmployees):AbstractCompany(companyName, ownersList, income, area, numberOfEmployees)
{
}


double CompanyType_1::getTax()
{
    return( income_*numberOfEmployees_*2/1000);
}

CompanyType_1::COMPANY_TYPE CompanyType_1::getCompanyType()
{
    return COMPANY_TYPE_1;
}
