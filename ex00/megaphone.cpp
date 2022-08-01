#include <iostream>
#include <ctype.h>
#include <cstring>

int main(int argc, char **argv)
{
    int 	w;
	int 	l;
	char	C;

    w = 1;
    if (argc == 0)
		std::cout << "MISSING EXECUTABLENAME !\n";
    else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
	{
		while (argv[w])
		{
			l = 0;
			while (argv[w][l])
			{
				C = toupper(argv[w][l]);
				std::cout << C;
				l++;
			}
			//std::cout << " ";
			w++;
		}
		std::cout << std::endl;
	}	
	return (0);	
}
