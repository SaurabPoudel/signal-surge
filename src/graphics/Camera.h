#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera{
    public:
        glm::vec3 Position;
        glm::vec3 Front;
        glm::vec3 Up;
        glm::vec3 Right;
        glm::vec3 WorldUp;

    /*
     Euler Angles 
     Yaw -> rotation around Y axis
     Pitch -> rotation around X axis
     */
    float Yaw; 
    float Pitch;

    Camera(glm::position, glm::vec3 up, float yaw, float pitch){
        glm::mat4 GetViewMatrix();
        void ProcessKeyboard(/*Implement later*/);
        void ProcessMouseMovement(/*Implement later*/);
    }
};

#endif