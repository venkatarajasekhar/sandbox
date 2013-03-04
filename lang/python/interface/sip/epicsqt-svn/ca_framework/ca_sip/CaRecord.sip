namespace carecord {

%TypeHeaderCode
#include <CaRecord.h>
%End

  enum dbr_translation_type { BASIC, STATUS, TIME, GRAPHIC, CONTROL };
  enum process_state { NO_UPDATE, FIRST_UPDATE, UPDATE };

  //! Total number of different basic EPICS types
  //sip const short TYPE_COUNT = 7;

  //! CA property for bound limits
  struct ca_limit {
      double upper;
      double lower;
  };
    
  class CaRecord : generic::Generic {

%TypeHeaderCode
#include <CaRecord.h>
%End

    public:
      CaRecord();
      ~CaRecord();

      CaRecord( carecord::CaRecord &param );
      //sip CaRecord& operator= ( carecord::CaRecord &param );

      void setName( std::string nameIn );
      void setDbrType( short dbrType );
      void setDbrTranslation( carecord::dbr_translation_type newType );
      void setValid( bool newValid );
      void updateProcessState();

      void setStatus( short newStatus );
      void setAlarmSeverity( short newSeverity );
      void setPrecision( short newPrecision );
      void setUnits( std::string newUnits );

      void setTimeStamp( unsigned long timeStampSecondsIn, unsigned long timeStampNanosecondsIn );
      void setRiscAlignment( double newRiscAlignment );
      void addEnumState( std::string newEnumStates );

      void setDisplayLimit( double newUpper, double newLower );
      void setAlarmLimit( double newUpper, double newLower );
      void setWarningLimit( double newUpper, double newLower );
      void setControlLimit( double newUpper, double newLower );

      std::string getName();
      short getDbrType();
      //sip short getDbrTranslation( const short translationMatrix[TYPE_COUNT][2], short type );
      //sip short getDbrTranslation( const short translationMatrix[7][2], short type );
      bool isValid();
      carecord::process_state getProcessState();
      bool isFirstUpdate();

      short getStatus();
      short getAlarmSeverity();
      short getPrecision();
      std::string getUnits();

      unsigned long getTimeStampSeconds();
      unsigned long getTimeStampNanoseconds();
      double getRiscAlignment();
      std::string getEnumState( int position );
      int getEnumStateCount();

      carecord::ca_limit getDisplayLimit();
      carecord::ca_limit getAlarmLimit();
      carecord::ca_limit getWarningLimit();
      carecord::ca_limit getControlLimit();

    private:
      void reset();
  };
  
  //! Translation matrix for EPICS basic to EPICS status type
  //sip const short statusTranslationMatrix[TYPE_COUNT][2] = {
  //sip     { DBR_STRING, DBR_STS_STRING },
  //sip     { DBR_INT, DBR_STS_INT },
  //sip     { DBR_FLOAT, DBR_STS_FLOAT },
  //sip     { DBR_ENUM, DBR_STS_ENUM },
  //sip     { DBR_CHAR, DBR_STS_CHAR },
  //sip     { DBR_LONG, DBR_STS_LONG },
  //sip     { DBR_DOUBLE, DBR_STS_DOUBLE }
  //sip };

  //! Translation matrix for EPICS basic to EPICS control type
  //sip const short controlTranslationMatrix[TYPE_COUNT][2] = {
  //sip     { DBR_STRING, DBR_CTRL_STRING },
  //sip     { DBR_INT, DBR_CTRL_INT },
  //sip     { DBR_FLOAT, DBR_CTRL_FLOAT },
  //sip     { DBR_ENUM, DBR_CTRL_ENUM },
  //sip     { DBR_CHAR, DBR_CTRL_CHAR },
  //sip     { DBR_LONG, DBR_CTRL_LONG },
  //sip     { DBR_DOUBLE, DBR_CTRL_DOUBLE }
  //sip };

  //! Translation matrix for EPICS basic to EPICS time type
  //sip const short timeTranslationMatrix[TYPE_COUNT][2] = {
  //sip     { DBR_STRING, DBR_TIME_STRING },
  //sip     { DBR_INT, DBR_TIME_INT },
  //sip     { DBR_FLOAT, DBR_TIME_FLOAT },
  //sip     { DBR_ENUM, DBR_TIME_ENUM },
  //sip     { DBR_CHAR, DBR_TIME_CHAR },
  //sip     { DBR_LONG, DBR_TIME_LONG },
  //sip     { DBR_DOUBLE, DBR_TIME_DOUBLE }
  //sip };

  //! Translation matrix for EPICS basic to EPICS graphic type
  //sip const short graphicTranslationMatrix[TYPE_COUNT][2] = {
  //sip     { DBR_STRING, DBR_GR_STRING },
  //sip     { DBR_INT, DBR_GR_INT },
  //sip     { DBR_FLOAT, DBR_GR_FLOAT },
  //sip     { DBR_ENUM, DBR_GR_ENUM },
  //sip     { DBR_CHAR, DBR_GR_CHAR },
  //sip     { DBR_LONG, DBR_GR_LONG },
  //sip     { DBR_DOUBLE, DBR_GR_DOUBLE }
  //sip };

};
