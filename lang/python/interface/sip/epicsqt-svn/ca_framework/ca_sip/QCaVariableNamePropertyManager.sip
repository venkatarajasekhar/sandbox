class QCaVariableNamePropertyManager : QTimer {

  public:
    QCaVariableNamePropertyManager();

    QString getVariableNameProperty();
    void setVariableNameProperty( QString variableNamePropertyIn );

    QString getSubstitutionsProperty();
    void setSubstitutionsProperty( QString substitutionsPropertyIn );

    void setVariableIndex( unsigned int variableIndexIn );

signals:
    void newVariableNameProperty( QString variable, QString Substitutions, unsigned int variableIndex );

};
