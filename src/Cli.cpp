#include "Cli.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

const string PROJECT_NAME     = "codeShell";
const string VERSION          = "v0.1";
const string GREETING_MESSAGE = "Have a nice day.";
const string DEFAULT_PROMPT   = ">";
const string QUIT_COMMAND     = "quit";
const string SPC              = " ";
 
Cli::Cli(){
  this->setPrompt(DEFAULT_PROMPT);
}

void Cli::run() {
  this->clientIsActive = true;
  string userInput;
  cout << PROJECT_NAME << SPC << VERSION << "  - ";
  cout << GREETING_MESSAGE << endl;

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
