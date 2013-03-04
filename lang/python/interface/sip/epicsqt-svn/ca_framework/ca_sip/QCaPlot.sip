class QCaPlot : QwtPlot, QCaWidget {

  public:
    QCaPlot( QWidget *parent /TransferThis/ = 0 );
    QCaPlot( const QString &variableName, QWidget *parent /TransferThis/ = 0 );

    ~QCaPlot();

    bool isEnabled() const;
    void setEnabled( bool state );

    // Property convenience functions

    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    void setSubscribe( bool subscribe );
    bool getSubscribe();

    void setVariableAsToolTip( bool variableAsToolTip );
    bool getVariableAsToolTip();

    void setYMin( double yMin );
    double getYMin();

    void setYMax( double yMax );
    double getYMax();

    void setAutoScale( bool autoScale );
    bool getAutoScale();

    // No QCaPlot::setTitle() needed. Uses QwtPlot::setTitle()
    QString getTitle();

    void    setBackgroundColor( QColor backgroundColor );
    QColor getBackgroundColor();

    void    setTraceColor( QColor traceColor );
    QColor getTraceColor();

    void    setTraceLegend( QString traceLegend );
    QString getTraceLegend();

    void    setXUnit( QString xUnit );
    QString getXUnit();

    void    setYUnit( QString yUnit );
    QString getYUnit();

    void setXStart( double xStart );
    double getXStart();

    void setXIncrement( double xIncrement );
    double getXIncrement();

    void setTimeSpan( unsigned int timeSpan );
    unsigned int getTimeSpan();

    void setTickRate( unsigned int tickRate );
    unsigned int getTickRate();

  protected:

    void establishConnection( unsigned int variableIndex );

    void setRunVisible( bool visibleIn );

  private slots:
    void connectionChanged( QCaConnectionInfo& connectionInfo );
    void setPlotData( const QVector<double>& values, QCaAlarmInfo&, QCaDateTime&, const unsigned int& );
    void setPlotData( const double value, QCaAlarmInfo&, QCaDateTime&, const unsigned int& );
    void tickTimeout();

  public slots:
    void requestEnabled( const bool& state );

  signals:
    void dbValueChanged( const double& out );
    void dbValueChanged( const QVector<double>& out );

  private:

    void setup();

    void setPlotDataCommon();
    void setalarmInfoCommon( QCaAlarmInfo& alarmInfo );


    // Functions common to most QCa widgets
    qcaobject::QCaObject* createQcaItem( unsigned int variableIndex ) /Factory/;
    void updateToolTip( const QString& tip );

    void regenerateTickXData();

    void setCurveColor( const QColor color );
};
