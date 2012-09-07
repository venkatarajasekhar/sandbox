// Definition of class DeckOfCards that 
// represents a deck of playing cards.
#include <string>
#include <vector>
using namespace std;

// Card structure definition
struct Card                 
{                           
   string face;
   string suit;
}; // end structure Card    

// DeckOfCards class definition
class DeckOfCards
{
public:
   static const int numberOfCards = 52;
   static const int faces = 13;
   static const int suits = 4;

   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffles cards in deck
   void deal() const; // deals cards in deck

private:
   vector< Card > deck; // represents deck of cards
};
