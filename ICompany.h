#ifndef ICOMPANY_H
#define ICOMPANY_H
#include <QString>

class ICompany
{
public:
    enum COMPANY_TYPE
    {
        COMPANY_TYPE_1,
        COMPANY_TYPE_2,
        COMPANY_TYPE_3
    };
    ICompany() = default;
    virtual void setCompanyName(QString CompanyName) = 0;
    virtual void setOwnersList(QList<QString> ownersList) = 0;
    virtual void setIncome(double income) = 0;
    virtual void setArea(double area) = 0;
    virtual void setNumberOfEmployees(int n) = 0;

    virtual QString getCompanyName() = 0;
    virtual QList<QString> getOwnersList() = 0;
    virtual double getIncome() = 0;
    virtual double getArea() = 0;
    virtual int getNumberOfEmployees() = 0;

    virtual COMPANY_TYPE getCompanyType() = 0;
    virtual double getTax() = 0;
};


#endif // ICOMPANY_H
