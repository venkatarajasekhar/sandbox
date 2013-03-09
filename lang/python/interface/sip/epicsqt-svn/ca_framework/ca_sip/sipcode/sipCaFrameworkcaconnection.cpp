/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Fri Apr 22 17:31:55 2011
 */

#include "sipAPICaFramework.h"

#line 8 "CaConnection.sip"
#include <CaConnection.h>
#line 53 "CaConnection.sip"
#include <CaConnection.h>
#line 14 "sipCaFrameworkcaconnection.cpp"


static sipEnumMemberDef enummembers_caconnection[] = {
    {sipName_CHANNEL_DISCONNECTED, caconnection::CHANNEL_DISCONNECTED, 19},
    {sipName_CHANNEL_UNKNOWN, caconnection::CHANNEL_UNKNOWN, 20},
    {sipName_CLOSED, caconnection::CLOSED, 20},
    {sipName_CONNECTED, caconnection::CONNECTED, 20},
    {sipName_LINK_DOWN, caconnection::LINK_DOWN, 21},
    {sipName_LINK_UNKNOWN, caconnection::LINK_UNKNOWN, 21},
    {sipName_LINK_UP, caconnection::LINK_UP, 21},
    {sipName_NEVER_CONNECTED, caconnection::NEVER_CONNECTED, 20},
    {sipName_PREVIOUSLY_CONNECTED, caconnection::PREVIOUSLY_CONNECTED, 20},
    {sipName_REQUEST_FAILED, caconnection::REQUEST_FAILED, 19},
    {sipName_REQUEST_SUCCESSFUL, caconnection::REQUEST_SUCCESSFUL, 19},
};


pyqt4ClassTypeDef sipTypeDef_CaFramework_caconnection = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_caconnection,
        {0}
    },
    {
        sipNameNr_caconnection,
        {0, 0, 1},
        0, 0,
        11, enummembers_caconnection,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};