class QCaFloating : qcaobject::QCaObject {

%TypeHeaderCode
#include <QCaFloating.h>
%End

  public:
    QCaFloating( QString recordName, QObject *eventObject, QCaFloatingFormatting *floatingFormattingIn, unsigned int variableIndexIn );
    QCaFloating( QString recordName, QObject *eventObject, QCaFloatingFormatting *floatingFormattingIn, unsigned int variableIndexIn, UserMessage* userMessageIn );

  signals:
    void floatingChanged( const double& value, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp, const unsigned int& variableIndex );
    void floatingArrayChanged( const QVector<double>& values, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp, const unsigned int& variableIndex );

  public slots:
    void writeFloating( const double &data );

  private:
    void initialise( QCaFloatingFormatting *floatingFormattingIn, unsigned int variableIndexIn );

  private slots:
    void convertVariant( const QVariant &value, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp );
};
