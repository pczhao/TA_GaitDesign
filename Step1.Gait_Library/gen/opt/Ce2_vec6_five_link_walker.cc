/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:04 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5925;
  double t5617;
  double t5618;
  double t5929;
  double t6027;
  double t1966;
  double t5904;
  double t6019;
  double t6025;
  double t6926;
  double t6951;
  double t6955;
  double t6978;
  double t6984;
  double t6026;
  double t6028;
  double t6046;
  double t6069;
  double t6541;
  double t6605;
  double t6732;
  double t6769;
  double t6848;
  double t8249;
  double t8250;
  double t8252;
  double t7090;
  double t7095;
  double t7139;
  double t7143;
  double t7246;
  double t7287;
  double t8255;
  double t8264;
  double t8265;
  double t8281;
  double t8283;
  double t8285;
  double t8289;
  double t8291;
  double t8296;
  double t8375;
  double t8378;
  double t8419;
  double t8420;
  double t8422;
  double t8436;
  double t8460;
  double t8463;
  double t8487;
  double t8492;
  double t9793;
  double t8381;
  double t8384;
  double t8385;
  double t8337;
  double t8343;
  double t8346;
  double t6994;
  double t7085;
  double t7089;
  double t7978;
  double t8011;
  double t8201;
  double t8202;
  double t8253;
  double t8351;
  double t8356;
  double t8315;
  double t8319;
  double t8320;
  double t8321;
  double t8330;
  double t8347;
  double t8357;
  double t8380;
  double t8386;
  double t8387;
  double t8389;
  double t8405;
  double t8409;
  double t8410;
  double t8411;
  double t8413;
  double t8435;
  double t8466;
  double t8467;
  double t10211;
  double t10229;
  double t10241;
  double t10245;
  double t10253;
  double t10265;
  double t10266;
  double t10268;
  double t10370;
  double t10371;
  double t10372;
  double t10373;
  double t10378;
  double t10408;
  double t10409;
  double t10410;
  double t10411;
  double t10412;
  double t10413;
  double t8414;
  double t8474;
  double t10260;
  double t10320;
  double t10379;
  double t10384;
  double t10389;
  double t10390;
  double t10391;
  double t10392;
  double t6925;
  double t7814;
  double t8232;
  double t8246;
  double t10418;
  double t10419;
  double t10420;
  t5925 = Cos(var1[5]);
  t5617 = Cos(var1[6]);
  t5618 = Sin(var1[5]);
  t5929 = Sin(var1[6]);
  t6027 = Sin(var1[2]);
  t1966 = Cos(var1[2]);
  t5904 = -1.*t5617*t5618;
  t6019 = -1.*t5925*t5929;
  t6025 = t5904 + t6019;
  t6926 = -1.*t5617;
  t6951 = 1. + t6926;
  t6955 = 0.4*t6951;
  t6978 = 0.64*t5617;
  t6984 = t6955 + t6978;
  t6026 = t1966*t6025;
  t6028 = -1.*t5925*t5617;
  t6046 = t5618*t5929;
  t6069 = t6028 + t6046;
  t6541 = t6027*t6069;
  t6605 = t6026 + t6541;
  t6732 = -1.*t5925*t6027;
  t6769 = -1.*t1966*t5618;
  t6848 = t6732 + t6769;
  t8249 = t1966*t5925;
  t8250 = -1.*t6027*t5618;
  t8252 = t8249 + t8250;
  t7090 = t6027*t6025;
  t7095 = t5925*t5617;
  t7139 = -1.*t5618*t5929;
  t7143 = t7095 + t7139;
  t7246 = t1966*t7143;
  t7287 = t7090 + t7246;
  t8255 = t5925*t6027;
  t8264 = t1966*t5618;
  t8265 = t8255 + t8264;
  t8281 = t5617*t5618;
  t8283 = t5925*t5929;
  t8285 = t8281 + t8283;
  t8289 = t1966*t8285;
  t8291 = t6027*t7143;
  t8296 = t8289 + t8291;
  t8375 = -1.*t6027*t7143;
  t8378 = t6026 + t8375;
  t8419 = t6984*t5618;
  t8420 = 0.24*t5925*t5929;
  t8422 = t8419 + t8420;
  t8436 = t5925*t6984;
  t8460 = -0.24*t5618*t5929;
  t8463 = t8436 + t8460;
  t8487 = -1.*t6984*t5618;
  t8492 = -0.24*t5925*t5929;
  t9793 = t8487 + t8492;
  t8381 = -1.*t6027*t6025;
  t8384 = t1966*t6069;
  t8385 = t8381 + t8384;
  t8337 = -1.*t1966*t5925;
  t8343 = t6027*t5618;
  t8346 = t8337 + t8343;
  t6994 = t6984*t5929;
  t7085 = -0.24*t5617*t5929;
  t7089 = t6994 + t7085;
  t7978 = t6984*t5617;
  t8011 = Power(t5929,2);
  t8201 = 0.24*t8011;
  t8202 = t7978 + t8201;
  t8253 = 13.6*t6848*t8252;
  t8351 = -1.*t6027*t8285;
  t8356 = t8351 + t7246;
  t8315 = Power(t6848,2);
  t8319 = 6.8*t8315;
  t8320 = 6.8*t6848*t8265;
  t8321 = Power(t8252,2);
  t8330 = 6.8*t8321;
  t8347 = 6.8*t8252*t8346;
  t8357 = 3.2*t7287*t8356;
  t8380 = 3.2*t8378*t8296;
  t8386 = 3.2*t7287*t8385;
  t8387 = 3.2*t8378*t6605;
  t8389 = t8319 + t8320 + t8330 + t8347 + t8357 + t8380 + t8386 + t8387;
  t8405 = Power(t5925,2);
  t8409 = 0.11*t8405;
  t8410 = Power(t5618,2);
  t8411 = 0.11*t8410;
  t8413 = t8409 + t8411;
  t8435 = -1.*t8422*t7143;
  t8466 = -1.*t6025*t8463;
  t8467 = t8435 + t8466;
  t10211 = t9793*t7143;
  t10229 = t8422*t7143;
  t10241 = t6025*t8463;
  t10245 = t8285*t8463;
  t10253 = t10211 + t10229 + t10241 + t10245;
  t10265 = t8422*t8285;
  t10266 = t7143*t8463;
  t10268 = t10265 + t10266;
  t10370 = -1.*t6025*t9793;
  t10371 = -1.*t6025*t8422;
  t10372 = -1.*t7143*t8463;
  t10373 = -1.*t8463*t6069;
  t10378 = t10370 + t10371 + t10372 + t10373;
  t10408 = 6.8*t8346*t8413;
  t10409 = 3.2*t8378*t8467;
  t10410 = 3.2*t8378*t10253;
  t10411 = 3.2*t10268*t8385;
  t10412 = 3.2*t8356*t10378;
  t10413 = t10408 + t10409 + t10410 + t10411 + t10412;
  t8414 = 6.8*t6848*t8413;
  t8474 = 3.2*t7287*t8467;
  t10260 = 3.2*t7287*t10253;
  t10320 = 3.2*t10268*t6605;
  t10379 = 3.2*t8296*t10378;
  t10384 = t8414 + t8474 + t10260 + t10320 + t10379;
  t10389 = 0.748*t8346;
  t10390 = 3.2*t7089*t8378;
  t10391 = 3.2*t8202*t8385;
  t10392 = t10389 + t10390 + t10391;
  t6925 = 0.748*t6848;
  t7814 = 3.2*t7089*t7287;
  t8232 = 3.2*t8202*t6605;
  t8246 = t6925 + t7814 + t8232;
  t10418 = 3.2*t8202*t10253;
  t10419 = 3.2*t7089*t10378;
  t10420 = t10418 + t10419;
  p_output1[0]=var2[5]*(-0.5*(6.4*t6605*t7287 + t8253 + 13.6*t8252*t8265 + 6.4*t7287*t8296)*var2[0] - 0.5*t8389*var2[1] - 0.5*t10384*var2[2] - 0.5*t8246*var2[5] - 0.384*t6605*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t8389*var2[0] - 0.5*(t8253 + 13.6*t6848*t8346 + 6.4*t8356*t8378 + 6.4*t8378*t8385)*var2[1] - 0.5*t10413*var2[2] - 0.5*t10392*var2[5] - 0.384*t8385*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t10384*var2[0] - 0.5*t10413*var2[1] - 0.5*(6.4*t10253*t10268 + 6.4*t10378*t8467)*var2[2] - 0.5*t10420*var2[5] - 0.384*t10253*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t8246*var2[0] - 0.5*t10392*var2[1] - 0.5*t10420*var2[2])*var2[5];
  p_output1[6]=(-0.384*t6605*var2[0] - 0.384*t8385*var2[1] - 0.384*t10253*var2[2])*var2[5];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec6_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
