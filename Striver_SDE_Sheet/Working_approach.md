# Approach

## Approach 1

I tried to each time find the zero and then instantly  
change the needed column and rows to 0s.

### Mistake

In doing so I was altering the original array thus creating more 0s.
Thus producing wrong answers.
As Even if 1, 0 is encountered.
I set whole row and column to 0.

In the next iteration.
At least all elements of a row and a column or both contained 0s.
So all elements were changed to 0  

## Working Approach

I just stored indexes of those rows and columns which contained 0s.  
Later I changed all needed columns and rows into 0s in one go.  
