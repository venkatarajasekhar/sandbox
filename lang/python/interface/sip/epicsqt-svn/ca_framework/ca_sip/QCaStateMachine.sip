%ModuleCode
#include <QCaStateMachine.h>
%End


class StateMachineTemplate {

%TypeHeaderCode
#include <QCaStateMachine.h>
%End

  public:
    virtual ~StateMachineTemplate();
    int currentState;
    int requestState;
    virtual bool process( int requestedState ) = 0;
};

namespace qcastatemachine {

  enum connection_states { DISCONNECTED, CONNECTED, CONNECT_FAIL, CONNECTION_EXPIRED };
  enum subscription_states { UNSUBSCRIBED, SUBSCRIBED, SUBSCRIBED_READ, SUBSCRIBE_SUCCESS, SUBSCRIBE_FAIL };
  enum read_states { READ_IDLE, READING, READING_FAIL };
  enum writing_states { WRITE_IDLE, WRITING, WRITING_FAIL };

  class QCaStateMachine : StateMachineTemplate {
    %TypeHeaderCode
    #include <QCaStateMachine.h>
    %End

    public:
      QCaStateMachine( void *parent /TransferThis/ );
      virtual ~QCaStateMachine();
      QMutex lock;
      bool pending;
      bool active;
      bool expired;
      void *myWorker;
      virtual bool process( int requestedState ) = 0;
  };

  class ConnectionQCaStateMachine : QCaStateMachine {
    %TypeHeaderCode
    #include <QCaStateMachine.h>
    %End

    public:
      ConnectionQCaStateMachine( void *parent /TransferThis/ );
      ~ConnectionQCaStateMachine();
      bool process( int requestedState );
  };

  class SubscriptionQCaStateMachine : QCaStateMachine {
    %TypeHeaderCode
    #include <QCaStateMachine.h>
    %End

    public:
      SubscriptionQCaStateMachine( void *parent /TransferThis/ );
      ~SubscriptionQCaStateMachine();
      bool process( int requestedState );
  };

  class ReadQCaStateMachine : QCaStateMachine {
    %TypeHeaderCode
    #include <QCaStateMachine.h>
    %End

    public:
      ReadQCaStateMachine( void *parent /TransferThis/ );
      ~ReadQCaStateMachine();
      bool process( int requestedState );
  };

  class WriteQCaStateMachine : QCaStateMachine {
    %TypeHeaderCode
    #include <QCaStateMachine.h>
    %End

    public:
      WriteQCaStateMachine( void *parent /TransferThis/ );
      ~WriteQCaStateMachine();
      bool process( int requestedState );
  };

};
