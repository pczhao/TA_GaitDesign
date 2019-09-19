/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:50 GMT-04:00
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
  double t16234;
  double t16231;
  double t16232;
  double t16235;
  double t9254;
  double t16233;
  double t16236;
  double t16237;
  double t16239;
  double t16240;
  double t16241;
  double t16242;
  double t16213;
  double t16225;
  double t16238;
  double t16243;
  double t16244;
  double t16245;
  double t16246;
  double t16247;
  double t16248;
  double t16250;
  double t16251;
  double t16252;
  t16234 = Cos(var1[2]);
  t16231 = Cos(var1[5]);
  t16232 = Sin(var1[2]);
  t16235 = Sin(var1[5]);
  t9254 = Cos(var1[6]);
  t16233 = -1.*t16231*t16232;
  t16236 = -1.*t16234*t16235;
  t16237 = t16233 + t16236;
  t16239 = -1.*t16234*t16231;
  t16240 = t16232*t16235;
  t16241 = t16239 + t16240;
  t16242 = Sin(var1[6]);
  t16213 = -1.*t9254;
  t16225 = 1. + t16213;
  t16238 = 0.4*t16225*t16237;
  t16243 = -0.4*t16241*t16242;
  t16244 = t9254*t16237;
  t16245 = t16241*t16242;
  t16246 = t16244 + t16245;
  t16247 = 0.8*t16246;
  t16248 = t16238 + t16243 + t16247;
  t16250 = t16234*t16231;
  t16251 = -1.*t16232*t16235;
  t16252 = t16250 + t16251;
  p_output1[0]=1.;
  p_output1[1]=t16248;
  p_output1[2]=t16248;
  p_output1[3]=0.4*t16242*t16252 + 0.8*(t16244 - 1.*t16242*t16252) - 0.4*t16237*t9254;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
