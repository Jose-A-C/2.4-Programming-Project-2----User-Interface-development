#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string> 

using namespace std;

int main()
{
    //--------  Start of variable and object creation ------
    string dummy = "xxxx";
    string ISBN = "XXXX"; //ISBN of book
    string title= "XXXX"; //title of book
    string author= "XXXX"; // author of book
    string enrollment = "XXXX"; // enrollment amount
    string cost = "XXXX"; // cost of book
    string ReqOrNot= "XXXX"; // If the book is required or not
    string newOrUsed= "XXXX"; // if the book is new or not

    double newCost = 0.0; // new cost variable for atof conversion
    int newEnrollment = 0; // new enrollment variable for atoi conversion
    double order_factor = 0.0; // order factor
    double totalValue = 0.0; // total cost of books needed
    double numBooks = 0.0; // number of books needed
    int newNumBooks = 0; // number of books after atoi cconversion

    //--------  End of variable declarations -----------------------
     cout << "\x1b[2J"; // clears terminal for vs code
     //system("cls");   //if your not using VS code replace cout << "\x1b[2J"; with this code instead
    //--------  Beginning of the Splash Screen   -------------------

              cout << "  _______________________________________________________  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |    M I R A M A R   C O L L E G E   B O O K          |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |       O R D E R I N G   S Y S T E M                 |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |             by Jose Chavez                          |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |_____________________________________________________|  " << endl;
              cout << "                                                           " << endl;

    //--------  End of the Splash Screen  --------------------------
    
	//Transition to next screen
	cout << "                          Press <ENTER> to Continue";
	cin.get();
	//End of transition

    //--------  Start of Input Screen  -----------------------------

    cout << "\x1b[2J"; // clears terminal for vs code
    //system("cls");   //if your not using VS code replace cout << "\x1b[2J"; with this code instead

              cout << "  _______________________________________________________  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |    M I R A M A R   C O L L E G E   B O O K          |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |       O R D E R I N G   S Y S T E M                 |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |    Enter the required information that is asked.    |  " << endl;
              cout << "  |              press <ENTER> after each.              |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |_____________________________________________________|  " << endl;
              cout << "                                                           " << endl;
              // getting the input of the user for the required information 
              cout << "     ISBN:  "; getline(cin, ISBN);
              cout << "     TITLE:  "; getline(cin, title);
              cout << "     AUTHOR:  "; getline(cin, author); 
              cout << "     COST:  "; getline(cin, cost); 
              cout << "     ENROLLMENT AMOUNT: ";getline(cin, enrollment);
              cout << "     REQUIRED(Yes or No):  "; getline(cin, ReqOrNot);
              cout << "     NEW/USED(New or Used):  "; getline(cin, newOrUsed);

               newEnrollment = atoi(enrollment.data()); // to convert enrollment from string to int
               std::cout << newEnrollment << std::endl;

               newCost = atof(cost.data()); // to conver cost from string to double
               std::cout << newCost << std::endl;

              if(newOrUsed == "New") {

                if(ReqOrNot == "Yes" || ReqOrNot == "yes")

                order_factor = 1.0;   // Book is new and required

                else

                order_factor = 0.35;  // Book is new but not required
              }

            else {

                if(ReqOrNot == "Yes")

                order_factor = 0.6;  // Book is not new but is required

                else

                order_factor = 0.1;  // Book is not new and is not required
            }

// end of price calculation for new or used
               numBooks = newEnrollment*order_factor;
               totalValue = numBooks*newCost;
              





//--------  End of the Input Screen  --------------------------

	          //Transition to next screen
	          cout << "                          Press <ENTER> to Continue";
	          cin.get();
	         //End of transition

// start of price calculation for new or used
            
    //--------  Start of Output Screen  -----------------------------
     cout << "\x1b[2J"; // clears terminal for vs code
     //system("cls");   //if your not using VS code replace cout << "\x1b[2J"; with this code instead

              cout << "  _______________________________________________________  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |    M I R A M A R   C O L L E G E   B O O K          |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |       O R D E R I N G   S Y S T E M                 |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
                               // has all of the expected outputs printed on the screen
              cout << "  |     ISBN: " <<ISBN; cout << "  " << endl; 
              cout << "  |     TITLE: " <<title; cout << "  " << endl;
              cout << "  |     AUTHOR: " <<author; cout << "  " << endl;
              cout << "  |     COST: " <<cost; cout << " $ " << endl;
              cout << "  |     ENROLLMENT AMOUNT: " <<enrollment; cout << "  " << endl;
              cout << "  |     REQUIRED: " <<ReqOrNot; cout << "" << endl;
              cout << "  |     NEW/USED: " <<newOrUsed; cout << "" << endl;
              cout << "  |     Number of Books to order: " <<numBooks; cout << "  " << endl;
              cout << "  |     inventory value of the books: " <<totalValue; cout << " $ " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |                                                     |  " << endl;
              cout << "  |_____________________________________________________|  " << endl;
              cout << "                                                           " << endl;
}





