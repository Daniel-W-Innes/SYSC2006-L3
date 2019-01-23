/* SYSC 2006 Winter 2018 Lab 3. 

 * Incomplete implementations of the functions that will be coded during the lab.
 */

#include <math.h>
#include "exercises.h"

/* Exercise 1. */

/* Return the average magnitude of the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], double n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fabs(x[i]);
    }
    return sum / n;
}

/* Exercise 2. */

/* Return the average power of the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], double n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x[i], 2);
    }
    return sum / n;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n) {
    double maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (maxValue < arr[i])
            maxValue = arr[i];
    }
    return maxValue;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n) {
    double minValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (minValue > arr[i])
            minValue = arr[i];
    }
    return minValue;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n) {
    const double MINVALUE = min(x, n);
    const double MAXVALUE = max(x, n);
    for (int i = 0; i < n; i++) {
        x[i] = (x[i] - MINVALUE) / (MAXVALUE - MINVALUE);
    }
}
