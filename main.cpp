#include <iostream>
using namespace std;

void displayValue(int);

int main() {
  displayValue(5);
  
  return 0;
} 

void displayValue(int num){
  cout << "The value is " << num;
}