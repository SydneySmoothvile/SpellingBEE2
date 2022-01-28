#include <windows.h>  // For MS Windows
#include<GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include<string.h>


void display();
void gameInstructions();
void gameDisplay1();
void gameDisplay1Answer();
void gameDisplay1Wrong();

void gameDisplay2();
void gameDisplay2Answer();
void gameDisplay2Wrong();

void gameDisplay3();
void gameDisplay3Answer();
void gameDisplay3Wrong();

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

	//answers to question 1
	if (key== 'b')
		glutDisplayFunc(gameDisplay1Answer);
	glutPostRedisplay();
	if (key == 'a')
		glutDisplayFunc(gameDisplay1Wrong);
	glutPostRedisplay();
	if (key == 'c')
		glutDisplayFunc(gameDisplay1Wrong);
	glutPostRedisplay();
	if (key == 'd')
		glutDisplayFunc(gameDisplay1Wrong);
	glutPostRedisplay();

	//answers to question 2
	if (key == 'm')
		glutDisplayFunc(gameDisplay2Answer);
	glutPostRedisplay();
	if (key == 'n')
		glutDisplayFunc(gameDisplay2Wrong);
	glutPostRedisplay();
	if (key == 'o')
		glutDisplayFunc(gameDisplay2Wrong);
	glutPostRedisplay();
	if (key == 'p')
		glutDisplayFunc(gameDisplay2Wrong);
	glutPostRedisplay();

	//answers to question 3
	if (key == 't')
		glutDisplayFunc(gameDisplay3Wrong);
	glutPostRedisplay();
	if (key == 'u')
		glutDisplayFunc(gameDisplay3Wrong);
	glutPostRedisplay();
	if (key == 'v')
		glutDisplayFunc(gameDisplay3Answer);
	glutPostRedisplay();
	if (key == 'w')
		glutDisplayFunc(gameDisplay3Wrong);
	glutPostRedisplay();

	//game instructions
	if (key == 'z')
		glutDisplayFunc(gameInstructions);
	glutPostRedisplay();
	if (key == 'e')
		exit(EXIT_SUCCESS);
	glutPostRedisplay();
}

void myTimer(int val) {
	glutDisplayFunc(display);
	glutPostRedisplay();
}
int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200,100);
	glutInitWindowSize(900, 500);

	
	glutCreateWindow("SpellingBEE Game");

	glutDisplayFunc(display);
	//glutDisplayFunc(gameDisplay1);
	// glutReshapeFunc(reshape);
	glutKeyboardFunc(keys);
	glutTimerFunc(2000, myTimer, 0);
	
	init();

	glutMainLoop();


}

void display() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char gameTitle[] = "Spelling BEE ";
	for (int i = 0; i < strlen(gameTitle); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, gameTitle[i]);
		glutSwapBuffers();
	}
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);
	char mainmenu[] = "WELCOME ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}
	

	//to start Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.1, 0);
	char next[] = " Press 1 - to Start ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//to instruction Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.2, 0);
	char instruction[] = " Press Z - to read instructions ";
	for (int i = 0; i < strlen(instruction); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, instruction[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//to Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.5, 0);
	char exit[] = " Press E - to exit the game ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
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

