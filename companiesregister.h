#ifndef COMPANIESREGISTER_H
#define COMPANIESREGISTER_H
#include <QList>
#include <QString>

class iCompany;

class CompaniesRegister
{
public:
    static CompaniesRegister& instance();
    void addCompany(iCompany* company);
    void removeCompany(iCompany* company);
    int getRegisterSize();
    iCompany getCompany(int ix);
    ~CompaniesRegister();

private:
    CompaniesRegister();
    static QList<iCompany> register_;
};

#endif // COMPANIESREGISTER_H
