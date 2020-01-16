#ifndef TESTER_H_
#define TESTER_H_

#include <iostream>
#include <utility>

#include "good.hpp"
#include "kod.hpp"

#ifdef linux
    #define RESET    "\033[0m"
    #define FG_GREY  "\033[90m"
#else
    #define RESET    ""
    #define FG_GREY  ""
#endif

template <typename Arg, typename... Args>
void print_args(Arg arg, Args... args)
{
    std::cout << FG_GREY "    { '";
    std::cout << std::forward<Arg>(arg);
    using expander = int[];
    (void)expander{0, (void(std::cout << "', '" << std::forward<Args>(args)), 0)...};
    std::cout << "' }" RESET << std::endl;
}

template<typename F, typename... A>
void test(F func, A... args)
{
    std::string good_str = "";
    std::string str_to_check = func(args...);

    if (func == reinterpret_cast<F>(FormatujNapis)) {
        good_str = good::FormatujNapis(args...);
    }
    else if (func == reinterpret_cast<F>(NormalizujNapis)) {
        good_str = good::NormalizujNapis(args...);
    }
    else if (func == reinterpret_cast<F>(UsunSlowo)) {
        good_str = good::UsunSlowo(args...);
    }
    else if (func == reinterpret_cast<F>(NajwiekszeSlowo)) {
        good_str = good::NajwiekszeSlowo(args...);
    }

    if (str_to_check == good_str) {
        correct(good_str);
        std::cout << std::endl;
    }
    else {
        bad(good_str, str_to_check);
        print_args(args...);
    }

}

#endif
