class UserMessage : QObject
{

%TypeHeaderCode
#include <UserMessage.h>
%End

    public:
      UserMessage();
      ~UserMessage();

    void setup( QObject* statusMessageConsumer,                 // Setup the signal / slot connections required to present messages to the user
                QObject* warningMessageConsumer,
                QObject* errorMessageConsumer );

    void setup( QObject* generalMessageConsumer );              // Setup the signal / slot connections required to present messages to the user

    void sendStatusMessage( QString message );                  // Send a status message to the user
    void sendStatusMessage( QString message, QString source );  // Send a status message to the user including a string identifying the source of the message

    void sendWarningMessage( QString message );                 // Send a warning message to the user
    void sendWarningMessage( QString message, QString source ); // Send a warning message to the user including a string identifying the source of the message

    void sendErrorMessage( QString message );                   // Send an error message to the user
    void sendErrorMessage( QString message, QString source );   // Send an error message to the user including a string identifying the source of the message

signals:
    void statusMessage( QString message );                      // Signal a status message
    void warningMessage( QString message );                     // Signal a warning message
    void errorMessage( QString message );                       // Signal an error message

    void generalMessage( QString message );                     // Signal a message (emitted for status, warning, and error

   private:
      // copy constructor
      // UserMessage(const UserMessage &);
};
