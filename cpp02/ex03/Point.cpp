#include "Point.hpp"

Point::Point() : _x(), _y() {

}

Point::Point(Fixed const a, Fixed const b) : _x(a.toFloat()), _y(b.toFloat()) {

}

Point::Point(Point const & src) : _x(src.get_x()), _y(src.get_y()) {

}

Point::~Point() {

}

Point & Point::operator=(Point const & rhs) {

    // assignation operation
    (void)rhs;
    return *this;
}

float   Point::get_x() const {

    return (this->_x.toFloat());
}

float Point::get_y() const {

    return (this->_y.toFloat());
}