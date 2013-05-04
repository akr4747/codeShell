#ifndef __CLI_HPP
#define __CLI_HPP
#include <string>
using std::string;

class Cli {
public:
  Cli();
  void run(void);
private:
  string prompt;
  static const string const1;
  bool clientIsActive;
  void setPrompt(string prompt);
  string getPrompt();
};

#endif
