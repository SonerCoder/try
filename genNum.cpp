/*
 * The program is guessing game, which works
 * generating numbers btw 1 - 10, then
 * Right number can be known in 5 choices.
 * Coder Soner
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randNumGen( int x, int y );

int main() {
    
    int n;
    int generatedNum = randNumGen( 1, 10 );
    
    int count = 0;
    
    do {
        cout << "Enter number =>  " ;
        cin >> n;
        count++;
        
        if ( n > generatedNum ) {
            cout << "Right number is lower" << endl;
        }
        else if ( n < generatedNum ) {
            cout << "Right number is higher" << endl;
        }
        else {
            cout << "You get right number is " << n << endl;
            break;
        }
    
    }
    while ( count < 5 );
    
    if ( count == 5 ) {
        cout << "You didn't get right number is " << generatedNum << endl;
    }
    
    
    return 0;
}

int randNumGen( int x, int y ) {
    
    srand( (int) time( NULL ) );
    
    return 1 + rand() % y - x + 1;
    
}
