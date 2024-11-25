#version 330 core

layout (location = 0) in vec3 aPos;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;



void main()
{
    /*
    this line computes the final vertex position of the triangle.
    aPos is converted to a 4D vector by adding a 1 (homogeneous coordinate) at the end.
    model : local space ->  world space
    view: world space -> camera space
    projection: camera space -> screen space
    */
    gl_Position = projection * view * model * vec4(aPos, 1.0);
}