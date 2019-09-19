/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:48 GMT-04:00
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
  double t6752;
  double t6681;
  double t6691;
  double t6765;
  double t3038;
  double t6705;
  double t6766;
  double t6771;
  double t6796;
  double t6797;
  double t6798;
  double t6803;
  double t3138;
  double t6640;
  double t6651;
  double t6669;
  double t6812;
  double t6816;
  double t6898;
  double t6921;
  double t6927;
  t6752 = Cos(var1[2]);
  t6681 = Cos(var1[5]);
  t6691 = Sin(var1[2]);
  t6765 = Sin(var1[5]);
  t3038 = Cos(var1[6]);
  t6705 = t6681*t6691;
  t6766 = t6752*t6765;
  t6771 = t6705 + t6766;
  t6796 = t6752*t6681;
  t6797 = -1.*t6691*t6765;
  t6798 = t6796 + t6797;
  t6803 = Sin(var1[6]);
  t3138 = -1.*t3038;
  t6640 = 1. + t3138;
  t6651 = 0.4*t6640;
  t6669 = 0. + t6651;
  t6812 = -0.4*t6803;
  t6816 = 0. + t6812;
  t6898 = -1.*t6681*t6691;
  t6921 = -1.*t6752*t6765;
  t6927 = t6898 + t6921;
  p_output1[0]=0. + t6669*t6771 + 0.8*(t3038*t6771 + t6798*t6803) + t6798*t6816 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t6669*t6798 + t6816*t6927 + 0.8*(t3038*t6798 + t6803*t6927) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToe.hh"

namespace SymExpression
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
