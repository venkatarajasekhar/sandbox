class QCaComboBox : QComboBox, QCaWidget {

%TypeHeaderCode
#include <QCaComboBox.h>
%End

  public:
    QCaComboBox( QWidget *parent /TransferThis/ = 0 );
    QCaComboBox( const QString& variableName, QWidget *parent /TransferThis/ = 0 );

    bool isEnabled() const;
    void setEnabled( bool state );

    // Property convenience functions

    // Variable Name and variable substitutions
    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    // subscribe
    void setSubscribe( bool subscribe );
    bool getSubscribe();

    // variable as tool tip
    void setVariableAsToolTip( bool variableAsToolTip );
    bool getVariableAsToolTip();

    // use database enumerations
    void setUseDbEnumerations( bool useDbEnumerations );
    bool getUseDbEnumerations();

  protected:
    void establishConnection( unsigned int variableIndex );

  public slots:
    void requestEnabled( const bool& state );

  signals:
    void dbValueChanged( const qlonglong& out );

  private:
    void setup();
    qcaobject::QCaObject* createQcaItem( unsigned int variableIndex );
    void updateToolTip ( const QString & toolTip );

};
