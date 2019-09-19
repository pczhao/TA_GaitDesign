/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:46:59 GMT-04:00
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
  double t5247;
  double t8809;
  double t4964;
  double t5148;
  double t4881;
  double t5059;
  double t5250;
  double t6393;
  double t8576;
  double t8611;
  double t8792;
  double t11252;
  double t11259;
  double t11260;
  double t5047;
  double t5155;
  double t5162;
  double t5244;
  double t8837;
  double t11161;
  double t11207;
  double t11301;
  double t11303;
  double t11305;
  double t11276;
  double t11289;
  double t11298;
  double t11299;
  double t11300;
  double t11310;
  double t11319;
  double t11320;
  double t11321;
  double t11228;
  double t11229;
  double t11237;
  double t11322;
  double t11323;
  double t11326;
  double t11329;
  double t11330;
  double t11331;
  double t11314;
  double t11349;
  double t11350;
  double t11351;
  double t11352;
  double t11315;
  double t11353;
  double t11338;
  double t11339;
  double t11340;
  double t11242;
  double t11281;
  double t11362;
  double t11334;
  double t11335;
  double t11336;
  double t11363;
  double t11364;
  double t11365;
  double t11382;
  double t11383;
  double t11384;
  double t11374;
  double t11375;
  double t11376;
  double t11378;
  double t11379;
  double t11380;
  double t11381;
  double t11385;
  double t11405;
  double t11406;
  double t11390;
  double t11408;
  double t11409;
  double t11392;
  t5247 = Cos(var1[6]);
  t8809 = Sin(var1[6]);
  t4964 = Sin(var1[2]);
  t5148 = Sin(var1[5]);
  t4881 = Cos(var1[5]);
  t5059 = Cos(var1[2]);
  t5250 = -1.*t5247;
  t6393 = 1. + t5250;
  t8576 = 0.4*t6393;
  t8611 = 0.64*t5247;
  t8792 = t8576 + t8611;
  t11252 = t4881*t5247;
  t11259 = -1.*t5148*t8809;
  t11260 = t11252 + t11259;
  t5047 = -1.*t4881*t4964;
  t5155 = -1.*t5059*t5148;
  t5162 = t5047 + t5155;
  t5244 = 0.748*t5162;
  t8837 = t8792*t8809;
  t11161 = -0.24*t5247*t8809;
  t11207 = t8837 + t11161;
  t11301 = -1.*t5247*t5148;
  t11303 = -1.*t4881*t8809;
  t11305 = t11301 + t11303;
  t11276 = t5059*t11260;
  t11289 = t8792*t5247;
  t11298 = Power(t8809,2);
  t11299 = 0.24*t11298;
  t11300 = t11289 + t11299;
  t11310 = t5059*t11305;
  t11319 = t4964*t11305;
  t11320 = t11319 + t11276;
  t11321 = 3.2*t11207*t11320;
  t11228 = t5247*t5148;
  t11229 = t4881*t8809;
  t11237 = t11228 + t11229;
  t11322 = -1.*t4881*t5247;
  t11323 = t5148*t8809;
  t11326 = t11322 + t11323;
  t11329 = t4964*t11326;
  t11330 = t11310 + t11329;
  t11331 = 3.2*t11300*t11330;
  t11314 = -1.*t4964*t11260;
  t11349 = -1.*t5059*t4881;
  t11350 = t4964*t5148;
  t11351 = t11349 + t11350;
  t11352 = 0.748*t11351;
  t11315 = t11310 + t11314;
  t11353 = -1.*t4964*t11305;
  t11338 = Power(t5247,2);
  t11339 = -0.24*t11338;
  t11340 = t11289 + t11339;
  t11242 = -1.*t4964*t11237;
  t11281 = t11242 + t11276;
  t11362 = 3.2*t11207*t11315;
  t11334 = -1.*t8792*t8809;
  t11335 = 0.24*t5247*t8809;
  t11336 = t11334 + t11335;
  t11363 = t5059*t11326;
  t11364 = t11353 + t11363;
  t11365 = 3.2*t11300*t11364;
  t11382 = t4881*t8792;
  t11383 = -0.24*t5148*t8809;
  t11384 = t11382 + t11383;
  t11374 = -1.*t8792*t5148;
  t11375 = -0.24*t4881*t8809;
  t11376 = t11374 + t11375;
  t11378 = t8792*t5148;
  t11379 = 0.24*t4881*t8809;
  t11380 = t11378 + t11379;
  t11381 = t11380*t11260;
  t11385 = t11305*t11384;
  t11405 = -0.24*t5247*t5148;
  t11406 = t11405 + t11375;
  t11390 = -1.*t11305*t11380;
  t11408 = 0.24*t4881*t5247;
  t11409 = t11408 + t11383;
  t11392 = -1.*t11384*t11326;
  p_output1[0]=var2[5]*(-0.5*(3.2*t11207*t11281 + 3.2*t11300*t11315 + t5244)*var2[2] - 0.5*(t11321 + t11331 + t5244)*var2[5] - 0.5*(t11321 + t11331 + 3.2*t11320*t11336 + 3.2*t11340*(t11260*t4964 + t11237*t5059))*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(t11352 + 3.2*t11207*(t11314 - 1.*t11237*t5059) + 3.2*t11300*(t11353 - 1.*t11260*t5059))*var2[2] - 0.5*(t11352 + t11362 + t11365)*var2[5] - 0.5*(3.2*t11315*t11336 + 3.2*t11281*t11340 + t11362 + t11365)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t11300*(t11260*t11376 + t11381 + t11237*t11384 + t11385) + 3.2*t11207*(-1.*t11305*t11376 - 1.*t11260*t11384 + t11390 + t11392))*var2[5] - 0.5*(3.2*t11336*(t11237*t11380 + t11260*t11384) + 3.2*t11340*(-1.*t11260*t11380 - 1.*t11305*t11384) + 3.2*t11300*(t11381 + t11385 + t11260*t11406 + t11237*t11409) + 3.2*t11207*(t11390 + t11392 - 1.*t11305*t11406 - 1.*t11260*t11409))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t11300*t11336 + 6.4*t11207*t11340)*var2[5]*var2[6];
  p_output1[6]=-0.384*t11336*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace SymFunction
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
