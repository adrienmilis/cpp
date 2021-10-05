#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
    private:
        T *             _array;
        unsigned int    _size;

    public:
        // CONSTRUCTORS / DESTRUCTOR
        Array<T>() : _array(new T [0], _size(0)) {

        }

        Array<T>(unsigned int n) : _array(new T [n]), _size(n) {
            for (unsigned int i = 0; i < this->_size ; i++)
                this->_array[i] = 0;
        }

        Array<T>(Array const & og) : _array(new T [og.size()]), _size(og.size()) {
            for (unsigned int i = 0; i < og.size() ; i++)
                this->_array[i] = og.getArray()[i];
        }

        ~Array<T>() {
            delete [] this->_array;
        }

        // OVERLOADS
        Array const & operator=(Array const & rhs) {
            delete [] this->_array;
            this->_array = new T [rhs.size()];
            this->_size = rhs.size();
            for (unsigned int i = 0 ; i < rhs.size() ; i++)
                this->_array[i] = rhs.getArray()[i];
            return (*this);
        }

        T & operator[](unsigned int idx) const {
            if (idx >= this->_size || idx < 0)
                throw Array::IndexOutOfLimits();
            return (this->_array[idx]);
        }

        // GETTERS
        unsigned int size(void) const {
            return this->_size;
        }

        T * getArray(void) const {
            return this->_array;
        }

        // EXCEPTION
        class   IndexOutOfLimits : public std::exception
        {
            virtual const char* what() const throw() {
                return ("Exception: trying to access invalid index of array");
            }
        };
};

#endif