/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/1/19

    Header file for CardDeck class 
*/
#include <string>
#include <vector>
using namespace std;

class CardDeck
{
    public:
        CardDeck();
        /*
            Default constructor. This will intialize the 
            deck with hard code values for the faces and suit.
            It will also set face and suit to 0. 
        */ 
        string getFace();
        /*
            This function will return the face value
            of the card on top of the deck after it has
            been shuffled.
            Precondition:
                - deck is intialized
                - shuffleDeck has been called 
        */
        string getSuit(); 
        /*
            This function will return the suit of the card
            on top of the deck after it has been shuffled.
            Precondition:
                - deck is intialized
                - shuffleDeck has been called 
        */
        void shuffleDeck(); 
        /*
            This function will shuffle both vector arrays
            faces and suit to randomize the deck. 
        */

        private:
            int face;
            int suit; 

            const vector<string> faces[13];
            const vector<string> suit[4];

};