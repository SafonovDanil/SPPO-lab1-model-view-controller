#ifndef CompanyType_1_H
#define CompanyType_1_H
#include "abstractcompany.h"



class CompanyType_1: public AbstractCompany
{
public:

    CompanyType_1();
    CompanyType_1(const QString& companyName, QList<QString> &ownersList, double income, double area, int employeesNumber);
    double getTax() override;
    COMPANY_TYPE getCompanyType() override;
    ~CompanyType_1() = default;
};

#endif // COMPANYTYPE_1_H
