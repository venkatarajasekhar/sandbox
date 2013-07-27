class Implementation
{
    public:
        Implementation(int );
        void setValue(int );
        int getValue() const;

    private:
        int value;                              // data that we would like to hide from the client
};
