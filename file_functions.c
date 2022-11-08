#include "main.h"

/**
 *
 */

int print_char(va_list args)
{

  _putchar(va_arg(args, int));
  return (1);
}


/**
 *
 */

int print_str(va_list args)
{

  int j;
  char *str = va_arg(args, char *);

  if (str == NULL)
    str = "(null)";
  for (j = 0; str[j]; j++)
    {
      _putchar(str[j]);
    }
  return (j);
}

/**
 *
 */

int print_pct(va_list args)
{
  (void)args;
  return (write(1, "%", 1));
}
