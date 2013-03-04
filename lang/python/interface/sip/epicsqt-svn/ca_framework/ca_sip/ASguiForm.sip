class ASguiForm : QScrollArea
{

%TypeHeaderCode
#include <ASguiForm.h>
%End

    public:

        ASguiForm( QWidget* parent /TransferThis/ = 0 );
        ASguiForm( const QString& uifileNameIn, QWidget* parent /TransferThis/ = 0 );
        void commonInit( const bool alertIfUINoFoundIn );

        ~ASguiForm();

        QString getASGuiTitle();        // Get the title to be used as the window or form title.
        QString getGuiFileName();       // Get the UI file name used to build the gui

        enum creationOptions { CREATION_OPTION_OPEN, CREATION_OPTION_NEW_TAB, CREATION_OPTION_NEW_WINDOW };

        // Property convenience functions

        // Variable name related properties (for a form no variable name will be set, only the substitutions that will be passed on to widgets within the form)
        void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

        // UI file name
        void    setUiFileName( QString uiFile );
        QString getUiFileName();

        // Flag indicating form should handle gui form launch requests
        void setHandleGuiLaunchRequests( bool handleGuiLaunchRequests );
        bool getHandleGuiLaunchRequests();

    public slots:
        void requestEnabled( const bool& state );
        void readUiFile();
        void onGeneralMessage( QString message );

    protected:
        void setVariableNameSubstitutions( QString variableNameSubstitutionsIn );

    private:
        void generalMessage( QString message );
};
