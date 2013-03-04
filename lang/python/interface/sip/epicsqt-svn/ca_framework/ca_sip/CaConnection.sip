%ModuleHeaderCode
#include <CaConnection.h>
%End

namespace caconnection {

%TypeHeaderCode
#include <CaConnection.h>
%End

  enum link_states { LINK_UP, LINK_DOWN, LINK_UNKNOWN };
  enum channel_states { NEVER_CONNECTED, PREVIOUSLY_CONNECTED, CONNECTED, CLOSED, CHANNEL_UNKNOWN };
  enum ca_responses { REQUEST_SUCCESSFUL, CHANNEL_DISCONNECTED, REQUEST_FAILED };

  //! Connection link state and properties.
  struct caLink {
      double searchTimeout;
      double readTimeout;
      double writeTimeout;
      caconnection::link_states state;
  };

  //! EPICS context state information.
  struct caContext {
      bool activated;
      int creation;
      int exception;
  };

  //! Channel state and properties.
  //sip struct caChannel {
  //sip     bool activated;
  //sip     int creation;
  //sip     int readResponse;
  //sip     int writeResponse;
  //sip     int state;
  //sip     short type;
  //sip     unsigned long elementCount;
  //sip     // cadef.h:typedef struct oldChannelNotify *chid;
  //sip     chid id;
  //sip     bool writeWithCallback;
  //sip };

  //! Subscription state and properties.
  struct caSubscription {
      bool activated;
      int creation;
  };

  class CaConnection {

%TypeHeaderCode
#include <CaConnection.h>
%End

    public:      
      CaConnection( void* newParent /TransferThis/ = 0 );
      ~CaConnection();


      //sip caconnection::ca_responses establishContext( void (*exceptionHandler)(struct exception_handler_args), void* args );
      //sip caconnection::ca_responses establishChannel( void (*connectionHandler)(struct connection_handler_args), std::string channelName );
      //sip caconnection::ca_responses establishSubscription( void (*subscriptionHandler)(struct event_handler_args), void* args, short dbrStructType );

      void removeChannel();
      void removeSubscription(); //< NOT IMPLEMENTED

      //sip caconnection::ca_responses readChannel( void (*readHandler)(struct event_handler_args), void* args, short dbrStructType );
      //sip caconnection::ca_responses writeChannel( void (*writeHandler)(struct event_handler_args), void* args, short dbrStructType, const void* dbrValue );

      void setLinkState( caconnection::link_states newLinkState );
      caconnection::link_states getLinkState();

      caconnection::channel_states getChannelState();
      short getChannelType();

      void* getParent();

      bool hasContext();
      bool activatedChannel();
      bool isSubscribed();
      void setChannelElementCount();

      void setWriteWithCallback( bool writeWithCallbackIn );
      bool getWriteWithCallback();

    private:
      void initialise();
      void shutdown();
      void reset();
  };

};
