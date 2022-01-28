#include <windows.h>  // For MS Windows
#include<GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include<string.h>


void gameInstructions() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}


	//Page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.6, 0);
	char title[] = " GAME INSTRUCTIONS ";
	for (int i = 0; i < strlen(title); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, title[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//start instruction
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.4, 0);
	char instruction1[] = "1. To start the game press 1 ";
	for (int i = 0; i < strlen(instruction1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, instruction1[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//answer instruction
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.2, 0);
	char instruction2[] = "2. To choose an answer press A, B, C or D";
	for (int i = 0; i < strlen(instruction2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, instruction2[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//correct answer instruction
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.0, 0);
	char instruction3[] = "3. If the correct answer is selected the choice will turn green.";
	for (int i = 0; i < strlen(instruction3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, instruction3[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//wrong answer instruction
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, -0.2, 0);
	char instruction4[] = "5. If the wrong answer is selected all the wrong choices turn red and the right choice turns green";
	for (int i = 0; i < strlen(instruction4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, instruction4[i]);
		glutSwapBuffers();
	}

	glEnd();

	glFlush();

	//go to main
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}
	

}
void gameDisplay1()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acommodate";
	char choice2[] = "B. accommodate";
	char choice3[] = "C. acommodete";
	char choice4[] = "D. accomodate";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}
void gameDisplay1Answer()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acommodate";
	char choice2[] = "B. accommodate";
	char choice3[] = "C. acommodete";
	char choice4[] = "D. accomodate";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glColor3f(0, 1, 0);
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	glColor3f(0, 0, 0);
	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}
void gameDisplay1Wrong()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acommodate";
	char choice2[] = "B. accommodate";
	char choice3[] = "C. acommodete";
	char choice4[] = "D. accomodate";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(1, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glColor3f(0, 1, 0);
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 0, 0);
	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay2()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. surprise";
	char choice2[] = "B. suprise";
	char choice3[] = "C. surrprise";
	char choice4[] = "D. surpise";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 3 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}
void gameDisplay2Answer()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. surprise";
	char choice2[] = "B. suprise";
	char choice3[] = "C. surrprise";
	char choice4[] = "D. surpise";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 1, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glColor3f(0, 0, 0);
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	glColor3f(0, 0, 0);
	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}
void gameDisplay2Wrong()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. surprise";
	char choice2[] = "B. suprise";
	char choice3[] = "C. surrprise";
	char choice4[] = "D. surpise";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 1, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glColor3f(1, 0, 0);
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 0, 0);
	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay3Answer()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question 3
	char choice1[] = "A. acknowlege";
	char choice2[] = "B. aknowlege";
	char choice3[] = "C. acknowledge";
	char choice4[] = "D. aknowledge";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glColor3f(0, 0, 0);
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	glColor3f(0, 1, 0);
	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glColor3f(0, 0, 0);
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}
void gameDisplay3Wrong()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question 3
	char choice1[] = "A. acknowlege";
	char choice2[] = "B. aknowlege";
	char choice3[] = "C. acknowledge";
	char choice4[] = "D. aknowledge";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(1, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glColor3f(1, 0, 0);
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	glColor3f(0, 1, 0);
	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glColor3f(1, 0, 0);
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay3()
{

	//page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acknowlege";
	char choice2[] = "B. aknowlege";
	char choice3[] = "C. acknowledge";
	char choice4[] = "D. aknowledge";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 4 to go to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay4()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. absense";
	char choice2[] = "B. absence";
	char choice3[] = "C. abcense";
	char choice4[] = "D. absance";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 5 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay5()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. accidently";
	char choice2[] = "B. accidentaly";
	char choice3[] = "C. accidentally";
	char choice4[] = "D. aciddentaly";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.9, 0);
	char next[] = " Press 6 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay6()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//page title
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.85, 0.8, 0);
	char mainmenu[] = "Spelling BEE ";
	for (int i = 0; i < strlen(mainmenu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mainmenu[i]);
		glutSwapBuffers();
	}

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acquire";
	char choice2[] = "B. aquire";
	char choice3[] = "C. adquire";
	char choice4[] = "D. accuire";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 7 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay7()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. apparent";
	char choice2[] = "B. apparant";
	char choice3[] = "C. aparent";
	char choice4[] = "D. apparrent";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 8 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay8()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. cemetry";
	char choice2[] = "B. cemmetery";
	char choice3[] = "C. cematery";
	char choice4[] = "D. cemetery";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 9 back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay9()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. definitly";
	char choice2[] = "B. definately";
	char choice3[] = "C. definitely";
	char choice4[] = "D. defiantly";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 10 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay10()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. garantee";
	char choice2[] = "B. guarantee";
	char choice3[] = "C. guarentee";
	char choice4[] = "D. guaranty";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}*/

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " END ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}


























