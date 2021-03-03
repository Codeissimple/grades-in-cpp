#include <iostream>
using namespace std;

int main() {
  int grade;
  cout << "Enter a grade: ";
  cin >> grade;

  if(grade < 0 || grade > 100)
  cout << "The grade is invalid." << endl ;

  if(grade == 100)
  cout << "Wow, you're good!" << endl ;

  if(grade >= 90 && grade <= 99)
  cout << "The grade is an A." << endl ;

  if(grade >= 80 && grade <= 89)
  cout << "The grade is a B." << endl ;

  if(grade >= 70 && grade <= 79)
  cout << "The grade is a C." << endl ;

  if(grade >= 65 && grade <= 69)
  cout << "The grade is a D." << endl ;

  if(grade < 65)
  cout << "The grade is failing" << endl ;

  return 0;
}