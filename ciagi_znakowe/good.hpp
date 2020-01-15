#ifndef GOOD_H_
#define GOOD_H_

#include <string>

namespace good {

std::string FormatujNapis(std::string, std::string, std::string, std::string);
std::string NormalizujNapis(std::string);
std::string UsunSlowo(std::string, int);
std::string NajwiekszeSlowo(std::string);

std::string FormatujNapis(...);
std::string NormalizujNapis(...);
std::string UsunSlowo(...);
std::string NajwiekszeSlowo(...);

}

void correct(std::string);
void bad(std::string, std::string);

#endif
