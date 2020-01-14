#pragma once

#include "good.hpp"
#include "kod.cpp"

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
    }
    else {
        bad(good_str, str_to_check);
    }
}
