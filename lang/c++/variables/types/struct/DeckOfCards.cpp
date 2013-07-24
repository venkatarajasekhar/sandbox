// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
#include <iomanip>
#include <cstdlib> // prototypes for rand and srand
#include <ctime> // prototype for time
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

// no-argument DeckOfCards constructor intializes deck
DeckOfCards::DeckOfCards()
   : deck( numberOfCards )
{
   // initialize suit array
   static string suit[ suits ] = 
      { "Hearts", "Diamonds", "Clubs", "Spades" };

   // initialize face array
   static string face[ faces ] = 
      { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", 
      "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

   // set values for deck of 52 Cards
   for ( int i = 0; i < numberOfCards; ++i ) 
   {
      deck[ i ].face = face[ i % faces ];
      deck[ i ].suit = suit[ i / faces ];
   } // end for
   
   srand( time( 0 ) ); // seed random number generator
}

// shuffle cards in deck
void DeckOfCards::shuffle()
{
   // shuffle cards randomly
   for ( int i = 0; i < numberOfCards; ++i ) 
   {
      int j = rand() % numberOfCards;
      Card temp = deck[ i ];
      deck[ i ] = deck[ j ];
      deck[ j ] = temp;
   } // end for
}

// deal cards in deck
void DeckOfCards::deal() const
{
   // display each card’s face and suit
   for ( int i = 0; i < numberOfCards; ++i )
      cout << right << setw( 5 ) << deck[ i ].face << " of " 
         << left << setw( 8 ) << deck[ i ].suit 
         << ( ( i + 1 ) % 2 ? '\t' : '\n' );
} 
