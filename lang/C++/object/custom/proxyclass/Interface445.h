
class Implementation;                                   // forward class declaration

class Interface
{
    public:
        Interface(int);
        void setValue(int);                             // same public interface
        int getValue() const;                           // class Implementation has
        ~Interface();

    private:

        Implementation *ptr;                            // requires 'class Implementation' above
};
