#version 330 core
out vec4 FragColor;

void main(){
    /*
    FragColor is a built-in variable that is used to store the final color of the fragment.
    It is used to set the color of the pixel that is being rendered.
    */
    FragColor = vec4(0.5, 0.8, 0.9, 1.0); // cyan color
}