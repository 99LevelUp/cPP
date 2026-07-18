# ex04 - Test Plan for `replace`

This file lists manual test cases for the `replace` program.

## Build and run

```bash
make
./replace <filename> <s1> <s2>
```

The program reads the input file and writes the result to `<filename>.replace`.

## Create the test files

Use these commands to create the input files used by the tests:

```bash
printf "hello world hello\n" > test.txt
touch empty.txt
printf "aaaa\n" > file.txt
```

If you want to reset the generated output files before re-running the tests, use:

```bash
rm -f test.txt.replace empty.txt.replace file.txt.replace
```

## Positive test cases

### 1. Replace a word once

```bash
./replace test.txt hello hi
cat test.txt.replace
```

```text
hi world hi
```

### 2. Process an empty file

```bash
./replace empty.txt a b
cat empty.txt.replace
```

```text
```

### 3. No matches found

```bash
./replace test.txt xyz abc
cat test.txt.replace
```

Expected result: the file content stays identical to `test.txt`.

### 4. Replace multiple occurrences

```bash
./replace test.txt hello bye
cat test.txt.replace
```

```text
bye world bye
```

### 5. Replace a substring inside a word

```bash
printf "aaaa\n" > file.txt
./replace file.txt aa b
cat file.txt.replace
```

Expected output:

```text
bb
```

## Error test cases

### 6. Wrong number of arguments

```bash
./replace
```

Expected output:

```text
Usage: ./replace <filename> <s1> <s2>
```

### 7. Empty `s1`

```bash
./replace test.txt "" x
```

Expected output:

```text
Error: s1 cannot be empty.
```

### 8. Input file does not exist

```bash
./replace missing.txt a b
```

Expected output:

```text
Error: could not open input file.
```

## Notes

- The program rewrites the full input into a new file.
- Replacements are non-overlapping.
- If `s1` is not found, the output file remains unchanged in content.