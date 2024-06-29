/* ****************************************************************
 * @author: <Philip Excequel G. Yau>
 * @app name: <labex04 q1>
 * @app desc: <1.	Write a program that accepts user’s section, and display them back with the format “*** Section: user’s section ***”.>
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


   string section;

    cout << "Enter your section: ";
    cin >> section;

    cout << "*** Section: " << section << " ***" << endl;

    cout << "Press any key to continue...";
    getchar();



  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
