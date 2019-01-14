#include "../include/kernel.h"

PlaneIntersection_3::PlaneIntersection_3(Real zCoord, const Triangle_3& triangle){
  if (triangle.a.position.z == zCoord){ //COMPARAÇÃO DE PONTO FLUTUANTE!!!111!!!ONZE!!!
    if (triangle.b.position.z == zCoord){
      if (triangle.c.position.z == zCoord){
        nVertices = 3;
        vertices[0] = triangle.a;
        vertices[1] = triangle.b;
        vertices[2] = triangle.c;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 2;
        vertices[0] = triangle.b;
        vertices[1] = triangle.a;
      }else{
        nVertices = 2;
        vertices[0] = triangle.a;
        vertices[0] = triangle.b;
      }
    }else if (triangle.b.position.z < zCoord){
      if (triangle.c.position.z == zCoord){
        nVertices = 2;
        vertices[0] = triangle.a;
        vertices[1] = triangle.c;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 1;
        vertices[0] = triangle.a;
      }else{
        nVertices = 2;
        vertices[0] = triangle.a;
        //vertices[1] = // edge.bc
      }
    }else{
      if (triangle.c.position.z == zCoord){
        nVertices = 2;
        vertices[0] = triangle.c;
        vertices[1] = triangle.a;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 2;
        vertices[0] = triangle.a;
        //vertices[1] = edge.bc;
      }else{
        nVertices = 1;
        vertices[0] = triangle.a;
      }
    }
  }else if (triangle.a.position.z < zCoord){
    if (triangle.b.position.z == zCoord){
      if (triangle.c.position.z == zCoord){
        nVertices = 2;
        vertices[0] = triangle.c;
        vertices[1] = triangle.b;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 1;
        vertices[0] = triangle.b;
      }else{
        nVertices = 1;
        vertices[0] = triangle.b;
      }
    }else if (triangle.b.position.z < zCoord){
      if (triangle.c.position.z == zCoord){
        nVertices = 1;
        vertices[0] = triangle.c;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 0;
      }else{
        nVertices = 2;
        //vertices[0] = edge.ca;
        //vertices[1] = edge.ab;
      }
    }else{
      if (triangle.c.position.z == zCoord){
        nVertices = 2;
        vertices[0] = triangle.c;
        //vertices[1] = edge.ab;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 2;
        //vertices[0] = edge.bc;
        //vertices[1] = edge.ab;
      }else{
        nVertices = 2;
        //vertices[0] = edge.ca;
        //vertices[1] = edge.ab;
      }
    }
  }else{
    if (triangle.b.position.z == zCoord){
      if (triangle.c.position.z == zCoord){
        nVertices = 2;
        vertices[0] = triangle.b;
        vertices[1] = triangle.c;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 2;
        vertices[0] = triangle.b;
        //vertices[1] = edge.ca;
      }else{
        nVertices = 1;
        vertices[0] = triangle.b;
      }
    }else if (triangle.b.position.z < zCoord){
      if (triangle.c.position.z == zCoord){
        nVertices = 2;
        //vertices[0] = edge.ab;
        vertices[1] = triangle.c;
      }else if (triangle.c.position.z < zCoord){
        nVertices = 2;
        //vertices[0] = edge.ab;
        //vertices[1] = edge.ca;
      }else{
        nVertices = 2;
        //vertices[0] = edge.ab;
        //vertices[1] = edge.bc;
      }
    }else{
      if (triangle.c.position.z == zCoord){
        nVertices = 1;
        vertices[0] = triangle.c;
      }else if (triangle.c.position.z <zCoord){
        nVertices = 2;
        //vertices[0] = edge.bc;
        //vertices[1] = edge.ca;
      }else{
        nVertices = 0;
      }
    }
  }
}

Vertex_3::Vertex_3(Real zCoord, const Vertex_3& segmentStart, const Vertex_3& segmentEnd){
  return;
}

Vertex_3::Vertex_3(){
  return;
}