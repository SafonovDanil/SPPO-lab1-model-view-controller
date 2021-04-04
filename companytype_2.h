#ifndef CompanyType_2_H
#define CompanyType_2_H
#include "abstractcompany.h"


class CompanyType_2: public AbstractCompany
{
public:
    CompanyType_2() = default;
    CompanyType_2(QString name, QList<QString> &owners, double income, double area, int employeesNumber);
    double getTax() override;
    COMPANY_TYPE getCompanyType() override;
    ~CompanyType_2() = default;
};

#endif // COMPANYTYPE_2_H
