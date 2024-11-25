#ifndef SHADER_H
#define SHADER_H

#include <string>

class Shader{
    public:
        Shader(const char vertexPath, const char* fragmentPath);
        void use();
        void SetMat4(const std::string &name, const GLfloat* value);
        //TODO: set other types
        ~Shader();
};

#endif