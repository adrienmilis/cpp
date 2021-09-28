#include "scalar.hpp"

int is_int(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int    is_char(char *str)
{
    if (strlen(str) == 1 && isprint(str[0]))
        return (1);
    return (0);
}

int is_float(char *str)
{
    int i = 0;
    int is_point = 0;
    int is_f = 0;

    while (str[i])
    {
        if (str[i] == '.')
            is_point = 1;
        if (str[i] == 'f')
            is_f = 1;
        i++;
    }
    if (is_point && is_f)
        return (1);
    return (0);
}

int is_double(char *str)
{
    // we already know it's not char and it's not float
    int i = 0;

    while (str[i])
    {
        if (str[i] == '.')
            return (1);
        i++;
    }
    return (0);
}

int is_pseudo_float(char *str)
{
    std::string new_str(str);
    if (new_str == "-inff" || new_str == "+inff" || new_str == "nanf")
        return (1);
    return (0);
}

int is_pseudo_double(char *str)
{
    std::string new_str(str);
    if (new_str == "-inf" || new_str == "+inf" || new_str == "nan")
        return (1);
    return (0);
}