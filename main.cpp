

#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>
#include<cstdio>


float car_move = 0.0f;
float bus_move = 0.0f;

float car_wheel_move = 0.0f;
float car_light_move = 0.0f;

float bus_wheel_move = 0.0f;
float bus_light_move = 0.0f;

float cloud_rectangular_move = 0.0f;
float cloud_circle_move = 0.0f;
float cloud_rectangular_2_move = 0.0f;
float cloud_circle_2_move = 0.0f;
float cloud_rectangular_3_move = 0.0f;
float cloud_circle_3_move = 0.0f;
float jet_move = 0.0f;
float jet_flag_circle_move = 0.0f;



/// Flag
float flag_angle = 0.0f;
//
float radius = 0.04f;
float radiusIncrement = 0.001f;
const float maxRadius = 0.08f;
const float minRadius = 0.04f;
const int numSegments = 200;


float xOffset = 0.0f;
float yOffset = 0.0f;


/// keyboard

float car_speed = 0.001;
float bus_speed = 0.001;
float bus_light_speed = 0.001;
float car_light_speed = 0.001;
float cloud_speed = .003;
float jet_speed = .025;

/// Mouse

bool show_sun = false;
bool show_moon = false;






//Martyr’s_Memorial
void National_Martyrs_Memorial()
{

    // Left side

    glBegin(GL_POLYGON);
	glColor3ub(171, 178, 185);
	glVertex2f(0.0f,2.2f);
    glVertex2f(-0.15f, 0.8f);
    glVertex2f(0.15f,0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(204, 209, 209);
	glVertex2f(-0.032f,1.900f);
    glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.15f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(0.0f,2.2f);
    glVertex2f(-0.15f, 0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(178, 186, 187);
	glVertex2f(-0.056f,1.799f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.3f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(-0.056f,1.799f);
    glVertex2f(-0.3f, 0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(204, 209, 209);
	glVertex2f(-0.097f,1.700f);
    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.4f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(-0.097f,1.700f);
    glVertex2f(-0.4f, 0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(178, 186, 187);
	glVertex2f(-0.181f,1.500f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(-0.181f,1.500f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();


    // right side


    glBegin(GL_POLYGON);
	glColor3ub(204, 209, 209);
	glVertex2f(0.032f,1.900f);
    glVertex2f(0.3f, 0.8f);
    glVertex2f(0.15f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(0.0f,2.2f);
    glVertex2f(0.15f, 0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(178, 186, 187);
	glVertex2f(0.056f,1.800f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.3f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(0.056f,1.800f);
    glVertex2f(0.3f, 0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(204, 209, 209);
	glVertex2f(0.090f,1.700f);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.4f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(0.090f,1.700f);
    glVertex2f(0.4f, 0.8f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(178, 186, 187);
	glVertex2f(0.181f,1.500f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.5f, 0.8f);
    glEnd();


    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(0.181f,1.500f);
    glVertex2f(0.5f, 0.8f);
    glEnd();


    // QUAD Design

    glBegin(GL_POLYGON);
	glColor3ub(81, 90, 90);
	glVertex2f(0.0f,1.3f);
    glVertex2f(-0.117f, 1.100f);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(0.117f, 1.100f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(151, 154, 154);
	glVertex2f(-0.101f,1.120f);
	glVertex2f(-0.117f, 1.100f);
    glVertex2f(-0.101f, 1.080f);
    glVertex2f(0.101f,1.079f);
    glVertex2f(0.117f, 1.100f);
    glVertex2f(0.102f, 1.120f);
    glEnd();

    // triangle

    glBegin(GL_TRIANGLES);
	glColor3ub(160, 64, 0);
	glVertex2f(0.0f,0.87f);
	glVertex2f(-0.15f, 0.8f);
    glVertex2f(0.15f, 0.8f);
    glEnd();

    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(39, 55, 70);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(0.6f, 0.8f);
    glEnd();
}




//Basement
void base()
{
    // Full basement

    glBegin(GL_POLYGON);
	glColor3ub(146, 43, 33);
	glVertex2f(-2.5f,0.8f);
    glVertex2f(-3.0f,0.8f);
    glVertex2f(-3.0f, -3.0f);
    glVertex2f(3.0f,-3.0f);
    glVertex2f(3.0f,0.8f);
    glVertex2f(2.5f,0.8f);
    glEnd();

}






//Stairs
void stairs()
{
    glBegin(GL_POLYGON);
	glColor3ub(231, 76, 60);
	glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(0.35f,0.7f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.55f,0.8f);
    glVertex2f(0.35f, 0.725f);
    glVertex2f(-0.35f,0.725f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(160, 64, 0);
	glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.35f,0.725f);
    glVertex2f(0.35f, 0.725f);
    glVertex2f(0.55f,0.8f);
    glEnd();

}



//Horizental_Stairs
void Horizental_stairs()
{

    glBegin(GL_POLYGON);
	glColor3ub(211, 84, 0);
	glVertex2f(-2.5f,0.8f);
    glVertex2f(-2.5f,0.75f);
    glVertex2f(2.5f, 0.75f);
    glVertex2f(2.5f,0.8f);
    glEnd();
}



/////////  Road


void renderBitmapString_3(float x, float y, void *font, const char *string) {
    const char *c;
    glRasterPos2f(x,y);
    for (c = string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}



//H_Road
void Road()
{
    glBegin(GL_POLYGON);
	glColor3ub(77, 86, 86);
	glVertex2f(-3.0f,-1.80f);
    glVertex2f(-3.0f,-3.0f);
    glVertex2f(3.0f, -3.0f);
    glVertex2f(3.0f,-1.80f);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    renderBitmapString_3(-2.15,-2.44, GLUT_BITMAP_TIMES_ROMAN_24, "STOP");
    renderBitmapString_3(2.05,-2.44, GLUT_BITMAP_TIMES_ROMAN_24, "STOP");
}


//////



//Pond
void Pond(float x, float y)
{
    glBegin(GL_POLYGON);
	glColor3ub(52, 152, 219);
	glVertex2f(-0.326f+x,0.297f+y);
    glVertex2f(-0.5f+x,-1.15f+y);
    glVertex2f(0.5f+x, -1.15f+y);
    glVertex2f(0.326f+x,0.299f+y);
    glEnd();

}


//Pond
void Pond_outer(float x, float y)
{
    glBegin(GL_POLYGON);
	glColor3ub(208, 211, 212);
	glVertex2f(-0.4f+x,0.355f+y);
    glVertex2f(-0.6f+x,-1.21f+y);
    glVertex2f(0.6f+x, -1.21f+y);
    glVertex2f(0.4f+x,0.355f+y);
    glEnd();

}

///////


//Left_green_grass
void Green_grass_left()
{
    glBegin(GL_POLYGON);
	glColor3ub(20, 90, 50);
	glVertex2f(-2.06f,-0.1f);
    glVertex2f(-2.06f,-1.2f);
    glVertex2f(-1.2f, -1.2f);
    glVertex2f(-0.927f,-0.100f);
    glEnd();

}


//Left_green_grass_outer
void Green_grass_left_double()
{
    glBegin(GL_POLYGON);
	glColor3ub(220, 118, 51);
	glVertex2f(-2.112f,-0.04f);
    glVertex2f(-2.112f,-1.26f);
    glVertex2f(-1.160f, -1.26f);
    glVertex2f(-0.869f,-0.04f);
    glEnd();

}


//Right_green_grass
void Green_grass_Right()
{
    glBegin(GL_POLYGON);
	glColor3ub(20, 90, 50);
	glVertex2f(0.95f,-0.1f);
    glVertex2f(1.2f,-1.2f);
    glVertex2f(2.05f, -1.2f);
    glVertex2f(2.05f,-0.1f);
    glEnd();

}


//Right_green_grass_outer
void Green_grass_Right_double()
{
    glBegin(GL_POLYGON);
	glColor3ub(220, 118, 51);
	glVertex2f(0.893f,-0.04f);
    glVertex2f(1.168f,-1.250f);
    glVertex2f(2.100f, -1.245f);
    glVertex2f(2.100f,-0.04f);
    glEnd();

}



/////

//Right_side_line
void side_line_Right()
{
    glBegin(GL_POLYGON);
	glColor3ub(220, 118, 51);
	glVertex2f(0.378f,0.8f);
    glVertex2f(0.731f,-1.796f);
    glVertex2f(1.176f, -1.8f);
    glVertex2f(0.55f,0.8f);
    glEnd();

}


//Left_side_line
void side_line_Left()
{
    glBegin(GL_POLYGON);
	glColor3ub(220, 118, 51);
	glVertex2f(-0.55f,0.8f);
    glVertex2f(-1.2041f,-1.790f);
    glVertex2f(-0.726f, -1.796f);
    glVertex2f(-0.378f,0.8f);
    glEnd();
}

/////

//Left_lil_grass_box_1
void lil_grass_box_left_1()
{
    glBegin(GL_POLYGON);
	glColor3ub(20, 90, 50);
	glVertex2f(-1.2f,0.6f);
    glVertex2f(-1.4f,0.2f);
    glVertex2f(-1.05f, 0.2f);
    glVertex2f(-0.85f,0.6f);
    glEnd();
}

//Left_lil_grass_box_2
void lil_grass_box_left_2()
{
    glBegin(GL_POLYGON);
	glColor3ub(20, 90, 50);
	glVertex2f(-1.850f,0.60f);
    glVertex2f(-2.056f,0.20f);
    glVertex2f(-1.7f, 0.20f);
    glVertex2f(-1.503f,0.60f);
    glEnd();
}

//Left_lil_grass_box_1_&_2_outer
lil_grass_box_double_left(float x,float y)
{
    glBegin(GL_POLYGON);
	glColor3ub(220, 118, 51);
	glVertex2f(-1.88f+x,0.64f+y);
    glVertex2f(-2.120f+x,0.161f+y);
    glVertex2f(-1.672f+x, 0.160f+y);
    glVertex2f(-1.443f+x,0.639f+y);
    glEnd();
}


//Left_and_right_lil_grass_box_tree
void lil_grass_box_tree_left_and_right(float x, float y )
{
    glBegin(GL_POLYGON);        //half tree
	glColor3ub(30, 132, 73);
	glVertex2f(-1.864f+x,0.249f+y);
    glVertex2f(-1.879f+x,0.305f+y);
    glVertex2f(-1.881f+x, 0.355f+y);
    glVertex2f(-1.874f+x,0.415f+y);
    glVertex2f(-1.857f+x,0.471f+y);
    glVertex2f(-1.828f+x,0.500f+y);
    glVertex2f(-1.803f+x, 0.469f+y);
    glVertex2f(-1.793f+x,0.414f+y);
    glVertex2f(-1.790f+x,0.358f+y);
    glVertex2f(-1.815f+x, 0.270f+y);
    glVertex2f(-1.843f+x,0.249f+y);
    glEnd();

    glBegin(GL_POLYGON);           // half tree
	glColor3ub(30, 132, 73);
	glVertex2f(-1.835f+x,0.251f+y);
    glVertex2f(-1.84f+x,0.28f+y);
    glVertex2f(-1.849f+x, 0.331f+y);
    glVertex2f(-1.846f+x,0.384f+y);
    glVertex2f(-1.837f+x,0.413f+y);
    glVertex2f(-1.813f+x,0.440f+y);
    glVertex2f(-1.780f+x, 0.443f+y);
    glVertex2f(-1.750f+x,0.424f+y);
    glVertex2f(-1.732f+x,0.384f+y);
    glVertex2f(-1.722f+x, 0.337f+y);
    glVertex2f(-1.726f+x,0.293f+y);
    glVertex2f(-1.741f+x, 0.250f+y);
    glVertex2f(-1.879f+x,0.305f+y);
    glEnd();

}



//////

//Right_lil_grass_box_1
void lil_grass_box_right_1()
{
    glBegin(GL_POLYGON);
	glColor3ub(20, 90, 50);
	glVertex2f(0.85f,0.6f);
    glVertex2f(1.05f,0.2f);
    glVertex2f(1.4f, 0.2f);
    glVertex2f(1.2f,0.6f);
    glEnd();
}

//Right_lil_grass_box_2
void lil_grass_box_right_2()
{
    glBegin(GL_POLYGON);
	glColor3ub(20, 90, 50);
	glVertex2f(1.5f,0.6f);
    glVertex2f(1.7f,0.2f);
    glVertex2f(2.05f, 0.2f);
    glVertex2f(1.85f,0.6f);
    glEnd();
}

//Right_lil_grass_box_1_&_2_outer
void lil_grass_box_double_right(float x,float y)
{
    glBegin(GL_POLYGON);
	glColor3ub(220, 118, 51);
	glVertex2f(0.790f+x,0.632f+y);
    glVertex2f(1.019f+x,0.160f+y);
    glVertex2f(1.456f+x, 0.160f+y);
    glVertex2f(1.229f+x,0.634f+y);
    glEnd();
}

//////

//Left_and_right_green_grass_tree_spike
void green_grass_tree(float x ,float y)
{
    glBegin(GL_POLYGON);
	glColor3ub(35, 155, 86);
	glVertex2f(-1.842f+x,-0.342f+y);
    glVertex2f(-1.918f+x,-0.530f+y);
    glVertex2f(-1.956f+x, -0.649f+y);
    glVertex2f(-1.973f+x,-0.781f+y);
    glVertex2f(-1.968f+x,-0.98+y);
    glVertex2f(-1.965f+x,-1.0f+y);
    glVertex2f(-1.96f+x,-1.02f+y);
    glVertex2f(-1.94f+x,-1.06f+y);
    glVertex2f(-1.9f+x,-1.1f+y);

    glVertex2f(-1.873f+x,-1.092+y);
    glVertex2f(-1.847f+x,-1.072f+y);
    glVertex2f(-1.826f+x, -1.041f+y);
    glVertex2f(-1.816f+x,-1.008f+y);
    glVertex2f(-1.806f+x,-0.977f+y);
    glVertex2f(-1.766f+x,-0.797f+y);
    glVertex2f(-1.769f+x,-0.649f+y);
    glVertex2f(-1.792f+x,-0.520f+y);
    glVertex2f(-1.842f+x,-0.342f+y);
    glEnd();

    ///// inside

    glBegin(GL_TRIANGLES);
	glColor3ub(30, 132, 73);

    glVertex2f(-1.92f+x,-0.44f+y);
    glVertex2f(-1.918f+x,-0.530f+y);
    glVertex2f(-1.898f+x,-0.482f+y);

    glVertex2f(-1.984f+x,-0.517f+y);
    glVertex2f(-1.961f+x,-0.687f+y);
    glVertex2f(-1.939f+x,-0.595f+y);

    glVertex2f(-2.011f+x,-0.679f+y);
    glVertex2f(-1.973f+x,-0.781f+y);
    glVertex2f(-1.965f+x,-0.714f+y);

    glVertex2f(-2.029f+x,-0.827f+y);
    glVertex2f(-1.968f+x,-0.955f+y);
    glVertex2f(-1.971f+x,-0.872f+y);

    /////

    glVertex2f(-1.800f+x,-0.948f+y);
    glVertex2f(-1.718f+x,-0.844f+y);
    glVertex2f(-1.781f+x,-0.863f+y);

    glVertex2f(-1.766f+x,-0.797f+y);
    glVertex2f(-1.716f+x,-0.707f+y);
    glVertex2f(-1.768f+x,-0.726f+y);

    glVertex2f(-1.769f+x,-0.679f+y);
    glVertex2f(-1.697f+x,-0.537f+y);
    glVertex2f(-1.776f+x,-0.608f+y);

    glVertex2f(-1.792f+x,-0.520f+y);
    glVertex2f(-1.781f+x,-0.384f+y);
    glVertex2f(-1.814f+x,-0.442f+y);

    glEnd();
}

/////


//Horizental_vertical_circle_wall
void Iron_wall_horizental(float x,float y)
{
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(23, 32, 42);
    glVertex2f(-2.5f+x,-1.33f+y);
    glVertex2f(2.5f+x,-1.33f+y);
    glEnd();
}


//Horizental_vertical_circle_wall
void Iron_wall_vertical(float x,float y)
{
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(23, 32, 42);
    glVertex2f(-2.199f+x,-1.35f+y);
    glVertex2f(-2.2f+x,-1.8f+y);
    glEnd();

}


//Horizental_vertical_circle_wall
void iron_wall_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}




///////

//Forest_all
void Forest()
{
    glBegin(GL_POLYGON);
	glColor3ub(25, 111, 61);
	glVertex2f(-2.5f,1.08f);
    glVertex2f(-2.5f,0.8f);
    glVertex2f(2.5f, 0.8f);
    glVertex2f(2.5f,1.08f);
    glEnd();
}

//Forest_all
void Forest_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);    // Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}

//Forest_all
void Forest_tree(float x,float y)
{
    glLineWidth(10.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(175, 96, 26 );
    glVertex2f(-1.40f+x,1.37f+y);
    glVertex2f(-1.40f+x,0.85f+y);
    glEnd();
}



/// SKY


//Sky_18
void Sky(float r, float g, float b)
{
    glBegin(GL_POLYGON);
	glColor3ub(r,g,b);
	glVertex2f(-2.5f,3.0f);
    glVertex2f(-2.5f,0.8f);
    glVertex2f(2.5f, 0.8f);
    glVertex2f(2.5f,3.0f);
    glEnd();
}



/// SUN

//Sun_18
    void Sun(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}

/// Sun light

//Sun_18
    void sun_light(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.28f+x,2.85f+y);
    glVertex2f(-1.36f+x,2.72f+y);
    glEnd();
    }

//Sun_18
    void sun_light_2(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.25f+x,2.8f+y);
    glVertex2f(-1.40f+x,2.550f+y);
    glEnd();
    }

//Sun_18
    void sun_light_3(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.20f+x,2.8f+y);
    glVertex2f(-1.27f+x,2.6f+y);
    glEnd();
    }

//Sun_18
     void sun_light_4(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.15f+x,2.8f+y);
    glVertex2f(-1.25f+x,2.42f+y);
    glEnd();
    }

//Sun_18
    void sun_light_5(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.10f+x,2.8f+y);
    glVertex2f(-1.10f+x,2.55f+y);
    glEnd();
    }

//Sun_18
    void sun_light_6(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.05f+x,2.8f+y);
    glVertex2f(-1.0f+x,2.42f+y);
    glEnd();
    }

//Sun_18
    void sun_light_7(float x,float y)
    {
    glLineWidth(2.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(247, 224, 28);
    glVertex2f(-1.06f+x,2.9f+y);
    glVertex2f(-0.95f+x,2.65f+y);
    glEnd();
}



/// moon


//Moon_18
    void Moon(float radius, float xc, float yc, float r, float g, float b)
    {
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}








/// road divider

//H_Road
void road_divider(float x,float y)
{
    glLineWidth(4.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
	glColor3ub(236, 240, 241);
    glVertex2f(-2.5f+x,-2.399f+y);
    glVertex2f(-2.2f+x,-2.4f+y);
    glEnd();

}





///  text in car

void renderBitmapString(float x, float y, void *font, const char *string) {
    const char *c;
    glRasterPos2f(x,y);
    for (c = string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}



///

//Car_18
void car(float x,float y)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(230, 126, 34);
    glVertex2f(-0.4+x,0+y);
    glVertex2f(0.26+x,0+y);
    glVertex2f(0.26+x,0.17+y);
    glVertex2f(0.17+x,0.17+y);
    glVertex2f(0.10+x,0.22+y);
    glVertex2f(-0.09+x,0.22+y);
    glVertex2f(-0.20+x,0.16+y);
    glVertex2f(-0.35+x,0.14+y);
    glVertex2f(-0.40+x,0.11+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(133, 193, 233);
    glVertex2f(-0.09+x,0.21+y);
    glVertex2f(-0.15+x,0.15+y);
    glVertex2f(-0.05+x,0.15+y);
    glVertex2f(-0.03+x,0.21+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(133, 193, 233);
    glVertex2f(-0.01+x,0.21+y);
    glVertex2f(-0.022+x,0.15+y);
    glVertex2f(0.09+x,0.15+y);
    glVertex2f(0.07+x,0.21+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(133, 193, 233);
    glVertex2f(0.09+x,0.21+y);
    glVertex2f(0.109+x,0.15+y);
    glVertex2f(0.175+x,0.15+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(0.26+x,0.15+y);
    glVertex2f(0.24+x,0.15+y);
    glVertex2f(0.24+x,0.08+y);
    glVertex2f(0.26+x,0.08+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.4+x,0.11+y);
    glVertex2f(-0.4+x,0.08+y);
    glVertex2f(-0.37+x,0.08+y);
    glVertex2f(-0.37+x,0.11+y);
    glEnd();

// car hat

    glBegin(GL_POLYGON);
    glColor3ub(236, 240, 241);
    glVertex2f(-0.07+x,0.31+y);
    glVertex2f(-0.07+x,0.22+y);
    glVertex2f(0.07+x,0.22+y);
    glVertex2f(0.07+x,0.31+y);
    glEnd();
    glPopMatrix();

// text in car

    glColor3ub(211, 84, 0);
    renderBitmapString(1.76+car_move,-2.57, GLUT_BITMAP_TIMES_ROMAN_10, "TEXI");

}

//Car_18
void car_wheel(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);       //Body
    glPushMatrix();
    glTranslatef(car_wheel_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
	glPopMatrix();
}


/// Car night light

//Car_Light_18
     void car_light(float x, float y)
    {
    glMatrixMode(GL_MODELVIEW);       //Body
    glPushMatrix();
    glTranslatef(car_light_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(1.359+x,-2.616+y);
    glVertex2f(1.243+x,-2.569+y);
    glVertex2f(1.094+x,-2.549+y);
    glVertex2f(0.983+x,-2.555+y);

    glVertex2f(0.865+x,-2.578+y);
    glVertex2f(0.820+x,-2.639+y);
    glVertex2f(0.840+x,-2.6977+y);
    glVertex2f(0.942+x,-2.720+y);

    glVertex2f(1.052+x,-2.712+y);
    glVertex2f(1.214+x,-2.695+y);
    glVertex2f(1.360+x,-2.651+y);
    glEnd();
    glPopMatrix();

}





///  text in bus

void renderBitmapString_2(float x, float y, void *font, const char *string) {
    const char *c;
    glRasterPos2f(x,y);
    for (c = string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}



///

//Bus_18
void Bus(float x,float y)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(bus_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);        //body
    glColor3ub(255, 0, 0);
    glVertex2f(-2.2+x,-1.85+y);
    glVertex2f(-2.200+x,-2.175+y);
    glVertex2f(-1.400+x,-2.175+y);
    glVertex2f(-1.45+x,-1.85+y);
    glEnd();

    glBegin(GL_POLYGON);        //window
    glColor3ub(192, 192, 192);
    glVertex2f(-2.1+x,-2.05+y);
    glVertex2f(-2.1+x,-2.1+y);
    glVertex2f(-2.0+x,-2.1+y);
    glVertex2f(-2.0+x,-2.05+y);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2f(-1.9+x,-2.05+y);
    glVertex2f(-1.9+x,-2.1+y);
    glVertex2f(-1.8+x,-2.1+y);
    glVertex2f(-1.8+x,-2.05+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2f(-1.7+x,-2.05+y);
    glVertex2f(-1.7+x,-2.1+y);
    glVertex2f(-1.6+x,-2.1+y);
    glVertex2f(-1.6+x,-2.05+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2f(-1.53+x,-1.92+y);
    glVertex2f(-1.53+x,-2.1+y);
    glVertex2f(-1.48+x,-2.1+y);
    glVertex2f(-1.48+x,-1.92+y);
    glEnd();

//light box

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2f(-1.413+x,-2.078+y);
    glVertex2f(-1.406+x,-2.122+y);
    glVertex2f(-1.45+x,-2.119+y);
    glVertex2f(-1.45+x,-2.078+y);
    glEnd();
    glPopMatrix();


// moving text

    glColor3f(1.0, 1.0, 1.0);
    renderBitmapString_2(-2.2+bus_move,-2.0, GLUT_BITMAP_TIMES_ROMAN_24, "Savar poribhohon");
}


//Bus_18
void Bus_wheel(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);       //Body
    glPushMatrix();
    glTranslatef(bus_wheel_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
	glPopMatrix();
}

/// Bus light for night

//Bus_Light_18
    void bus_light(float x, float y)
    {
    glMatrixMode(GL_MODELVIEW);       //Body
    glPushMatrix();
    glTranslatef(bus_light_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(-1.420+x,-2.078+y);
    glVertex2f(-1.400+x,-2.119+y);
    glVertex2f(-1.316+x,-2.163+y);
    glVertex2f(-1.216+x,-2.181+y);

    glVertex2f(-1.074+x,-2.192+y);
    glVertex2f(-0.932+x,-2.176+y);
    glVertex2f(-0.859+x,-2.127+y);
    glVertex2f(-0.856+x,-2.057+y);

    glVertex2f(-0.909+x,-2.015+y);
    glVertex2f(-1.074+x,-2.000+y);
    glVertex2f(-1.231+x,-2.023+y);
    glVertex2f(-1.420+x,-2.078+y);
    glEnd();
    glPopMatrix();

}



///

//Cloud_18
    void Cloud_rectangular(float x, float y)
    {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloud_rectangular_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);
    glVertex2f(-2.4+x,2.7+y);
    glVertex2f(-2.4+x,2.6+y);
    glVertex2f(-2.1+x,2.6+y);
    glVertex2f(-2.1+x,2.7+y);
    glEnd();
    glPopMatrix();
    }

//Cloud_18
    void Cloud_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloud_circle_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
	glPopMatrix();
}




/// cloud -2



//Cloud_18
  void Cloud_rectangular_2(float x, float y)
    {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloud_rectangular_2_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2f(1.7+x,2.7+y);
    glVertex2f(1.7+x,2.6+y);
    glVertex2f(2.0+x,2.6+y);
    glVertex2f(2.0+x,2.7+y);
    glEnd();
    glPopMatrix();
}


//Cloud_18
    void Cloud_circle_2(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloud_circle_2_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
	glPopMatrix();
}




/// Cloud-3


//Cloud_18
  void Cloud_rectangular_3(float x, float y)
    {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloud_rectangular_3_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2f(-0.1+x,2.7+y);
    glVertex2f(-0.1+x,2.6+y);
    glVertex2f(0.3+x,2.6+y);
    glVertex2f(0.3+x,2.7+y);
    glEnd();
    glPopMatrix();
}

//Cloud_18
    void Cloud_circle_3(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloud_circle_3_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
	glPopMatrix();
}




/// Aircraft(Jet)


//Jet_18
    void Jet(float x, float y)
    {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(jet_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(123, 125, 125);
    glVertex2f(-2.0+x,2.2+y);
    glVertex2f(-2.0+x,2.05+y);
    glVertex2f(-1.7+x,2.05+y);
    glVertex2f(-1.604+x,2.117+y);
    glVertex2f(-1.4+x,2.15+y);
    glVertex2f(-1.55+x,2.2+y);
    glVertex2f(-2.001+x,2.202+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(174, 214, 241 );
    glVertex2f(-1.8+x,2.2+y);
    glVertex2f(-1.55+x,2.2+y);
    glVertex2f(-1.673+x,2.289+y);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.999+x,2.179+y);
    glVertex2f(-2.080+x,2.139+y);
    glVertex2f(-2.080+x,2.102+y);
    glVertex2f(-1.999+x,2.075+y);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(93, 109, 126);
    glVertex2f(-1.897+x,2.049+y);
    glVertex2f(-1.9+x,2.0+y);
    glVertex2f(-1.761+x,2.0+y);
    glVertex2f(-1.761+x,2.049+y);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107);
    glVertex2f(-2.099+x,2.319+y);
    glVertex2f(-2.0+x,2.2+y);
    glVertex2f(-1.916+x,2.2+y);
    glVertex2f(-1.999+x,2.286+y);
    glEnd();

/// outline
    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.999+x,2.049+y);
    glVertex2f(-1.7+x,2.05+y);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.7+x,2.05+y);
    glVertex2f(-1.604+x,2.117+y);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.604+x,2.117+y);
    glVertex2f(-1.4+x,2.15+y);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.4+x,2.15+y);
    glVertex2f(-1.55+x,2.2+y);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.55+x,2.2+y);
    glVertex2f(-2.0+x,2.2+y);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-2.0+x,2.2+y);
    glVertex2f(-1.999+x,2.049+y);
    glEnd();


/// flag
// Rectangle

    glLineWidth(1.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-2.0+x,2.2+y);
    glVertex2f(-2.151+x,2.199+y);
    glEnd();

    glLineWidth(1.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
    glColor3ub(97, 106, 107);
    glVertex2f(-1.999+x,2.049+y);
    glVertex2f(-2.152+x,2.049+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(30, 132, 73);
    glVertex2f(-2.4+x,2.25+y);
    glVertex2f(-2.4+x,2.0+y);
    glVertex2f(-2.15+x,2.0+y);
    glVertex2f(-2.15+x,2.25+y);
    glEnd();
    glPopMatrix();

}


/// Jet_flag_circle


//Jet_18
void jet_flag_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(jet_flag_circle_move,0.0f, 0.0f);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
	glPopMatrix();
}



/// bouquet of flowers


//Bouquet_18
void bouquet_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}


/// decorated tree in Middle side line


//Vip_tree_18
    void vip_tree_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}


/// Middle Flag

//Flag_18
     void Support_rectangle(float x,float y)
{

    glBegin(GL_POLYGON);
    glColor3ub(192, 57, 43);
    glVertex2f(-0.1+x,-1.15+y);
    glVertex2f(-0.1+x,-1.35+y);
    glVertex2f(0.048+x,-1.35+y);
    glVertex2f(0.048+x,-1.15+y);
    glEnd();
}

//Flag_18
     void Support_rectangle_2(float x,float y)
{

    glBegin(GL_POLYGON);
    glColor3ub(146, 43, 33);
    glVertex2f(-0.08+x,-1.06+y);
    glVertex2f(-0.08+x,-1.22+y);
    glVertex2f(0.022+x,-1.22+y);
    glVertex2f(0.022+x,-1.06+y);
    glEnd();
}

//Flag_18
     void flag_stand(float x,float y)
{
    glLineWidth(5.0f);
    glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
    glColor3ub(95, 106, 106);
    glVertex2f(-0.065+x,-1.106+y);
    glVertex2f(-0.065+x,0.19+y);
    glEnd();
}


//Flag_18
   void flag_stand_top_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}


//Flag_18
    void Middle_Flag(float x, float y)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glRotatef(flag_angle, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    glColor3ub(14, 102, 85);
    glVertex2f(-0.136+x,0.170+y);
    glVertex2f(-0.152+x,-0.170+y);
    glVertex2f(0.183+x,-0.165+y);
    glVertex2f(0.183+x,0.170+y);
    glEnd();
    glPopMatrix();
}

// red circle

//Flag_18
  void flag_circle(float r, float g, float b)
{
    glBegin(GL_POLYGON);
    glVertex2f(xOffset, xOffset);
    for (int i = 0; i <= numSegments; ++i) {
        glColor3ub(r,g,b);
        float angle = 2.0f * 3.1416 * i / numSegments;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}







///     Display //////////////////




void display()
{
    //glClearColor(255,255,255,1.0f); // For background color White
    glClearColor(0,0,0,1.0f);       // For background color Black
    glClear(GL_COLOR_BUFFER_BIT);



/// Sky

    Sky(52, 152, 219);
    //Sky(15, 51, 118);
//

    sun_light(0.0,0.0);
    sun_light_2(0.0,0.0);
    sun_light_3(0.0,0.0);
    sun_light_4(0.0,0.0);
    sun_light_5(0.0,0.0);
    sun_light_6(0.0,0.0);
    sun_light_7(0.0,0.0);

    Sun(0.16,-1.15,2.9,234, 216, 70);

/// Sun

    if (show_sun)
    {
    Sky(52, 152, 219);

    sun_light(0.0,0.0);
    sun_light_2(0.0,0.0);
    sun_light_3(0.0,0.0);
    sun_light_4(0.0,0.0);
    sun_light_5(0.0,0.0);
    sun_light_6(0.0,0.0);
    sun_light_7(0.0,0.0);


    Sun(0.16,-1.15,2.9,234, 216, 70);
}


/// Moon

    if(show_moon)
    {
    Sky(15, 51, 110);
    Moon(0.17,1.15,2.7,252, 243, 207);
    Moon(0.17,1.25,2.73,15, 51, 118);
}


/// cloud 1


    Cloud_rectangular(0.0,-0.04);
    Cloud_circle(0.09,-2.38,2.65,215, 219, 221);
    Cloud_circle(0.09,-2.11,2.65,215, 219, 221);
    Cloud_circle(0.13,-2.25,2.74,215, 219, 221);

/// cloud 2

    Cloud_rectangular_2(0.0,0.0);
    Cloud_circle_2(0.10,1.7,2.7,229, 231, 233);
    Cloud_circle_2(0.10,2.0,2.7,229, 231, 233);
    Cloud_circle_2(0.14,1.85,2.8,229, 231, 233);

/// cloud-3

    Cloud_rectangular_3(0.0,0.0);
    Cloud_circle_3(0.10,-0.1,2.7,229, 231, 233);
    Cloud_circle_3(0.10,0.27,2.7,229, 231, 233);
    Cloud_circle_3(0.14,0.1,2.8,229, 231, 233);

    Cloud_circle_3(0.14,0.1,2.58,229, 231, 233);
    Cloud_circle_3(0.10,-0.1,2.54,229, 231, 233);
    Cloud_circle_3(0.10,0.25,2.53,229, 231, 233);


/// Aircraft

    Jet(0.0,0.0);
    jet_flag_circle(0.08,-2.28,2.13,231, 76, 60);





///

    Forest_tree(0.0,0.0);
    Forest_tree(2.8,0.0);



/// left side

    Forest_circle(0.1,-2.35,1.10,25, 111, 61);
    Forest_circle(0.1,-2.25,1.21,25, 111, 61);
    Forest_circle(0.1,-2.15,1.10,25, 111, 61);

    Forest_circle(0.1,-2.00,1.10,25, 111, 61);
    Forest_circle(0.1,-1.95,1.21,25, 111, 61);
    Forest_circle(0.1,-1.85,1.10,25, 111, 61);

    Forest_circle(0.1,-0.85,1.10,30, 132, 73);
    Forest_circle(0.1,-0.75,1.21,30, 132, 73);
    Forest_circle(0.1,-0.65,1.10,30, 132, 73);

    Forest_circle(0.1,-1.50,1.20,25, 111, 61);
    Forest_circle(0.1,-1.40,1.31,25, 111, 61);
    Forest_circle(0.1,-1.30,1.20,25, 111, 61);
    Forest_circle(0.1,-1.50,1.37,25, 111, 61);
    Forest_circle(0.1,-1.30,1.37,25, 111, 61);
    Forest_circle(0.1,-1.40,1.47,25, 111, 61);



/// right side

    Forest_circle(0.1,0.85,1.10,30, 132, 73);
    Forest_circle(0.1,0.75,1.21,30, 132, 73);
    Forest_circle(0.1,0.65,1.10,30, 132, 73);

    Forest_circle(0.1,2.35,1.10,25, 111, 61);
    Forest_circle(0.1,2.25,1.21,25, 111, 61);
    Forest_circle(0.1,2.15,1.10,25, 111, 61);

    Forest_circle(0.1,2.00,1.10,25, 111, 61);
    Forest_circle(0.1,1.95,1.21,25, 111, 61);
    Forest_circle(0.1,1.85,1.10,25, 111, 61);

    Forest_circle(0.1,1.50,1.20,25, 111, 61);
    Forest_circle(0.1,1.40,1.31,25, 111, 61);
    Forest_circle(0.1,1.30,1.20,25, 111, 61);
    Forest_circle(0.1,1.50,1.37,25, 111, 61);
    Forest_circle(0.1,1.30,1.37,25, 111, 61);
    Forest_circle(0.1,1.40,1.47,25, 111, 61);



///

    Forest();


///

    National_Martyrs_Memorial();
    base();

///
    Road();

///

    road_divider(0.0,0.0);
    road_divider(0.6,0.0);
    road_divider(1.2,0.0);
    road_divider(1.8,0.0);
    road_divider(2.4,0.0);
    road_divider(3.0,0.0);
    road_divider(3.6,0.0);
    road_divider(4.2,0.0);
    road_divider(4.8,0.0);
    road_divider(5.4,0.0);

///



    car(1.8,-2.82);

    car_wheel(0.05,1.57,-2.82,0,0,0);
    car_wheel(0.05,1.90,-2.82,0,0,0);

     if(show_moon)
    {
    car_light(0.05,-0.09);
    }

///

    Bus(0.0,0.0);
    Bus_wheel(0.07,-2.0,-2.22,23, 32, 42);
    Bus_wheel(0.07,-1.54,-2.22,23, 32, 42);

    if(show_moon)
    {
    bus_light(0.0,0.0);
    }



///
    Pond_outer(0.0,0.18);
    Pond(0.0,0.18);


///
    Green_grass_left_double();
    Green_grass_left();

    Green_grass_Right_double();
    Green_grass_Right();
///
    Horizental_stairs();

    side_line_Right();
    side_line_Left();
    stairs();

///

// Left side
    vip_tree_circle(0.14,-0.83,-1.1,20, 90, 50);
    vip_tree_circle(0.095,-0.82,-0.97,20, 90, 50);
    vip_tree_circle(0.055,-0.81,-0.87,20, 90, 50);

    vip_tree_circle(0.11,-0.715,-0.5,20, 90, 50);
    vip_tree_circle(0.075,-0.702,-0.385,20, 90, 50);
    vip_tree_circle(0.035,-0.695,-0.3,20, 90, 50);

    vip_tree_circle(0.09,-0.61,0.0,20, 90, 50);
    vip_tree_circle(0.065,-0.6,0.10,20, 90, 50);
    vip_tree_circle(0.030,-0.59,0.17,20, 90, 50);

// right side

    vip_tree_circle(0.14,0.83,-1.08,20, 90, 50);
    vip_tree_circle(0.095,0.815,-0.95,20, 90, 50);
    vip_tree_circle(0.055,0.805,-0.85,20, 90, 50);

    vip_tree_circle(0.11,0.715,-0.5,20, 90, 50);
    vip_tree_circle(0.075,0.702,-0.385,20, 90, 50);
    vip_tree_circle(0.035,0.695,-0.3,20, 90, 50);

    vip_tree_circle(0.09,0.61,0.0,20, 90, 50);
    vip_tree_circle(0.065,0.6,0.10,20, 90, 50);
    vip_tree_circle(0.030,0.59,0.17,20, 90, 50);





///
    lil_grass_box_double_left(0.0,0.0);
    lil_grass_box_double_left(0.65,0.0);

    lil_grass_box_left_1();
    lil_grass_box_left_2();

    lil_grass_box_tree_left_and_right(0.0,0.0);
    lil_grass_box_tree_left_and_right(0.65,0.0);
///

    lil_grass_box_double_right(0.0,0.0);
    lil_grass_box_double_right(0.65,0.0);

    lil_grass_box_right_1();
    lil_grass_box_right_2();

    lil_grass_box_tree_left_and_right(2.95,0.0);
    lil_grass_box_tree_left_and_right(3.6,0.0);
///


    green_grass_tree(0,0);
    green_grass_tree(0.3,0);
    green_grass_tree(0.6,0);

    green_grass_tree(3.15,0);
    green_grass_tree(3.45,0);
    green_grass_tree(3.75,0);
///

    Iron_wall_horizental(0.0,0.0);
    Iron_wall_horizental(0.0,-0.25);




    Iron_wall_vertical(-0.3,0.0);
    Iron_wall_vertical(-0.2,0.0);
    Iron_wall_vertical(-0.1,0.0);
    Iron_wall_vertical(0.0,0.0);
    Iron_wall_vertical(0.1,0.0);
    Iron_wall_vertical(0.2,0.0);
    Iron_wall_vertical(0.3,0.0);
    Iron_wall_vertical(0.4,0.0);
    Iron_wall_vertical(0.5,0.0);
    Iron_wall_vertical(0.6,0.0);
    Iron_wall_vertical(0.7,0.0);
    Iron_wall_vertical(0.8,0.0);
    Iron_wall_vertical(0.9,0.0);
    Iron_wall_vertical(1.0,0.0);
    Iron_wall_vertical(1.1,0.0);
    Iron_wall_vertical(1.2,0.0);
    Iron_wall_vertical(1.3,0.0);
    Iron_wall_vertical(1.4,0.0);
    Iron_wall_vertical(1.5,0.0);
    Iron_wall_vertical(1.6,0.0);
    Iron_wall_vertical(1.7,0.0);
    Iron_wall_vertical(1.8,0.0);
    Iron_wall_vertical(1.9,0.0);
    Iron_wall_vertical(2.0,0.0);
    Iron_wall_vertical(2.1,0.0);
    Iron_wall_vertical(2.2,0.0);
    Iron_wall_vertical(2.3,0.0);
    Iron_wall_vertical(2.4,0.0);
    Iron_wall_vertical(2.5,0.0);
    Iron_wall_vertical(2.6,0.0);
    Iron_wall_vertical(2.7,0.0);
    Iron_wall_vertical(2.8,0.0);
    Iron_wall_vertical(2.9,0.0);
    Iron_wall_vertical(3.0,0.0);
    Iron_wall_vertical(3.1,0.0);
    Iron_wall_vertical(3.2,0.0);
    Iron_wall_vertical(3.3,0.0);
    Iron_wall_vertical(3.4,0.0);
    Iron_wall_vertical(3.5,0.0);
    Iron_wall_vertical(3.6,0.0);
    Iron_wall_vertical(3.7,0.0);
    Iron_wall_vertical(3.8,0.0);
    Iron_wall_vertical(3.9,0.0);
    Iron_wall_vertical(4.0,0.0);
    Iron_wall_vertical(4.1,0.0);
    Iron_wall_vertical(4.2,0.0);
    Iron_wall_vertical(4.3,0.0);
    Iron_wall_vertical(4.4,0.0);
    Iron_wall_vertical(4.5,0.0);
    Iron_wall_vertical(4.6,0.0);
    Iron_wall_vertical(4.7,0.0);


    iron_wall_circle(0.04,-2.3,-1.58,23, 32, 42);
    iron_wall_circle(0.04,-1.9,-1.58,23, 32, 42);
    iron_wall_circle(0.04,-1.5,-1.58,23, 32, 42);
    iron_wall_circle(0.04,-1.1,-1.58,23, 32, 42);
    iron_wall_circle(0.04,-0.7,-1.58,23, 32, 42);
    iron_wall_circle(0.04,-0.3,-1.58,23, 32, 42);
    iron_wall_circle(0.04,0.1,-1.58,23, 32, 42);
    iron_wall_circle(0.04,0.5,-1.58,23, 32, 42);
    iron_wall_circle(0.04,0.9,-1.58,23, 32, 42);
    iron_wall_circle(0.04,1.3,-1.58,23, 32, 42);
    iron_wall_circle(0.04,1.7,-1.58,23, 32, 42);
    iron_wall_circle(0.04,2.1,-1.58,23, 32, 42);
    iron_wall_circle(0.04,2.5,-1.58,23, 32, 42);

/// lamp Light(day)

    iron_wall_circle(0.045,-2.3,-1.29,243, 156, 18);
    iron_wall_circle(0.045,-1.9,-1.29,243, 156, 18);
    iron_wall_circle(0.045,-1.5,-1.29,243, 156, 18);
    iron_wall_circle(0.045,-1.1,-1.29,243, 156, 18);
    iron_wall_circle(0.045,-0.7,-1.29,243, 156, 18);
    iron_wall_circle(0.045,-0.3,-1.29,243, 156, 18);
    iron_wall_circle(0.045,0.1,-1.29,243, 156, 18);
    iron_wall_circle(0.045,0.5,-1.29,243, 156, 18);
    iron_wall_circle(0.045,0.9,-1.29,243, 156, 18);
    iron_wall_circle(0.045,1.3,-1.29,243, 156, 18);
    iron_wall_circle(0.045,1.7,-1.29,243, 156, 18);
    iron_wall_circle(0.045,2.1,-1.29,243, 156, 18);
    iron_wall_circle(0.045,2.5,-1.29,243, 156, 18);


/// (night)

   if(show_moon)
    {
    iron_wall_circle(0.045,-2.3,-1.29,247, 220, 111);
    iron_wall_circle(0.045,-1.9,-1.29,247, 220, 111);
    iron_wall_circle(0.045,-1.5,-1.29,247, 220, 111);
    iron_wall_circle(0.045,-1.1,-1.29,247, 220, 111);
    iron_wall_circle(0.045,-0.7,-1.29,247, 220, 111);
    iron_wall_circle(0.045,-0.3,-1.29,247, 220, 111);
    iron_wall_circle(0.045,0.1,-1.29,247, 220, 111);
    iron_wall_circle(0.045,0.5,-1.29,247, 220, 111);
    iron_wall_circle(0.045,0.9,-1.29,247, 220, 111);
    iron_wall_circle(0.045,1.3,-1.29,247, 220, 111);
    iron_wall_circle(0.045,1.7,-1.29,247, 220, 111);
    iron_wall_circle(0.045,2.1,-1.29,247, 220, 111);
    iron_wall_circle(0.045,2.5,-1.29,247, 220, 111);
}

///

    bouquet_circle(0.09,-0.3,0.72,82, 190, 128);
    bouquet_circle(0.06,-0.3,0.72,231, 76, 60);
    bouquet_circle(0.02,-0.3,0.72,247, 220, 111);

    bouquet_circle(0.09,-0.1,0.72,247, 220, 111);
    bouquet_circle(0.06,-0.1,0.72,231, 76, 60);
    bouquet_circle(0.02,-0.1,0.72,82, 190, 128);


    bouquet_circle(0.09,0.1,0.72,93, 173, 226);
    bouquet_circle(0.06,0.1,0.72,163, 228, 215);
    bouquet_circle(0.02,0.1,0.72,230, 126, 34);

    bouquet_circle(0.09,0.3,0.72,210, 180, 222);
    bouquet_circle(0.06,0.3,0.72,243, 156, 18);
    bouquet_circle(0.02,0.3,0.72,210, 180, 222);


///  Middle Flag


    Support_rectangle(-0.09,0.11);
    Support_rectangle_2(-0.09,0.0);

    flag_stand(-0.09,0.0);
    flag_stand_top_circle(0.04,-0.157,0.19,95, 106, 106);

    Middle_Flag(0.0,0.0);
    flag_circle(245, 34, 13);




    glFlush();
}





///  Update///////////////////////////




/// for car body

//moving_car_18
void car_update(int value) {
car_move -= car_speed;
if(car_move < -4.7)
{
car_move = 2.5;
}
else if(car_move>2.5)
{
    car_move = -4.7;
}
glutPostRedisplay();
glutTimerFunc(20, car_update, 0);
}



/// for car wheel

//moving_car_18
void car_wheel_update(int value) {
car_wheel_move -= car_speed;
if(car_wheel_move < -4.7)
{
car_wheel_move = 2.5;
}
else if(car_wheel_move>2.5)
{
    car_wheel_move = -4.7;
}
glutPostRedisplay();
glutTimerFunc(20, car_wheel_update, 0);
}

/// Car night Light

//moving_car_18
void car_light_update(int value) {
car_light_move -= car_speed;
if(car_light_move < -4.7)
{
car_light_move = 2.5;
}
else if(car_light_move>2.5)
{
    car_light_move = -4.7;
}
glutPostRedisplay();
glutTimerFunc(20, car_light_update, 0);
}




/// for bus body

//Moving_bus_18
void Bus_update(int value) {
bus_move += bus_speed;
if(bus_move > 4.7)
{
bus_move = -2.0;
}
else if(bus_move<-2.0)
{
    bus_move = 4.7;
}
glutPostRedisplay();
glutTimerFunc(20, Bus_update, 0);
}

/// for bus wheel

//Moving_bus_18
void Bus_wheel_update(int value) {
bus_wheel_move += bus_speed;
if(bus_wheel_move > 4.7)
{
bus_wheel_move = -2.0;
}
else if(bus_wheel_move<-2.0)
{
    bus_wheel_move = 4.7;
}
glutPostRedisplay();
glutTimerFunc(20, Bus_wheel_update, 0);
}


/// Bus Night Light

//Moving_bus_18
void Bus_light_update(int value) {
bus_light_move += bus_light_speed;
if(bus_light_move > 4.7)
{
bus_light_move = -2.0;
}
else if(bus_light_move<-2.0)
{
    bus_light_move = 4.7;
}
glutPostRedisplay();
glutTimerFunc(20, Bus_light_update, 0);
}



/// for Cloud 1 rectangular

//moving_cloud_18
void cloud_rectangular_update(int value) {
cloud_rectangular_move -= cloud_speed;
if(cloud_rectangular_move < -0.5)
{
cloud_rectangular_move = 4.8;
}
else if(cloud_rectangular_move>4.8)
{
    cloud_rectangular_move = -0.5;
}
glutPostRedisplay();
glutTimerFunc(20, cloud_rectangular_update, 0);
}

/// for Cloud 1 circle

//moving_cloud_18
void cloud_circle_update(int value) {
cloud_circle_move -= cloud_speed;
if(cloud_circle_move < -0.5)
{
cloud_circle_move = 4.8;
}
else if(cloud_circle_move>4.8)
{
    cloud_circle_move = -0.5;
}
glutPostRedisplay();
glutTimerFunc(20, cloud_circle_update, 0);
}

/// for Cloud (2) rectangular

//moving_cloud_18
void cloud_rectangular_2_update(int value) {
cloud_rectangular_2_move -= cloud_speed;
if(cloud_rectangular_2_move < -4.5)
{
cloud_rectangular_2_move = 1.0;
}
else if(cloud_rectangular_2_move>1.0)
{
    cloud_rectangular_2_move = -4.5;
}
glutPostRedisplay();
glutTimerFunc(20, cloud_rectangular_2_update, 0);
}

/// for Cloud (2) circle

//moving_cloud_18
void cloud_circle_2_update(int value) {
cloud_circle_2_move -= cloud_speed;
if(cloud_circle_2_move < -4.5)
{
cloud_circle_2_move = 1.0;
}
else if(cloud_circle_2_move>1.0)
{
    cloud_circle_2_move = -4.5;
}
glutPostRedisplay();
glutTimerFunc(20, cloud_circle_2_update, 0);
}



/// for Cloud (3) rectangular

//moving_cloud_18
void cloud_rectangular_3_update(int value) {
cloud_rectangular_3_move -= cloud_speed;
if(cloud_rectangular_3_move < -4.0)
{
cloud_rectangular_3_move = 2.5;
}
else if(cloud_rectangular_3_move>2.5)
{
    cloud_rectangular_3_move = -4.0;
}

glutPostRedisplay();
glutTimerFunc(20, cloud_rectangular_3_update, 0);
}

/// for Cloud (3) circle

//moving_cloud_18
void cloud_circle_3_update(int value) {
cloud_circle_3_move -= cloud_speed;
if(cloud_circle_3_move < -4.0)
{
cloud_circle_3_move = 2.5;
}
else if(cloud_circle_3_move>2.5)
{
    cloud_circle_3_move = -4.0;
}
glutPostRedisplay();
glutTimerFunc(20, cloud_circle_3_update, 0);
}

/// Jet


//moving_jet_18
void Jet_update(int value) {
jet_move += jet_speed;
if(jet_move > 4.9)
{
jet_move = -2.0;
}
else if(jet_move<-2.0)
{
    jet_move = 4.9;
}
glutPostRedisplay();
glutTimerFunc(20, Jet_update, 0);
}

//moving_jet_18
void jet_flag_circle_update(int value) {
jet_flag_circle_move += jet_speed;
if(jet_flag_circle_move > 4.9)
{
jet_flag_circle_move = -2.0;
}
else if(jet_flag_circle_move<-2.0)
{
    jet_flag_circle_move = 4.9;
}
glutPostRedisplay();
glutTimerFunc(20, jet_flag_circle_update, 0);
}



/// Middle Flag

//Waving_flag_18
    void flag_update(int value) {

    flag_angle+=0.5f;
    if(flag_angle > 15.0)
    {
        flag_angle -=15;
    }
	glutPostRedisplay();

	glutTimerFunc(70, flag_update, 0);
}

///

//Waving_flag_18
void flag_center_circle_update(int value) {
    radius += radiusIncrement;
    if (radius >= maxRadius || radius <= minRadius) {
        radiusIncrement = -radiusIncrement;
    }
    glutPostRedisplay();
    glutTimerFunc(50, flag_center_circle_update, 0);
}



//////////////////////////////////////////


/// keyboard

//car

//Move_all_18
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'T':
    car_speed = 0.0f;       // car Stop
    car_light_speed = 0.0f;
    break;
case 't':
    car_speed = 0.01f;      // car start
    car_light_speed = 0.01f;
    break;
case 'B':
    bus_speed = 0.0f;       // Bus Stop
    bus_light_speed = 0.0f;
    break;
case 'b':
    bus_speed = 0.01f;      // Bus start
    bus_light_speed = 0.01f;
    break;
case 'C':
    cloud_speed = 0.0f;       // Cloud Stop
    break;
case 'c':
    cloud_speed = 0.003f;      // Cloud start
    break;
case 'J':
    jet_speed = 0.0f;       // Jet Stop
    break;
case 'j':
    jet_speed = 0.025f;      // jet start
    break;

///

case '1':
    jet_speed -=0.005f;       // Jet speed decrease
    break;
case '2':
    jet_speed += 0.025f;      // jet speed increase
    break;
case '3':
    cloud_speed -=0.003f;       // Cloud speed decrease
    break;
case '4':
    cloud_speed += 0.003f;      // Cloud speed increase
    break;
case '5':
    if(true)
    {
    car_speed -=0.003f;         //  Car speed decrease
    car_light_speed -=0.003f;   // Car light speed decrease
    }
    break;
case '6':
    if(true)
    {
    car_speed +=0.003f;         //  Car speed increase
    car_light_speed +=0.003f;   // Car light speed increase
    }
    break;
case '7':
    if(true)
    {
    bus_speed -=0.003f;         // Bus speed decrease
    bus_light_speed -=0.003f;   // Bus light speed decrease
    }
    break;

case '8':
    if(true)
    {
    bus_speed += 0.003f;        // Bus speed increase
    bus_light_speed +=0.003f;   // Bus light speed increase
    }

    break;

glutPostRedisplay();
	}}


/// Mouse

//Move_all_18
    void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        show_sun = true;
        show_moon = false;
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        show_sun = false;
        show_moon = true;
    }
    glutPostRedisplay();
}






/////////////////////////////////////////////////////////////




/// Main Function

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1400,750);
    glutCreateWindow("Project");
    //glutInitWindowPosition(100,100);
    gluOrtho2D(-2.5,2.5,-3,3);
    glutDisplayFunc(display);

    glutTimerFunc(20, car_update, 0);
    glutTimerFunc(20, Bus_update, 0);
    glutTimerFunc(20, car_wheel_update, 0);
    glutTimerFunc(20, car_light_update, 0);
    glutTimerFunc(20, Bus_wheel_update, 0);
    glutTimerFunc(20, Bus_light_update, 0);
    glutTimerFunc(20, cloud_rectangular_update, 0);
    glutTimerFunc(20, cloud_circle_update, 0);
    glutTimerFunc(20, cloud_rectangular_2_update, 0);
    glutTimerFunc(20, cloud_circle_2_update, 0);
    glutTimerFunc(20, cloud_rectangular_3_update,0);
    glutTimerFunc(20, cloud_circle_3_update, 0);
    glutTimerFunc(20,Jet_update,0);
    glutTimerFunc(20,jet_flag_circle_update,0);
    glutTimerFunc(20, flag_update, 0);
    glutTimerFunc(16, flag_center_circle_update, 0);
///
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}















































