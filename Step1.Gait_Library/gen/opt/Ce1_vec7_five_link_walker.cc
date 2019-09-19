/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:01 GMT-04:00
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
  double t1315;
  double t286;
  double t287;
  double t1316;
  double t121;
  double t1304;
  double t1317;
  double t1327;
  double t1328;
  double t1332;
  double t1342;
  double t1343;
  double t1355;
  double t1357;
  double t1368;
  double t1336;
  double t1337;
  double t1338;
  double t1373;
  double t1790;
  double t1794;
  double t5250;
  double t5337;
  double t5356;
  double t5681;
  double t5683;
  double t6894;
  double t6931;
  double t6989;
  double t5864;
  double t6826;
  double t6841;
  double t6861;
  double t6884;
  double t7013;
  double t7052;
  double t7065;
  double t7086;
  t1315 = Cos(var1[5]);
  t286 = Cos(var1[6]);
  t287 = Sin(var1[5]);
  t1316 = Sin(var1[6]);
  t121 = Cos(var1[2]);
  t1304 = -1.*t286*t287;
  t1317 = -1.*t1315*t1316;
  t1327 = t1304 + t1317;
  t1328 = t121*t1327;
  t1332 = Sin(var1[2]);
  t1342 = -1.*t1315*t286;
  t1343 = t287*t1316;
  t1355 = t1342 + t1343;
  t1357 = t1332*t1355;
  t1368 = t1328 + t1357;
  t1336 = t1315*t286;
  t1337 = -1.*t287*t1316;
  t1338 = t1336 + t1337;
  t1373 = -1.*t1332*t1327;
  t1790 = t121*t1355;
  t1794 = t1373 + t1790;
  t5250 = -1.*t286;
  t5337 = 1. + t5250;
  t5356 = 0.4*t5337;
  t5681 = 0.64*t286;
  t5683 = t5356 + t5681;
  t6894 = t1315*t5683;
  t6931 = -0.24*t287*t1316;
  t6989 = t6894 + t6931;
  t5864 = -0.24*t1315*t1316;
  t6826 = t5683*t287;
  t6841 = 0.24*t1315*t1316;
  t6861 = t6826 + t6841;
  t6884 = t6861*t1338;
  t7013 = t1327*t6989;
  t7052 = t286*t287;
  t7065 = t1315*t1316;
  t7086 = t7052 + t7065;
  p_output1[0]=var2[6]*(-0.384*(t1328 - 1.*t1332*t1338)*var2[2] - 0.384*t1368*var2[5] - 0.384*t1368*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(-1.*t121*t1338 + t1373)*var2[2] - 0.384*t1794*var2[5] - 0.384*t1794*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t1338*(-1.*t287*t5683 + t5864) + t6884 + t7013 + t6989*t7086)*var2[5] - 0.384*(t1338*(-0.24*t286*t287 + t5864) + t6884 + t7013 + (0.24*t1315*t286 + t6931)*t7086)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(0.24*t1316*t286 - 1.*t1316*t5683)*Power(var2[6],2);
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

#include "Ce1_vec7_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
