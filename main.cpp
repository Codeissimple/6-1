#include <iostream>
using namespace std;

//Function header void displayMessage()
void displayMessage(){
  cout << "Hello from the function displayMessage.\n";
}
//Above constitutes function definition

int main() {
  
  cout << "Hello from main.\n";
  displayMessage();//Function call
  cout << "Back in function main again.\n";
  return 0;
} 