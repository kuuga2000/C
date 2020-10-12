// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string character;
  string combine_string;
  int number;
  cout << "Please input number of loop (must be integer)!:";
  cin>> number;
  if(number > 0) {
      for(int i=1; i<=number; i++){
        cout << "Input Character " <<i <<": "; 
        cin >> character;
        combine_string.append(character);
      }
  }
  cout << "This Is Your Text: " << combine_string << "!\n";
}
