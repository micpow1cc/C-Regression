# Linear Regression Analysis

This C program performs linear regression analysis on a given dataset. It calculates the slope, intercept, and uncertainty of the regression line based on the provided data points.

## Prerequisites

- C compiler

## Usage

1. Open a terminal or command prompt.
2. Compile the program using the following command:

```c
gcc linear_regression.c -o linear_regression
```
3. Run the program:
```c

./linear_regression
```

The program will display the calculated parameters and uncertainties for the linear regression line based on the provided dataset.

## Dataset

The dataset is defined within the code as arrays `x` and `y`, representing the x and y coordinates of the data points, respectively. Modify these arrays to include your own dataset.

## Output

The program will output the following information:

- The values of x and y coordinates in the dataset.
- The sum of x and y values.
- The square sum of x and y values.
- The average of x and y values.
- The sum of product of x and y values.
- The slope of the regression line (wspolczynnik kierunkowy prostej).
- The intercept of the regression line (wspolczynnik b prostej).
- The uncertainty (standard error) of the slope (niepewnosc a).
- The final parameter 'a' with uncertainty.

## Example

Suppose you have a dataset with 10 data points (x, y). After running the program, it will calculate the slope, intercept, and uncertainty of the regression line based on the provided dataset and display the results:

```c
your parameter a is: (1.0000000000e+00 +/- 2.3687515453e-01) 
```
