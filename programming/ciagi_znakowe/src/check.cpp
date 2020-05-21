#include <iostream>
#include "tests.hpp"
#include "custom.hpp"

int main()
{
    check::FormatujNapis();
    check::NormalizujNapis();
    check::UsunSlowo();
    check::NajwiekszeSlowo();

    std::cout << "\nChecking custom tests" << std::endl;
    custom();

#ifdef _WIN32
    getchar();
#endif

    return 0;
}
