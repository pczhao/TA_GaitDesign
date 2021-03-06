/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:49 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t16189;
  double t16185;
  double t16186;
  double t16193;
  double t9362;
  double t16188;
  double t16194;
  double t16195;
  double t16199;
  double t16200;
  double t16201;
  double t16202;
  double t10074;
  double t12586;
  double t16196;
  double t16205;
  double t16206;
  double t16207;
  double t16208;
  double t16209;
  double t16212;
  double t16214;
  double t16215;
  double t16216;
  t16189 = Cos(var1[2]);
  t16185 = Cos(var1[5]);
  t16186 = Sin(var1[2]);
  t16193 = Sin(var1[5]);
  t9362 = Cos(var1[6]);
  t16188 = -1.*t16185*t16186;
  t16194 = -1.*t16189*t16193;
  t16195 = t16188 + t16194;
  t16199 = -1.*t16189*t16185;
  t16200 = t16186*t16193;
  t16201 = t16199 + t16200;
  t16202 = Sin(var1[6]);
  t10074 = -1.*t9362;
  t12586 = 1. + t10074;
  t16196 = 0.4*t12586*t16195;
  t16205 = -0.4*t16201*t16202;
  t16206 = t9362*t16195;
  t16207 = t16201*t16202;
  t16208 = t16206 + t16207;
  t16209 = 0.8*t16208;
  t16212 = t16196 + t16205 + t16209;
  t16214 = t16189*t16185;
  t16215 = -1.*t16186*t16193;
  t16216 = t16214 + t16215;
  p_output1[0]=1.;
  p_output1[1]=t16212;
  p_output1[2]=t16212;
  p_output1[3]=0.4*t16202*t16216 + 0.8*(t16206 - 1.*t16202*t16216) - 0.4*t16195*t9362;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_foot_height.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
