#ifndef CPOLYGON_H
#define CPOLYGON_H

class CPolygon {
    public:                                         // accessible and callable by everyone
        CPolygon(int a=0, int b=0)
            :width(a),height(b)
            {
                //empty
            }
        void set_values(int a, int b)               // a base class memeber function that will be overwritten
            { width=a; height=b; }
        int getWidth()
            { return width; }
        int getHeight()
            { return height; }

    protected:                                      // accessible by that class and friends of that class (subclass, related classes, etc)
        int width, height; 

    private:
        int hiddenbar;                              // accessible only by that class

};

#endif

