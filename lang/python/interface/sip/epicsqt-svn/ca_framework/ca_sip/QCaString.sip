class QCaString : qcaobject::QCaObject {

%TypeHeaderCode
#include <QCaString.h>
%End


  public:
    QCaString( QString recordName, QObject *eventObject, QCaStringFormatting *stringFormattingIn, unsigned int variableIndexIn );
    QCaString( QString recordName, QObject *eventObject, QCaStringFormatting *stringFormattingIn, unsigned int variableIndexIn, UserMessage* userMessageIn );

  signals:
    void stringChanged( const QString& value, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp, const unsigned int &variableIndex );

  public :
    void writeString( const QString &data );

  private:
    void initialise( QCaStringFormatting* newStringFormat, unsigned int variableIndexIn );

};
