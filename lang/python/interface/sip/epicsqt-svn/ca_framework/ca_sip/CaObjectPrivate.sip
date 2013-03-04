//using namespace caobject;
//using namespace generic;

class CaObjectPrivate {

%TypeHeaderCode
#include <CaObjectPrivate.h>
%End

    public:
        CaObjectPrivate( caobject::CaObject* ownerIn );

        // Manage connections
        caconnection::ca_responses setChannel( std::string channelName );       // Return type actually caconnection::ca_responses
        caconnection::ca_responses startSubscription();                         // Return type actually caconnection::ca_responses
        void                       removeChannel();
        void                       cancelSubscription(); //< NOT IMPLEMENTED

        // Read and write data
        caconnection::ca_responses   readChannel();                               // Return type actually caconnection::ca_responses
        caconnection::ca_responses   writeChannel( generic::Generic *newValue );

        // Data record interrogation
        caconnection::link_states    getLinkState();                              // Return type actually caconnection::link_states
        caconnection::channel_states getChannelState();                           // Return type actually caconnection::channel_states
//        bool                         isChannelConnected(); // < NOT IMPLEMENTED

        // CA callback handlers
        // ERROR: sip: CaObjectPrivate::processChannel() unsupported function argument type - provide %MethodCode and a valid C++ signature
        //sip bool        processChannel( struct event_handler_args args );
	// ERROR: sip: CaObjectPrivate::subscriptionHandler() unsupported function argument type - provide %MethodCode and a valid C++ signature
        //sip static void subscriptionHandler( struct event_handler_args args );
        //sip static void readHandler( struct event_handler_args args );
        //sip static void writeHandler( struct event_handler_args args );
	// ERROR: sip: CaObjectPrivate::exceptionHandler() unsupported function argument type - provide %MethodCode and a valid C++ signature
        //sip static void exceptionHandler( struct exception_handler_args args );
        //sip static void connectionHandler( struct connection_handler_args args );

        // CA data
        caconnection::CaConnection *caConnection;
        carecord::CaRecord caRecord;

        // CaObject of which this instance is a part of

};
