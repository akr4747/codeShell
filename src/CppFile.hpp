#ifndef __CPPFILE_HPP
#define __CPPFILE_HPP

class CppFile {
public:
void toString();
private:
  string className();
  std::map<std::string, std::string> functionMap;
};

#endif
