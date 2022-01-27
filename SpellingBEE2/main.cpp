#include <windows.h>  // For MS Windows
#include<GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include<string.h>


void display();
void gameDisplay1();
void gameDisplay2();
void gameDisplay3();
void gameDisplay4();
void gameDisplay5();
void gameDisplay6();
void gameDisplay7();
void gameDisplay8();
void gameDisplay9();
void gameDisplay10();
void reshape(int, int);

void init() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
}

void keys(unsigned char key, int x, int y)
{
	if (key == 'x')
		glutDisplayFunc(display);
	glutPostRedisplay();
	if (key == '1')
		glutDisplayFunc(gameDisplay1);
	glutPostRedisplay();
	if (key == '2')
		glutDisplayFunc(gameDisplay2);
	glutPostRedisplay();
	if (key == '3')
		glutDisplayFunc(gameDisplay3);
	glutPostRedisplay();
	if (key == '4')
		glutDisplayFunc(gameDisplay4);
	glutPostRedisplay();
	if (key == '5')
		glutDisplayFunc(gameDisplay5);
	glutPostRedisplay();
	if (key == '6')
		glutDisplayFunc(gameDisplay6);
	glutPostRedisplay();
	if (key == '7')
		glutDisplayFunc(gameDisplay7);
	glutPostRedisplay();
	if (key == '8')
		glutDisplayFunc(gameDisplay8);
	glutPostRedisplay();
	if (key == '9')
		glutDisplayFunc(gameDisplay9);
	glutPostRedisplay();
	if (key == '0')
		glutDisplayFunc(gameDisplay10);
	glutPostRedisplay();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200,100);
	glutInitWindowSize(700, 500);

	
	glutCreateWindow("SpellingBEE Game");

	glutDisplayFunc(display);
	//glutDisplayFunc(gameDisplay1);
	// glutReshapeFunc(reshape);
	glutKeyboardFunc(keys);
	
	init();

	glutMainLoop();


}

void display() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);
	char mainmenu[] = "Welcome to Spelling Bee ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}
	//draw
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);

	//to start Page
	glColor3f(1, 0, 0);
	glRasterPos3f(-0.0, -0.0, 0);
	char next[] = " Press 1 to Start ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}

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

