#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
 
#define PI 3.1415927
//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;
int i=10;
 
GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 0.5f;
     GLfloat x              = 0.75;
    GLfloat y              = 0.75;
    GLfloat angle          = 0.0;
    GLfloat angle_stepsize = 0.1;
 
 
void draw_cylinder(GLfloat radius,
                   GLfloat height, GLfloat R,GLfloat G,GLfloat B,GLfloat S)
{


    /** Draw the tube */
   glColor3f( R,G, B );
       glLineWidth(S);
    glBegin(GL_LINE_STRIP);

    angle = 0.0;
        while( angle < 2*PI ) {
            x = radius * cos(angle);
            y = radius * sin(angle);
            glVertex3f(x, y , height);
            glVertex3f(x, y , 0.0);
            angle = angle + angle_stepsize;
        }
        glVertex3f(radius, 0.0, height);
        glVertex3f(radius, 0.0, 0.0);
    glEnd();

  
}

 
void display()
{
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 
    // Resetear transformaciones
    glLoadIdentity();
    // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes
    // Otras transformaciones
    glScalef(scale, scale, scale);
    
    // EJES   X
    glLineWidth(1);
    glBegin(GL_LINES);
      glColor3f( 0.1, 0.87, 0.51 );
    glVertex3f(  -1.5, 0.0, 0.0 );
    glVertex3f(  1.5, 0.0, 0.0 );
      glEnd();
      // EJE Y
       glBegin(GL_LINES);
      glColor3f( 0.97, 0.51, 1.0 );
    glVertex3f(  0.0, -1.5, 0.0 );
    glVertex3f(  0.0, 1.5, 0.0 );
      glEnd();
      
        // EJE z
       glBegin(GL_LINES);
      glColor3f( 0.66, 1.0, 0.51 );
    glVertex3f(  0.0, 0.0, 1.5 );
    glVertex3f(  0.0, 0.0, -1.5 );
      glEnd();
        
        // PARED COSTADO DERECHO
  glBegin(GL_POLYGON);
   glColor3f( 1, 0.87, 0.51 );
   glVertex3f(  0.0, 0.0, 0.0 );
   glVertex3f(  1.0, 0.0, 0.0 );
   glVertex3f(  1.0, 0.2, 0.0 );
   glVertex3f(  0.2, 1.0, 0.0 );
   glVertex3f(  0.0, 1.0, 0.0 );
   glVertex3f(  0.0, 0.0, 0.0 );
   glEnd();
     
     // TRIANGULO INTERIOR
   glBegin(GL_POLYGON);
   glColor3f( 1, 0.1, 0.51 );
   glVertex3f(  0.2, 0.2, -0.3 );
   glVertex3f(  1.0, 0.2, -0.3 );
   glVertex3f(  0.2, 1.0, -0.3 );
   glVertex3f(  0.2, 0.2, -0.3 );
   glEnd();

// rampa izquierda
  glBegin(GL_QUAD_STRIP);
  glColor3f( 0.5, 0.1, 1.0 );
 glVertex3f( 0.2, 1.0, -0.3 );
 glVertex3f( 1.0, 0.2, -0.3 );
 glVertex3f( 0.2, 1.0, 0.0 );
 glVertex3f( 1.0, 0.2, 0.0 );
 glEnd();
 
       // cuadro arriba
       
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );
   
   glVertex3f(  0.0, 1.0, 0.0 );
   glVertex3f(  0.0, 1.0, -1.0);
   glVertex3f(  0.2, 1.0, -1.0 );
   glVertex3f(  0.2, 1.0, 0.0 );
   glEnd();
  
       // cuadro arriba
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );
   
   glVertex3f(  0.0, 1.0, -1.0);
   glVertex3f(  0.2, 1.0, -1.0 );
   glVertex3f(  0.2, 0.0, -1.0 );
   glVertex3f(  0.0, 0.0, -1.0);
 
   glEnd();
   
   
   
       // cuadro abajo enfrente
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.0, 0.0, -1.0 );
   glVertex3f(  0.75, 0.0, -1.0);
   glVertex3f(  0.75, 0.2, -1.0 );
   glVertex3f(  0.0, 0.2, -1.0 );
   
   glEnd();
   
   
   // cuadro abajo derech
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  1.0, 0.0, 0.0 );
   glVertex3f(  1.0, 0.0, -0.75);
   glVertex3f(  1.0, 0.2, -0.75 );
   glVertex3f(  1.0, 0.2, -0.0 );
   
   glEnd();
   
    // cuadro agujero cuadrado en medio
    
    ///cuadro abajo enfrente
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.2, 0.0, 0.0 );
   glVertex3f(  0.2, 0.0, -1.0);
   glVertex3f(  0.2, 0.3, -1.0 );
   glVertex3f(  0.2, 0.3, 0.0 );
     glEnd();
     
       ///cuadro abajo atras 
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.0, 0.0, 0.0 );
   glVertex3f(  0.0, 0.0, -1.0);
   glVertex3f(  0.0, 0.3, -1.0 );
   glVertex3f(  0.0, 0.3, 0.0 );
     glEnd();
     
       ///cuadro arriba enfrente
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.2, 1.0, 0.0 );
   glVertex3f(  0.2, 1.0, -1.0);
   glVertex3f(  0.2, 0.7, -1.0 );
   glVertex3f(  0.2, 0.7, 0.0 );
     glEnd();
     
       ///cuadro arriba atras 
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.0, 1.0, 0.0 );
   glVertex3f(  0.0, 1.0, -1.0);
   glVertex3f(  0.0, 0.7, -1.0 );
   glVertex3f(  0.0, 0.7, 0.0 );
     glEnd();
     
     
          /// cuadro tapa derecha
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.9, 0.41 );
   
   glVertex3f(  0.0, 1.0, -0.45);
   glVertex3f(  0.2, 1.0, -0.45 );
   glVertex3f(  0.2, 0.0, -0.45 );
   glVertex3f(  0.0, 0.0, -0.45);
    glEnd();
    
              /// cuadro tapa izquierda
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.9, 0.41 );
   
   glVertex3f(  0.0, 1.0, -0.85);
   glVertex3f(  0.2, 1.0, -0.85 );
   glVertex3f(  0.2, 0.0, -0.85);
   glVertex3f(  0.0, 0.0, -0.85);
    glEnd();
  
      /// tapa abajo
       
   glBegin(GL_POLYGON);
   glColor3f( 0.15, 0.91, 0.41 );
   
   glVertex3f(  0.0, 0.0, 0.0 );
   glVertex3f(  0.0, 0.0, -1.0);
   glVertex3f(  0.2, 0.0, -1.0 );
   glVertex3f(  0.2, 0.0, 0.0 );
   glEnd();
   
      /// tapa abajo arriba 
   glBegin(GL_POLYGON);
   glColor3f( 0.15, 0.91, 0.41 );
   
   glVertex3f(  0.0, 0.3, 0.0 );
   glVertex3f(  0.0, 0.3, -1.0);
   glVertex3f(  0.2, 0.3, -1.0 );
   glVertex3f(  0.2, 0.3, 0.0 );
   glEnd();
   
        /// tapa arriba abajo medio
       
   glBegin(GL_POLYGON);
   glColor3f( 0.15, 0.91, 0.41 );
   
   glVertex3f(  0.0, 0.7, 0.0 );
   glVertex3f(  0.0, 0.7, -1.0);
   glVertex3f(  0.2, 0.7, -1.0 );
   glVertex3f(  0.2, 0.7, 0.0 );
   glEnd();
   
   
    ///cuadro atras
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.0, 0.2, -0.0 );
   glVertex3f(  0.0, 0.2, -0.45);
   glVertex3f(  0.0, 1, -0.45 );
   glVertex3f(  0.0, 1, -0.0 );
     glEnd();
  
  
      ///cuadro enfrente
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.2, 0.2, -0.3 );
   glVertex3f(  0.2, 0.2, -0.45);
   glVertex3f(  0.2, 0.8, -0.45 );
   glVertex3f(  0.2, 0.8, -0.3 );
     glEnd();
     
     
           ///cuadro enfrente izq
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.2, 0.2, -0.85 );
   glVertex3f(  0.2, 0.2, -1.0);
   glVertex3f(  0.2, 0.8, -1.0 );
   glVertex3f(  0.2, 0.8, -0.85 );
     glEnd();
  
   ///cuadro atras izq
   glBegin(GL_POLYGON);
   glColor3f( 0.1, 0.1, 0.41 );

   glVertex3f(  0.0, 0.2, -0.85 );
   glVertex3f(  0.0, 0.2, -1.0);
   glVertex3f(  0.0, 0.8, -1.0 );
   glVertex3f(  0.0, 0.8, -0.85 );
     glEnd();
  
  //--------- suelo  
  
  /// suelo arriba
  
   glBegin(GL_POLYGON);
   glColor3f( 0.15, 0.91, 0.41 );
   
   glVertex3f(  0.0, 0.2, 0.0 );
   glVertex3f(  0.0, 0.2, -1.0);
   glVertex3f(  0.6, 0.2, -1.0 );
   glVertex3f(  0.66, 0.2, -1.0 );
   glVertex3f(  0.6, 0.2, -0.6 );
   glVertex3f(  1.0, 0.2, -0.6 );
   glVertex3f(  1.0, 0.2, -0.0 );
   
   glEnd();
   
   /// suelo abajo
  
   glBegin(GL_POLYGON);
   glColor3f( 0.15, 0.91, 0.41 );
   
   glVertex3f(  0.0, 0.0, 0.0 );
   glVertex3f(  0.0, 0.0, -1.0);
   glVertex3f(  0.6, 0.0, -1.0 );
   glVertex3f(  0.66, 0.2, -1.0 );
   glVertex3f(  0.6, 0.0, -0.6 );
   glVertex3f(  1.0, 0.0, -0.6 );
   glVertex3f(  1.0, 0.0, -0.0 );
   
   glEnd();
   
   
   glPushMatrix();
