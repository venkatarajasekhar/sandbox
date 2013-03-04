class CmdPushButton : QPushButton {

%TypeHeaderCode
#include <CmdPushButton.h>
%End

  public:
    CmdPushButton( QWidget *parent /TransferThis/ = 0 );

    // Property convenience functions

    // Program String
    void setProgram( QString program );
    QString getProgram();

    // Arguments String
    void setArguments( QStringList arguments );
    QStringList getArguments();

    // Variable substitutions Example: SECTOR=01 will result in any occurance of $SECTOR in variable name being replaced with 01.
    // Note, unlike most objects with a variable name substitions, changes to this property do not take immediate effect, so the normal code which waits
    // for the user to finish typing, then propogates the substitutions is not required. the substitutions are simply used next time the button is pushed.
    void    setVariableNameSubstitutions( QString variableNameSubstitutions );
    QString getVariableNameSubstitutions();


  public slots:
    void userClicked();

    void requestEnabled( const bool& state );

  private:
    void updateToolTip ( const QString & toolTip );
};
