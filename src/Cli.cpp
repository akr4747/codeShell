#include "Cli.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iostream>

using std::string;
using std::cin;
using std::cout;

const string DEFAULT_PROMPT = ">";
const string QUIT_COMMAND = "quit";
 
Cli::Cli(){
  this->setPrompt(DEFAULT_PROMPT);
}

void Cli::run() {
  this->clientIsActive = true;
  string userInput;

  while(clientIsActive){
    cout << DEFAULT_PROMPT;
    cin >> userInput;    
    if(userInput == QUIT_COMMAND){
      this->clientIsActive = false;
    }
  }
}

void Cli::setPrompt(string prompt){
  this->prompt = prompt;
}

string Cli::getPrompt(){
  return this->prompt;
}
