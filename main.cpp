

//6
#include <GL/glut.h>

#include <stdlib.h>

#include <math.h>


float xRotated = 90.0, yRotated = 0.0, zRotated = 0.0;


void init(){
    glClearColor(0.0 , 0.0 , 0.0 , 1.0);
    glEnable(GL_DEPTH_TEST);

}
//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

//------------------------------  display   -------------------------------

float x=0 , y=0 , z =0;
float r = 1 , g = 0 , b = 0;









void rocket(){
    /*glMatrixMode(GL_MODELVIEW);
        // clear the drawing buffer.
        glClear(GL_COLOR_BUFFER_BIT);
        // clear the identity matrix.
        glLoadIdentity();*/
        // traslate the draw by z = -4.0
        // Note this when you decrease z like -8.0 the drawing will looks far , or smaller.
    
        glTranslatef(0.0,2,-16);
        // Red color used to draw.
        glColor3f(0.8, 0.2, 0.1);
        // changing in transformation matrix.
        // rotation about X axis
        glRotatef(-75,1,0.0,0.0);
        // rotation about Y axis
        //glRotatef(yRotated,0.0,0.2,0.0);
        // rotation about Z axis
        //glRotatef(zRotated,0.0,0.0,1.0);
        // scaling transfomation
        //glScalef(1.0,1.0,1.0);
        // built-in (glut library) function , draw you a Cone.
     

        glutSolidCone(1,1.5,50,50);
        // Flush buffers to screen
         
        //glFlush();
   
 
    
}


void moon() {
    glPushMatrix();
    glTranslatef(0 ,0,0);

    glColor3f(0, 0, 1); // Red color used to draw.
    // changing in transformation matrix.
    // rotation about X axis


    glScalef(1,1,1); // scaling transfomation
    // NOTE: built-in (glut library) function , draw you a sphere.
    glutSolidSphere(1,20,5);
    glPopMatrix();

}
void moon2() {
    glPushMatrix();
    glTranslatef(-5,0,3+z);

    glColor3f(1, 1, 1); // Red color used to draw.
    // changing in transformation matrix.
    // rotation about X axis
    glRotatef(xRotated, 1, 0, 0);
    glRotatef(yRotated,0.0,1,0.0);
    // rotation about Z axis
    glRotatef(zRotated,0.0,0.0,1.0);
    glScalef(0.5,0.5,0.5); // scaling transfomation
    // NOTE: built-in (glut library) function , draw you a sphere.
    glutSolidSphere(1,20,7);
    glPopMatrix();
    
}

void sun() {
    glPushMatrix();
    glTranslatef(0,3,-0.5 + z);

    //glColor3f(1, 0.5, 0); // Red color used to draw.
    glColor3f(1, 0.5, 0);
    // changing in transformation matrix.
    // rotation about X axis
    
    //glRotatef(yRotated,0.0,1,0.0);
    // rotation about Z axis
    //glRotatef(zRotated,0.0,0.0,1.0);
    glRotatef(yRotated, 0, 1, 0);
    glScalef(1,1,1); // scaling transfomation
    // NOTE: built-in (glut library) function , draw you a sphere.
    glutSolidSphere(3,20,19);
    glPopMatrix();
    
}

