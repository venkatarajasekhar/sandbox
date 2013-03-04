namespace generic {

%TypeHeaderCode
#include <Generic.h>
%End

  enum generic_types { STRING, SHORT, CHAR, UNSIGNED_LONG, DOUBLE, UNKNOWN };

  class Generic {

%TypeHeaderCode
#include <Generic.h>
%End

    public:
      Generic();
      //sip Generic( std::string newValue );
      //sip Generic( short newValue );
      //sip Generic( char newValue );
      //sip Generic( unsigned long newValue );
      //sip Generic( double newValue );
      //sip Generic( double* newValueArray, unsigned long countIn );
      ~Generic();

      Generic( generic::Generic &param );
      //sip generic::Generic& operator= ( Generic &param );

      void setString( std::string newValue );
      void setShort( short newValue );
      void setChar( char newValue );
      void setUnsignedLong( unsigned long newValue );
      void setDouble( double newValue );
      void setDouble( double* newValueArray, unsigned long countIn );

      std::string getString();
      short getShort();
      char getChar();
      unsigned long getUnsignedLong();
      double getDouble();
      //sip void getDouble( double** valueArray, unsigned long* countOut = NULL );
      unsigned long getArrayCount();

      generic::generic_types getType();

    protected:
      void cloneValue( generic::Generic *param );

    private:
      void setType( generic::generic_types newType );
      void deleteValue();
  };

};
