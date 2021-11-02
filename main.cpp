#include <iostream>
using namespace std;

//Function header void displayMessage()
void first(){
  cout << "I'm now inside the function first\n";
}
//Above constitutes function definition

void second(){
  cout << "I'm now inside the function second\n";
}

void third(){
  cout << "I'm now inside the function third\n";
}

int main() {
  
  cout << "I'm starting in function main\n";
  first();
  second();
  third();
  cout << "Back in function main again". \n;
  
  return 0;
} 