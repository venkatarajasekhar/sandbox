class VariableNameManager {

%TypeHeaderCode
#include <VariableNameManager.h>
%End

public:
    VariableNameManager();
    virtual ~VariableNameManager();

    void variableNameManagerInitialise( unsigned int numVariables ) ;                     /// Used to set up the number of variables required (defaults to 1 if this is not called)

    QString getOriginalVariableName( unsigned int variableIndex );          /// Return variable name prior to any macro substitutions. (eg, SR$SECTOR$V )
    QString getVariableNameSubstitutions();                                 /// Return macro substitutions used for variable names (eg, SECTOR=01,V=PRESURE)
    QString getSubstitutedVariableName(unsigned int variableIndex );        /// Return variable name after macro substitutions

    void initialiseVariableNameSubstitutions( const QString& substitutions );   /// Initialise macro substitutions. May be used on creation.

    virtual void establishConnection( unsigned int variableIndex ) = 0;     /// Create a CA connection and initiates updates if required

    void setVariableNameSubstitutionsOverride( const QString& substitutions );

    void setVariableName( const QString& variableName, unsigned int variableIndex );    /// Accept a new variable name which may include substitution keys preceeded by $
    void setVariableNameSubstitutions( const QString& substitutions );                  /// Accept a new set of macro substitutions in the form KEY1=VALUE1,KEY2=VALUE2

  private:
    QString doSubstitution( unsigned int variableIndex );
    QString standardizeSubs( const QString &subsIn );
};
