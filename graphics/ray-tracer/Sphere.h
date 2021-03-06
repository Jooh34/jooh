#ifndef SPHERE_H
#define SPHERE_H
#pragma once

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/freeglut.h>
#include <vector>
#include <math.h>
#include "mathclass/include/mathclass.h"
#include "Object.h"
#include "Texture.h"

#define EPS 0.01f

class Sphere : public Object
{
public:
	jhm::position o;
	float r;

	Sphere(jhm::position o, float r, jhm::vector ka, jhm::vector kd, jhm::vector ks, float kn,
		float reflectivity, float transparency, float n, Texture* texture = NULL);

	bool intersect(jhm::position ori, jhm::vector dir, jhm::position &pHit, jhm::vector &pv);
	jhm::vector getTextureColor(jhm::position pHit);

};

#endif
