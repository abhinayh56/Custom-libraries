#ifndef PATH_TRACKER
#define PATH_TRACKER

#include <math.h>
#include "Math_functions.h"
#include "Constants.h"
class Path_tracker{
    public:
        Path_tracker();

    private:
};

class Pure_pursuit{
    public:
        Pure_pursuit(){
        }

        void set_look_ahead(float ld_){
            ld = ld_;
        }

        void set_steering_max(float delta_max_){
            delta_max = delta_max_;
        }

        float calc_steering_angle(float x, float y, float th, float xg, float yg){
            float alpha = atan2(yg-y, xg-x) - th;
            alpha = math_fun.wrap(alpha, -math_pi, math_pi);
            delta = atan(2.0*L*sin(alpha)/ld);
            delta = math_fun.saturate(delta, -delta_max, delta_max);
            return delta;
        }

        void set_look_ahead_gain(float k_look_ahead){
            k = k_look_ahead;
        }

    private:
        Math_functions math_fun;

        float r = 0.0;
        float L = 0.0;

        float ld = 0.0;

        float Vc = 0.0;
        
        float e_ld = 0.0;
        float kappa = 0.0;
        float R = 0.0;
        float k = 0.0;
        float delta = 0.0;
        float delta_max = 0.0;
};

#endif