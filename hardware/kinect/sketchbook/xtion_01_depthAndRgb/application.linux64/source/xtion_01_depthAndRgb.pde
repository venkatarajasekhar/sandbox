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
   
    // PImage have 8-bit depth 
    PImage rgbImage = kinect.rgbImage();
    // For high precision, depth sensor capture information coded on 11 bits / pixel
    // Whenm using a PImage, that information is down-sampled to 8-bit / pixel
    PImage depthImage = kinect.depthImage();

    image(kinect.depthImage(),0,0);
    image(kinect.rgbImage(),kinect.depthWidth(),0);
}
void mousePressed() {
 
    if ( mouseX < kinect.depthWidth() ) {
      int[] depthValues = kinect.depthMap();
      int pixelId = mouseX + (mouseY * 640);
      // depthValue is actual distance in millimeters !
      int millimeters = depthValues[pixelId];
    
      float centimeters = millimeters / 10.0 ;
      float inches = millimeters / 25.4;
      println("distance => millimeters : " + millimeters + " inches: " + inches + " centimeters: " + centimeters);
    } else {
      // Get the color of the pixel under the mouse
      color c = get(mouseX, mouseY);

      // Print color information in the console of processing
      println("pixel color => r: " + red(c) + " g: " + green(c) + " b: " + blue(c));
    };  
}

