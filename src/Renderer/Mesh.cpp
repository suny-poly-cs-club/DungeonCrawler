#include "Renderer/Mesh.hpp"



Mesh::Mesh(std::vector<Vertex> vertdata)
{
}

Mesh::~Mesh()
{
    glBindVertexArray(0);
    glDeleteVertexArrays(1, &vao);
    glDeleteBuffers(1, &vbo);
    glDeleteBuffers(1, &ebo);
}

void Mesh::draw(Renderer * renderer, glm::mat4 &modelMatrix)
{
    renderer->setShader(shader);
    renderer->activate();
    glBindVertexArray(vao);
    glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, indices.data());
    renderer->deactivate();
    glBindVertexArray(0);    
}
