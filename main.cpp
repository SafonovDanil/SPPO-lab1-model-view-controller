#include <QCoreApplication>

#include <QString>
#include <QList>
#include <iostream>

#include "companiesregister.h"
#include "companytype_1.h"
#include "companytype_2.h"
#include "companytype_3.h"



void printCompaniesInfoByType(ICompany::COMPANY_TYPE companyType)
{
    CompaniesRegister& companiesRegister = CompaniesRegister::instance();
    std::cout << "Info about TYPE" << companyType+1 << " companies:\n";
    ICompany * company = nullptr;
    for(int i = 0, size = companiesRegister.getRegisterSize(); i < size; i++)
    {
        company = companiesRegister.getCompany(i);
        if(company->getCompanyType() == companyType)
        {
            std::cout << "company name: " << company->getCompanyName().toStdString() << std::endl;
            QList<QString> owners = company->getOwnersList();
            std::cout << "owners list: ";
            while(!owners.isEmpty())
            {
                std::cout << owners.front().toStdString() << ", ";
                owners.pop_front();
            }
            std::cout << std::endl << "income: " << company->getIncome() << std::endl;
            std::cout << "tax: " << company->getTax() << std::endl;
            std::cout << "area: " << company->getArea() << std::endl;
            std::cout << "number of employees: " << company->getNumberOfEmployees() << std::endl;
            std::cout << std::endl << std::endl;
        }
    }
}

void printCompaniesInfoByOwner(QString owner)
{
    CompaniesRegister& companiesRegister = CompaniesRegister::instance();
    ICompany* company = nullptr;
    int size = companiesRegister.getRegisterSize();

    std::cout << owner.toStdString() << " owns: ";
    for(int i = 0; i < size; i++)
    {
        company = companiesRegister.getCompany(i);
        if(company->getOwnersList().contains(owner))
        {
            std::cout << company->getCompanyName().toStdString() << ", ";
        }
    }
    std::cout << "." <<std::endl;
}

void printAverageValuesForAllTypes()
{
    CompaniesRegister& companiesRegister = CompaniesRegister::instance();
    ICompany* company = nullptr;
    int size = companiesRegister.getRegisterSize();
    int companiesCount[3] = {0, 0, 0};
    double incomeCount[3] = {0, 0, 0};
    double areaCount[3] = {0, 0, 0};
    double taxCount[3] = {0, 0, 0};
    double numberOfEmployeesCount[3] = {0, 0, 0};
    for(int i = 0; i < size; i++)
    {
        company = companiesRegister.getCompany(i);
        companiesCount[company->getCompanyType()]++;
        incomeCount[company->getCompanyType()] += company->getIncome();
        areaCount[company->getCompanyType()] += company->getArea();
        taxCount[company->getCompanyType()] += company->getTax();
        numberOfEmployeesCount[company->getCompanyType()] += company->getNumberOfEmployees();
    }

    std::cout << "average values for companies of COMPANY_TYPE_1 :" << std::endl;
    std::cout << "income:    " << incomeCount[ICompany::COMPANY_TYPE_1]/companiesCount[ICompany::COMPANY_TYPE_1] << std::endl;
    std::cout << "tax:       " << taxCount[ICompany::COMPANY_TYPE_1]/companiesCount[ICompany::COMPANY_TYPE_1] << std::endl;
    std::cout << "area:      " << areaCount[ICompany::COMPANY_TYPE_1]/companiesCount[ICompany::COMPANY_TYPE_1] << std::endl;
    std::cout << "employees: " << numberOfEmployeesCount[ICompany::COMPANY_TYPE_1]/companiesCount[ICompany::COMPANY_TYPE_1] << std::endl;
    std::cout << std::endl << std::endl;

    std::cout << "average values for companies of COMPANY_TYPE_2 :" << std::endl;
    std::cout << "income:    " << incomeCount[ICompany::COMPANY_TYPE_2]/companiesCount[ICompany::COMPANY_TYPE_2] << std::endl;
    std::cout << "tax:       " << taxCount[ICompany::COMPANY_TYPE_2]/companiesCount[ICompany::COMPANY_TYPE_2] << std::endl;
    std::cout << "area:      " << areaCount[ICompany::COMPANY_TYPE_2]/companiesCount[ICompany::COMPANY_TYPE_2] << std::endl;
    std::cout << "employees: " << numberOfEmployeesCount[ICompany::COMPANY_TYPE_2]/companiesCount[ICompany::COMPANY_TYPE_2] << std::endl;
    std::cout << std::endl << std::endl;

    std::cout << "average values for companies of COMPANY_TYPE_3 :" << std::endl;
    std::cout << "income:    " << incomeCount[ICompany::COMPANY_TYPE_3]/companiesCount[ICompany::COMPANY_TYPE_3] << std::endl;
    std::cout << "tax:       " << taxCount[ICompany::COMPANY_TYPE_3]/companiesCount[ICompany::COMPANY_TYPE_3] << std::endl;
    std::cout << "area:      " << areaCount[ICompany::COMPANY_TYPE_3]/companiesCount[ICompany::COMPANY_TYPE_3] << std::endl;
    std::cout << "employees: " << numberOfEmployeesCount[ICompany::COMPANY_TYPE_3]/companiesCount[ICompany::COMPANY_TYPE_3] << std::endl;
    std::cout << std::endl << std::endl;
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    try
    {
        CompaniesRegister& companiesRegister = CompaniesRegister::instance();

        QList<QString> ownersOfCompany1;
        QList<QString> ownersOfCompany2;
        QList<QString> ownersOfCompany3;
        QList<QString> ownersOfCompany4;

        ownersOfCompany1.push_back(QString("owner 1,2"));
        ownersOfCompany1.push_back(QString("owner 1"));

        ownersOfCompany2.push_back(QString("owner 2,3"));
        ownersOfCompany2.push_back(QString("owner 1,2"));

        ownersOfCompany3.push_back(QString("owner 2,3"));
        ownersOfCompany3.push_back(QString("owner 3"));
        ownersOfCompany3.push_back(QString("owner 3,4"));

        ownersOfCompany4.push_back(QString("owner 3,4"));
        ownersOfCompany4.push_back(QString("owner 4"));


       companiesRegister.addCompany(new CompanyType_1(QString("company1_type1"),ownersOfCompany1,100,20,3));
       companiesRegister.addCompany(new CompanyType_2(QString("company2_type2"),ownersOfCompany2,1100,100,20));
       companiesRegister.addCompany(new CompanyType_3(QString("company3_type3"),ownersOfCompany3,10000,150,30));
       companiesRegister.addCompany(new CompanyType_1(QString("company4_type4"),ownersOfCompany4,5000,25,4));

        printCompaniesInfoByType(ICompany::COMPANY_TYPE_1);
        std::cout << std::endl;
        printCompaniesInfoByType(ICompany::COMPANY_TYPE_2);
        std::cout << std::endl;
        printCompaniesInfoByType(ICompany::COMPANY_TYPE_3);
        std::cout << std::endl;

        printCompaniesInfoByOwner("owner 1,2");
        std::cout << std::endl;

        printCompaniesInfoByOwner("owner 3,4");
        std::cout << std::endl;

        printAverageValuesForAllTypes();


    }
    catch (QString errorMessage)
    {
        std::cout << errorMessage.toStdString() << std::endl;
    }

    return a.exec();
}
