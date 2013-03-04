// Support class used to build the localEnumeration list in the QCaStringFormatting class
class localEnumerationItem {

%TypeHeaderCode
#include <QCaStringFormatting.h>
%End

    public:
    int value;                  // This data value...
    QString text;               // ... is translated to this text
};

class QCaStringFormatting {

%TypeHeaderCode
#include <QCaStringFormatting.h>
%End

  public:

    // Formatting enumerations
    enum formats { FORMAT_DEFAULT, FORMAT_FLOATING, FORMAT_INTEGER, FORMAT_UNSIGNEDINTEGER, FORMAT_TIME, FORMAT_LOCAL_ENUMERATE };

    //sip .../ca_framework//data/include/QCaStringFormatting.h:56: error: 'QTextStream' has not been declared
    //sip .../ca_framework//data/include/QCaStringFormatting.h:57: error: 'QTextStream' has not been declared
    //sip .../ca_framework//data/include/QCaStringFormatting.h:58: error: 'QTextStream' has not been declared    
    //sip enum notations { NOTATION_FIXED,
    //sip                  NOTATION_SCIENTIFIC,
    //sip                  NOTATION_AUTOMATIC};    // WARNING keep these enumerations the same as QTextStream

    // Construction
    QCaStringFormatting();

    //===============================================
    // Main functions of this class:
    //   - Format a string based on a value
    //   - Translate a string and generate a value
    //===============================================
    QString formatString( const QVariant& value );
    QVariant formatValue( const QString& text );


    // Functions to set up formatting information from the database
    void setDbEgu( QString egu );      /// Units to be added (or removed) from the formatted string if 'addUnits' flag is set
    void setDbEnumerations( QStringList enumerations );
    void setDbPrecision( unsigned int dbPrecisionIn );
    void setDbVariableIsStatField( bool isStatField );

    // Functions to configure the formatting
    void setPrecision( unsigned int precision );
    void setUseDbPrecision( bool useDbPrecision );
    void setLeadingZero( bool leadingZero );
    void setTrailingZeros( bool trailingZeros );
    void setFormat( formats format );
    void setRadix( unsigned int radix );
    //sip Problem with notations and QTextStream (.h)
    //sip void setNotation( notations notation );
    void setAddUnits( bool addUnits );
    void setLocalEnumeration( QString/*localEnumerationList*/ localEnumerationIn );

    // Functions to read the formatting configuration
    unsigned int getPrecision();
    bool         getUseDbPrecision();
    bool         getLeadingZero();
    bool         getTrailingZeros();
    formats      getFormat();
    unsigned int getRadix();
    //sip Problem with notations and QTextStream (.h)
    //sip notations    getNotation();
    bool         getAddUnits();
    QString      getLocalEnumeration();

  private:
    // Type specific conversion functions
    void formatFromFloating( const QVariant& value );
    void formatFromInteger( const QVariant& value, const bool doLocalEnumeration );
    void formatFromUnsignedInteger( const QVariant& value );
    void formatFromTime( const QVariant& value );

    // Error reporting
    void formatFailure( QString message );

};
