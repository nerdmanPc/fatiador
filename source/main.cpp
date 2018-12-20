/*
  Baseado no exemplo 3.2 em:
  https://doc.cgal.org/latest/AABB_tree/index.html
*/

#include <iostream>
#include <fstream>
#include <list>

#include <CGAL/Simple_cartesian.h>

#include <CGAL/Polyhedron_3.h>
#include <CGAL/IO/Polyhedron_iostream.h>

#include <CGAL/AABB_tree.h>
#include <CGAL/AABB_traits.h>
#include <CGAL/AABB_triangle_primitive.h>

typedef CGAL::Simple_cartesian<double> Kernel;

typedef Kernel::Triangle_3 Triangle;
typedef Kernel::Plane_3 Plane;
typedef Kernel::Point_3 Point;
typedef Kernel::Vector_3 Vector;
typedef Kernel::Segment_3 Segment;

typedef CGAL::Polyhedron_3<Kernel> Polyhedron;

typedef Polyhedron::Facet_iterator Iterator;
typedef CGAL::AABB_triangle_primitive<Kernel, Iterator> Primitive;
typedef CGAL::AABB_traits<Kernel, Primitive> AABB_triangle_traits;
typedef CGAL::AABB_tree<AABB_triangle_traits> AABB_tree;
typedef AABB_tree::Primitive_id Primitive_id;

//No exemplo, usa-se AABB_tree::Intersection_and_primitive_id<Plane>::Type, mas só funciona como abaixo:
typedef AABB_tree::Intersection_and_primitive_id<Plane> Plane_intersection;

void loadPolyhedron(const char* filepath, Polyhedron * polyhedron){
  std::ifstream inFile = std::ifstream(filepath);
  inFile >> (*polyhedron);
  inFile.close();
}

int main(int argc, char** argv){

  if (argc < 2){
    return -1;
  }

  Polyhedron mesh;
  loadPolyhedron(argv[1], &mesh);
  AABB_tree tree(mesh.facets_begin(), mesh.facets_end());

  Point origin = Point(0.0, 0.0, 0.0);
  Vector normal = Vector(0.0, 0.0, 1.0);
  Plane plane_query = Plane(origin, normal);

  std::list<Plane_intersection> intersections;
  //tree.all_intersections(plane_query, std::back_inserter(intersections));
  
  return 0;
}
