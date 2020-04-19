"Pointer on C" Chapter 4 exercises 6
Write a function that extracts a substring from a string. The function should have
the following prototype:
int substr( char dst[], char src[], int start,
int len )
It should copy the string that begins start characters past the beginning of the
string in src into the array dst. At most len nonȬNUL characters should be copied
from src. After copying, dst must be NULȬterminated. The function should return
the length of the string stored in dst.
If start specifies a position beyond the end of the string in src, or either start
or len are negative, then dsc should be given the empty string.