#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void lineas(GLdouble x1,GLdouble y1,GLdouble x2,GLdouble y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glEnd();

}
void FIGURA()
{	
	// PARABOLAS
	
   double y=0;
   double y1=0;
   double y2=0;
   double y3=0;
   
   
   //PARABOLA
   for(double i=-4.17; i<=4.17;i+=0.0001)
   {	
		glBegin(GL_POINTS);
		y=-(i*i)+9;
		y1=0.6*y;
		glColor3f(0.0,0.0,0.0);
		glVertex2f(i,y-y1);
	}
	for(double i=-4; i<=4;i+=0.0001)
   {
	    glBegin(GL_POINTS);
		y2=-(i*i)+8;
		y3=0.58*y2;
		glColor3f(0.0,0.0,0.0);
		glVertex2f(i,y2-y3);
	}
	glEnd();
	lineas(-4.17,-3.37,-4.0,-3.37);
	lineas(4.17,-3.37,4.0,-3.37);
	
	
	// LINEAS DELGADA
	lineas(-5.0,0.0,-3.0,0.0);
	lineas(-2.8,0.0,2.8,0.0);
	lineas(3.0,0.0,5.0,0.0);
	
	lineas(-5.0,-0.09,-3.05,-0.09);
	lineas(-2.85,-0.09,2.85,-0.09);
	lineas(3.05,-0.09,5.0,-0.09);
	
	lineas(-5.0,0.0,-5.0,-0.09);
	lineas(5.0,0.00,5.0,-0.09);
	
	
	// LINEA ANCHA
	lineas(-4.9,-0.3,-3.15,-0.3);
	lineas(-2.95,-0.3,2.95,-0.3);
	lineas(3.15,-0.3,4.9,-0.3);
	
	lineas(-4.9,-0.3,-4.9,-0.09);
	lineas(4.9,-0.3,4.9,-0.09);
	
	//PATA IZQUIERDA
	lineas(-4.17,-3.37,-4.17,-0.3);
	lineas(-4.055,-2.9,-4.055,-0.3);
	//PATA DERECHA
	lineas(4.17,-3.37,4.17,-0.3);
	lineas(4.055,-2.9,4.055,-0.3);
	
	
	lineas(-3.4,-0.3,-3.4,-1.1);
	lineas(-3.3,-0.3,-3.3,-0.8);
	
	lineas(3.4,-0.3,3.4,-1.0);
	lineas(3.3,-0.3,3.3,-0.7);
	

	lineas(-4.5,-0.3,-4.17,-1.0);
	lineas(-4.615,-0.3,-4.17,-1.215);
	
	lineas(-3.715,-0.3,-4.055,-1.0);
	lineas(-3.6,-0.3,-4.055,-1.215);
	

	lineas(4.5,-0.3,4.17,-1.0);
	lineas(4.615,-0.3,4.17,-1.215);
	
	lineas(3.715,-0.3,4.055,-1.0);
	lineas(3.6,-0.3,4.055,-1.215);
	
	// LINEAS DEBAJO DE LAS PARABOLAS 
	lineas(-2.3,0.0,-2.3,1.1);
	lineas(-2.2,0.0,-2.2,1.3);
	
	lineas(-1.5,0.0,-1.5,2.4);
	lineas(-1.6,0.0,-1.6,2.3);
	
	lineas(-0.9,0.0,-0.9,3.0);
	lineas(-0.8,0.0,-0.8,3.1);
	
	lineas(2.3,0.0,2.3,1.1);
	lineas(2.2,0.0,2.2,1.3);
	
	lineas(1.5,0.0,1.5,2.4);
	lineas(1.6,0.0,1.6,2.3);
	
	lineas(0.9,0.0,0.9,3.0);
	lineas(0.8,0.0,0.8,3.1);
	
	
// LINEA EN MEDIO
	lineas(-0.05,0.0,-0.05,3.35);
	lineas(0.05,0.0,0.05,3.35);
	
	
	
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    FIGURA();
    glEnd();
    glFlush ();
}


void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6.0, 6.0, -6.0, 6.0, -6.0, 6.0); 
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 500);
    glutInitWindowPosition (0,0);
    glutCreateWindow ("EJERCICIO 1");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
