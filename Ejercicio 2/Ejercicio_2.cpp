#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
   
	
	
	float x, y, r, i;
	GLfloat angulo;
	
	
		
	//--------------------------------------------ENGRANAJE NUMERO 1 -------------------------------------------------
		
		
	glPointSize(2);
	glBegin(GL_POINTS);
	
	for(i=0 ; i<360 ; i+=0.01)// FOR QUE HACE EL CIRCULO
	{
		angulo = i*M_PI/180;
		for(r=1.5 ;r<2.4; r+=0.01)
		{
		x = r*cos(angulo)-4.7;
		y = r*sin(angulo)-1.6;
		glColor3f(0.0f,0.6f,0.0f);  
		glVertex2f(x,  y);
		}
	}
	glEnd();
	
	//// PUNTAAS DEL ENGRANAJE 
	
	// PRIMERO
	glBegin(GL_POLYGON);
	glVertex2f(-5.1, 1.5);
	glVertex2f(-4.4, 1.5);
	glVertex2f(-4.2, 0.6);
	glVertex2f(-5.3, 0.6);
	glEnd();
	// SEGUNDO 
	glBegin(GL_POLYGON);
	glVertex2f(-3.7, 0.5);
	glVertex2f(-3.0, 0.9);
	glVertex2f(-2.6, 0.6);
	glVertex2f(-2.9, -0.2);
	glEnd();
	//TERCERO 
	glBegin(GL_POLYGON);
	glVertex2f(-2.7, -0.6);
	glVertex2f(-1.8, -0.5);
	glVertex2f(-1.6, -1.1);
	glVertex2f(-2.3, -1.5);
	glEnd();
	//CUARTO 
	glBegin(GL_POLYGON);
	glVertex2f(-2.3, -2.0);
	glVertex2f(-1.7, -2.5);
	glVertex2f(-1.9, -3.0);
	glVertex2f(-2.7, -3.0);
	glEnd();
	//QUINTO
	glBegin(GL_POLYGON);
	glVertex2f(-3.1, -3.3);
	glVertex2f(-2.8, -4.0);
	glVertex2f(-3.3, -4.3);
	glVertex2f(-3.9, -3.8);
	glEnd();
	//SEXTO
	glBegin(GL_POLYGON);
	glVertex2f(-5.3, -3.9);
	glVertex2f(-5.1, -4.6);
	glVertex2f(-4.5, -4.6);
	glVertex2f(-4.3, -3.9);
	glEnd();
	//SEPTIMO
	glBegin(GL_POLYGON);
	glVertex2f(-6.6, -3.0);
	glVertex2f(-6.9, -3.8);
	glVertex2f(-6.5, -4.1);
	glVertex2f(-5.8, -3.7);
	glEnd();
	//OCTAVO
	glBegin(GL_POLYGON);
	glVertex2f(-7.1, -1.9);
	glVertex2f(-7.8, -2.3);
	glVertex2f(-7.6, -2.9);
	glVertex2f(-6.6, -2.8);
	glEnd();
	//NOVENO
	glBegin(GL_POLYGON);
	glVertex2f(-6.8, -0.5);
	glVertex2f(-7.5, -0.5);
	glVertex2f(-7.7, -1.0);
	glVertex2f(-7.1, -1.4);
	glEnd();
	//DECIMO
	glBegin(GL_POLYGON);
	glVertex2f(-5.8, 0.5);
	glVertex2f(-6.4, 0.9);
	glVertex2f(-6.9, 0.6);
	glVertex2f(-6.6, -0.1);
	glEnd();
	
	
	//--------------------------------------------ENGRANAJE NUMERO 2 -------------------------------------------------
	

	glPointSize(2);
	glBegin(GL_POINTS);
	
	for(i=0 ; i<360 ; i+=0.01)  // FOR QUE CREA EL CIRCULO
	{
		angulo = i*M_PI/180;
		for(r=1.5 ;r<2.4; r+=0.01)
		{
		x = r*cos(angulo)-0.5;
		y = r*sin(angulo)+2.4;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		}
	}
	glEnd();

		// PUNTAS DEL ENGRANAJE 
	//   1
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 5.5);
	glVertex2f(-0.1, 5.5);
	glVertex2f(0.1, 4.6);
	glVertex2f(-1.0, 4.6);
	glEnd();
	//  2
	glBegin(GL_POLYGON);
	glVertex2f(0.6, 4.5);
	glVertex2f(1.3, 4.9);
	glVertex2f(1.7, 4.6);
	glVertex2f(1.4, 3.8);
	glEnd();
	//  3
	glBegin(GL_POLYGON);
	glVertex2f(1.6, 3.4);
	glVertex2f(2.5, 3.5);
	glVertex2f(2.7, 2.9);
	glVertex2f(1.9, 2.5);
	glEnd();
	// 4
	glBegin(GL_POLYGON);
	glVertex2f(1.8, 2.0);
	glVertex2f(2.6, 1.5);
	glVertex2f(2.4, 1.0);
	glVertex2f(1.4, 1.0);
	glEnd();
	//   5
	glBegin(GL_POLYGON);
	glVertex2f(1.2, 0.7);
	glVertex2f(1.5, 0.0);
	glVertex2f(1.0, -0.3);
	glVertex2f(0.1, 0.7);
	glEnd();
	//  6
	glBegin(GL_POLYGON);
	glVertex2f(-1.0, 0.1);
	glVertex2f(-0.8, -0.6);
	glVertex2f(-0.2, -0.6);
	glVertex2f(0.0, 0.1);
	glEnd();
	// 7
	glBegin(GL_POLYGON);
	glVertex2f(-2.3, 1.0);
	glVertex2f(-2.6, 0.2);
	glVertex2f(-2.2, -0.1);
	glVertex2f(-1.5, 0.3);
	glEnd();
	// 8
	glBegin(GL_POLYGON);
	glVertex2f(-2.8, 2.1);
	glVertex2f(-3.5, 1.7);
	glVertex2f(-3.3, 1.1);
	glVertex2f(-2.6, 1.2);
	glEnd();
	//   9
	glBegin(GL_POLYGON);
	glVertex2f(-2.5, 3.5);
	glVertex2f(-3.2, 3.5);
	glVertex2f(-3.4, 3);
	glVertex2f(-2.8, 2.6);
	glEnd();
	//     10
	glBegin(GL_POLYGON);
	glVertex2f(-1.5, 4.5);
	glVertex2f(-2.1, 4.9);
	glVertex2f(-2.6, 4.6);
	glVertex2f(-2.3, 3.9);
	glEnd();
	
	
	
	//--------------------------------------------ENGRANAJE NUMERO 3 -------------------------------------------------
	
	glPointSize(2);
	glBegin(GL_POINTS);
	
	for(i=0 ; i<360 ; i+=0.01)//circulo exterior
	{
		angulo = i*M_PI/180;
		for(r=1.5 ;r<2.4; r+=0.01)
		{
		x = r*cos(angulo)+4.8;
		y = r*sin(angulo)-0.4;
		glColor3f(0.5, 0.5, 0.5);//color 
		glVertex2f(x,  y);
		}
	}
	glEnd();
		// PUNTAS DEL ENGRANAJE 
	//  1
	glBegin(GL_POLYGON);
	glVertex2f(4.4, 2.8);
	glVertex2f(5.1, 2.8);
	glVertex2f(5.3, 1.9);
	glVertex2f(4.2, 1.9);
	glEnd();
	// 2
	glBegin(GL_POLYGON);
	glVertex2f(5.7, 1.8);
	glVertex2f(6.5, 2.3);
	glVertex2f(6.9, 2.0);
	glVertex2f(6.6, 1.2);
	glEnd();
	// 3
	glBegin(GL_POLYGON);
	glVertex2f(6.8, 0.8);
	glVertex2f(7.7, 0.9);
	glVertex2f(7.9, 0.3);
	glVertex2f(7.2, -0.1);
	glEnd();
	//   4
	glBegin(GL_POLYGON);
	glVertex2f(7.2, -0.6);
	glVertex2f(7.8, -1.1);
	glVertex2f(7.6, -1.6);
	glVertex2f(6.8, -1.6);
	glEnd();
	// 5
	glBegin(GL_POLYGON);
	glVertex2f(6.4, -1.9);
	glVertex2f(6.7, -2.6);
	glVertex2f(6.2, -2.9);
	glVertex2f(5.6, -2.4);
	glEnd();
	//  6
	glBegin(GL_POLYGON);
	glVertex2f(4.2, -2.5);
	glVertex2f(4.4, -3.3);
	glVertex2f(5.1, -3.3);
	glVertex2f(5.2, -2.5);
	glEnd();
	//--7
	glBegin(GL_POLYGON);
	glVertex2f(2.9, -1.6);
	glVertex2f(2.6, -2.4);
	glVertex2f(3.0, -2.7);
	glVertex2f(3.7, -2.3);
	glEnd();
	//  8
	glBegin(GL_POLYGON);
	glVertex2f(2.4, -0.5);
	glVertex2f(1.7, -0.9);
	glVertex2f(1.9, -1.5);
	glVertex2f(2.9, -1.4);
	glEnd();
	//  9
	glBegin(GL_POLYGON);
	glVertex2f(2.8, 0.9);
	glVertex2f(2.0, 0.9);
	glVertex2f(1.8, 0.4);
	glVertex2f(2.4, 0.0);
	glEnd();
	//  10
	glBegin(GL_POLYGON);
	glVertex2f(3.8, 1.8);
	glVertex2f(3.1, 2.3);
	glVertex2f(2.6, 2.0);
	glVertex2f(2.9, 1.1);
	glEnd();
	
	
glFlush();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
     glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
	
    glOrtho(-9.0, 9.0, -6.0, 6.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (300, 100);
    glutCreateWindow ("EJERCICIO 2");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
