#include <iostream>
#include <ctime>
using namespace std;



int main()
{
    int numberMax;
    int numberMin;
    int guess;
    int counter;
    char answer;
    srand(time(0));

  cout << "---Welcome to mini game!---\n"
       << "Gameplay:\nThe computer randomly selects numbers within the range you choose.\n"
       << "You try to guess number.\n"
       << "After each guess, the program tells you if the secret number is higher or lower.\n"
       << "The game continues until you guess the correct number.\n\n";
    
    cout <<"Enter the minimum value for the range: ";
    cin >> numberMin;
    cout <<"Enter the maximum value for the range: ";
    cin >> numberMax;
    while(true)
    {
     counter = 0;
     int number_of_guess = rand() % (numberMax - numberMin + 1) + numberMin;

     while(true)
     {
      cout << "Please, enter a guess number: ";
      cin >> guess;
      counter += 1;

      if(guess > number_of_guess)
      {
        cout << "Please, enter a smaller number!" << endl;
      }
      else if (guess < number_of_guess)
      {
        cout << "Please, enter a bigger number!" << endl;
      }
      else
      {
        break;
      }
     }

     cout << "Congratulations! We have a winner!\n"
          << "Counter: " << counter << endl;
    
     cout << "Do you want to play again? (Y/N): ";
     cin >> answer;
     if(answer == 'N' || answer == 'n')
     {
        return 0;
     }
    }
}