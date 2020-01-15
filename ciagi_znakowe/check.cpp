#include "tests.hpp"

int main()
{
    check::FormatujNapis();
    check::NormalizujNapis();
    check::UsunSlowo();
    check::NajwiekszeSlowo();

#ifdef _WIN32
    getchar();
#endif

    return 0;
}
