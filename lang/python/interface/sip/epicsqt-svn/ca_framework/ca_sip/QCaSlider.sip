class QCaSlider : QSlider, QCaWidget {

  public:
    QCaSlider( QWidget *parent /TransferThis/ = 0 );
    QCaSlider( const QString& variableName, QWidget *parent /TransferThis/ = 0 );

    bool isEnabled() const;
    void setEnabled( bool state );

    // Property convenience functions

    // Variable name and substitutions
    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    // write on change
    void setWriteOnChange( bool writeOnChange );
    bool getWriteOnChange();

    // subscribe
    void setSubscribe( bool subscribe );
    bool getSubscribe();

    // variable as tool tip
    void setVariableAsToolTip( bool variableAsToolTip );
    bool getVariableAsToolTip();

    void requestEnabled( const bool& state );

  protected:
    void establishConnection( unsigned int variableIndex );


  signals:
    void dbValueChanged( const qlonglong& out );

  private:
    void setup();
    qcaobject::QCaObject* createQcaItem( unsigned int variableIndex );
    void updateToolTip ( const QString & toolTip );

};
