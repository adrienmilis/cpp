#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t   uip;

    uip = reinterpret_cast<uintptr_t>(ptr);
    return (uip);
}

Data *deserialize(uintptr_t raw)
{
    Data    *data_ptr;

    data_ptr = reinterpret_cast<Data*>(raw);
    return (data_ptr);
}

int main(void)
{
    Data        data;
    uintptr_t   uip;
    Data        *data2;

    data.number = 10;
    data.str = "garbanzo beans";
    
    uip = serialize(&data);
    std::cout << "uintptr_t: " << uip << std::endl;
    data2 = deserialize(uip);
    std::cout << "number: " << data2->number << std::endl;
    std::cout << "string: " << data2->str << std::endl;
    std::cout << "data adress: " << &data << ", data2: " << data2 << std::endl;
    return (0);
}