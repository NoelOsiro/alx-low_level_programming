#include <stdarg.h> // for va_list, va_start, and va_end
#include <unistd.h> // for write
#include <stddef.h> // for size_t

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    char buffer[1024];
    int i = 0, j = 0;
    int buf_idx = 0;

    // iterate through the format string
    while (format[j])
    {
        // handle conversion specifier
        if (format[j] == '%')
        {
            j++;

            // handle unknown conversion specifier
            if (!format[j])
            {
                buffer[i++] = '%';
                break;
            }

            // handle recognized conversion specifier
            switch (format[j])
            {
                case 'b':
                    // handle binary conversion
                    break;
                case 'd':
                case 'i':
                    // handle decimal and integer conversion
                    break;
                case 'c':
                    // handle character conversion
                    break;
                case 's':
                    // handle string conversion
                    break;
                case 'x':
                    // handle lowercase hexadecimal conversion
                    break;
                case 'X':
                    // handle uppercase hexadecimal conversion
                    break;
                default:
                    // unknown conversion specifier, print character as is
                    buffer[i++] = '%';
                    buffer[i++] = format[j];
                    break;
            }
        }
        // handle regular character
        else
        {
            buffer[i++] = format[j];
        }

        // flush buffer if necessary
        if (i >= 1023)
        {
            buffer[i] = '\0';
            write(1, buffer, i);
            i = 0;
        }

        j++;
    }

    // flush remaining buffer
    if (i > 0)
    {
        buffer[i] = '\0';
        write(1, buffer, i);
    }

    va_end(args);

    return i;
}
