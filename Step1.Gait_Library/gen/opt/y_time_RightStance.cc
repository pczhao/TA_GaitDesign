/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:38 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t10508;
  double t10606;
  double t16004;
  double t16005;
  double t16006;
  double t16007;
  double t16013;
  double t16014;
  double t16015;
  double t16020;
  double t16021;
  double t16022;
  double t11110;
  double t16016;
  double t16018;
  double t16019;
  double t16024;
  double t16025;
  double t16030;
  double t16032;
  double t16033;
  double t16035;
  double t16070;
  double t16072;
  t10508 = -1.*var4[1];
  t10606 = var4[0] + t10508;
  t16004 = -1. + var5[0];
  t16005 = -1. + var6[0];
  t16006 = 1/t16005;
  t16007 = -1.*var1[0];
  t16013 = t16007 + var1[1];
  t16014 = t16004*t16006*t16013;
  t16015 = t10508 + var1[0] + t16014;
  t16020 = 1/t10606;
  t16021 = -1.*t16020*t16015;
  t16022 = 1. + t16021;
  t11110 = Power(t10606,-5);
  t16016 = Power(t16015,5);
  t16018 = Power(t10606,-4);
  t16019 = Power(t16015,4);
  t16024 = Power(t10606,-3);
  t16025 = Power(t16015,3);
  t16030 = Power(t16022,2);
  t16032 = Power(t10606,-2);
  t16033 = Power(t16015,2);
  t16035 = Power(t16022,3);
  t16070 = Power(t16022,4);
  t16072 = Power(t16022,5);
  p_output1[0]=var2[3] - 1.*t16072*var3[0] - 5.*t16015*t16020*t16070*var3[4] - 10.*t16032*t16033*t16035*var3[8] - 10.*t16024*t16025*t16030*var3[12] - 5.*t16018*t16019*t16022*var3[16] - 1.*t11110*t16016*var3[20];
  p_output1[1]=var2[4] - 1.*t16072*var3[1] - 5.*t16015*t16020*t16070*var3[5] - 10.*t16032*t16033*t16035*var3[9] - 10.*t16024*t16025*t16030*var3[13] - 5.*t16018*t16019*t16022*var3[17] - 1.*t11110*t16016*var3[21];
  p_output1[2]=var2[5] - 1.*t16072*var3[2] - 5.*t16015*t16020*t16070*var3[6] - 10.*t16032*t16033*t16035*var3[10] - 10.*t16024*t16025*t16030*var3[14] - 5.*t16018*t16019*t16022*var3[18] - 1.*t11110*t16016*var3[22];
  p_output1[3]=var2[6] - 1.*t16072*var3[3] - 5.*t16015*t16020*t16070*var3[7] - 10.*t16032*t16033*t16035*var3[11] - 10.*t16024*t16025*t16030*var3[15] - 5.*t16018*t16019*t16022*var3[19] - 1.*t11110*t16016*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
