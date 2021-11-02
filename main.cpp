#include <iostream>
using namespace std;

void changeMe(int);

int main() {
  
  int number =12;

  cout << "Number is " << number << endl;

  changeMe(number);
  
  cout << "Number is " << number << endl;

  return 0;
} 

void changeMe(int myValue){
  myValue = 0;
  cout << "Now number is " << myValue << endl;
}