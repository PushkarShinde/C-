/*Write a program that captures input from the user, 
prints the input string as many times as its length, 
and prints as many lines of it as the length of the input string.*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

  for (int i=0; i<my_string.length(); i++){
    for(int j=0; j<my_string.length(); j++){
      if(j==my_string.length()-1){
        cout << my_string<< endl;
      } else {
        cout << my_string;
      }
    }
  }

  //add code above this line
  
  return 0;
  
}