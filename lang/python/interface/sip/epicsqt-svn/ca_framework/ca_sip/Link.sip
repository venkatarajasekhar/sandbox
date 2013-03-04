class Link : QLabel {

%TypeHeaderCode
#include <Link.h>
%End

  public:
    Link( QWidget *parent /TransferThis/ = 0 );

    enum conditions { CONDITION_EQ, CONDITION_NE, CONDITION_GT, CONDITION_GE, CONDITION_LT, CONDITION_LE };

    // Property convenience functions

    // condition
    void setCondition( conditions conditionIn );
    conditions getCondition();

    // comparisonValue Value to compare input signals to
    void    setComparisonValue( QString comparisonValue );
    QString getComparisonValue();

    // signalTrue (Signal if condition is met)
    void setSignalTrue( bool signalTrue );
    bool getSignalTrue();

    // signalFalse (Signal if condition not met)
    void setSignalFalse( bool signalFalse );
    bool getSignalFalse();

    // outTrueValue Value to emit if condition is met
    void    setOutTrueValue( QString outTrueValue );
    QString getOutTrueValue();

    // outFalseValue Value to emit if condition is not met
    void    setOutFalseValue( QString outFalseValue );
    QString getOutFalseValue();

    // visible (widget is visible outside 'Designer')
    void setRunVisible( bool visibleIn );
    bool getRunVisible();


  public slots:
    // ERROR: sip: Link::in() has overloaded functions with the same Python signature
    //sip void in( const bool& in );
    //sip void in( const qlonglong& in );
    //sip void in( const double& in );
    //sip void in( const QString& in );

    void autoFillBackground( const bool& enable );

  signals:
    void out( const bool& out );
    void out( const qlonglong& out );
    void out( const double& out );
    void out( const QString& out );


  private:
    void sendValue( bool match );
    void emitValue( QVariant value );

};
