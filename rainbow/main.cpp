#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(30);

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(1.0f, -0.6f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
	glVertex2f(1.0f, -0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
	glVertex2f(1.0f, 0.6f);

	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
