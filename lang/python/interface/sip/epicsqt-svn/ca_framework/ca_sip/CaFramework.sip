%Module CaFramework 0

%Import QtCore/QtCoremod.sip
%Import QtGui/QtGuimod.sip

%Include ASguiForm.sip
%Include CaConnection.sip
%Include CaObject.sip
//%Include CaObjectPrivate.sip   // <-- Error: no matching function for call to 'CaObjectPrivate::CaObjectPrivate(const CaObjectPrivate&)'
%Include CaRecord.sip
%Include CmdPushButton.sip
//%Include ContainerProfile.sip // <-- requires QCaWidget.sip for QCaWidget class !
%Include Generic.sip
%Include GuiPushButton.sip
//%Include Link.sip
%Include MappedType.sip
%Include QCaAlarmInfo.sip
//%Include QCaComboBox.sip
%Include QCaConnectionInfo.sip
%Include QCaDateTime.sip
%Include QCaEventFilter.sip
%Include QCaEventUpdate.sip     // requires QCaObject.sip
//%Include QCaFloating.sip
//%Include QCaFloatingFormatting.sip
//%Include QCaInteger.sip
//%Include QCaIntegerFormatting.sip
//%Include QCaLabel.sip
//%Include QCaLineEdit.sip
%Include QCaObject.sip		// requires QCaEventUpate.sip
//%Include QCaPlot.sip
//%Include QCaPushButton.sip
//%Include QCaShape.sip
//%Include QCaSlider.sip
//%Include QCaSpinBox.sip
//%Include QCaStateMachine.sip
//%Include QCaString.sip 
//%Include QCaStringFormatting.sip //Error ca_framework//data/include/QCaStringFormatting.h:56: error: 'QTextStream' has not been declared
%Include QCaToolTip.sip
//%Include QCaVariableNamePropertyManager.sip //Error sipCaFrameworkQCaVariableNamePropertyManager.cpp:52: error: expected class-name before '{' token
//%Include QCaWidget.sip //Error /usr/include/QtCore/qobject.h: In copy constructor 'UserMessage::UserMessage(const UserMessage&)':
%Include UserMessage.sip
%Include VariableNameManager.sip

