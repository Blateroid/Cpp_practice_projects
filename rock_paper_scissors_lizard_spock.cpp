#include <iostream>
#include <stdlib.h>
int main(){
  // scissors cuts paper
  // rock crushes lizard
  // paper covers rock
  // lizard poisons spock
  // spock smashes scissors
  // scissors decapitates lizard
  // lizard eats paper
  // paper disproves spock
  // spock vaporizes rock
  // rock crushes scissors
  std::string keePlaying = "yes"; 
  //while(keePlaying == "yes"){ 
    srand(time(NULL));
    int computer = rand() % 5 + 1;
    int user;
    std::cout << "====================\n";
    std::cout << "rock paper scissors lizard spock!\n";
    std::cout << "====================\n";
    
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) lizard \n";
    std::cout << "5) spock \n";
    
    std::cin >> user;

    std::cout << "shoot! \n";

    if(computer == 1){
      if(user == 1){
        std::cout << "Computer used Rock! It is a tie! \n";
      }
      if(user == 2){
        std::cout << "Computer used Rock! Paper covers Rock! You win! \n";
      }
      if(user == 3){
        std::cout << "Computer used Rock! Rock crushes Scissors! The Computer wins! \n";
      }
      if(user == 4){
        std::cout << "Computer used Paper! Rock crushes Lizard! Computer wins! \n";
      }
      if(user == 5){
        std::cout << "Computer used Paper! Spock vaporizes Rock! You win! \n";
      }
    }else if (computer == 2){
      if(user == 1){
        std::cout << "Computer used Paper! Paper covers Rock! Computer Wins! \n";
      }
      if(user == 2){
        std::cout << "Computer used Paper! It is a tie! \n";
      }
      if(user == 3){
        std::cout << "Computer used Paper! Scissors cuts Paper! You win! \n";
      }
      if(user == 4){
        std::cout << "Computer used Paper! Lizard eats paper! You win! \n";
      }
      if(user == 5){
        std::cout << "Computer used Paper! Paper disproves Spock! Computer wins! \n";
    }
  }else if (computer == 3){
      if(user == 1){
        std::cout << "Computer used Scissors! Rock crushes Scissors! You win! \n";
      }
      if(user == 2){
        std::cout << "Computer used Scissors! Scissors cuts Paper! Copmputer wins! \n";
      }
      if(user == 3){
        std::cout << "Computer used Scissors! It is a tie! \n";
      }
      if(user == 4){
        std::cout << "Computer used Scissors! Scissors decapitates Lizard! Computer wins! \n";
      }
      if(user == 5){
        std::cout << "Computer used Scissors! Spock smashes Scissors! You win! \n";
    }
    }else if(computer == 4){
      if(user == 1){
        std::cout << "Computer used Lizard! Rock crushes Lizard! You win! \n";
      }
      if(user == 2){
        std::cout << "Computer used Lizard! Lizard eats Paper! Copmputer wins! \n";
      }
      if(user == 3){
        std::cout << "Computer used Lizard! Scissors decapitates Lizard! You Win! \n";
      }
      if(user == 4){
        std::cout << "Computer used Lizard! It is a tie! \n";
      }
      if(user == 5){
        std::cout << "Computer used Lizard! Lizard poisons Spock! Computer Wins! \n";}

    }else if(computer == 5){
      if(user == 1){
        std::cout << "Computer used Spock! Spock vaporizes Rock! Computer wins! \n";
      }
      if(user == 2){
        std::cout << "Computer used Spock! Paper disproves Spock! You win! \n";
      }
      if(user == 3){
        std::cout << "Computer used Spock! Spock smashes Scissors! Computer Wins! \n";
      }
      if(user == 4){
        std::cout << "Computer used Spock! Lizard poisons Spock! You win! \n";
      }
      if(user == 5){
        std::cout << "Computer used Spock! It is a tie!! \n";
    }
    }
    std::cout << "Want to keep playing? (yes/no)"; 

    std::cin >> keePlaying; //}
}
