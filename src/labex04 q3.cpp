/* ****************************************************************
 * @author: <Philip Excequel G. Yau>
 * @app name: <labex04 q3>
 * @app desc: <3.Write a program that accepts user’s name, password and address and display them back using the format “Hi, I am user’s name. I live at user’s address.”.
Restrictions:
	Use only three variables.
	Make sure you support spaces.
”.>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main()
{
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************

 string username;
    string password;
    string address;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    cout << "Enter your address: ";
    cin >> address;

    cout << "Hi, I am " << username << ". I live at " << address << "." << endl;
  cout << "Press any key to continue...";
    cin.get();


  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
