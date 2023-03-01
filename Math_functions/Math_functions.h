#ifndef BASIC_FUNCTIONS
#define BASIC_FUNCTIONS

class Math_functions{
  public:
    float saturate(float x, float x_min, float x_max);
    float mod(float x);
    float sign(float x);
    int great_int(float x);
    float ceil(float x);
    float floor(float x);
    float wrap(float x, float a, float b);
    float apply_deadband(float x, float deadband);
    float apply_deadband2(float x, float deadband);

    float rad_2_deg(float x);
    float deg_2_rad(float x);
    float rps_2_rpm(float rps);
    float rpm_2_rps(float rpm);
    
    float linear_map(float x, float x1, float x2, float y1, float y2);
    float poly_map_deg1(float x, float a0, float a1);
    float poly_map_deg2(float x, float a0, float a1, float a2);
    float poly_map_deg3(float x, float a0, float a1, float a2, float a3);
    float poly_map_deg4(float x, float a0, float a1, float a2, float a3, float a4);
    float poly_map_deg5(float x, float a0, float a1, float a2, float a3, float a4, float a5);
    float poly_map_deg6(float x, float a0, float a1, float a2, float a3, float a4, float a5, float a6);
    float poly_map_degn(float x, float a[], int n);
    float fast_inv_sqrt(float number);
    
    bool points_AB_line_same_side(float x, float y, float x0, float y0, float x1, float y1, float x2, float y2);
    bool points_A0_line_same_side(float x, float y, float x1, float y1, float x2, float y2);
};

#endif