#ifndef ABSTRACTCOMPANY_H
#define ABSTRACTCOMPANY_H
#include <QString>
#include <QList>

#include "ICompany.h"

class AbstractCompany:public ICompany
{
public:

   ;
    AbstractCompany() = default;
    AbstractCompany(QString companyName, QList<QString> ownersList, double income, double area, int numberOfEmployees);

    virtual void setCompanyName(QString companyName);
    virtual void setOwnersList(QList<QString> ownersList);
    virtual void setIncome(double income);
    virtual void setArea(double area);
    virtual void setNumberOfEmployees(int numberOfEmployees);

    virtual QString getCompanyName();
    virtual QList<QString> getOwnersList();
    virtual double getIncome();
    virtual double getArea();
    virtual int getNumberOfEmployees();

    virtual COMPANY_TYPE getCompanyType() = 0;
    virtual double getTax() = 0;

    virtual ~AbstractCompany() = default;

protected:
    QString companyName_;
    QList<QString> ownersList_;
    double income_;
    double area_;
    int numberOfEmployees_;

};

#endif // ABSTRACTCOMPANY_H
