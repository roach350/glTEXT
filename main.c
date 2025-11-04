//glTEXT reference 


//TODO
/*	
	add all other ascii characters	
*/


#include <stdlib.h>
#include <string.h>
#include <GL/glut.h>
#include <stdio.h>
#include <time.h>

#include "glText.h"

//debugging
int verbose = 1; //debug mode (displays variables in terminal)


//declare functions
void render8Bit(int[], int, int);
void renderString(int, int, int, char[]);



void display(){
//clear screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


//temp code


	renderString(100, 100, 1, "@SMALL ONE POINT TEXT");

	renderString(50, 120, 2, "ABCDEFGHIJKLMNKOPQRSTUVWXYZ");

	renderString(50, 140, 2, "abcdeFGHIJKLMNKOPQRSTUV");


	renderString(20, 200, 2, "LOOK HERE LOOK LISTEN");

	renderString(100, 160, 4, "0123456789 @");



//verbosity

	if (verbose == 1){

		//clear console
		//printf("\e[1;1H\e[2J");
	}

	glutSwapBuffers();
}



void init(){
	glClearColor(0.8,0.8,0.8,0);
 	gluOrtho2D(0,800,600,0);
}


int main(int argc, char* argv[]){ 
	glutInit(&argc, argv);
 	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
 	glutInitWindowSize(800,600);
 	glutInitWindowPosition(200,200);
	glutCreateWindow("GLTEXT");
 	init();
	glutDisplayFunc(display);
 	srand(time(NULL)); //seed random number
	glutMainLoop();
}
