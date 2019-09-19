/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:47 GMT-04:00
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
  double t6641;
  double t6608;
  double t6635;
  double t6644;
  double t1064;
  double t6640;
  double t6651;
  double t6669;
  double t6691;
  double t6700;
  double t6705;
  double t6752;
  double t1128;
  double t2257;
  double t3038;
  double t3138;
  double t6765;
  double t6766;
  double t6814;
  double t6815;
  double t6816;
  t6641 = Cos(var1[2]);
  t6608 = Cos(var1[3]);
  t6635 = Sin(var1[2]);
  t6644 = Sin(var1[3]);
  t1064 = Cos(var1[4]);
  t6640 = t6608*t6635;
  t6651 = t6641*t6644;
  t6669 = t6640 + t6651;
  t6691 = t6641*t6608;
  t6700 = -1.*t6635*t6644;
  t6705 = t6691 + t6700;
  t6752 = Sin(var1[4]);
  t1128 = -1.*t1064;
  t2257 = 1. + t1128;
  t3038 = 0.4*t2257;
  t3138 = 0. + t3038;
  t6765 = -0.4*t6752;
  t6766 = 0. + t6765;
  t6814 = -1.*t6608*t6635;
  t6815 = -1.*t6641*t6644;
  t6816 = t6814 + t6815;
  p_output1[0]=0. + t3138*t6669 + 0.8*(t1064*t6669 + t6705*t6752) + t6705*t6766 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3138*t6705 + t6766*t6816 + 0.8*(t1064*t6705 + t6752*t6816) + var1[1];
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

#include "p_RightToe.hh"

namespace SymExpression
{

void p_RightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
