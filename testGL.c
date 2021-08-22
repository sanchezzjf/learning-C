#define GLFW_INCLUDE_NONE
#include <OpenGL/glu.h>
#include <GLFW/glfw3.h>

void createScreen(){
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    GLFWwindow* window = glfwCreateWindow(640, 480, "Testing", NULL, NULL);
    if (!window){
        glfwTerminate();
    }
    if (!glfwInit()){
        glfwTerminate();
    }
}

int main(){
    createScreen();
    return 0;
}