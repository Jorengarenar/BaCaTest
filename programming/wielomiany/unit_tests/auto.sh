#!/usr/bin/env sh

dir="$(dirname $(realpath $0))"

if [ "$1" = "-d" ]; then
    rm -rf "$dir"/build "$dir"/bin
fi


mkdir -p "$dir"/build \
    && cd "$dir"/build \
    && cmake "$dir" \
    && cmake --build . --parallel \
    && ctest