glTranslatef(0.75,0.2,-0.75);
glRotatef(90,1,0,0);
glColor3f(0.0,1.0,1.0);
   
	 draw_cylinder(0.15, 0.2, 0.15, 0.91, 0.41,85);
	 draw_cylinder(0.17, 0.2, 0.15, 0.91, 0.41,85);
	 draw_cylinder(0.18, 0.2, 0.15, 0.91, 0.41,85);
	 draw_cylinder(0.20, 0.2, 0.15, 0.91, 0.41,85);
	 draw_cylinder(0.21, 0.2, 0.15, 0.91, 0.41,85);
	 draw_cylinder(0.22, 0.2, 0.15, 0.91, 0.41,85);
	 draw_cylinder(0.23, 0.2, 0.15, 0.91, 0.41,85);
	 
	 
	 
	
   glColor3f( 0.1,0.1, 0.41 );
      
    glBegin(GL_QUAD_STRIP);

    angle = 0.0;
        while( angle < 2*PI ) {
            x = 0.25 * cos(angle);
            y = 0.25 * sin(angle);
            glVertex3f(x, y , 0.2);
            glVertex3f(x, y , 0.0);
            angle = angle + angle_stepsize;
        }
        glVertex3f(0.25, 0.0, 0.2);
        glVertex3f(0.25, 0.0, 0.0);
    glEnd();
     glPopMatrix();

      //COMPLEMENTOS
    
  
    glFlush();
    glutSwapBuffers();
 
}
 
// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{
 
    //  Flecha derecha: aumentar rotación 7 grados
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 7;
 
    //  Flecha izquierda: rotación en eje Y negativo 7 grados
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 7;
    //  Flecha arriba: rotación en eje X positivo 7 grados
    else if (key == GLUT_KEY_UP)
        rotate_x += 7;
    //  Flecha abajo: rotación en eje X negativo 7 grados
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 7;
    //  Tecla especial F2 : rotación en eje Z positivo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z += 7;
    //  Tecla especial F2 : rotación en eje Z negativo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z -= 7;
 
    //  Solicitar actualización de visualización
    glutPostRedisplay();
 
}
 
// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case 's':
        scale=0.5;
        break;
    case 'd':
        scale=1.5;
        break;
    case 'x' :
        X += 0.1f;
        break;
    case 'X' :
        X -= 0.1f;
        break;
    case 'y' :
        Y += 0.1f;
        break;
    case 'Y' :
        Y -= 0.1f;
        break;
    case 'z':
        Z -= 0.1f;
        break;
    case 'Z':
        Z += 0.1f;
        break;
    case 'q':
        exit(0);			// exit
    }
    glutPostRedisplay();
}
 
 
 
int main(int argc, char* argv[])
{
 
    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);
 
    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (0, 0);
    // Crear ventana
    glutCreateWindow("Ejercicio N 5");
 
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
 
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);

    // Pasar el control de eventos a GLUT
    glutMainLoop();
 
    // Regresar al sistema operativo
    return 0;
 
}
