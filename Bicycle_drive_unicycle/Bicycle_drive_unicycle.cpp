#include "Bicycle_drive_unicycle.h"

Bicycle_drive_unicycle::Bicycle_drive_unicycle(){
}

void Bicycle_drive_unicycle::set_param(float r_, float L_){
    r = r_;
    L = L_;
}

void Bicycle_drive_unicycle::set_r(float r_){
    r = r_;
}

void Bicycle_drive_unicycle::set_L(float L_){
    L = L_;
}

float Bicycle_drive_unicycle::get_r(){
    return r;
}

float Bicycle_drive_unicycle::get_L(){
    return L;
}

void Bicycle_drive_unicycle::set_vc_max(float vc_max_){
    vc_max = vc_max_;
}

void Bicycle_drive_unicycle::set_wc_max(float wc_max_){
    wc_max = wc_max_;
}

float Bicycle_drive_unicycle::get_vc_max(){
    return vc_max;
}

float Bicycle_drive_unicycle::get_wc_max(){
    return wc_max;
}

void Bicycle_drive_unicycle::set_delta_max(float delta_max_){
    delta_max = delta_max_;
}

void Bicycle_drive_unicycle::set_w_max(float w_max_){
    w_max = w_max_;
}

float Bicycle_drive_unicycle::get_delta_max(){
    return delta_max;
}

float Bicycle_drive_unicycle::get_w_max(){
    return w_max;
}

void Bicycle_drive_unicycle::uni2bicycle(float vc_, float wc_, float* delta_, float* w_){
    float R = vc_/wc_;
    *delta_ = atan(L/R);
    *w_ = vc_/r;
}

float Bicycle_drive_unicycle::get_w(float vc_, float wc_){
    return vc_/r;
}

float Bicycle_drive_unicycle::get_delta(float vc_, float wc_){
    float R = vc_/wc_;
    return atan(L/R);
}

void Bicycle_drive_unicycle::bicycle2uni(float delta_, float w_, float* vc_, float* wc_){
    *vc_ = w_*r;
    // float R = L/tan(delta_);
    // *wc_ = w_*r/R;
    *wc_ = w_*r*tan(delta_)/L;
}

float Bicycle_drive_unicycle::get_vc(float delta_, float w_){
    return w_*r;
}

float Bicycle_drive_unicycle::get_wc(float delta_, float w_){
    return w_*r*tan(delta_)/L;
}

void Bicycle_drive_unicycle::update_domain_vw(float vc_in, float wc_in, float* vc_out, float* wc_out){
}