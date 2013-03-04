class QCaLineEdit : QLineEdit, QCaWidget {

  public:
    QCaLineEdit( QWidget *parent /TransferThis/ = 0 );
    QCaLineEdit( const QString &variableName, QWidget *parent /TransferThis/ = 0 );

    bool isEnabled() const;
    void setEnabled( bool state );

    // Property convenience functions

    // Variable Name and substitution
    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    // write on lose focus
    void setWriteOnLoseFocus( bool writeOnLoseFocus );
    bool getWriteOnLoseFocus();

    // write on enter
    void setWriteOnEnter( bool writeOnEnter );
    bool getWriteOnEnter();

    // subscribe
    void setSubscribe( bool subscribe );
    bool getSubscribe();

    // variable as tool tip
    void setVariableAsToolTip( bool variableAsToolTip );
    bool getVariableAsToolTip();

    // confirm write
    void setConfirmWrite( bool confirmWrite );
    bool getConfirmWrite();

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

  //public slots:
    void requestEnabled( const bool& state );

protected:
    void establishConnection( unsigned int variableIndex );


  signals:
    void dbValueChanged( const QString& out );

  private:
    void setup();
    qcaobject::QCaObject* createQcaItem( unsigned int variableIndex );
    void updateToolTip ( const QString & toolTip );
    void writeValue( QCaString *qca, QString newValue );
};
