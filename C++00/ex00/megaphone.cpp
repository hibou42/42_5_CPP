#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int y = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[y])
		{
			for (int x = 0; argv[y][x]; x++)
			{
				if (islower(argv[y][x]) > 0)
					std::cout << (char)toupper(argv[y][x]);
				else
					std::cout << argv[y][x];
			}
			y++;
			if (argv[y])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}