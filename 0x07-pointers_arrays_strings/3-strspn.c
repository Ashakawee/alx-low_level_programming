/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int t, h, f;

	t = 0;
	while (s[t] != '\0')
	{
		h = 0;
		f = 1; /*flag status*/
		while (accept[h] != '\0')
		{
			if (s[t] == accept[h])
			{
				f = 0; /*success*/
				break;
			}
			h++;
		}
		if (f == 1)
			break;
		t++;
	}
	return (t);
}
