#include "Cli.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
 

void Cli::run() {
  this->clientIsActive = true;
  string userInput;

  while(clientIsActive){
    cin >> userInput;    
    if(userInput == "quit"){
      this->clientIsActive = false;
    }
  }
}

