#include "companiesregister.h"
#include <QList>
#include <QString>
#include <QtAlgorithms>

class AbstractCompany;

CompaniesRegister& CompaniesRegister:: instance()
{
    static CompaniesRegister companiesRegister;
    return companiesRegister;
}

void CompaniesRegister::addCompany(AbstractCompany& company)
{
    if(!register_.contains(company))
        register_.push_back(company);
}

bool CompaniesRegister::removeCompany(AbstractCompany& company)
{
   return(register_.removeOne(company));
}

int CompaniesRegister::getRegisterSize()
{
    return(register_.size());
}

AbstractCompany& CompaniesRegister::getCompany(int i)
{
        return register_[i];
}


CompaniesRegister::~CompaniesRegister()
{
    qDeleteAll(register_);
    register_.clear();
}
