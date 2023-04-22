#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int num_chars_printed = 0;

    while (*format != '\0') {
        if (*format == '%') {
            // Handle conversion specifier
            format++;
            switch (*format) {
                case 'c': {
                    char c = va_arg(args, int);
                    write(1, &c, 1); // write character to stdout
                    num_chars_printed++;
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char*);
                    int len = 0;
                    while (s[len] != '\0') {
                        len++;
                    }
                    write(1, s, len); // write string to stdout
                    num_chars_printed += len;
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    char buf[32];
                    int len = snprintf(buf, sizeof(buf), "%d", num);
                    write(1, buf, len); // write integer to stdout
                    num_chars_printed += len;
                    break;
                }
                case 'b': {
                    unsigned int num = va_arg(args, unsigned int);
                    char buf[32];
                    int i = 0;
                    do {
                        buf[i++] = (num % 2) + '0';
                        num /= 2;
                    } while (num != 0);
                    for (int j = i - 1; j >= 0; j--) {
                        write(1, &buf[j], 1); // write binary digits to stdout
                        num_chars_printed++;
                    }
                    break;
                }
                case '%': {
                    char c = '%';
                    write(1, &c, 1); // write percent sign to stdout
                    num_chars_printed++;
                    break;
                }
                // Handle other conversion specifiers here...
                default:
                    // Handle invalid specifier
                    break;
            }
        } else {
            // Handle regular character
            write(1, format, 1); // write character to stdout
            num_chars_printed++;
        }

        format++;
    }

    va_end(args);

    return num_chars_printed;
}
