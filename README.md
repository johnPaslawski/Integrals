# Project - Integration
---
## The program calculates the definite integral of a single-variable function using three methods:
### 1.  rectangle method
### 2.  trapezoidal method
### 3.  Monte Carlo method
***
#### The integration bounds (<from; to>) are provided by the user. 
#### Each integration method is implemented as a separate function, which takes a pointer to the integrand function as a parameter.
#### Four test functions were used for evaluation, based on trigonometric and polynomial expressions.
___
- In the rectangle and trapezoid methods, the subinterval width is selected experimentally (e.g., by dividing the integration interval into 1000 parts).
- In the rectangle method, the integral is calculated as the sum of the areas of rectangles. Each rectangle has a base equal to the length of a subinterval and a height equal to the value of the function at either the beginning, middle, or end of that subinterval—or the average value of the function over the subinterval. One version of this algorithm was chosen for implementation.
- In the trapezoidal method, the integral is calculated by summing the areas of trapezoids. Each trapezoid has a height equal to the length of the subinterval, and the lengths of the bases are the values of the function at both ends of the subinterval.
-In the Monte Carlo method, the range of the function’s values within the integration interval is estimated—both the upper limit (MAX) and the lower limit (MIN). These limits define the range of randomly generated y-values used for test points. If MAX and MIN have opposite signs, this entire range is used. Otherwise, the lower limit is assumed to be 0. The program randomly generates N pairs of numbers, where:
x comes from the integration interval,
y comes from the estimated y-range.

#### ```The code is written with attention to optimizing execution time.```
---
#### If N1 is the number of points that fall below the graph of the function, and Pp is the area of the rectangle defined by the interval length (to - from) and the height (MAX - MIN), then for a function that is positive throughout the interval, the integral can be estimated as:

```Integral (approx.) = (N1 / N) * Pp```
***
#### It's important to account for cases where the function takes negative values within the integration interval.
***
## The documentation includes:
1. A description of the task
2. Flowcharts for all implemented integration algorithms
3.Graphs of the analyzed functions with marked integration intervals
5.The analytical solution with step-by-step calculations
6. A table comparing the results from the implemented methods with the analytical solution
7. A summary with conclusions
___
### The algorithms presented in the report exactly match those implemented in the code.
___
## Three types of integration intervals were considered:
- The function is entirely positive
- The function is entirely negative
- The function changes sign within the interval

