
# Date Management System

## Description
This C program calculates the number of days between two given dates (start date and end date). The user inputs the dates in `dd-mm-yyyy` format, and the program computes the difference in days between them. 

## Features
- Accepts two dates as input.
- Computes the difference in days between them.
- Handles leap years correctly.
- Displays output in `dd-mm-yyyy` format.

## How It Works
1. The user enters the start date and end date in `dd-mm-yyyy` format.
2. The program converts these dates into the total number of days since `01-01-0000`.
3. The difference between the two day counts is computed.
4. The result is displayed to the user.

## Compilation & Execution
### Compile the program:
```sh
gcc date_difference.c -o date_difference
```
## Example of usage output

```sh
Enter start date (dd-mm-yyyy): 01-01-2024
Enter end date (dd-mm-yyyy): 10-01-2024
Number of days between 01-01-2024 and 10-01-2024 is 9 days.
```

## Dependencies

- GCC Compiler (or any C compiler)
- Standard C Library (stdio.h, time.h, stdlib.h)
