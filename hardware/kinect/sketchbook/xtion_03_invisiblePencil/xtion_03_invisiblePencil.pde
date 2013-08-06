import SimpleOpenNI.*;

SimpleOpenNI kinect;

int closestValue;
int closestX;
int closestY;

int previousX;
int previousY;

void setup()
{
    size(640,480);
    kinect = new SimpleOpenNI(this);
    kinect.enableDepth();
}

void draw()
{
    closestValue = 8000;
    kinect.update();
    int[] depthValues = kinect.depthMap();

    for (int y = 0; y < 480 ; y++) {
        for (int x = 0; x < 640; x++) {
            int i = x + y * 640;
            int currentDepthValue = depthValues[i];

            // if that pixel is the closest we have seeen so far
            if (currentDepthValue > 0 && currentDepthValue < closestValue) {
                // save this value
                closestValue = currentDepthValue;
                closestX = x;
                closestY = y;
            }
        }
    }

    // draw the depth image
    //image(kinect.depthImage(), 0,0);

    // draw a red circle over it
    fill(0,255,0);
    ellipse(closestX, closestY, 5, 5);
    
    stroke(255,0,0);
    line(previousX, previousY, closestX, closestY);

    //save the closest point as the new previous one
    previousX = closestX;
    previousY = closestY;
}

void mousePressed() {
    background(0);
}
