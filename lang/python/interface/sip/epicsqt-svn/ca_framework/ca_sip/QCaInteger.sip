class QCaInteger : qcaobject::QCaObject {

%TypeHeaderCode
#include <QCaInteger.h>
%End

  public:
    QCaInteger( QString recordName, QObject *eventObject, QCaIntegerFormatting *integerFormattingIn, unsigned int variableIndexIn );
    QCaInteger( QString recordName, QObject *eventObject, QCaIntegerFormatting *integerFormattingIn, unsigned int variableIndexIn, UserMessage* userMessageIn );

  signals:
    void integerChanged( const long& value, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp, const unsigned int& variableIndex );

  public slots:
    void writeInteger( const long &data );

  private:
    void initialise( QCaIntegerFormatting *integerFormattingIn, unsigned int variableIndexIn );
    QCaIntegerFormatting *integerFormat;
    unsigned int variableIndex;

  private slots:
    void convertVariant( const QVariant &value, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp );
};
