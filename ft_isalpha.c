
#include "unistd.h"

int	ft_is_alpha(unsigned char argument)
{
	unsigned char is_alpha = 'a';
	if ((argument > 'A' && argument < 'Z') || (argument >'a' && argument <'z'))
	{
		write(1, "yes", 3);
}
	return is_alpha;
}
