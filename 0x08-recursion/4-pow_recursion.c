#include "main.h"

/**
 * _pow_recursion - return the value of x raised to power y
 * @x: integer
 * @y: number to which x will be powered to
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);

return (x * _pow_recursion(x, y - 1));
}
