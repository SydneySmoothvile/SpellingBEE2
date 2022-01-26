#include <windows.h>  // For MS Windows
#include<GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h


void display();
void reshape(int, int);

void init() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200,100);
	glutInitWindowSize(700, 500);

	
	glutCreateWindow("SpellingBEE Game");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();

	glutMainLoop();


}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	//draw
	glBegin(GL_POLYGON);

	glVertex2f(3.0, 3.0);
	glVertex2f(-3.0, 3.0);
	glVertex2f(-3.0, -3.0);
	glVertex2f(3.0, -3.0);


	glEnd();

	glFlush();
}

void reshape(int w, int h) 
{
	//viewport
	glViewport(0,0,(GLsizei)w,(GLsizei)h);

	//projection
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-5, 5, -7, 7);
	glMatrixMode(GL_MODELVIEW);
	

}