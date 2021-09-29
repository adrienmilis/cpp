#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>
#include <limits>
#include <limits.h>

// check_str.cpp
int     is_int(char *str);
int     is_char(char *str);
int     is_float(char *str);
int     is_double(char *str);
int     is_pseudo_float(char *str);
int     is_pseudo_double(char *str);

// convert.cpp
void    display_pseudo(char *str, bool is_float);
void    display(char c, int i, float f, double d, bool char_overf, bool int_overf, bool float_overf);
void    convert_char(char c);
void    convert_float(float f);
void    convert_int(int i);
void    convert_double(double d);


#endif