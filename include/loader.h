#include <fstream>
#include <CGAL/Simple_cartesian.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/IO/Polyhedron_iostream.h>

#include <CGAL/AABB_tree.h>
#include <CGAL/AABB_traits.h>
#include <CGAL/AABB_triangle_primitive.h>

typedef CGAL::Simple_cartesian<double> Kernel;
typedef CGAL::Polyhedron_3<Kernel> Polyhedron;

typedef Polyhedron::Facet_iterator Iterator;
typedef CGAL::AABB_triangle_primitive<Kernel, Iterator> Primitive;
typedef CGAL::AABB_traits<Kernel, Primitive> AABB_triangle_traits;
typedef CGAL::AABB_tree<AABB_triangle_traits> AABB_tree;

void loadMesh (const char* filepath, Polyhedron * mesh);
void buildTree (Polyhedron& mesh, AABB_tree * tree);