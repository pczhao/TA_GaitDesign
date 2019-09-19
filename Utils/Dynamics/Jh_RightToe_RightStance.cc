/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:06 GMT-04:00
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
  double t12743;
  double t12857;
  double t5242;
  double t12858;
  double t5194;
  double t12850;
  double t12859;
  double t12860;
  double t12862;
  double t12863;
  double t12864;
  double t12867;
  double t5210;
  double t5212;
  double t12878;
  double t12879;
  double t12880;
  double t12861;
  double t12871;
  double t12872;
  double t12873;
  double t12874;
  double t12875;
  double t12876;
  double t12877;
  double t12881;
  double t12882;
  double t12883;
  double t12884;
  double t12885;
  double t12886;
  double t12888;
  double t12889;
  double t12890;
  t12743 = Cos(var1[3]);
  t12857 = Sin(var1[2]);
  t5242 = Cos(var1[2]);
  t12858 = Sin(var1[3]);
  t5194 = Cos(var1[4]);
  t12850 = t5242*t12743;
  t12859 = -1.*t12857*t12858;
  t12860 = t12850 + t12859;
  t12862 = -1.*t12743*t12857;
  t12863 = -1.*t5242*t12858;
  t12864 = t12862 + t12863;
  t12867 = Sin(var1[4]);
  t5210 = -1.*t5194;
  t5212 = 1. + t5210;
  t12878 = -1.*t5242*t12743;
  t12879 = t12857*t12858;
  t12880 = t12878 + t12879;
  t12861 = 0.4*t5212*t12860;
  t12871 = -0.4*t12864*t12867;
  t12872 = t5194*t12860;
  t12873 = t12864*t12867;
  t12874 = t12872 + t12873;
  t12875 = 0.8*t12874;
  t12876 = t12861 + t12871 + t12875;
  t12877 = 0.4*t5212*t12864;
  t12881 = -0.4*t12880*t12867;
  t12882 = t5194*t12864;
  t12883 = t12880*t12867;
  t12884 = t12882 + t12883;
  t12885 = 0.8*t12884;
  t12886 = t12877 + t12881 + t12885;
  t12888 = t12743*t12857;
  t12889 = t5242*t12858;
  t12890 = t12888 + t12889;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t12876;
  p_output1[7]=0;
  p_output1[8]=t12886;
  p_output1[9]=t12876;
  p_output1[10]=0;
  p_output1[11]=t12886;
  p_output1[12]=0.4*t12867*t12890 + 0.8*(t12872 - 1.*t12867*t12890) - 0.4*t12860*t5194;
  p_output1[13]=0;
  p_output1[14]=0.4*t12860*t12867 + 0.8*(-1.*t12860*t12867 + t12882) - 0.4*t12864*t5194;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
