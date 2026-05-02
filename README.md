# ft_printf

`ft_printf` is a reimplementation of the standard C `printf` function.
It parses a format string, reads variadic arguments, and prints the formatted
result while handling the conversions required by the 42 project.

## Features

- supports the `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, and `%` specifiers
- uses `libft` helper functions for utility code
- builds a static library named `libftprintf.a`

## Build

```bash
make
```

Available cleanup commands:

```bash
make clean
make fclean
make re
```

## Usage

Include the header and call `ft_printf` like the standard function:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello %s, number: %d\n", "world", 42);
	return (0);
}
```

Link your program against the generated library:

```bash
cc test.c libftprintf.a 
```

## Supported conversions

| Specifier | Description |
| --- | --- |
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer |
| `%d` | Signed decimal integer |
| `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Lowercase hexadecimal |
| `%X` | Uppercase hexadecimal |
| `%%` | Literal percent sign |

## Project structure

- `ft_printf.c` handles format string parsing
- `ft_converter.c` maps specifiers to printing functions
- `ft_print_character`, `ft_print_string`, `ft_print_pointer`, `ft_print_decimal`
- `ft_print_unsigned_decimal`, `ft_print_lower_hexadecimal`, `ft_print_upper_hexadecimal`
- `ft_print_percent` handles the literal percent sign
- `libft/` contains the helper library sources