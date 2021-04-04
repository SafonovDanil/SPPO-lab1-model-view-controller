#include "companiesregister.h"
#include <QList>
#include <QString>
class iCompany;
//public

CompaniesRegister& CompaniesRegister:: instance()
{
    CompaniesRegister register;
    return register;
}
void addCompany(iCompany* company)
{
    if(!register_.contains(company))
        register_.push_back(company);
}
void removeCompany(iCompany* company);
int getRegisterSize();
iCompany getCompany(int ix);
~CompaniesRegister();



CompaniesRegister::CompaniesRegister()
{

}
