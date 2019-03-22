#include "Renderer/Renderer.hpp"

Renderer::Renderer() {
    shaders.push_back(new Shader("vert.vs", "frag.ps"));
    shaders.push_back(new Shader("vert.vs", "frag.ps"));
}

Renderer::~Renderer() {
    for (int i = 0; i < shaders.size(); i++) {
        delete shaders[i];
    }
    shaders.clear();
}

void Renderer::activate() {
    shaders[(int)currentShader]->activate();
}

void Renderer::deactivate() {
    glUseProgram(0);
}

void Renderer::setShader(SHADERS shader) {
    currentShader = shader;
}
