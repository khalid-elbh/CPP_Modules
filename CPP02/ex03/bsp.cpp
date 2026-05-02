#include "Point.hpp"
Fixed cross_product(Point v1, Point v2)
{
    return ((v1.get_x() * v2.get_y() )- (v1.get_y() * v2.get_x()));
}


bool bsp( Point const a, Point const b, Point const c, Point const point){
    Point vec_AB((b.get_x() - a.get_x()).toFloat(),(b.get_y() - a.get_y()).toFloat());
    Point vec_AP((point.get_x() - a.get_x()).toFloat(),(point.get_y() - a.get_y()).toFloat());
    Point vec_BC((c.get_x() - b.get_x()).toFloat(),(c.get_y() - b.get_y()).toFloat());
    Point vec_BP((point.get_x() - b.get_x()).toFloat(),(point.get_y() - b.get_y()).toFloat());
    Point vec_CA((a.get_x() - c.get_x()).toFloat(),(a.get_y() - c.get_y()).toFloat());
    Point vec_CP((point.get_x() - c.get_x()).toFloat(),(point.get_y() - c.get_y()).toFloat());
    

    bool all_pos = (cross_product(vec_AB, vec_AP) > 0) && (cross_product(vec_BC, vec_BP) > 0) && (cross_product(vec_CA, vec_CP) > 0);
    bool all_niga = (cross_product(vec_AB, vec_AP) < 0) && (cross_product(vec_BC, vec_BP) < 0) && (cross_product(vec_CA, vec_CP) < 0);
    
    
    return (all_pos || all_niga);
}