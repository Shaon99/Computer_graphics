
#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
    //Line Drawing For A
	glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.6f, -0.8f);
	glVertex2f(-0.9f, -0.3f);
	glVertex2f(-0.7f, -0.3f);
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.9f, 0.8f);
	glVertex2f(-0.7f, 0.8f);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.6f, -0.8f);
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, 0.5f);
	//Line Drawing For I
    glVertex2f(-0.5f, -0.8f);
    glVertex2f(-0.2f, -0.8f);
    glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
    glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.2f, -0.8f);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.8f);
    //Line Drawing For U
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.5f, -0.8f);
    glVertex2f(0.2f, -0.6f);
	glVertex2f(0.3f, -0.6f);
    glVertex2f(0.0f, 0.8f);
	glVertex2f(0.2f, 0.8f);
	glVertex2f(0.3f, 0.8f);
	glVertex2f(0.5f, 0.8f);
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, 0.8f);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.3f, 0.8f);
    glVertex2f(0.5f, -0.8f);
    glVertex2f(0.5f, 0.8f);
    //Line Drawing For B
    glVertex2f(0.6f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.7f, -0.6f);
	glVertex2f(0.9f, -0.6f);
    glVertex2f(0.7f, -0.4f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, -0.8f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.6f, 0.0f);

	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL");
	glutInitWindowSize(420, 420);
	glutDisplayFunc(display);
	glutMainLoop();
}
