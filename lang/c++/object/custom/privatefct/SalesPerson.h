#ifndef SALESPERSON_H
#define SALESPERSON_H

class SalesPerson
{
    public:
        static const int monthsPerYear = 12;
        SalesPerson();
        void getSalesFromUser();
        void setSales(int, double);                     
        void printAnnualSales();
    private:
        double totalAnnualSales();
        double sales[monthsPerYear];
};

#endif
