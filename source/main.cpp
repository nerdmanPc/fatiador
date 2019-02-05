#include "../include/mesh.h"

int main(int argc, char** argv){
/*
  if (argc < 2){
    return -1;
  }
  Mesh mesh(argv[1]);
*/
  Vertex_3 a, b, c;
  a.position = {0.0, 0.0, 1.0};
  b.position = {1.0, 0.0, 1.0};
  c.position = {-1.0, 0.0, 1.0};
  Triangle_3 testTriangle = {a, b, c};
  PlaneIntersection_3 intersection(0.0, testTriangle);
  intersection.testPrint();
  //mesh.save(argv[2]);
  
  return 0;
}
