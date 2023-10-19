#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str){
  int length = str.length();        

  // Changes capital letters to lowercase
  for(int i = 0; i < length; i++){  //Checks if letters are uppercase
      if(static_cast<int>(str[i]) < 97){
        if(static_cast<int>(str[i]) >= 65){
            int lowercase = static_cast<int>(str[i]) + 32;
            str[i] = static_cast<char>(lowercase); //Changes letter to lowercase
        }
      }
  }

  // Determines if string is Palindrome      
  for(int i = 0; i<length/2; i++)
      if(str[i] != str[length-1-i])
        return false;
  return true;
}

int main() {
    string str[3] = {"madam", "abba", "trymeuemyrt"};
        
     //Task 1: Uses isPalindrome to test for required strings
    for(int i = 0; i<3; i++){
      if (isPalindrome(str[i]) == 0 )
        cout << str[i] << " is not a palindrome" << endl;
      else
        cout << str[i] << " is a palindrome" << endl;
    }   

      if (isPalindrome("Madam") == 0 )
        cout << "Madam is not a palindrome" << endl;
      else
        cout << "Madam is a palindrome" << endl;
        
      if (isPalindrome("abBa") == 0 )
        cout << "abBa is not a palindrome" << endl;
      else
        cout << "abBa is a palindrome" << endl;

      if (isPalindrome("22") == 0 )
        cout << "22 is not a palindrome" << endl;
      else
        cout << "22 is a palindrome" << endl;

      if (isPalindrome("67876") == 0 )
        cout << "67876 is not a palindrome" << endl;
      else
        cout << "67876 is a palindrome" << endl;

      if (isPalindrome("444244") == 0 )
        cout << "444244 is not a palindrome" << endl;
      else
        cout << "444244 is a palindrome" << endl;
      
      if (isPalindrome("trYmeuemyRT") == 0 )
        cout << "trYmeuemyRT is not a palindrome" << endl;
      else
        cout << "trYmeuemyRT is a palindrome" << endl;
    return 0;
}
