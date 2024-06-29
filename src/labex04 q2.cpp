/* ****************************************************************
 * @author: <Philip Excequel G. Yau>
 * @app name: <labex04 q2>
 * @app desc: <2.	Write a program that accepts user’s daily budget and display the product of the daily budget and itself.”.>
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

  int dailybudget;
    int product;

    cout << "Enter daily budget: ";
    cin >> dailybudget;

    product = dailybudget * dailybudget;

    cout << "" << product << endl;

    cout << "Press enter to exit...";
    cin.get();

  
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
