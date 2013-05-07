#include "StringExt.hpp"

string replaceString(string lot, string searchString, string replaceString)
{
    assert(searchString != replaceString);

    string::size_type pos = 0;
    while((pos = lot.find(searchString, pos)) != string::npos) {
        lot.replace(pos, searchString.size(), replaceString);
        pos++;
    }

    return lot;
}
