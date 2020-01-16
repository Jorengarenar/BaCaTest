#include <iostream>
#include "tests.hpp"
#include "tester.hpp"

void check::FormatujNapis()
{
    std::cout << "Checking FormatujNapis" << std::endl;
    test(::FormatujNapis, "ABCD{p:5:x}X Y Z", "abc", "cdef", "xyz" );
    test(::FormatujNapis, "ABCD{u:3}X Y Z", "abc", "cdef", "xyz" );
    test(::FormatujNapis, "ABCD{U:2}X Y Z", "abc", "cdef", "xyz" );
    test(::FormatujNapis, "ABCD{w:2}X Y Z", "abc", "cdef", "xyz" );
    test(::FormatujNapis, "ABCD{W:2:3}X Y Z", "abc", "cdef", "xyz" );
    test(::FormatujNapis, "ABCD{W:2:5}X Y Z", "abc", "cdef", "xyz" );
    test(::FormatujNapis, "A{p:4:a}le {w:1}tra nudny t{w:1}t. {u:3}UsuCam{U:2}{W:2:3}{W:3:3}.","eks", "zy", "niebyt");
    test(::FormatujNapis, "XYZ{u:3}", "d", "e", "f" );

    std::cout << "\nChecking FormatujNapis (UB)" << std::endl;
    test(::FormatujNapis, "ABCD{u:3}{w:2}XYZFG", "d", "e", "f" );
    test(::FormatujNapis, "ABCD{u:3}{w:2}{w:3}XYZG", "d", "e", "f" );
}

void check::NormalizujNapis()
{
    std::cout << "\nChecking NormalizujNapis" << std::endl;
    test(::NormalizujNapis, "Oto   Ala   .Ma kota ,lecz nie ma psa     ." );
    test(::NormalizujNapis, "Oto   Ala   .  Ma kota ,lecz nie ma psa     ." );
    test(::NormalizujNapis, "  Ala ma kota ,a ty?  " );
}

void check::UsunSlowo()
{
    std::cout << "\nChecking UsunSlowo" << std::endl;
    test(::UsunSlowo, "Smok Wawelski ryczy ku uciesze gawiedzi", 2);
    test(::UsunSlowo, "Smok", 2);
    test(::UsunSlowo, "Smok                   Ez", 5);
    test(::UsunSlowo, "Smok Wawelski ryczy ku uciesze gawiedzi     ", 10);
    test(::UsunSlowo, "Smok Wawelski ryczy ku uciesze gawiedzi", 1);
    test(::UsunSlowo, "Smok     Wawelski ryczy ku uciesze gawiedzi", 6);
    test(::UsunSlowo, "Smok     Wawelski ryczy ku uciesze gawiedzi ", 6);
    test(::UsunSlowo, "Smok Wawelski.ryczy ku uciesze gawiedzi", 2);
    test(::UsunSlowo, "   Smok Wawelski ryczy ku uciesze gawiedzi", 2);
    test(::UsunSlowo, "Smok Wawelski ryczy ku uciesze gawiedzi", 7);
}

void check::NajwiekszeSlowo()
{
    std::cout << "\nChecking NajwiekszeSlowo" << std::endl;
    test(::NajwiekszeSlowo, "Smok Wawelski ryczy ku uciesze gawiedzi");
    test(::NajwiekszeSlowo, "a b c d e f z h a");
    test(::NajwiekszeSlowo, "aa ab ac ad az ax");
    test(::NajwiekszeSlowo, "abcd abc");
    test(::NajwiekszeSlowo, "abc abcd");
}
