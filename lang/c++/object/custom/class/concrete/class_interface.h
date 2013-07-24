#include <string>

using namespace std;

// Used to separate the interface from the implementation


class Shell
{
                   			// instanciated with default constructor
  private:
    bool hidden;
};

class Object1
{
  public:

    Object1(string);			                // non default constructor !! returns nothing not even void !!
					                            // CONSTRUCTOR MUST BE PUBLIC !
    void displayMessage();
    void setMessage(string msg);	            // mutator =  set function
    string getMessage();		                // accessor = get function
    void determineAverage();
    int max(int, int, int);		                // max of 3 val

  private:				                        // private = encapsulation = data hidding
    string message;
};


