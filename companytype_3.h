#ifndef CompanyType_3_H
#define CompanyType_3_H
#include "abstractcompany.h"


class CompanyType_3: public AbstractCompany
{
public:
    CompanyType_3() = default;
    CompanyType_3(QString name, QList<QString> &owners, double income, double area, int employeesNumber);
    double getTax() override;
    COMPANY_TYPE getCompanyType() override;
    ~CompanyType_3() = default;
};

#endif // COMPANYTYPE_3_H
