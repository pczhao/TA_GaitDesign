/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:11 GMT-04:00
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
  double t12991;
  double t12993;
  double t12990;
  double t12994;
  double t5409;
  double t12992;
  double t12995;
  double t12996;
  double t12998;
  double t12999;
  double t13000;
  double t13001;
  double t10638;
  double t12983;
  double t12997;
  double t13002;
  double t13003;
  double t13004;
  double t13005;
  double t13006;
  double t13007;
  double t13009;
  double t13010;
  double t13011;
  double t13018;
  double t13019;
  double t13020;
  double t13017;
  double t13021;
  double t13022;
  double t13023;
  double t13024;
  double t13025;
  double t13026;
  t12991 = Cos(var1[3]);
  t12993 = Sin(var1[2]);
  t12990 = Cos(var1[2]);
  t12994 = Sin(var1[3]);
  t5409 = Cos(var1[4]);
  t12992 = t12990*t12991;
  t12995 = -1.*t12993*t12994;
  t12996 = t12992 + t12995;
  t12998 = -1.*t12991*t12993;
  t12999 = -1.*t12990*t12994;
  t13000 = t12998 + t12999;
  t13001 = Sin(var1[4]);
  t10638 = -1.*t5409;
  t12983 = 1. + t10638;
  t12997 = 0.4*t12983*t12996;
  t13002 = -0.4*t13000*t13001;
  t13003 = t5409*t12996;
  t13004 = t13000*t13001;
  t13005 = t13003 + t13004;
  t13006 = 0.8*t13005;
  t13007 = t12997 + t13002 + t13006;
  t13009 = t12991*t12993;
  t13010 = t12990*t12994;
  t13011 = t13009 + t13010;
  t13018 = -1.*t12990*t12991;
  t13019 = t12993*t12994;
  t13020 = t13018 + t13019;
  t13017 = 0.4*t12983*t13000;
  t13021 = -0.4*t13020*t13001;
  t13022 = t5409*t13000;
  t13023 = t13020*t13001;
  t13024 = t13022 + t13023;
  t13025 = 0.8*t13024;
  t13026 = t13017 + t13021 + t13025;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t13007;
  p_output1[3]=t13007;
  p_output1[4]=0.4*t13001*t13011 + 0.8*(t13003 - 1.*t13001*t13011) - 0.4*t12996*t5409;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t13026;
  p_output1[17]=t13026;
  p_output1[18]=0.4*t12996*t13001 + 0.8*(-1.*t12996*t13001 + t13022) - 0.4*t13000*t5409;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
