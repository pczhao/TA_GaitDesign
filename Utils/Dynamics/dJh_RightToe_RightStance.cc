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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t12887;
  double t6234;
  double t6396;
  double t12891;
  double t2630;
  double t8867;
  double t12892;
  double t12893;
  double t12895;
  double t12896;
  double t12897;
  double t12898;
  double t12900;
  double t12909;
  double t12910;
  double t12911;
  double t12906;
  double t12907;
  double t12908;
  double t12912;
  double t12913;
  double t12914;
  double t12915;
  double t12916;
  double t12922;
  double t12929;
  double t12930;
  double t12931;
  double t12928;
  double t12932;
  double t12933;
  double t12934;
  double t12935;
  double t12936;
  double t12894;
  double t12899;
  double t12901;
  double t12902;
  double t12903;
  double t12904;
  double t12905;
  double t12917;
  double t12918;
  double t12919;
  double t12920;
  double t12921;
  double t12923;
  double t12924;
  double t12925;
  double t12926;
  double t12927;
  double t12937;
  double t12938;
  double t12939;
  t12887 = Cos(var1[2]);
  t6234 = Cos(var1[3]);
  t6396 = Sin(var1[2]);
  t12891 = Sin(var1[3]);
  t2630 = Cos(var1[4]);
  t8867 = -1.*t6234*t6396;
  t12892 = -1.*t12887*t12891;
  t12893 = t8867 + t12892;
  t12895 = t12887*t6234;
  t12896 = -1.*t6396*t12891;
  t12897 = t12895 + t12896;
  t12898 = Sin(var1[4]);
  t12900 = t2630*t12893;
  t12909 = -1.*t12887*t6234;
  t12910 = t6396*t12891;
  t12911 = t12909 + t12910;
  t12906 = -1.*t2630;
  t12907 = 1. + t12906;
  t12908 = 0.4*t12907*t12893;
  t12912 = -0.4*t12911*t12898;
  t12913 = t12911*t12898;
  t12914 = t12900 + t12913;
  t12915 = 0.8*t12914;
  t12916 = t12908 + t12912 + t12915;
  t12922 = t2630*t12911;
  t12929 = t6234*t6396;
  t12930 = t12887*t12891;
  t12931 = t12929 + t12930;
  t12928 = 0.4*t12907*t12911;
  t12932 = -0.4*t12931*t12898;
  t12933 = t12931*t12898;
  t12934 = t12922 + t12933;
  t12935 = 0.8*t12934;
  t12936 = t12928 + t12932 + t12935;
  t12894 = -0.4*t2630*t12893;
  t12899 = 0.4*t12897*t12898;
  t12901 = -1.*t12897*t12898;
  t12902 = t12900 + t12901;
  t12903 = 0.8*t12902;
  t12904 = t12894 + t12899 + t12903;
  t12905 = var2[4]*t12904;
  t12917 = var2[2]*t12916;
  t12918 = var2[3]*t12916;
  t12919 = t12905 + t12917 + t12918;
  t12920 = -0.4*t2630*t12911;
  t12921 = 0.4*t12893*t12898;
  t12923 = -1.*t12893*t12898;
  t12924 = t12922 + t12923;
  t12925 = 0.8*t12924;
  t12926 = t12920 + t12921 + t12925;
  t12927 = var2[4]*t12926;
  t12937 = var2[2]*t12936;
  t12938 = var2[3]*t12936;
  t12939 = t12927 + t12937 + t12938;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t12919;
  p_output1[7]=0;
  p_output1[8]=t12939;
  p_output1[9]=t12919;
  p_output1[10]=0;
  p_output1[11]=t12939;
  p_output1[12]=t12904*var2[2] + t12904*var2[3] + (t12899 + 0.4*t12931*t2630 + 0.8*(t12901 - 1.*t12931*t2630))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t12926*var2[2] + t12926*var2[3] + (t12921 + 0.4*t12897*t2630 + 0.8*(t12923 - 1.*t12897*t2630))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
