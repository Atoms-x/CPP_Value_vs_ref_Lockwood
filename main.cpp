/* Practice working the Pass by Reerence &
  Dr.Tyson McMilan 10 FEB 2020
  A study in pass by reference vs. pass by value
  Student:  Chet Lockwood
  IDE: Repl.it
*/

#include <iostream>
using namespace std;

void doubleByValue(double);
void doubleByRef(double &);
void addOneByRef(double &);
void subtractOneByRef(double &);

int main() 
{
  //Pass by VALUE numValue and aValue are different
  cout << "Pass by VALUE numValue and aValue are differet." << endl;

  double numValue = 5.0;  //initial value of numValue

  cout << "\n\t numValue now (initial) = " << numValue << endl; //current value
  doubleByValue(numValue);  //double num by value
  cout << "\t numValue now = " << numValue << endl; //current value
  doubleByValue(numValue); //double num by value again

  cout << "\t numValue now = " << numValue << endl; //current value
  cout << "\nNote how numValue remains the same with each call of function\n";
  cout << "Note the function generates a result that is different from numValue.\n";
  cout << "Therefore, numValue and aValue are different variables (not linked) to each other.\n";

  //Pass by REFERENCE (&) numRef and &aRef are the same
  cout << "\nPass by REFERENCE (&) numRef and &aRef are the same." << endl;

  double numRef = 5.0; //initial value of numRef

  cout << "\n\t numRef now = " << numRef << endl; //current value
  doubleByRef(numRef); //double num by reference
  cout << "\t numRef now = " << numRef << endl; //current value
  doubleByRef(numRef); //doublve num by reference again
  cout << "\t numRef now = " << numRef << endl; //current value

  cout << "\nNote how numRef's value changes with each call of function\n";
  cout << "Note the function generates a result htat is the same as numRef.\n";
  cout << "Therefore, numRef and &aRef variables (are linked) to each other via memory location.\n" << endl;

  addOneByRef(numRef);
  cout << "\t numRef now = " << numRef << endl; //current value

  subtractOneByRef(numRef);
  cout << "\t numRef now = " << numRef << endl; //current value

  return 0;
}

void doubleByValue (double aValue)
{
  aValue *= 2; //double the value of aValue by making a copy of it
  cout << "\t aValue now = " << aValue << endl; //current valule
}

void doubleByRef (double &aRef)
{
  aRef *= 2; //double the value of aRef at the memory address
  cout << "\t aRef now = " << aRef << endl; //current value
}

void addOneByRef (double &addRef)
{
  addRef++ ; //add one to the value of addRef at the memory address
  cout << "\t addRef now = " << addRef << endl; //current value
}

void subtractOneByRef (double &subRef)
{
  subRef-- ; //subtract one to the value of subRef at the memory address
  cout << "\t subRef now = " << subRef << endl; //current value
}