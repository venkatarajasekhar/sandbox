#ifndef INCREMENT_H
#define INCREMENT_H


class Increment
{
    public:
        Increment(int c=0, int i=1);                        // default constructor

        void addIncrement()
        {
            count += increment;
        }

        void print() const;


    private:
        int count;
        const int increment;                                // const variable, but different for each instance!
        //const int constVar = 12;                          // const variable, initialized for each instance FORBIDDEN !!!
        static const int constVar3 = 12;                    // STATIC const variable, initialized only once
        int count2;
};

#endif
