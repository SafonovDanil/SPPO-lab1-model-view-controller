#ifndef CompanyType_1_H
#define CompanyType_1_H
#include "abstractcompany.h"


class CompanyType_1: public AbstractCompany
{
public:
    CompanyType_1() = default;
    CompanyType_1(QString name, QList<QString> &owners, double income, double area, int employeesNumber);
    double getTax() override;
    COMPANY_TYPE getCompanyType() override;
    ~CompanyType_1() = default;
};

#endif // COMPANYTYPE_1_H
