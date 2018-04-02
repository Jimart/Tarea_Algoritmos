#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
	
	
	
	float x, y, r, i;
	GLfloat angulo;
	glPointSize(3);
	 glLineWidth(3);
	glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_LINES);
	
// parte de arriba 
	glVertex2f(-4, 10);
	glVertex2f(4, 10);
	
	glVertex2f(-3, 12);
	glVertex2f(3, 12);
	
	glVertex2f(-3, 10);
	glVertex2f(-3, 12);
	
	glVertex2f(3, 10);
	glVertex2f(3, 12);
	
	
	glVertex2f(-1, 12);
	glVertex2f(-1, 16.3);
	
	glVertex2f(1, 12);
	glVertex2f(1, 16.3);	
	
// lados
	
	glVertex2f(-2, 18);
	glVertex2f(-7, 17);
	
	glVertex2f(-2, 18);
	glVertex2f(-7, 19);
	
	glVertex2f(-7, 17);
	glVertex2f(-7, 19);
	
	glVertex2f(2, 18);
	glVertex2f(7, 17);
	
	glVertex2f(2, 18);
	glVertex2f(7, 19);
	
	glVertex2f(7, 17);
	glVertex2f(7, 19);
	
	glEnd();
	
		// circulo de arriba 
	
	
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=-60 ; i<240 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 2;
		x = r*cos(angulo);
		y = r*sin(angulo)+18;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	
	glEnd();
	
	/// --------------------------CUERPO DE LLAVE DE AGUA ------------------------------
	
	glBegin(GL_LINES);
	glVertex2f(-4, 10);
	glVertex2f(-4, 8);
	glEnd();
	
	//curva-izqui hacia bajo
	
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=270 ; i<360 ; i+=0.01)//circulo exterior
	{
		angulo = i*M_PI/180;
		r = 5;
		x = r*cos(angulo)-9;
		y = r*sin(angulo)+8;
		glColor3f(0.0f,0.0f,0.0f);//color 
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//curva izqui  hacia arriba
	
	
	glBegin(GL_POINTS);
	glPointSize(3);
	for(i=90 ; i<180 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 8;
		x = r*cos(angulo)-9;
		y = r*sin(angulo)-5;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//--------
	glBegin(GL_LINES);
	
	glVertex2f(-17, -5);
	glVertex2f(-17, -7);
	
	glVertex2f(-17, -7);
	glVertex2f(-11, -7);
	
	glVertex2f(-11, -7);
	glVertex2f(-11, -5);
	
	glEnd();
	
	//----------------------------
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=90 ; i<180 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 2;
		x = r*cos(angulo)-9;
		y = r*sin(angulo)-5;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//------------------------------
	glBegin(GL_LINES);
	
	glVertex2f(-9, -3);
	glVertex2f(-4, -3);
	
	glEnd();
	
	//------------------------------
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=60 ; i<90 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 2;
		x = r*cos(angulo)-4;
		y = r*sin(angulo)-5;
		glColor3f(0.0f,0.0f,0.0f); 
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//-----------
glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=185 ; i<355 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 3;
		x = r*cos(angulo);
		y = r*sin(angulo)-3;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//-----
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=90 ; i<120 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 2;
		x = r*cos(angulo)+4;
		y = r*sin(angulo)-5;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//------
	glBegin(GL_LINES);
	
	glVertex2f(4, -3);
	glVertex2f(13.3, -3);
	
	glEnd();
	
	//-----
glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=30 ; i<90 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 2;
		x = r*cos(angulo)+13.3;
		y = r*sin(angulo)-5;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();

	//-----
	glBegin(GL_LINES);
	
	glVertex2f(15, -4);
	glVertex2f(17, -4);
	
	glVertex2f(17, -4);
	glVertex2f(17, 4);
	
	glVertex2f(15, 4);
	glVertex2f(17, 4);
	
	glEnd();
	
	//-----
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=270 ; i<330 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 2;
		x = r*cos(angulo)+13.3;
		y = r*sin(angulo)+5;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();

	//----
	glBegin(GL_LINES);
	
	glVertex2f(8.5, 3);
	glVertex2f(13.3, 3);
	
	glEnd();
	
	//curva derecha hacia bajo
	
	glPointSize(3);
	glBegin(GL_POINTS);
	
	for(i=180 ; i<270 ; i+=0.01)
	{
		angulo = i*M_PI/180;
		r = 5;
		x = r*cos(angulo)+9;
		y = r*sin(angulo)+8;
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(x,  y);
		
	}
	glEnd();
	
	//-------
	glBegin(GL_LINES);
	
	glVertex2f(4, 10);
	glVertex2f(4, 8);
	
	glEnd();
	
glFlush();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20.0, 20.0, -10.0, 22.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 700);
    glutInitWindowPosition (300, 100);
    glutCreateWindow ("EJERCICIO 4");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

