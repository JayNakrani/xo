#ifndef _COMMON_
#define _COMMON_

#include <iostream>
#include <string>
#include <ctype.h>

/**
 * Constants for terminal colors.
 *
 */

#define WHITE	"\033[22;37m"
#define RED		"\033[22;31m"
#define GREEN	"\033[22;32m"
#define YELLOW	"\033[22;33m"
#define BLUE	"\033[22;34m"
#define VIOLATE	"\033[22;35m"
#define CYAN	"\033[22;36m"

using namespace std;

/**
 * creates a string object for corrosponding color.
 * @params:
 *		Color constant string.
 * @retval:
 *		String object for the color.
 */

string getTextColorString(const char *color_string)
{
	string color_str_obj = color_string;
	return color_str_obj;
}


#endif