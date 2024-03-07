#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int			checkArg(int argc, char **argv);
std::string	replaceString(std::string old_str, std::string new_str, std::string tmp);

int	main(int argc, char **argv)
{
	if (checkArg(argc, argv) != 0)
		return (1);

	// File opening + check
	std::string		old_file = (std::string)argv[1];
	const char		*old_file_const = old_file.c_str();
	std::ifstream	fd(old_file_const);
	if (!fd.is_open())
		return (1);

	// Hardwork
	std::string		new_file = old_file + ".replace";
	const char		*new_file_const = new_file.c_str();
	std::ofstream	output(new_file_const);
	std::string		buffer;
	while (getline(fd, buffer))
		output << replaceString((std::string)argv[2], (std::string)argv[3], buffer) << std::endl;
	fd.close();
	return (0);
}

int	checkArg(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cout << "Error : problem with checkArg" << std::endl;
		return (1);
	}
	return (0);
}

std::string	replaceString(std::string old_str, std::string new_str, std::string buffer)
{
	size_t	position = 0;

	while (buffer.find(old_str, position) != std::string::npos)
	{
		position = buffer.find(old_str, position);
		std::cout << "Before ->\t" << buffer << std::endl;
		buffer.erase(position, old_str.length());
		buffer.insert(position, new_str);
		position += new_str.length();
		std::cout << "After  ->\t" << buffer << std::endl;
	}
	return (buffer);
}
