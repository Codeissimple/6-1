#include <iostream>
using namespace std;

void displayValue(int);

int main() {
  displayValue(5);
  displayValue(15);
  displayValue(56);
  displayValue(45);
  displayValue(995);
  
  return 0;
} 

void displayValue(int num){
  cout << "The value is " << num << "\n";
}