//void gameDisplay20()
/*{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acommodate";
	char choice2[] = "B. accommodate";
	char choice3[] = "C. acommodete";
	char choice4[] = "D. accomodate";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 2 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay2()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. surprise";
	char choice2[] = "B. suprise";
	char choice3[] = "C. surrprise";
	char choice4[] = "D. surpise";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 3 to go back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay3()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acknowlege";
	char choice2[] = "B. aknowlege";
	char choice3[] = "C. acknowledge";
	char choice4[] = "D. aknowledge";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 4 to go to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay4()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. absense";
	char choice2[] = "B. absence";
	char choice3[] = "C. abcense";
	char choice4[] = "D. absance";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 5 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay5()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. accidently";
	char choice2[] = "B. accidentaly";
	char choice3[] = "C. accidentally";
	char choice4[] = "D. aciddentaly";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 6 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay6()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. acquire";
	char choice2[] = "B. aquire";
	char choice3[] = "C. adquire";
	char choice4[] = "D. accuire";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 7 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay7()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. apparent";
	char choice2[] = "B. apparant";
	char choice3[] = "C. aparent";
	char choice4[] = "D. apparrent";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 8 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay8()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. cemetry";
	char choice2[] = "B. cemmetery";
	char choice3[] = "C. cematery";
	char choice4[] = "D. cemetery";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 9 back to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay9()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. definitly";
	char choice2[] = "B. definately";
	char choice3[] = "C. definitely";
	char choice4[] = "D. defiantly";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " Press 10 to next page ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}

void gameDisplay10()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, 0.6, 0);

	char question[] = "Choose the correct spelling ";
	for (int i = 0; i < strlen(question); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, question[i]);
		glutSwapBuffers();
	}

	//square
	glBegin(GL_POLYGON);

	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);


	glEnd();

	glFlush();

	//question one
	char choice1[] = "A. garantee";
	char choice2[] = "B. guarantee";
	char choice3[] = "C. guarentee";
	char choice4[] = "D. guaranty";


	/*string select[] = { choice1,choice2,choice3,choice4 };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < strlen(select[j]); i++) {
		string choice=select[j];
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice[i]);
		glutSwapBuffers();
	}
	}

	glColor3f(0, 0, 0);

	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " END ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}
	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}
	//choice A
	glRasterPos3d(-0.45, 0.20, 0);

	for (int i = 0; i < strlen(choice1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice1[i]);
		glutSwapBuffers();
	}

	//choice B
	glRasterPos3d(0.05, 0.20, 0);

	for (int i = 0; i < strlen(choice2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice2[i]);
		glutSwapBuffers();
	}

	//choice C
	glRasterPos3d(-0.45, -0.20, 0);

	for (int i = 0; i < strlen(choice3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice3[i]);
		glutSwapBuffers();
	}

	//choice D
	glRasterPos3d(0.05, -0.20, 0);

	for (int i = 0; i < strlen(choice4); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, choice4[i]);
		glutSwapBuffers();
	}


	//Exit game
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -0.8, 0);

	char exit[] = " Press X to go back to main menu ";
	for (int i = 0; i < strlen(exit); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, exit[i]);
		glutSwapBuffers();
	}

	//Next Page
	glColor3f(1, 1, 1);
	glRasterPos3f(-0.5, -1.0, 0);
	char next[] = " END ";
	for (int i = 0; i < strlen(next); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
		glutSwapBuffers();
	}


}*/



