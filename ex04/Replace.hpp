#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iomanip>
# include <iostream>
# include <fstream>

int    replace( char *av, std::string s1, std::string s2 );
void	replaceStrings(std::ofstream &newFile, std::string s1, std::string s2, std::string buf);
#endif