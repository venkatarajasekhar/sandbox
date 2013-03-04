class QCaSpinBox : QSpinBox, QCaWidget {

%TypeHeaderCode
#include <QCaSpinBox.h>
%End

  public:
    QCaSpinBox( QWidget *parent /TransferThis/ = 0 );
    QCaSpinBox( const QString& variableName, QWidget *parent /TransferThis/ = 0 );

    bool isEnabled() const;
    void setEnabled( bool state );

    // Property convenience functions

    // Variable name and substitutions
    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    // subscribe
    void setSubscribe( bool subscribe );
    bool getSubscribe();

    // variable as tool tip
    void setVariableAsToolTip( bool variableAsToolTip );
    bool getVariableAsToolTip();


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
