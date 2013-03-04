class QCaIntegerFormatting {

%TypeHeaderCode
#include <QCaIntegerFormatting.h>
%End

public:

    // Construction
    QCaIntegerFormatting();

    //===============================================
    // Main functions of this class:
    //   - Format a double based on a value
    //   - Translate a double and generate a value
    //===============================================
    long formatInteger( const QVariant &value );
    QVariant formatValue( const long &integerValue, generic::generic_types valueType );

    // Functions to configure the formatting
    void setRadix( unsigned int radix );

    // Functions to read the formatting configuration
    unsigned int getPrecision();
    unsigned int getRadix();

  private:
    // Type specific conversion functions
    long formatFromFloating( const QVariant &value );
    long formatFromInteger( const QVariant &value );
    long formatFromUnsignedInteger( const QVariant &value );
    long formatFromString( const QVariant &value );
    long formatFromTime( const QVariant &value );

    // Error reporting
    long formatFailure( QString message );

};
