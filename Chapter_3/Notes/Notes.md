# 3.1 The `printf` Function

-  The `printf` function's function is to display the contents of a string, known as the **_format string_**.
	`printf(string, expr1, expr2, ...);`
*  The values displayed can be constants, variables, or more complicated expressions. There's no limit on the number of values that can be printed by a single call of printf.
## _Conversion specifications_ 

- begin with the `%` character. Is a placeholder to the value that will be converted. The value is converted from its binary to printed characters. 
	 - `%d`: displays an integer in decimal base 10.
	 - `%e`: displays a floating point number in exponential format (scientific notation).
	 - `%f`: displays a floating point number in "fixed decimal" format.
	 - `%g`: displays a floating point number in either exponential format or fixed decimal format
	
- %m.pX or %-m.pX notation
	- `m` and `p` are integer constants and `X` is a letter
	- both `m` and `p` are optional
	- `m` is the minimum number of characters to print 
	- `p` is the precision and
	- `X` is the conversion specifier 

```C
#include <stdio.h>

int main(void)
{
	int i; float x;
	
	i = 40; 
	x = 839.21f;
	
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
	return 0;
}
```
-  Output:
``` C
|40|   40|40   |  040|
|   839.210| 8.392e+02|839.21    |
```

## _Escape sequences_

- Enable strings to contain characters that would otherwise cause problems for the compiler.
	- `Alert(bell)    \a`  
		- audible beep
	- `Backspace      \b` 
		- moves the cursor back one position
	- `New line       \n`
		- prints a new line
	- `Horizontal tab \t`
		- prints a horizontal tab

---

# 3.2 The `scanf` Function

