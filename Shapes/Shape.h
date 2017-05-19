#ifndef SHAPE_H
#define SHAPE_H
// headers, ...

class Shape {  // ABC
public:
  virtual ~Shape() {}

  // you need to override the following functions in your 3 derived classes
  virtual void draw() const = 0;
  virtual void save(std::ostream& = std::cout) const = 0;
  virtual void accept(ShapeVisitor& v) = 0; 
};
#endif
