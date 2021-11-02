#include <iostream>
using namespace std;

void displayValue(int, int, int);

int main() {
  
  int valu1, value2, value3;
  cout << "enter\n";
  cin >> valu1 >> value2 >> value3;
  displayValue(valu1, value2, value3);
  return 0;
} 

void displayValue(int num, int num2, int num3){
  cout << "The sum of three integers is " << (num + num2 + num3) << endl;
}