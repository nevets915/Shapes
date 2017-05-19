#ifndef POINT_H
#define POINT_H
#include <iostream>
// include additional headers if needed

class Point {
public:
  explicit Point(int x = 0, int y = 0) noexcept: x_(x), y_(y) {}

  // note that Point(std::istream&) is not really needed although you
  // may implement one here if you want

  int  getX() const noexcept { return x_; }
  int  getY() const noexcept { return y_; }
  void setX(int x) noexcept { x_ = x; }
  void setY(int y) noexcept { y_ = y; }
 
  void save(std::ostream& os = std::cout) const {
    os << '(' << x_ << ',' << y_ << ')' << std::endl;
  }

  // called by operator+ (see below)
  Point& operator+=(const Point& rhs) {
    // provide implementation here
  }

  friend Point operator*(int n, const Point& p);
  friend std::istream& operator>>(std::istream&, Point&); 
  friend std::ostream& operator<<(std::ostream&, const Point&); 
private:
  int x_, y_;
};

// addition of Points, e.g. (1,2) + (3,4) should give (4,6)
inline Point  
operator+(const Point& lhs, const Point& rhs) {
  Point tmp(lhs);
  return tmp += rhs;
}

// multiply a point by an int, e.g. 3 * (1,2) should give (3,6)
inline Point
operator*(int n, const Point& p) {
  // provide implementation here
}

// the expected input format is (x,y) where x & y are integers, e.g., (2,3)
// however, error-checking needs to be performed; set the failbit of the
// stream if the input is invalid
inline std::istream&
operator>>(std::istream& is, Point& pt) {
  // provide implementation here
}

inline std::ostream& 
operator<<(std::ostream& os, const Point& pt) {
  os << '(' << pt.x_ << ',' << pt.y_ << ')';
  return os;
} 
#endif
