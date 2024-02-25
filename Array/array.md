# Array
Array def: an array is collection of more than 1 element of same data type
formula to calculate bas address of array 

1. Dimensionality of the array:

1D Array:

Formula: Address of A[i] = B + S * (i - L.B.)
Where:
B is the base address of the array (starting memory location).
S is the size of each element in bytes.
i is the index of the element you want to access (starts from 0).
L.B. is the lower bound of the array (usually 0, unless specified otherwise).
2D Array:

Row-major order:
Formula: Address of A[i][j] = B + S * C * (i - L.R.) + (j - L.C.)
Column-major order:
Formula: Address of A[i][j] = B + S * [(i - L.R.) + M * (j - L.C.)]
Where:
Additional terms:
C is the number of columns in the array.
M is the number of rows in the array.
Other terms remain the same as in 1D array formula.
Higher-dimensional arrays:

The formula extends similarly for 3D, 4D, and so on, with additional terms for each dimension and its corresponding size.
2. Memory layout:

The formula assumes a specific memory layout, typically row-major or column-major. In row-major order, elements are stored row by row, while in column-major order, elements are stored column by column.