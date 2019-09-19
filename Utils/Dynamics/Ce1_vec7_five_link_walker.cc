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
  double t8315;
  double t5189;
  double t6299;
  double t11285;
  double t5034;
  double t6300;
  double t11316;
  double t11317;
  double t11318;
  double t11332;
  double t11345;
  double t11346;
  double t11347;
  double t11348;
  double t11354;
  double t11333;
  double t11337;
  double t11341;
  double t11359;
  double t11367;
  double t11368;
  double t11373;
  double t11377;
  double t11386;
  double t11387;
  double t11388;
  double t11399;
  double t11400;
  double t11401;
  double t11391;
  double t11395;
  double t11396;
  double t11397;
  double t11398;
  double t11402;
  double t11403;
  double t11404;
  double t11407;
  t8315 = Cos(var1[5]);
  t5189 = Cos(var1[6]);
  t6299 = Sin(var1[5]);
  t11285 = Sin(var1[6]);
  t5034 = Cos(var1[2]);
  t6300 = -1.*t5189*t6299;
  t11316 = -1.*t8315*t11285;
  t11317 = t6300 + t11316;
  t11318 = t5034*t11317;
  t11332 = Sin(var1[2]);
  t11345 = -1.*t8315*t5189;
  t11346 = t6299*t11285;
  t11347 = t11345 + t11346;
  t11348 = t11332*t11347;
  t11354 = t11318 + t11348;
  t11333 = t8315*t5189;
  t11337 = -1.*t6299*t11285;
  t11341 = t11333 + t11337;
  t11359 = -1.*t11332*t11317;
  t11367 = t5034*t11347;
  t11368 = t11359 + t11367;
  t11373 = -1.*t5189;
  t11377 = 1. + t11373;
  t11386 = 0.4*t11377;
  t11387 = 0.64*t5189;
  t11388 = t11386 + t11387;
  t11399 = t8315*t11388;
  t11400 = -0.24*t6299*t11285;
  t11401 = t11399 + t11400;
  t11391 = -0.24*t8315*t11285;
  t11395 = t11388*t6299;
  t11396 = 0.24*t8315*t11285;
  t11397 = t11395 + t11396;
  t11398 = t11397*t11341;
  t11402 = t11317*t11401;
  t11403 = t5189*t6299;
  t11404 = t8315*t11285;
  t11407 = t11403 + t11404;
  p_output1[0]=var2[6]*(-0.384*(t11318 - 1.*t11332*t11341)*var2[2] - 0.384*t11354*var2[5] - 0.384*t11354*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(t11359 - 1.*t11341*t5034)*var2[2] - 0.384*t11368*var2[5] - 0.384*t11368*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t11398 + t11402 + t11401*t11407 + t11341*(t11391 - 1.*t11388*t6299))*var2[5] - 0.384*(t11398 + t11402 + t11341*(t11391 - 0.24*t5189*t6299) + t11407*(t11400 + 0.24*t5189*t8315))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(-1.*t11285*t11388 + 0.24*t11285*t5189)*Power(var2[6],2);
  p_output1[6]=0;
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

#include "Ce1_vec7_five_link_walker.hh"

namespace SymFunction
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
