#include "abstractcompany.h"

AbstractCompany::AbstractCompany(QString companyName, QList<QString> ownersList, double income, double area, int numberOfEmployees)
{
    companyName_ = companyName;
    ownersList_ = ownersList;
    income_ = income;
    area_ = area;
    numberOfEmployees_ = numberOfEmployees;
}

void AbstractCompany::setCompanyName(QString companyName)
{
    companyName_ = companyName;
}

void AbstractCompany::setOwnersList (QList<QString> ownersList)
{
    ownersList_ = ownersList;
}

void AbstractCompany::setIncome(double income)
{
    income_ = income;
}

void AbstractCompany::setArea(double area)
{
    area_ = area;
}

void AbstractCompany::setNumberOfEmployees(int numberOfEmployees)
{
    numberOfEmployees_ = numberOfEmployees;
}

QString AbstractCompany::getCompanyName()
{
    return companyName_;
}

QList<QString> AbstractCompany::getOwnersList()
{
    return ownersList_;
}

double AbstractCompany::getIncome()
{
    return income_;
}

double AbstractCompany::getArea()
{
    return area_;
}

int AbstractCompany::getNumberOfEmployees()
{
    return numberOfEmployees_;
}
