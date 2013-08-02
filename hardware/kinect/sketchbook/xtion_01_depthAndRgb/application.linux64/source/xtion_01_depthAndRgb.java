import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import SimpleOpenNI.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class xtion_01_depthAndRgb extends PApplet {


SimpleOpenNI kinect;

public void setup()
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
public void draw()
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
public void mousePressed() {
 
    if ( mouseX < kinect.depthWidth() ) {
      int[] depthValues = kinect.depthMap();
      int pixelId = mouseX + (mouseY * 640);
      // depthValue is actual distance in millimeters !
      int millimeters = depthValues[pixelId];
    
      float centimeters = millimeters / 10.0f ;
      float inches = millimeters / 25.4f;
      println("distance => millimeters : " + millimeters + " inches: " + inches + " centimeters: " + centimeters);
    } else {
      // Get the color of the pixel under the mouse
      int c = get(mouseX, mouseY);

      // Print color information in the console of processing
      println("pixel color => r: " + red(c) + " g: " + green(c) + " b: " + blue(c));
    };  
}

  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "--full-screen", "--bgcolor=#666666", "--stop-color=#cccccc", "xtion_01_depthAndRgb" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
