/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:07 GMT-04:00
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
  double t5706;
  double t5535;
  double t5657;
  double t5753;
  double t6039;
  double t5661;
  double t5762;
  double t5867;
  double t2160;
  double t6116;
  double t6623;
  double t6735;
  double t11004;
  double t11005;
  double t11018;
  double t11019;
  double t11020;
  double t11039;
  double t11054;
  double t11059;
  double t5884;
  double t7022;
  double t11111;
  double t11112;
  double t11113;
  double t11022;
  double t11025;
  double t11029;
  double t11030;
  double t11038;
  double t11075;
  double t11096;
  double t11097;
  double t11098;
  double t11114;
  double t11115;
  double t11122;
  double t11126;
  double t11127;
  double t11128;
  t5706 = Cos(var1[5]);
  t5535 = Cos(var1[6]);
  t5657 = Sin(var1[5]);
  t5753 = Sin(var1[6]);
  t6039 = Cos(var1[2]);
  t5661 = -1.*t5535*t5657;
  t5762 = -1.*t5706*t5753;
  t5867 = t5661 + t5762;
  t2160 = Sin(var1[2]);
  t6116 = t5706*t5535;
  t6623 = -1.*t5657*t5753;
  t6735 = t6116 + t6623;
  t11004 = -1.*t5535;
  t11005 = 1. + t11004;
  t11018 = 0.4*t11005;
  t11019 = 0.64*t5535;
  t11020 = t11018 + t11019;
  t11039 = t5706*t11020;
  t11054 = -0.24*t5657*t5753;
  t11059 = t11039 + t11054;
  t5884 = -1.*t2160*t5867;
  t7022 = t6039*t5867;
  t11111 = -1.*t5706*t5535;
  t11112 = t5657*t5753;
  t11113 = t11111 + t11112;
  t11022 = -0.24*t5706*t5753;
  t11025 = t11020*t5657;
  t11029 = 0.24*t5706*t5753;
  t11030 = t11025 + t11029;
  t11038 = t11030*t6735;
  t11075 = t5867*t11059;
  t11096 = t5535*t5657;
  t11097 = t5706*t5753;
  t11098 = t11096 + t11097;
  t11114 = t6039*t11113;
  t11115 = t5884 + t11114;
  t11122 = 0.384*var2[1]*t11115;
  t11126 = t2160*t11113;
  t11127 = t7022 + t11126;
  t11128 = 0.384*var2[0]*t11127;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t2160*t6735 + t7022)*var2[0] + 0.384*(t5884 - 1.*t6039*t6735)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t11122 + t11128 + 0.384*(t11038 + t11075 + t11059*t11098 + (t11022 - 1.*t11020*t5657)*t6735)*var2[2])*var2[6];
  p_output1[6]=(t11122 + t11128 + 0.384*(t11038 + t11075 + t11098*(t11054 + 0.24*t5535*t5706) + (t11022 - 0.24*t5535*t5657)*t6735)*var2[2] + 0.384*(-1.*t11020*t5753 + 0.24*t5535*t5753)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
