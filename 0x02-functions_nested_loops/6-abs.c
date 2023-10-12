#include "main.h"

/**
 *_abs - compute absolute value of an integer
 * @r: take value
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r *= -1);
	}

}
