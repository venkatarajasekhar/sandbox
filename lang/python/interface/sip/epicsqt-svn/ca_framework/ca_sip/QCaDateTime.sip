class QCaDateTime : QDateTime
{

%TypeHeaderCode
#include <QCaDateTime.h>
%End

public:
    QCaDateTime();
    QCaDateTime( QDateTime dt );
//sip?    void operator=( const QCaDateTime& other );
    QCaDateTime( unsigned long seconds, unsigned long nanoseconds );

    QString text();

    unsigned long nSec;
    double floating( QDateTime base );
};
