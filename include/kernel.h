#ifndef KERNEL_H
#define KERNEL_H

typedef long Integer;
typedef double Rational;
typedef double Real;

struct Real_3{
  Real x, y, z;
};

struct Real_2{
  Real x, y;
};

struct Vertex_3{
  Real_3 position;
};

struct Triangle_I{
  size_t a, b, c;
};

#endif
