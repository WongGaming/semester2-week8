
// structure definitions

typedef struct _point {
    float x;
    float y;
} Point;

// define the Rectangle structure here

typedef struct _rectangle {
    Point p; // bottom left corner
    float width;
    float height;
} Rectangle;

// function headers - implement in shapes.c

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;

    return r;
}

float area( Rectangle r ) {
    float a = 0.0;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {

    
    return;
}

void scaleRectangle( Rectangle *r, float scale ) {

    return;
}


//Point *corners( Rectangle r );
//Rectangle rotate90( Rectangle r );