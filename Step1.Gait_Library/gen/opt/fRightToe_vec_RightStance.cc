/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:09 GMT-04:00
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
  double t5597;
  double t5678;
  double t5596;
  double t5687;
  double t3120;
  double t5675;
  double t5690;
  double t5695;
  double t5698;
  double t5728;
  double t5729;
  double t6888;
  double t5590;
  double t5591;
  double t11145;
  double t11154;
  double t11157;
  double t5696;
  double t8335;
  double t8475;
  double t9529;
  double t11023;
  double t11129;
  double t11132;
  double t11133;
  double t11139;
  double t11158;
  double t11159;
  double t11160;
  double t11161;
  double t11162;
  double t11165;
  double t11166;
  double t11167;
  double t11169;
  double t11170;
  double t11171;
  t5597 = Cos(var1[3]);
  t5678 = Sin(var1[2]);
  t5596 = Cos(var1[2]);
  t5687 = Sin(var1[3]);
  t3120 = Cos(var1[4]);
  t5675 = t5596*t5597;
  t5690 = -1.*t5678*t5687;
  t5695 = t5675 + t5690;
  t5698 = -1.*t5597*t5678;
  t5728 = -1.*t5596*t5687;
  t5729 = t5698 + t5728;
  t6888 = Sin(var1[4]);
  t5590 = -1.*t3120;
  t5591 = 1. + t5590;
  t11145 = -1.*t5596*t5597;
  t11154 = t5678*t5687;
  t11157 = t11145 + t11154;
  t5696 = 0.4*t5591*t5695;
  t8335 = -0.4*t5729*t6888;
  t8475 = t3120*t5695;
  t9529 = t5729*t6888;
  t11023 = t8475 + t9529;
  t11129 = 0.8*t11023;
  t11132 = t5696 + t8335 + t11129;
  t11133 = var2[0]*t11132;
  t11139 = 0.4*t5591*t5729;
  t11158 = -0.4*t11157*t6888;
  t11159 = t3120*t5729;
  t11160 = t11157*t6888;
  t11161 = t11159 + t11160;
  t11162 = 0.8*t11161;
  t11165 = t11139 + t11158 + t11162;
  t11166 = var2[2]*t11165;
  t11167 = t11133 + t11166;
  t11169 = t5597*t5678;
  t11170 = t5596*t5687;
  t11171 = t11169 + t11170;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t11167;
  p_output1[3]=t11167;
  p_output1[4]=(-0.4*t3120*t5695 + 0.4*t11171*t6888 + 0.8*(-1.*t11171*t6888 + t8475))*var2[0] + (-0.4*t3120*t5729 + 0.4*t5695*t6888 + 0.8*(t11159 - 1.*t5695*t6888))*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
