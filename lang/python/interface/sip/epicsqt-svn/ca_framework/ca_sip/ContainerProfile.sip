//sip class QCaWidget;

class WidgetRef
{

%TypeHeaderCode
#include <ContainerProfile.h>
%End

    public:
        WidgetRef( QCaWidget* refIn );
        ~WidgetRef();
        QCaWidget* getRef();

};

class ContainerProfile
{

%TypeHeaderCode
#include <ContainerProfile.h>
%End

public:
    ContainerProfile();    // Construction. Sets up local copies of any profile defined by setupProfile() in an earlier instance
    ~ContainerProfile();   // Destruction
    void init();

    void setupProfile( QObject* statusMessageConsumerIn,
                       QObject* errorMessageConsumerIn,
                       QObject* warningMessageConsumerIn,
                       QObject* guiLaunchConsumerIn,
                       QString pathIn,
                       QString macroSubstitutionsIn,
                       bool interactiveIn );      // Setup an environmental profile for all QcaWidgets to use on creation
    QObject* replaceGuiLaunchConsumer( QObject* newGuiLaunchConsumerIn );  // Override the current GUI launch consumer

    void addMacroSubstitutions( QString macroSubstitutionsIn ); // Add another set of macro substitutions to those setup by setupProfile(). Used as sub forms are created
    void removeMacroSubstitutions();                            // Remove the last set of macro substitutions added by addMacroSubstitutions(). Used after sub forms are created

    QObject* getStatusMessageConsumer();   // Get the local copy of the object that will recieve status message events
    QObject* getWarningMessageConsumer();  // Get the local copy of the object that will recieve warning message events
    QObject* getErrorMessageConsumer();    // Get the local copy of the object that will recieve error message events
    QObject* getGuiLaunchConsumer();       // Get the local copy of the object that will recieve GUI launch requests
    QString getPath();                     // Get the local copy of the path used for file operations
    QString getMacroSubstitutions();       // Get the local copy of the variable name macro substitutions
    bool isProfileDefined();               // Returns true if a profile has been setup by setupProfile()
    bool isInteractive();                  // Returns true if the profile was set up by an application where a user is interacting with properties such as variable names

    void addContainedWidget( QCaWidget* containedWidget );  // Adds a reference to the list of QCa widgets created with this profile
    QCaWidget* getNextContainedWidget();                    // Returns a reference to the next QCa widgets in the list of QCa widgets created with this profile

    void releaseProfile();                                  // Clears the context setup by setupProfile(). Local data in all instances is still valid

};
