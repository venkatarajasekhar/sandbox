#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        Time(int = 0, int =0, int = 0);             // constructor (all args have default values ==> default constructor! )


        // mutators !
        Time &setTime(int, int, int);               // set hour, minute, second (with validation!)
        Time &setHour(int);                         // set hour (after validation), return a reference for cascading
        Time &setMinute(int);                       // set minute (after validation), return a reference for cascading
        Time &setSecond (int);                      // set second (after validation), return a reference for cascading

        //accessors (or get function) normaally declared const!
        int getHour() const; 
        int getMinute() const;
        int getSecond() const;

        void printUniversal() const;                // print time in univesal-time format
        void printStandard() const;                 // print time in standard-time dormat
        void printStandardNonConst();               // print time in standard-time dormat

    private:
        int hour;                                   // 0 - 23 (24-h clock format)
        int minute;                                 // 0-59
        int second;                                 // 0-59

        const int usec;
};

#endif
