#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

/* 
 * Para suportar valores padrões. Crie 2 construtores, 1 sem parâmetros e outro
 * com parâmetros.
 */ 

class Rectangle {
    
    private: 
        double _height;
        double _width;
        
    public: 

        Rectangle(double width, double height);
        Rectangle();       
        
        double set_width(double width);
        double get_width();

        double set_height(double height);
        double get_height();

        double get_area();
        double get_perimeter();
};

#endif