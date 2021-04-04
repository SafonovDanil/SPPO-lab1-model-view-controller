#include "abstractcompany.h"

AbstractCompany::AbstractCompany(QString companyName, QList<QString> ownersList, double income, double area, int numberOfEmployees)
{
    if(!companyName_.isEmpty())
        companyName_ = companyName;
    else
        throw QString("empty company name");

    if(!ownersList_.isEmpty())
        ownersList_ = ownersList;
    else
        throw QString("empty owners list");

    income_ = income;

    if(area>=0)
        area_ = area;
    else
        throw QString("negative area");

    if(numberOfEmployees>=0)
        numberOfEmployees_ = numberOfEmployees;
    else
        throw QString("negative number of employees");
}

void AbstractCompany::setCompanyName(QString companyName)
{
    if(!companyName_.isEmpty())
        companyName_ = companyName;
    else
        throw QString("empty company name");
}

void AbstractCompany::setOwnersList (QList<QString> ownersList)
{
    if(!ownersList_.isEmpty())
        ownersList_ = ownersList;
    else
        throw QString("empty owners list");
}

void AbstractCompany::setIncome(double income)
{
    income_ = income;
}

void AbstractCompany::setArea(double area)
{
    if(area>=0)
        area_ = area;
    else
        throw QString("negative area");
}

void AbstractCompany::setNumberOfEmployees(int numberOfEmployees)
{
    if(numberOfEmployees>=0)
        numberOfEmployees_ = numberOfEmployees;
    else
        throw QString("negative number of employees");
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
