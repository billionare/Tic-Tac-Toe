 /*
 Assignment:
 Duedate:
 Discription:
 
*/
#include <iostream>
#include <string>
//#include <windows.h>
#include <iomanip>

using namespace std;

int main(){
    
    string player1    = " ";
    string player2    = " ";
    
    int turn            = 0;
    int X               = 0;
    int Y               = 0;
    
    char player1Piece = ' ';
    char player2Piece = ' ';
    char place        = ' ';
    char square1_1    = ' ';
    char square1_2    = ' ';
    char square1_3    = ' ';
    char square2_1    = ' ';
    char square2_2    = ' ';
    char square2_3    = ' ';
    char square3_1    = ' ';
    char square3_2    = ' ';
    char square3_3    = ' ';
    
    bool won        = false;
    
    //Prompts user to enter in their team names
    cout << "Player 1, please enter your name: ";
    cin >> player1;
    cout << "player 1, please choose game peice: ";
    cin >> player1Piece;
    
    //    system("cls");
    
    cout << endl << endl << "Player 2, please enter your name: ";
    cin >> player2;
    cout <<"player 2, please choose game peice: ";
    cin >> player2Piece;
    
    //    system("cls");
    
    //!!!!!!!!!!! Add a do while loop here to allow ther users to play again
    
    cout << endl << endl << "(type in 1 for player 1 or 2 for player 2) Who would like to go first?";
    cin >> turn;
    
    while (turn != 1 && turn != 2){
        cout << "Error: Please enter in 1 or 2: ";
        cin >> turn;
    }
    
    //    system("cls");
    
    // outputs the board for the users to read
    cout << endl << endl << "board:"    << endl                                          << endl;
    cout << "     1     2     3    "    << endl                                          << endl;
    cout << " 1   "   << square1_1      << "  |  "  << square1_2 << "  |  " << square1_3 << endl;
    cout << "     "   << setw(15) << setfill('-')   << '-'                               << endl;
    cout << " 2   "   << square2_1      << "  |  "  << square2_2 << "  |  " << square2_3 << endl;
    cout << "     "   << setw(15) << setfill('-')   << '-'                               << endl;
    cout << " 3   "   << square3_1      << "  |  "  << square3_2 << "  |  " << square3_3 << endl;
    
    // This loop makes sure the board keeps asking for places untill some one wins
    while (won == false) {
        
        // Tests whos turn it is
        if (turn % 2 == 0){
            cout << endl << player2 <<", where would you like to go?" << endl << endl;
            place = player2Piece;
        }
        else {
            cout << endl << player1 <<", where would you like to go?" << endl << endl;
            place = player1Piece;
        }
        
        // prompts user for which place they would like to go on the tic tac toe board
        cout << "Row: ";
        cin >> X;
        cout << "column: ";
        cin >> Y;
        
        //    system("cls");
        
        // Tests if the user is trying to go in this spot
        if (X == 1 && Y == 1 && square1_1 == ' '){
            square1_1 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 1 && Y == 2 && square1_2 == ' '){
            square1_2 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 1 && Y == 3 && square1_3 == ' '){
            square1_3 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 2 && Y == 1 && square2_1 == ' '){
            square2_1 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 2 && Y == 2 && square2_2 == ' '){
            square2_2 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 2 && Y == 3 && square2_3 == ' '){
            square2_3 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 3 && Y == 1 && square3_1 == ' '){
            square3_1 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 3 && Y == 2 && square3_2 == ' '){
            square3_2 = place;
        }
        
        // Tests if the user is trying to go in this spot
        else if (X == 3 && Y == 3 && square3_3 == ' '){
            square3_3 = place;
        }
        
        // tests that the place has not alread been taken
        else if (X <= 3 && X >= 1 && Y <= 3 && Y >=1){
            cout << endl << endl << "This spot has already been taken. You loose a turn :(";
        }
        
        // tests that the user is not out of range on the grid
        else if (X > 3 || X < 1 || Y > 3 || Y < 1){
            cout << endl << endl << "You are out of range. You loose a turn :(";
        }
        
        // output the board before the game is tested to see id anyone has won
        cout << endl << endl << "Current board:"   << endl                                  << endl;
        cout << "     1     2     3"               << endl                                  << endl;
        cout << " 1   "   << square1_1      << "  |  " << square1_2 << "  |  " << square1_3 << endl;
        cout << "    "    << setw(15) << setfill('-')   << '-'                              << endl;
        cout << " 2   "   << square2_1      << "  |  " << square2_2 << "  |  " << square2_3 << endl;
        cout << "    "    << setw(15) << setfill('-')   << '-'                              << endl;
        cout << " 3   "   << square3_1      << "  |  " << square3_2 << "  |  " << square3_3 << endl;
        
        // Tests if anyone has won the game
        if (   square1_1 == place && square1_2 == place && square1_3 == place
            || square2_1 == place && square2_2 == place && square2_3 == place
            || square3_1 == place && square3_2 == place && square3_3 == place
            || square1_1 == place && square2_1 == place && square3_1 == place
            || square1_2 == place && square2_2 == place && square3_2 == place
            || square1_3 == place && square2_3 == place && square3_3 == place
            || square1_1 == place && square2_2 == place && square3_3 == place
            || square1_3 == place && square2_2 == place && square3_1 == place){
            
            // Tests who won the game
            if (place == player1Piece){
                
                cout << endl << endl << "Congradulations" << player1 << ",you won!" << endl << endl;
                won = true;
            }
            
            else if (place == player2Piece){
                
                cout << endl << endl << "Congradulations " << player2 << ",you won!" << endl << endl;
                won = true;
            }
        }
        // Tests if the game is a cats game
        else if (   square1_1 != ' ' && square1_2 != ' ' && square1_3 != ' '
                 && square2_1 != ' ' && square2_2 != ' ' && square2_3 != ' '
                 && square3_1 != ' ' && square3_2 != ' ' && square3_3 != ' '){
            
            cout << "Cats game!!";
            won = true;
        }
         
         turn++;
        
    }
    
    cout << "Thank you for playing Tic Tac Toe. Would you like to play again? (y/n) ";
    cin >> place;
    
    while (   place != 'y' && place != 'n'
           && place != 'Y' && place != 'N'){
        cout << "Error: Please enter y or n: ";
        cin >> place;
    }
    
    // Add the end of the do-while loop here.
    
    return 0;
}
