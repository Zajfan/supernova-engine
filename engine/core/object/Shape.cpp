//
// (c) 2025 Eduardo Doria.
//

#include "Shape.h"
#include "subsystem/MeshSystem.h"
#include "subsystem/RenderSystem.h"

using namespace Supernova;

Shape::Shape(Scene* scene): Mesh(scene){
}

Shape::Shape(Scene* scene, Entity entity): Mesh(scene, entity){
}

Shape::~Shape(){
}

void Shape::createPlane(float width, float depth){
    scene->getSystem<MeshSystem>()->createPlane(entity, width, depth);
}

void Shape::createPlane(float width, float depth, unsigned int tiles){
    scene->getSystem<MeshSystem>()->createPlane(entity, width, depth, tiles);
}

void Shape::createBox(float width, float height, float depth){
    scene->getSystem<MeshSystem>()->createBox(entity, width, height, depth);
}

void Shape::createBox(float width, float height, float depth, unsigned int tiles){
    scene->getSystem<MeshSystem>()->createBox(entity, width, height, depth, tiles);
}

void Shape::createSphere(float radius){
    scene->getSystem<MeshSystem>()->createSphere(entity, radius);
}

void Shape::createSphere(float radius, unsigned int slices, unsigned int stacks){
    scene->getSystem<MeshSystem>()->createSphere(entity, radius, slices, stacks);
}

void Shape::createCylinder(float radius, float height){
    scene->getSystem<MeshSystem>()->createCylinder(entity, radius, radius, height);
}

void Shape::createCylinder(float baseRadius, float topRadius, float height){
    scene->getSystem<MeshSystem>()->createCylinder(entity, baseRadius, topRadius, height);
}

void Shape::createCylinder(float radius, float height, unsigned int slices, unsigned int stacks){
    scene->getSystem<MeshSystem>()->createCylinder(entity, radius, radius, height, slices, stacks);
}

void Shape::createCylinder(float baseRadius, float topRadius, float height, unsigned int slices, unsigned int stacks){
    scene->getSystem<MeshSystem>()->createCylinder(entity, baseRadius, topRadius, height, slices, stacks);
}

void Shape::createCapsule(float radius, float height){
    scene->getSystem<MeshSystem>()->createCapsule(entity, radius, radius, height);
}

void Shape::createCapsule(float baseRadius, float topRadius, float height){
    scene->getSystem<MeshSystem>()->createCapsule(entity, baseRadius, topRadius, height);
}

void Shape::createCapsule(float radius, float height, unsigned int slices, unsigned int stacks){
    scene->getSystem<MeshSystem>()->createCapsule(entity, radius, radius, height, slices, stacks);
}

void Shape::createCapsule(float baseRadius, float topRadius, float height, unsigned int slices, unsigned int stacks){
    scene->getSystem<MeshSystem>()->createCapsule(entity, baseRadius, topRadius, height, slices, stacks);
}

void Shape::createTorus(float radius, float ringRadius){
    scene->getSystem<MeshSystem>()->createTorus(entity, radius, ringRadius);
}

void Shape::createTorus(float radius, float ringRadius, unsigned int sides, unsigned int rings){
    scene->getSystem<MeshSystem>()->createTorus(entity, radius, ringRadius, sides, rings);
}