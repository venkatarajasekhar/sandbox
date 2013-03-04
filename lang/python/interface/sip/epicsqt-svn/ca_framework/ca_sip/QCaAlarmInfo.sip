class QCaAlarmInfo
{

%TypeHeaderCode
#include <QCaAlarmInfo.h>
%End

public:
    QCaAlarmInfo();
    QCaAlarmInfo( unsigned short statusIn, unsigned short severityIn );

    QString statusName();       // Return the name of the current alarm state
    QString severityName();     // Return the name of the current alarm severity
    bool isInAlarm();           // Return true if there is an alarm
    bool isMinor();             // Return true if there is a minor alarm
    bool isMajor();             // Return true if there is a major alarm
    bool isInvalid();           // Return true if there is an invalid alarm
    QString style();            // Return a style string to update the widget's look to reflect the current alarm state
//sip    static QCAALARMINFO_SEVERITY getInvalidSeverity(); // Return a severity that will not match any valid severity
//sip    QCAALARMINFO_SEVERITY getSeverity(); // Return the current severity

};
