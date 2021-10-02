#include "scalar.hpp"

void    detect_type(char *str)
{
    if (is_int(str))
        convert_int(atoi(str));
    else if (is_pseudo_float(str))
        display_pseudo(str, true);
    else if (is_pseudo_double(str))
        display_pseudo(str, false);
    else if (is_char(str))
        convert_char(str[0]);
    else if (is_float(str))
        convert_float(static_cast<float>(atof(str)));
    else if (is_double(str))
        convert_double(atof(str));
}

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cout << "1 argument required" << std::endl;
        return (0);
    }
    detect_type(argv[1]);
}