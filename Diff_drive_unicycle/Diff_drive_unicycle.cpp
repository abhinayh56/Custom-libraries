#include "Diff_drive_unicycle.h"

Diff_drive_unicycle::Diff_drive_unicycle(){
}

void Diff_drive_unicycle::set_param(float r_, float L_){
    r = r_;
    L = L_;
}

void Diff_drive_unicycle::set_v_max(float V_max_){
    V_max = V_max_;
    w_lr_max = V_max/r;
    W_max = 2.0*V_max/L;
}

float Diff_drive_unicycle::get_v_max(){
    return V_max;
}

float Diff_drive_unicycle::get_w_max(){
    return W_max;
}

float Diff_drive_unicycle::get_wlr_max(){
    return w_lr_max;
}

void Diff_drive_unicycle::set_r(float r_){
    r = r_;
}

void Diff_drive_unicycle::set_L(float L_){
    L = L_;
}

float Diff_drive_unicycle::get_r(){
    return r;
}

float Diff_drive_unicycle::get_L(){
    return L;
}

void Diff_drive_unicycle::uni2ddr(float Vc_, float Wc_, float* wr, float* wl){
    float Vc = Vc_;
    float Wc = Wc_;
    // update_domain_vw(Vc_, Wc_, &Vc, &Wc);
    *wr = (Vc + Wc*L*0.5) / r;
    *wl = (Vc - Wc*L*0.5) / r;
}

float Diff_drive_unicycle::get_wr(float Vc, float Wc){
    return (Vc + Wc*L*0.5) / r;
}

float Diff_drive_unicycle::get_wl(float Vc, float Wc){
    return (Vc - Wc*L*0.5) / r;
}

void Diff_drive_unicycle::ddr2uni(float wr, float wl, float* Vc, float* Wc){
    *Vc = (wr + wl)*r*0.5;
    *Wc = (wr - wl)*r/L;
}

float Diff_drive_unicycle::get_Vc(float wr, float wl){
    return (wr + wl)*r*0.5;
}

float Diff_drive_unicycle::get_Wc(float wr, float wl){
    return (wr - wl)*r/L;
}

void Diff_drive_unicycle::update_domain_vw(float V_in, float W_in, float* V_out, float* W_out){
    float V_n = V_in;
    float W_n = W_in;

    int region = 1;
    if(W_in>W_max){
        region = 2;
    }
    else if(W_in<-W_max){
        region = 3;
    }

    switch(region){
        case 1:
            V_n = V_in;
            W_n = W_in;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            *V_out = V_in;
            *W_out = W_in;
            break;
    }

    *V_out = V_n;
    *W_out = W_n;
}