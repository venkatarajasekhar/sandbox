class QCaConnectionInfo
{

%TypeHeaderCode
#include <QCaConnectionInfo.h>
%End


public:
    QCaConnectionInfo();
    QCaConnectionInfo( unsigned short channelStateIn, unsigned short linkStateIn );

    bool isChannelConnected();   // Return true if the channel is connected
    bool isLinkUp();             // Return true if the link is up

};
