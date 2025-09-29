#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <cstdlib>

template <typename T>
class Array {
    private:
        T*             arr;
        unsigned int   n;
    public:
        Array();
        explicit Array(unsigned int size);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        unsigned int size() const;
};

# include "Array.tpp"

#endif