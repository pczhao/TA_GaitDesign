/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:12 GMT-04:00
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
  double t13015;
  double t13027;
  double t13014;
  double t13028;
  double t13008;
  double t13016;
  double t13029;
  double t13030;
  double t13032;
  double t13033;
  double t13034;
  double t13035;
  double t13012;
  double t13013;
  double t13044;
  double t13045;
  double t13046;
  double t13031;
  double t13036;
  double t13037;
  double t13038;
  double t13039;
  double t13040;
  double t13041;
  double t13042;
  double t13043;
  double t13047;
  double t13048;
  double t13049;
  double t13050;
  double t13051;
  double t13052;
  double t13053;
  double t13054;
  double t13056;
  double t13057;
  double t13058;
  t13015 = Cos(var1[3]);
  t13027 = Sin(var1[2]);
  t13014 = Cos(var1[2]);
  t13028 = Sin(var1[3]);
  t13008 = Cos(var1[4]);
  t13016 = t13014*t13015;
  t13029 = -1.*t13027*t13028;
  t13030 = t13016 + t13029;
  t13032 = -1.*t13015*t13027;
  t13033 = -1.*t13014*t13028;
  t13034 = t13032 + t13033;
  t13035 = Sin(var1[4]);
  t13012 = -1.*t13008;
  t13013 = 1. + t13012;
  t13044 = -1.*t13014*t13015;
  t13045 = t13027*t13028;
  t13046 = t13044 + t13045;
  t13031 = 0.4*t13013*t13030;
  t13036 = -0.4*t13034*t13035;
  t13037 = t13008*t13030;
  t13038 = t13034*t13035;
  t13039 = t13037 + t13038;
  t13040 = 0.8*t13039;
  t13041 = t13031 + t13036 + t13040;
  t13042 = var2[0]*t13041;
  t13043 = 0.4*t13013*t13034;
  t13047 = -0.4*t13046*t13035;
  t13048 = t13008*t13034;
  t13049 = t13046*t13035;
  t13050 = t13048 + t13049;
  t13051 = 0.8*t13050;
  t13052 = t13043 + t13047 + t13051;
  t13053 = var2[2]*t13052;
  t13054 = t13042 + t13053;
  t13056 = t13015*t13027;
  t13057 = t13014*t13028;
  t13058 = t13056 + t13057;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t13054;
  p_output1[3]=t13054;
  p_output1[4]=(-0.4*t13008*t13030 + 0.4*t13035*t13058 + 0.8*(t13037 - 1.*t13035*t13058))*var2[0] + (-0.4*t13008*t13034 + 0.4*t13030*t13035 + 0.8*(-1.*t13030*t13035 + t13048))*var2[2];
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

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
