// Unformatted I/O using read, gcount and write.
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 80;
   char buffer[ SIZE ]; // create array of 80 characters

   // use function read to input characters into buffer
   cout << "Enter a sentence (20 char min):" << endl;
   cin.read( buffer, 20 );

   // use functions write and gcount to display buffer characters
   cout << endl << "The sentence entered was: (20 char max)" << endl;
   cout.write( buffer, cin.gcount() );
   cout << endl;
}
