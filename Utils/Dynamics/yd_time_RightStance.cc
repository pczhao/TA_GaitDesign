/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:08 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t12941;
  double t12942;
  double t12944;
  double t12949;
  double t12950;
  double t12951;
  double t12943;
  double t12945;
  double t12947;
  double t12948;
  double t12953;
  double t12954;
  double t12955;
  double t12957;
  double t12958;
  double t12959;
  double t12961;
  double t12963;
  t12941 = -1.*var3[1];
  t12942 = var3[0] + t12941;
  t12944 = t12941 + var1[0];
  t12949 = 1/t12942;
  t12950 = -1.*t12949*t12944;
  t12951 = 1. + t12950;
  t12943 = Power(t12942,-5);
  t12945 = Power(t12944,5);
  t12947 = Power(t12942,-4);
  t12948 = Power(t12944,4);
  t12953 = Power(t12942,-3);
  t12954 = Power(t12944,3);
  t12955 = Power(t12951,2);
  t12957 = Power(t12942,-2);
  t12958 = Power(t12944,2);
  t12959 = Power(t12951,3);
  t12961 = Power(t12951,4);
  t12963 = Power(t12951,5);
  p_output1[0]=t12963*var2[0] + 5.*t12944*t12949*t12961*var2[4] + 10.*t12957*t12958*t12959*var2[8] + 10.*t12953*t12954*t12955*var2[12] + 5.*t12947*t12948*t12951*var2[16] + t12943*t12945*var2[20];
  p_output1[1]=t12963*var2[1] + 5.*t12944*t12949*t12961*var2[5] + 10.*t12957*t12958*t12959*var2[9] + 10.*t12953*t12954*t12955*var2[13] + 5.*t12947*t12948*t12951*var2[17] + t12943*t12945*var2[21];
  p_output1[2]=t12963*var2[2] + 5.*t12944*t12949*t12961*var2[6] + 10.*t12957*t12958*t12959*var2[10] + 10.*t12953*t12954*t12955*var2[14] + 5.*t12947*t12948*t12951*var2[18] + t12943*t12945*var2[22];
  p_output1[3]=t12963*var2[3] + 5.*t12944*t12949*t12961*var2[7] + 10.*t12957*t12958*t12959*var2[11] + 10.*t12953*t12954*t12955*var2[15] + 5.*t12947*t12948*t12951*var2[19] + t12943*t12945*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_time_RightStance.hh"

namespace SymFunction
{

void yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
