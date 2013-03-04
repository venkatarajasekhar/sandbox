//using namespace generic;

namespace caobject {

%TypeHeaderCode
#include <CaObject.h>
%End

  enum callback_reasons { SUBSCRIPTION_SUCCESS, SUBSCRIPTION_FAIL,
                          READ_SUCCESS, READ_FAIL,
                          WRITE_SUCCESS, WRITE_FAIL,
                          EXCEPTION,
                          CONNECTION_UP, CONNECTION_DOWN, CONNECTION_UNKNOWN };

    class CaObject {

%TypeHeaderCode
#include <CaObject.h>
%End

            // Initialisation and deletion
        public:
            CaObject();
            virtual ~CaObject();

            void setWriteWithCallback( bool writeWithCallback);
            bool getWriteWithCallback();

        private:
            void initialise();
            void shutdown();

        protected:
            // Data record interrogation
            bool          isFirstUpdate();
            void*         getRecordCopyPtr(); // Return a copy of the record as a void*. Caller is responsible for deleting.
            int           getEnumStateCount();
            std::string   getEnumState( int position );
            int           getPrecision();
            double        getDisplayUpper();
            double        getDisplayLower();
            double        getAlarmUpper();
            double        getAlarmLower();
            double        getWarningUpper();
            double        getWarningLower();
            double        getControlUpper();
            double        getControlLower();
            std::string   getUnits();
            generic::generic_types getType();
            unsigned long getTimeStampSeconds();
            unsigned long getTimeStampNanoseconds();
            short         getAlarmStatus();
            short         getAlarmSeverity();

        public:
            virtual void  signalCallback( caobject::callback_reasons ) = 0;

            // CA specific data private to the CaObject code
            // To allow application to include the QCaFramework without requiring
            // EPICS include files, this is obscured by casting the CA specific data as a void*
        public:
            void*        priPtr;     // Actually of type CaObjectPrivate*

    };

};
