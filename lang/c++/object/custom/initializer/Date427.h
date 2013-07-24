#ifndef DATE_H
#define DATE_H


class Date
{
    public:
        static const int monthsPerYear = 12;                        // static const is initialized directly 9no need of initializer
        Date(int = 1, int = 1, int = 1900);                         // default constructor
        void print() const;                                         // need to be const for const object to call this !
        ~Date();                                                    // provided to confirm destruction order!

    private:
        int month;
        int day;
        int year;

        int checkDay(int ) const;
};

#endif
