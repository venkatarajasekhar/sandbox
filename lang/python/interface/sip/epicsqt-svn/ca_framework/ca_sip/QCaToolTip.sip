class QCaToolTip
{

%TypeHeaderCode
#include <QCaToolTip.h>
%End

    public:
        QCaToolTip();
        virtual ~QCaToolTip();
        void updateToolTipVariable ( const QString& variable );
        void updateToolTipAlarm ( const QString& alarm );
        void updateToolTipConnection ( bool connection );
        virtual void updateToolTip( const QString& tip ) = 0;

    private:
        void displayToolTip();

};
