class QCaFloatingFormatting {

%TypeHeaderCode
#include <QCaFloatingFormatting.h>
%End

  public:

    // Formatting enumerations
    enum formats { FORMAT_e = 'e',   // format as [-]9.9e[+|-]999
                   FORMAT_E = 'E',   // format as [-]9.9E[+|-]999
                   FORMAT_f = 'f',   // format as [-]9.9
                   FORMAT_g = 'g',   // use e or f format, whichever is the most concise
                   FORMAT_G = 'G' }; // use E or f format, whichever is the most concise


    // Construction
    QCaFloatingFormatting();

    //===============================================
    // Main functions of this class:
    //   - Format a double based on a value
    //   - Translate a double and generate a value
    //===============================================
    double formatFloating( const QVariant &value );
    QVector<double> formatFloatingArray( const QVariant &value );
    QVariant formatValue( const double &floatingValue, generic::generic_types valueType );

    // Functions to configure the formatting
    void setPrecision( unsigned int precision );
    void setFormat( formats format );

    // Functions to read the formatting configuration
    unsigned int getPrecision();
    int getFormat();

  private:
    // Private functions to read the formatting configuration
    char getFormatChar();

    // Type specific conversion functions
    double formatFromFloating( const QVariant &value );
    double formatFromInteger( const QVariant &value );
    double formatFromUnsignedInteger( const QVariant &value );
    double formatFromString( const QVariant &value );
    double formatFromTime( const QVariant &value );

    // Common functions
    double formatFloatingNonArray( const QVariant &value );

    // Error reporting
    double formatFailure( QString message );

};
