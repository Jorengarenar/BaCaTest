#include <cstdlib>
#include "tests.hpp"

int main()
{
    check::FormatujNapis();
    check::NormalizujNapis();
    check::UsunSlowo();
    check::NajwiekszeSlowo();

#ifdef _WIN32
    system("pause");
#endif

    return 0;
}
