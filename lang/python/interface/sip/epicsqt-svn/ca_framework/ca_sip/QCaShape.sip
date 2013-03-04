class QCaShape : QWidget, QCaWidget {

%TypeHeaderCode
#include <QCaShape.h>
%End

  public:
    QCaShape( QWidget *parent /TransferThis/ = 0 );
    QCaShape( const QString& variableName, QWidget *parent /TransferThis/ = 0 );

    enum Shape { Line, Points, Polyline, Polygon, Rect, RoundedRect, Ellipse, Arc, Chord, Pie, Path, Text, Pixmap };
    enum Animations {Width, Height, X, Y, Transperency, Rotation, ColourHue, ColourSaturation, ColourValue, ColourIndex, Penwidth};


    bool isEnabled() const;
    void setEnabled( bool state );

    // Property convenience functions

    // Variable name and substitutions
    void setVariableNameAndSubstitutions( QString variableNameIn, QString variableNameSubstitutionsIn, unsigned int variableIndex );

    // variable animations
    void setAnimation( Animations animation, const int index );
    Animations getAnimation( const int index );

    // scales
    void setScale( const double scale, const int index );
    double getScale( const int index );

    // offsets
    void setOffset( const double offset, const int index );
    double getOffset( const int index );

    // border
    void setBorder( const bool border );
    bool getBorder();

    // fill
    void setFill( const bool fill );
    bool getFill();

    // subscribe
    void setSubscribe( const bool subscribe );
    bool getSubscribe();

    // variable as tool tip
    void setVariableAsToolTip( const bool variableAsToolTip );
    bool getVariableAsToolTip();

    // shape
    void setShape( Shape shape );
    Shape getShape();


    // number of points
    void setNumPoints( const unsigned int numPoints );
    unsigned int getNumPoints();

    // Origin translation
    void setOriginTranslation( const QPoint originTranslation );
    QPoint getOriginTranslation();

    // points
    void setPoint( const QPoint point, const int index );
    QPoint getPoint(const int index);

    // colors
    void setColor( const QColor color, const int index );
    QColor getColor( const int index );

    // draw border
    void setDrawBorder( const bool drawBorder );
    bool getDrawBorder();

    // line width
    void setLineWidth( const unsigned int lineWidth );
    unsigned int getLineWidth();

    // start angle
    void setStartAngle( const double startAngle );
    double getStartAngle();

    // rotation
    void setRotation( const double rotation );
    double getRotation();

    // arc length
    void setArcLength( const double arcLength );
    double getArcLength();

    // text
    void setText( const QString text );
    QString getText();


  protected:
    void colorChange( unsigned int index );                     /// Act on a color property change. (will update shape if using the color)
    void establishConnection( unsigned int variableIndex );     /// Create a CA connection and initiates updates if required

  public slots:
    void requestEnabled( const bool& state );

  signals:
    void dbValueChanged1( const qlonglong& out );
    void dbValueChanged2( const qlonglong& out );
    void dbValueChanged3( const qlonglong& out );
    void dbValueChanged4( const qlonglong& out );
    void dbValueChanged5( const qlonglong& out );
    void dbValueChanged6( const qlonglong& out );

  private:
    void setup();                                               /// Initialisation common to all constructors
    qcaobject::QCaObject* createQcaItem( unsigned int variableIndex );
    void updateToolTip ( const QString & toolTip );
    void paintEvent(QPaintEvent *event);
};
