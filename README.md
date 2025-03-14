# ft_printf

<p align="center">
  <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/covers/cover-ft_printf.png" alt="ft_printf Cover">
</p>
<img src="https://img.shields.io/badge/Score-100%2F100-brightgreen" alt="Score Badge">

A custom implementation of the `printf` function in C, built as part of the 42 curriculum.

**`ft_printf`** is a versatile and flexible function that mimics the behavior of the standard C `printf`, handling multiple format specifiers and offering precise control over formatted output.

---

## Features
- Handles multiple format specifiers:
  - `%c` — Print a single character  
  - `%s` — Print a string  
  - `%p` — Print a pointer in hexadecimal format  
  - `%d / %i` — Print a decimal (base 10) number  
  - `%u` — Print an unsigned decimal number  
  - `%x / %X` — Print a hexadecimal number (lowercase/uppercase)  
  - `%%` — Print a percent sign  
- Supports a variable number of arguments using `stdarg.h` macros  
- Fully compatible with `libft` for seamless integration in future projects  

---

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/lnemenl/ft_printf.git
   cd ft_printf/Printf
   ```

2. Compile the library:
   ```bash
   make
   ```

3. Clean up the compiled files (optional):
   ```bash
   make clean
   ```

---

## Usage
Link the compiled library to your project:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Decimal: %d, Hex: %x, Char: %c\n", 42, 42, 'A');
    return (0);
}
```

Compile and run:

```bash
gcc main.c -L. -lftprintf -o test
./test
```

### Example Output:
```
Hello, world!  
Decimal: 42, Hex: 2a, Char: A
```

---

## How It Works
1. **Parsing the Format String:** The function scans the input string and looks for `%` specifiers.  
2. **Handling Variable Arguments:** Uses `va_list` to manage an unknown number of arguments.  
3. **Printing Based on Type:** Each specifier directs the function to handle and print the argument correctly, using the appropriate format.  

---

## Technical Insights
- **Memory Management:** Careful use of `malloc` and `free` to avoid leaks  
- **Recursive Conversion Logic:** Converts numbers to strings recursively for hex and unsigned integers  
- **Error Handling:** Manages edge cases like null pointers and invalid format strings  

---

## Allowed Functions
- `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

---

## License
This project is part of the 42 school curriculum. You are free to use it for learning purposes, but keep academic integrity in mind if you're a fellow student.

---

Built with care and attention to detail at 42
