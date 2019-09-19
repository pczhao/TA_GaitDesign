/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:34 GMT-04:00
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
  double t10931;
  double t11324;
  double t10930;
  double t15770;
  double t10534;
  double t11323;
  double t15774;
  double t15775;
  double t15777;
  double t15778;
  double t15789;
  double t15790;
  double t10610;
  double t10611;
  double t15776;
  double t15791;
  double t15792;
  double t15793;
  double t15794;
  double t15795;
  double t15796;
  double t15800;
  double t15801;
  double t15802;
  double t15812;
  double t15819;
  double t15820;
  double t15821;
  double t15818;
  double t15822;
  double t15823;
  double t15824;
  double t15825;
  double t15826;
  t10931 = Cos(var1[3]);
  t11324 = Sin(var1[2]);
  t10930 = Cos(var1[2]);
  t15770 = Sin(var1[3]);
  t10534 = Cos(var1[4]);
  t11323 = t10930*t10931;
  t15774 = -1.*t11324*t15770;
  t15775 = t11323 + t15774;
  t15777 = -1.*t10931*t11324;
  t15778 = -1.*t10930*t15770;
  t15789 = t15777 + t15778;
  t15790 = Sin(var1[4]);
  t10610 = -1.*t10534;
  t10611 = 1. + t10610;
  t15776 = 0.4*t10611*t15775;
  t15791 = -0.4*t15789*t15790;
  t15792 = t10534*t15775;
  t15793 = t15789*t15790;
  t15794 = t15792 + t15793;
  t15795 = 0.8*t15794;
  t15796 = t15776 + t15791 + t15795;
  t15800 = t10931*t11324;
  t15801 = t10930*t15770;
  t15802 = t15800 + t15801;
  t15812 = t10534*t15789;
  t15819 = -1.*t10930*t10931;
  t15820 = t11324*t15770;
  t15821 = t15819 + t15820;
  t15818 = 0.4*t10611*t15789;
  t15822 = -0.4*t15821*t15790;
  t15823 = t15821*t15790;
  t15824 = t15812 + t15823;
  t15825 = 0.8*t15824;
  t15826 = t15818 + t15822 + t15825;
  p_output1[0]=var2[0] + t15796*var2[2] + t15796*var2[3] + (-0.4*t10534*t15775 + 0.4*t15790*t15802 + 0.8*(t15792 - 1.*t15790*t15802))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t15826*var2[2] + t15826*var2[3] + (-0.4*t10534*t15789 + 0.4*t15775*t15790 + 0.8*(-1.*t15775*t15790 + t15812))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