void cube(){
    glPushMatrix();
    glBegin (GL_QUADS) ;

    glColor3f(1.0,0.0,0.0);
    glVertex3f(-1.0,1.0,1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,1.0,1.0);

    glColor3f(0.0,1.0,0.0);
    glVertex3f(1.0,1.0,-1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f (-1.0,-1.0,-1.0);
    glVertex3f(-1.0,1.0,-1.0);

    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(1.0,1.0,-1.0);

    glColor3f(0.0,0.0,1.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(-1.0,1.0,1.0);

    glColor3f(0.0,1.0,1.0);
    glVertex3f (-1.0,1.0,-1.0);
    glVertex3f (-1.0,1.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(1.0,1.0,-1.0);

    glColor3f(1.0,0.0,1.0);
    glVertex3f (-1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);

    glEnd();
    
    glPopMatrix();

}

void ring(){
    glPushMatrix();
    
    glutSolidTorus(0.5, 0.9, 3, 50);
    
    glTranslatef(4,0,0);
    
    
    glColor3f(r, g, b);
    glPopMatrix();
    
}

void cuboid(){
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslated(-0.5, -10, -1.2);
    glScalef(0.1, 1.3, 0.2);
    glRotatef(20, 1, 0, 0);
    glRotatef(50, 0, 1, 0);
    glutSolidCube(1.3);
    glPopMatrix();
    
}
void cuboid2(){
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslated(0.5, -10, -1.2);
    glScalef(0.1, 1.3, 0.2);
    glRotatef(20, 1, 0, 0);
    glRotatef(50, 0, 1, 0);
    glutSolidCube(1.3);
    glPopMatrix();
    
}

void cuboid3(){
    glPushMatrix();
    glColor3f(0, 0, 1);
    glTranslated(0, -9, 0.3);
    glScalef(0.4, 4, 0.2);
    glRotatef(20, 1, 0, 0);
    glRotatef(90, 0, 1, 0);
    glutSolidCube(1.3);
    glPopMatrix();
    
}
void cuboid4(){
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslated(0
                 , -10, -1.2);
    glScalef(0.1, 1.3, 0.2);
    glRotatef(20, 1, 0, 0);
    glRotatef(50, 0, 1, 0);
    glutSolidCube(1.3);
    glPopMatrix();
    
}

void cuboid10(){
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslated(-2, 5,-15);
    glScalef(1, 1, 1);
    //glRotatef(20, 1, 0, 0);
    //glRotatef(50, 0, 1, 0);
    glutSolidCube(4);
    glPopMatrix();
}

void tot(){
    glPushMatrix();
    moon2();
    ring();
    glTranslated(-5,0,3);
    glPopMatrix();
    
}
void rocky(){
    rocket();
    ring();
    moon();
    //glColor3f(r, g, b);
    cuboid();
    cuboid2();
    cuboid3();
    //glColor3f(0, 0, 1);
    cuboid4();
    
}




void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef(0, 0, 0);
    //rocket();
    //moon();
    
    //cuboid();
    //cuboid2();
    //cuboid3();
    //cuboid4();
    //ring();

    glTranslatef(0 , 0  , 0);

    rocky();

    moon2();
    //sun();
    
    //ring();
    //glTranslatef(0 - x, 0 - y, 0);

    glColor3f(1, 1, 1);
    //tot();
    sun();
    
    //cuboid10();
    glTranslatef(4, 0, 10+z);
    glRotatef(xRotated, 1, 0, 0);
    //
    cube();
    
   
    

   

    glutSwapBuffers();
}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 1;
    yRotated +=1;
    xRotated +=1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}


//----------------------------------  TIme  ------------------------------------


void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/30,timer,0);
    x = 0;
    
    


}
//---------------------------------- Keyboard inputs ---------------------------

void processNormalKeys(unsigned char key, int x, int y) {

    if (key == 27)
        exit(0);
}

void processSpecialKeys(int key, int x, int y) {

    switch(key) {
        case GLUT_KEY_UP : //up button pressed
            r = 1;
            g = 0.5;
            b = 1;
            z -= 0.2;
            break;
        case GLUT_KEY_DOWN : //down button pressed
            r = 1;
            g = 0.5;
            b = 1;
            z+=0.2;

                break;
    }
}
//----------------------------------  main  ------------------------------------


int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // buffer mode
    glutInitWindowSize     (800, 700);
    glutInitWindowPosition (700, 200);
    glutCreateWindow       ("20101064");
    init();
    
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(processSpecialKeys);
    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutTimerFunc(1000, timer, 0);

    glutIdleFunc    (idleFunc);

    glClearColor(0,0,0,1);
    texture(); // Lighting and textures


    glutMainLoop();
}
