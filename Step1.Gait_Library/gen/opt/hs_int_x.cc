/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:55 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t6705;
  double t6766;
  double t6771;
  double t6775;
  double t6798;
  double t6821;
  double t6897;
  double t6956;
  double t7060;
  double t7199;
  double t7231;
  t6705 = -1. + var8[0];
  t6766 = 1/t6705;
  t6771 = -1.*var1[0];
  t6775 = t6771 + var1[1];
  t6798 = -1.*var2[0];
  t6821 = -1.*var2[1];
  t6897 = -1.*var2[2];
  t6956 = -1.*var2[3];
  t7060 = -1.*var2[4];
  t7199 = -1.*var2[5];
  t7231 = -1.*var2[6];
  p_output1[0]=t6798 + var6[0] - 0.333333333333333*t6766*t6775*(var3[0] + 4.*var5[0] + var7[0]);
  p_output1[1]=t6821 + var6[1] - 0.333333333333333*t6766*t6775*(var3[1] + 4.*var5[1] + var7[1]);
  p_output1[2]=t6897 + var6[2] - 0.333333333333333*t6766*t6775*(var3[2] + 4.*var5[2] + var7[2]);
  p_output1[3]=t6956 + var6[3] - 0.333333333333333*t6766*t6775*(var3[3] + 4.*var5[3] + var7[3]);
  p_output1[4]=t7060 + var6[4] - 0.333333333333333*t6766*t6775*(var3[4] + 4.*var5[4] + var7[4]);
  p_output1[5]=t7199 + var6[5] - 0.333333333333333*t6766*t6775*(var3[5] + 4.*var5[5] + var7[5]);
  p_output1[6]=t7231 + var6[6] - 0.333333333333333*t6766*t6775*(var3[6] + 4.*var5[6] + var7[6]);
  p_output1[7]=var4[0] + 0.5*(t6798 - 1.*var6[0]) - 0.25*t6766*t6775*(var3[0] - 1.*var7[0]);
  p_output1[8]=var4[1] + 0.5*(t6821 - 1.*var6[1]) - 0.25*t6766*t6775*(var3[1] - 1.*var7[1]);
  p_output1[9]=var4[2] + 0.5*(t6897 - 1.*var6[2]) - 0.25*t6766*t6775*(var3[2] - 1.*var7[2]);
  p_output1[10]=var4[3] + 0.5*(t6956 - 1.*var6[3]) - 0.25*t6766*t6775*(var3[3] - 1.*var7[3]);
  p_output1[11]=var4[4] + 0.5*(t7060 - 1.*var6[4]) - 0.25*t6766*t6775*(var3[4] - 1.*var7[4]);
  p_output1[12]=var4[5] + 0.5*(t7199 - 1.*var6[5]) - 0.25*t6766*t6775*(var3[5] - 1.*var7[5]);
  p_output1[13]=var4[6] + 0.5*(t7231 - 1.*var6[6]) - 0.25*t6766*t6775*(var3[6] - 1.*var7[6]);
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "hs_int_x.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
