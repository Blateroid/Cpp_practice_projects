//Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".

//There are a few simple rules for translating text to whale language:

//There are no consonants. Only vowels excluding the letter y.
//The u‘s and e‘s are extra long, so we must double them.
//Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.


#include <iostream>
#include<vector>

int main(){

  std::string phrase = "hi, human";


  std::vector <char> vowels = {'a','e','i','o','u'};

  std::vector <char> result;

  for(int i= 0; i<phrase.size(); i++){
    for(int j = 0; j<(vowels.size()); j++){
      if(phrase[i]==vowels[j]){
        if(phrase[i]==vowels[1] || phrase[i] == vowels[4]){
          result.push_back(phrase[i]);
          result.push_back(phrase[i]);
        }
        else {
          result.push_back(phrase[i]);
        }
      }
    }
  }
  for(int n = 0; n<result.size();n++){
    std::cout << result[n];
  }
  std::cout << "\n";
}
