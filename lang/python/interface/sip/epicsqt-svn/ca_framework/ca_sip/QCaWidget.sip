//sip class QCaWidget : VariableNameManager, QCaToolTip, ContainerProfile {
class QCaWidget : QCaToolTip, ContainerProfile {

%TypeHeaderCode
#include <QCaWidget.h>
%End

  public:
    QCaWidget();                            
    ~QCaWidget();                          
    //sip UserMessage userMessage;              
    void activate();                     

  protected:
    void setNumVariables( unsigned int numVariablesIn );  
//    qcaobject::QCaObject* createConnection( unsigned int variableIndex );  
    virtual void setup() = 0;                          
//    virtual qcaobject::QCaObject* createQcaItem( unsigned int variableIndex ) = 0 /Factory/ ; 
//    qcaobject::QCaObject* getQcaItem( unsigned int variableIndex );         

  private:
    void deleteQcaItem( unsigned int variableIndex );       /// Delete a stream of CA updates

};
