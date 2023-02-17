#ifndef BICYCLE_DRIVE_UNICYCLE
#define BICYCLE_DRIVE_UNICYCLE

class Bicycle_drive_unicycle{
    public:
        Bicycle_drive_unicycle();
        void set_param(float r_, float L_);
        void set_r(float r_);
        void set_L(float L_);

        float get_r();
        float get_L();

        void set_vc_max(float vc_max_);
        void set_wc_max(float wc_max_);

        float get_vc_max();
        float get_wc_max();

        void set_delta_max(float delta_max_);
        void set_w_max(float w_max_);

        float get_delta_max();
        float get_w_max();

        void uni2bicycle(float vc_, float wc_, float* delta_, float* w_);
        float get_w(float vc_, float wc_);
        float get_delta(float vc_, float wc_);

        void bicycle2uni(float delta_, float w_, float* vc_, float* wc_);
        float get_vc(float delta_, float w_);
        float get_wc(float delta_, float w_);

        void update_domain_vw(float vc_in, float wc_in, float* vc_out, float* wc_out);

    private:
        float r = 1.0;
        float L = 1.0;

        float vc_max = 0.0;
        float wc_max = 0.0;

        float delta_max = 0.0;
        float w_max = 0.0;
};

#endif