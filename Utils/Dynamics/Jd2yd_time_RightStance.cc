/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:09 GMT-04:00
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
  double t5284;
  double t5285;
  double t12952;
  double t12956;
  double t12965;
  double t12972;
  double t12973;
  double t12974;
  double t12975;
  double t12976;
  double t12980;
  double t12981;
  double t12985;
  double t12986;
  t5284 = -1.*var3[1];
  t5285 = var3[0] + t5284;
  t12952 = Power(t5285,-5);
  t12956 = t5284 + var1[0];
  t12965 = Power(t12956,3);
  t12972 = Power(t5285,-4);
  t12973 = Power(t12956,2);
  t12974 = 1/t5285;
  t12975 = -1.*t12974*t12956;
  t12976 = 1. + t12975;
  t12980 = Power(t5285,-3);
  t12981 = Power(t12976,2);
  t12985 = Power(t5285,-2);
  t12986 = Power(t12976,3);
  p_output1[0]=20.*t12985*t12986*var2[0] + 60.*t12956*t12980*t12981*var2[4] - 40.*t12985*t12986*var2[4] + 60.*t12972*t12973*t12976*var2[8] - 120.*t12956*t12980*t12981*var2[8] + 20.*t12985*t12986*var2[8] + 20.*t12952*t12965*var2[12] - 120.*t12972*t12973*t12976*var2[12] + 60.*t12956*t12980*t12981*var2[12] - 40.*t12952*t12965*var2[16] + 60.*t12972*t12973*t12976*var2[16] + 20.*t12952*t12965*var2[20];
  p_output1[1]=20.*t12985*t12986*var2[1] + 60.*t12956*t12980*t12981*var2[5] - 40.*t12985*t12986*var2[5] + 60.*t12972*t12973*t12976*var2[9] - 120.*t12956*t12980*t12981*var2[9] + 20.*t12985*t12986*var2[9] + 20.*t12952*t12965*var2[13] - 120.*t12972*t12973*t12976*var2[13] + 60.*t12956*t12980*t12981*var2[13] - 40.*t12952*t12965*var2[17] + 60.*t12972*t12973*t12976*var2[17] + 20.*t12952*t12965*var2[21];
  p_output1[2]=20.*t12985*t12986*var2[2] + 60.*t12956*t12980*t12981*var2[6] - 40.*t12985*t12986*var2[6] + 60.*t12972*t12973*t12976*var2[10] - 120.*t12956*t12980*t12981*var2[10] + 20.*t12985*t12986*var2[10] + 20.*t12952*t12965*var2[14] - 120.*t12972*t12973*t12976*var2[14] + 60.*t12956*t12980*t12981*var2[14] - 40.*t12952*t12965*var2[18] + 60.*t12972*t12973*t12976*var2[18] + 20.*t12952*t12965*var2[22];
  p_output1[3]=20.*t12985*t12986*var2[3] + 60.*t12956*t12980*t12981*var2[7] - 40.*t12985*t12986*var2[7] + 60.*t12972*t12973*t12976*var2[11] - 120.*t12956*t12980*t12981*var2[11] + 20.*t12985*t12986*var2[11] + 20.*t12952*t12965*var2[15] - 120.*t12972*t12973*t12976*var2[15] + 60.*t12956*t12980*t12981*var2[15] - 40.*t12952*t12965*var2[19] + 60.*t12972*t12973*t12976*var2[19] + 20.*t12952*t12965*var2[23];
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

#include "Jd2yd_time_RightStance.hh"

namespace SymFunction
{

void Jd2yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
