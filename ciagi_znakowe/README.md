## Ciągi znakowe

You can write your own tests in file `custom.cpp` (file contains one example)

### Instruction

1. Replace dummy file `kod.cpp` with your code
2. Through command line\* (terminal or `cmd.exe`) navigate to this directory
3. Type `make`
4. Check results

\* Windows users can alternatively just execute file `make.bat`

### Output

If test was successfully passed:
```
[GOOD]  | "returned string"
```

If test failed:
```
[ERROR] | "returned string" -> "correct answer"
```

#### Note about undefined behaviour of `FormatujNapis()`

Task content not specified how function `FormatujNapis` should interpret formats like this one: `{u:3}{w:2}`.

Therefore tests assumed that `FormatujNapis("ABCD{u:3}{w:2}xyzFG, "d", "e", "f")` will result in `ABCDeFG`.

You do not need to worry about this - BaCa contains no such tests.

There those will be denoted with `Checking FormatujNapis (UB)`.
