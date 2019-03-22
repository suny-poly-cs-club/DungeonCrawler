#include "Renderer/Model.hpp"



Model::Model()
{
}


Model::~Model()
{
    for (int i = 0; i < meshes.size(); i++) {
        delete meshes[i];
    }
    meshes.clear();
}

void Model::addMesh(Mesh *mesh) {
    meshes.push_back(mesh);
}

void Model::draw(Renderer * renderer, glm::mat4 &modelMatrix)
{
    for (int i = 0; i < meshes.size(); i++) {
        meshes[i]->draw(renderer, modelMatrix);
    }
}
