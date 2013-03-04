class QCaPushButton : QPushButton, QCaWidget {

%TypeHeaderCode
#include <QCaPushButton.h>
%End

  public:
    QCaPushButton( QWidget *parent /TransferThis/ = 0 );
    QCaPushButton( const QString& variableName, QWidget *parent /TransferThis/ = 0 );

    bool isEnabled() const;
    void setEnabled( const bool& state );

    // Property convenience functions

    // Variable Name and substitution
    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    // subscribe
    void setSubscribe( bool subscribe );
    bool getSubscribe();

    // variable as tool tip
    void setVariableAsToolTip( bool variableAsToolTip );
    bool getVariableAsToolTip();


    // String formatting properties

    // precision
    void setPrecision( unsigned int precision );
    unsigned int getPrecision();

    // useDbPrecision
    void setUseDbPrecision( bool useDbPrecision );
    bool getUseDbPrecision();

    // leadingZero
    void setLeadingZero( bool leadingZero );
    bool getLeadingZero();

    // trailingZeros
    void setTrailingZeros( bool trailingZeros );
    bool getTrailingZeros();

    // addUnits
    void setAddUnits( bool addUnits );
    bool getAddUnits();

    // format
    void setFormat( QCaStringFormatting::formats format );
    QCaStringFormatting::formats getFormat();

    // radix
    void setRadix( unsigned int radix );
    unsigned int getRadix();

    // notation
    void setNotation( QCaStringFormatting::notations notation );
    QCaStringFormatting::notations getNotation();

    // write on press
    void setWriteOnPress( bool writeOnPress );
    bool getWriteOnPress();

    // write on release
    void setWriteOnRelease( bool writeOnRelease );
    bool getWriteOnRelease();

    // write on click
    void setWriteOnClick( bool writeOnClick );
    bool getWriteOnClick();


    // press value
    void setPressText( QString pressText );
    QString getPressText();

    // release value
    void setReleaseText( QString releaseTextIn );
    QString getReleaseText();

    // click value
    void setClickText( QString clickTextIn );
    QString getClickText();

  public slots:
    void requestEnabled( const bool& state );

  signals:
    void dbValueChanged( const QString& out );

  protected:
    void establishConnection( unsigned int variableIndex );

  private:
    void setup();
    qcaobject::QCaObject* createQcaItem( unsigned int variableIndex  );
    void updateToolTip ( const QString & toolTip );
};
