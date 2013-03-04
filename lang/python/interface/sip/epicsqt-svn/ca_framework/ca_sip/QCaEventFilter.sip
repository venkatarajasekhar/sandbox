class QCaInstalledFiltersListItem {

%TypeHeaderCode
#include <QCaEventFilter.h>
%End

  public:
    QCaInstalledFiltersListItem( QObject* eventObjectIn );
    /// QObject that an event filter has been added to
    QObject* eventObject;
    /// Count of how many QCaObjects expect the event filter to be on the QObject
    long referenceCount;
};

/*!
    This class allows instances of QCaObject to recieve events posted to them by foriegn CA threads.
    Each event recipient creates an instance of this class. This class, however, manages only a single
    event filter for all instances of itself.
*/

class QCaEventFilter : QObject {

%TypeHeaderCode
#include <QCaEventFilter.h>
%End

  public:
    /// Add a fitler to an object
    void addFilter( QObject* objectIn );
    /// Remove an event filter from an object
    void deleteFilter( QObject* objectIn );
    /// Event filter added to a QObject
    bool eventFilter( QObject *watched, QEvent *e );

};
