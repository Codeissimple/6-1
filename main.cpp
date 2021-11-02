#include <iostream>
using namespace std;

//Function header void displayMessage()
void displayMessage(){
  cout << "Hello from the function displayMessage.\n";
}
//Above constitutes function definition

int main() {
  
  cout << "Hello from main.\n";
  for (int count =0; count < 5; count++){
      displayMessage();
      cout << count << "\n";//Function call
  }
  cout << "Back in function main again.\n";
  return 0;
} 