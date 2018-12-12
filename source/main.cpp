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
typedef CGAL::AABB_triangle_primitive <Kernel, Iterator> Primitive;
typedef CGAL::AABB_traits <Kernel, Primitive> AABB_triangle_traits;
typedef CGAL::AABB_tree <AABB_triangle_traits> AABB_tree;

void loadPolyhedron(const char* filepath, Polyhedron& polyhedron){
  std::ifstream inFile(filepath);
  inFile >> polyhedron;
  inFile.close();
}

int main(int argc, char** argv){

  if (argc < 2){
    return -1;
  }

  Polyhedron polyhedron;
  loadPolyhedron(argv[1], polyhedron);
  AABB_tree tree(polyhedron.facets_begin(), polyhedron.facets_end());

  Point origin(0.0, 0.0, 0.0);
  Vector normal(0.0, 0.0, 1.0);
  Plane plane_query(origin, normal);

  std::list<Segment> intersections;
  tree.all_intersections(plane_query, std::back_inserter(intersections)); //Não funciona!! 
  
  return 0;
}
