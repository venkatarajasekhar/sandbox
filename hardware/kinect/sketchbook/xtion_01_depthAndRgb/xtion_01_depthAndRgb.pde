import SimpleOpenNI.*;
SimpleOpenNI kinect;

void setup()
{
    kinect = new SimpleOpenNI(this);

    if(kinect.enableDepth() == false)
    {
     println("Can't open the depthMap, maybe the camera is not connected!"); 
     exit();
     return;
    };
    
    if(kinect.enableRGB() == false)
    {
     println("Can't open the rgbMap, maybe the camera is not connected or there is no rgbSensor!"); 
     exit();
     return;
    };
    
    size(kinect.depthWidth() + kinect.rgbWidth(), kinect.rgbHeight());
}
void draw()
{
    kinect.update();

    image(kinect.depthImage(),0,0);
    image(kinect.rgbImage(),kinect.depthWidth(),0);
}
