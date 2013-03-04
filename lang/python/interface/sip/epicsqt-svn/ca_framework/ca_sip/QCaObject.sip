namespace qcaobject {

  //sip class QCaObject : QObject, caobject::CaObject {
  class QCaObject : QObject {

%TypeHeaderCode
#include <QCaObject.h>
%End

    public:
      QCaObject( const QString& recordName, QObject *eventObject );
      QCaObject( const QString& recordName, QObject *eventObject, UserMessage* userMessageIn );
      ~QCaObject();

      bool subscribe();
      bool singleShotRead();


      static void processEventStatic( QCaEventUpdate* dataUpdateEvent );

      bool dataTypeKnown();

      /// State machine access functions
      bool createChannel();
      void deleteChannel();
      bool createSubscription();
      bool getChannel();
      bool putChannel();
      bool isChannelConnected();
      void startConnectionTimer();
      void stopConnectionTimer();

      void setUserMessage( UserMessage* userMessageIn );

      void enableWriteCallbacks( bool enable );
      bool isWriteCallbacksEnabled();

      // Get database information relating to the variable
      QString getEgu();
      QStringList getEnumerations();
      unsigned int getPrecision();
      double getDisplayLimitUpper();
      double getDisplayLimitLower();
      double getAlarmLimitUpper();
      double getAlarmLimitLower();
      double getWarningLimitUpper();
      double getWarningLimitLower();
      double getControlLimitUpper();
      double getControlLimitLower();

    signals:
      void dataChanged( const QVariant& value, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp );
      void connectionChanged( QCaConnectionInfo& connectionInfo );

    public slots:
      bool writeData( const QVariant& value );
      void resendLastData();

    protected:
      generic::generic_types getDataType();

    private:
      void initialise( const QString& newRecordName, QObject *newEventHandler, UserMessage* userMessageIn );

      bool removeEventFromPendingList( QCaEventUpdate* dataUpdateEvent );

      void signalCallback( caobject::callback_reasons reason );  /// CA callback function processed within an EPICS thread
      void processEvent( QCaEventUpdate* dataUpdateEvent );      /// Continue processing CA callback but within the contect of a Qt event
      void processData( void* newData );                         /// Process new CA data. newData is actually of type carecord::CaRecord*

  };

};
