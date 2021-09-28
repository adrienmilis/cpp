#include "scalar.hpp"

/*
    A GERER:
        - les pseudo literals
*/

int    check_for_filling(double d)
{
    int i = static_cast<int>(d);
    double new_d = static_cast<double>(i);
    if (new_d == d)
        return (1);
    return (0);
}

void    display_pseudo(char *str, bool is_float)
{
    std::string new_str(str);

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (!is_float)
    {
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
    else
    {
        new_str.erase(new_str.end()-1);
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << new_str << std::endl;
    }

}

void    display(char c, int i, float f, double d, bool char_overf, bool int_overf, bool float_overf)
{
    if (char_overf)
        std::cout << "char: impossible" << std::endl;
    else if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (int_overf)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (float_overf)
        std::cout << "float: impossible" << std::endl;
    else
    {
        if (check_for_filling(f))
            std::cout << "float: " << f << ".0" << "f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
    }
    if (check_for_filling(d))
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

void    convert_char(char c)
{
    int     i;
    float   f;
    double  d;

    i = static_cast<int>(c);
    f = static_cast<float>(c);
    d = static_cast<double>(c);
    display(c, i, f, d, 0, 0, 0);
}

void    convert_float(float f)
{
    int     i = 0;
    double  d;
    char    c = 0;
    bool    int_overflow = false;
    bool    char_overflow = false;  

    float   fint_max = static_cast<float>(std::numeric_limits<int>::max());
    float   fint_min = static_cast<float>(std::numeric_limits<int>::lowest());
    float   fchar_max = static_cast<float>(std::numeric_limits<char>::max());
    float   fchar_min = static_cast<float>(std::numeric_limits<char>::lowest());
    
    d = static_cast<double>(f);
    if (!(f >= fint_max || f < fint_min))
        i = static_cast<int>(f);
    else
        int_overflow = true;
    if (!(f > fchar_max || f < fchar_min))
        c = static_cast<char>(f);
    else
        char_overflow = true;
    display(c, i, f, d, char_overflow, int_overflow, false);
}

void    convert_double(double d)
{
    int     i = 0;
    float   f = 0;
    char    c = 0;
    bool    int_overflow = false;
    bool    char_overflow = false;
    bool    float_overflow = false;

    double   dint_max = static_cast<double>(std::numeric_limits<int>::max());
    double   dint_min = static_cast<double>(std::numeric_limits<int>::lowest());
    double   dchar_max = static_cast<double>(std::numeric_limits<char>::max());
    double   dchar_min = static_cast<double>(std::numeric_limits<char>::lowest());
    double   dfloat_max = static_cast<double>(std::numeric_limits<float>::max());
    double   dfloat_min = static_cast<double>(std::numeric_limits<float>::lowest());

    if (!(d >= dint_max || d < dint_min))
        i = static_cast<int>(d);
    else
        int_overflow = true;
    if (!(d >= dfloat_max || d < dfloat_min))
        f = static_cast<float>(d);
    else
        float_overflow = true;
    if (!(d >= dchar_max || d < dchar_min))
        c = static_cast<char>(d);
    else
        char_overflow = true;
    display(c, i, f, d, char_overflow, int_overflow, float_overflow);
}

void    convert_int(int i)
{
    float   f;
    double  d;
    char    c = 0;
    bool    char_overflow = false;
        
    int   ichar_min = static_cast<int>(std::numeric_limits<char>::lowest());
    int   ichar_max = static_cast<int>(std::numeric_limits<char>::max());

    f = static_cast<float>(i);
    d = static_cast<double>(i);
    if (!(i >= ichar_max || i < ichar_min))
        c = static_cast<char>(i);
    else
        char_overflow = true;
    display(c, i, f, d, char_overflow, false, false);
}
