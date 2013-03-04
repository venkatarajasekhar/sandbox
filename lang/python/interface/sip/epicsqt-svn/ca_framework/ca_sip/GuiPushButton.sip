class GuiPushButton : QPushButton {

%TypeHeaderCode
#include <GuiPushButton.h>
%End

  public:
    GuiPushButton( QWidget *parent /TransferThis/ = 0 );

    QString variableNameSubstitutions;
    ASguiForm::creationOptions creationOption;

    // Property convenience functions

    // GUI name
    void setGuiName( QString guiName );
    QString getGuiName();

    // Qt Designer Properties Creation options
    void setCreationOption( ASguiForm::creationOptions creationOption );
    ASguiForm::creationOptions getCreationOption();

    // Qt Designer Properties - variable substitutions Example: SECTOR=01 will result in any occurance of $SECTOR in variable name being replaced with 01.
    // Note, unlike most objects with a variable name substitions, changes to this property do not take immediate effect, so the normal code which waits
    // for the user to finish typing, then propogates the substitutions is not required. the substitutions are simply used next time the button is pushed.
    void    setVariableNameSubstitutions( QString variableNameSubstitutions );
    QString getVariableNameSubstitutions();


  public slots:
    void userClicked();
    void onGeneralMessage( QString message );

    void requestEnabled( const bool& state );


  signals:
    void newGui( QString guiName, QString substitutions, ASguiForm::creationOptions creationOption );

  private:
    void updateToolTip ( const QString & toolTip );

};
