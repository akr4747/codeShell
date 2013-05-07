#ifndef __CPPFILE_HPP
#define __CPPFILE_HPP

class CppFile {
public:
  void createFiles(std::string path);
  void createHeaderFile(std::string path);
  void getHeaderFileContent(void);
  void createCodeFile(std::string path);
  void getCodeFileContent(void);
void toString();
private:
  string className();
  std::map<std::string, std::string> functionMap;
};

#endif
