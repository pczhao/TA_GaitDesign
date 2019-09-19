/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:04 GMT-04:00
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
  double t5164;
  double t3377;
  double t3406;
  double t5165;
  double t12399;
  double t3451;
  double t5166;
  double t8234;
  double t3197;
  double t12509;
  double t12514;
  double t12521;
  double t12585;
  double t12600;
  double t12601;
  double t12608;
  double t12609;
  double t12657;
  double t12659;
  double t12663;
  double t8268;
  double t12567;
  double t12693;
  double t12694;
  double t12695;
  double t12625;
  double t12628;
  double t12638;
  double t12655;
  double t12656;
  double t12664;
  double t12677;
  double t12681;
  double t12682;
  double t12696;
  double t12697;
  double t12698;
  double t12699;
  double t12700;
  double t12701;
  t5164 = Cos(var1[3]);
  t3377 = Cos(var1[4]);
  t3406 = Sin(var1[3]);
  t5165 = Sin(var1[4]);
  t12399 = Cos(var1[2]);
  t3451 = -1.*t3377*t3406;
  t5166 = -1.*t5164*t5165;
  t8234 = t3451 + t5166;
  t3197 = Sin(var1[2]);
  t12509 = t5164*t3377;
  t12514 = -1.*t3406*t5165;
  t12521 = t12509 + t12514;
  t12585 = -1.*t3377;
  t12600 = 1. + t12585;
  t12601 = 0.4*t12600;
  t12608 = 0.64*t3377;
  t12609 = t12601 + t12608;
  t12657 = t5164*t12609;
  t12659 = -0.24*t3406*t5165;
  t12663 = t12657 + t12659;
  t8268 = -1.*t3197*t8234;
  t12567 = t12399*t8234;
  t12693 = -1.*t5164*t3377;
  t12694 = t3406*t5165;
  t12695 = t12693 + t12694;
  t12625 = -0.24*t5164*t5165;
  t12628 = t12609*t3406;
  t12638 = 0.24*t5164*t5165;
  t12655 = t12628 + t12638;
  t12656 = t12655*t12521;
  t12664 = t8234*t12663;
  t12677 = t3377*t3406;
  t12681 = t5164*t5165;
  t12682 = t12677 + t12681;
  t12696 = t12399*t12695;
  t12697 = t8268 + t12696;
  t12698 = 0.384*var2[1]*t12697;
  t12699 = t3197*t12695;
  t12700 = t12567 + t12699;
  t12701 = 0.384*var2[0]*t12700;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(t12567 - 1.*t12521*t3197)*var2[0] + 0.384*(-1.*t12399*t12521 + t8268)*var2[1])*var2[4];
  p_output1[3]=(t12698 + t12701 + 0.384*(t12656 + t12664 + t12663*t12682 + t12521*(t12625 - 1.*t12609*t3406))*var2[2])*var2[4];
  p_output1[4]=(t12698 + t12701 + 0.384*(t12656 + t12664 + t12521*(t12625 - 0.24*t3377*t3406) + t12682*(t12659 + 0.24*t3377*t5164))*var2[2] + 0.384*(-1.*t12609*t5165 + 0.24*t3377*t5165)*var2[3])*var2[4];
  p_output1[5]=0;
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

#include "Ce3_vec5_five_link_walker.hh"

namespace SymFunction
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
