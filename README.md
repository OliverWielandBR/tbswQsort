# tbswQsort
ANSI-C provides the Quicksort algorithm as a "built-in" function. Unfortunately, this is not usable among IEC languages.
Therefore, the present library serves as a wrapper around the C function qsort to make it usable in IEC languages.

## Functions
The library includes 2 functions:

### Sorting Strings
<code>UINT qsort_str(UDINT pStrings, UDINT len, UDINT count)</code>

* pStrings: Address of the string array to be sorted
* len: Length of a string in the string array
* count: Number of strings to be sorted
The return value is currently always 0.
The strings are sorted in ASCII ascending order.

### Sorting Integers
<code>UINT qsort_int(UDINT pIntArray, UDINT count)</code>

* pIntArray: Address of the INT array to be sorted
* count: Number of integers to be sorted
The return value is currently always 0.

## Note
The functions sort the entire passed array in a single pass. Therefore, it is crucial to ensure that the function runs in a lower-priority task class, ideally in TC#8, especially for large arrays.
