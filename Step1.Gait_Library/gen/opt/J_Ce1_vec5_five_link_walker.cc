/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:14 GMT-04:00
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
  double t5780;
  double t3031;
  double t5467;
  double t5814;
  double t2044;
  double t5501;
  double t5819;
  double t6546;
  double t6604;
  double t6610;
  double t8004;
  double t8017;
  double t8149;
  double t8190;
  double t8197;
  double t8244;
  double t8263;
  double t8267;
  double t8268;
  double t8331;
  double t8243;
  double t8400;
  double t8731;
  double t8769;
  double t8775;
  double t6685;
  double t6767;
  double t6768;
  double t8816;
  double t8818;
  double t8819;
  double t8828;
  double t8829;
  double t9362;
  double t9427;
  double t9541;
  double t10163;
  double t10261;
  double t10158;
  double t10334;
  double t11525;
  double t11740;
  double t11741;
  double t6793;
  double t6917;
  double t8235;
  double t6980;
  double t8234;
  double t12058;
  double t12189;
  double t12199;
  double t12200;
  double t12201;
  double t12202;
  double t12265;
  double t12266;
  double t12353;
  double t12354;
  double t12359;
  double t12342;
  double t12343;
  double t12347;
  double t12348;
  double t12436;
  double t12471;
  double t12385;
  double t12397;
  double t12432;
  double t12473;
  double t12483;
  double t12484;
  double t12485;
  double t12494;
  double t12498;
  double t12499;
  double t12501;
  double t12503;
  double t12506;
  double t12581;
  double t12582;
  double t12586;
  double t12587;
  double t12588;
  t5780 = Cos(var1[3]);
  t3031 = Cos(var1[4]);
  t5467 = Sin(var1[3]);
  t5814 = Sin(var1[4]);
  t2044 = Sin(var1[2]);
  t5501 = -1.*t3031*t5467;
  t5819 = -1.*t5780*t5814;
  t6546 = t5501 + t5819;
  t6604 = -1.*t2044*t6546;
  t6610 = Cos(var1[2]);
  t8004 = -1.*t5780*t3031;
  t8017 = t5467*t5814;
  t8149 = t8004 + t8017;
  t8190 = t6610*t8149;
  t8197 = t6604 + t8190;
  t8244 = t3031*t5467;
  t8263 = t5780*t5814;
  t8267 = t8244 + t8263;
  t8268 = t2044*t8267;
  t8331 = t8268 + t8190;
  t8243 = -0.384*var2[2]*t8197;
  t8400 = -0.384*var2[3]*t8331;
  t8731 = -0.384*var2[4]*t8331;
  t8769 = t8243 + t8400 + t8731;
  t8775 = var2[4]*t8769;
  t6685 = t5780*t3031;
  t6767 = -1.*t5467*t5814;
  t6768 = t6685 + t6767;
  t8816 = t6610*t6546;
  t8818 = -1.*t2044*t6768;
  t8819 = t8816 + t8818;
  t8828 = t2044*t8149;
  t8829 = t8816 + t8828;
  t9362 = -1.*t6610*t6546;
  t9427 = -1.*t2044*t8149;
  t9541 = t9362 + t9427;
  t10163 = t6610*t8267;
  t10261 = t10163 + t9427;
  t10158 = -0.384*var2[2]*t9541;
  t10334 = -0.384*var2[3]*t10261;
  t11525 = -0.384*var2[4]*t10261;
  t11740 = t10158 + t10334 + t11525;
  t11741 = var2[4]*t11740;
  t6793 = -1.*t6610*t6768;
  t6917 = t6604 + t6793;
  t8235 = -0.384*var2[4]*t8197;
  t6980 = -0.384*var2[2]*t6917;
  t8234 = -0.384*var2[3]*t8197;
  t12058 = -1.*t3031;
  t12189 = 1. + t12058;
  t12199 = 0.4*t12189;
  t12200 = 0.64*t3031;
  t12201 = t12199 + t12200;
  t12202 = -1.*t12201*t5467;
  t12265 = -0.24*t5780*t5814;
  t12266 = t12202 + t12265;
  t12353 = t5780*t12201;
  t12354 = -0.24*t5467*t5814;
  t12359 = t12353 + t12354;
  t12342 = t12201*t5467;
  t12343 = 0.24*t5780*t5814;
  t12347 = t12342 + t12343;
  t12348 = t6546*t12347;
  t12436 = -0.24*t3031*t5467;
  t12471 = t12436 + t12265;
  t12385 = 0.24*t5467*t5814;
  t12397 = t12359*t8149;
  t12432 = t6546*t12266;
  t12473 = t6546*t12471;
  t12483 = t12471*t8267;
  t12484 = t6768*t12359;
  t12485 = 0.24*t5780*t3031;
  t12494 = t12485 + t12354;
  t12498 = t6768*t12494;
  t12499 = -0.24*t5780*t3031;
  t12501 = t12499 + t12385;
  t12503 = t6768*t12501;
  t12506 = t12432 + t12473 + t12348 + t12483 + t12484 + t12498 + t12503 + t12397;
  t12581 = t12266*t6768;
  t12582 = t12347*t6768;
  t12586 = t6546*t12359;
  t12587 = t8267*t12359;
  t12588 = t12581 + t12582 + t12586 + t12587;
  p_output1[0]=(t6980 + t8234 + t8235)*var2[4];
  p_output1[1]=t8775;
  p_output1[2]=t8775;
  p_output1[3]=-0.384*t8819*var2[4];
  p_output1[4]=-0.384*t8829*var2[4];
  p_output1[5]=-0.384*t8819*var2[2] - 0.384*t8829*var2[3] - 0.768*t8829*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t2044*t6768 + t9362)*var2[2] - 0.384*t9541*var2[3] - 0.384*t9541*var2[4]);
  p_output1[7]=t11741;
  p_output1[8]=t11741;
  p_output1[9]=-0.384*t6917*var2[4];
  p_output1[10]=t8235;
  p_output1[11]=t6980 + t8234 - 0.768*t8197*var2[4];
  p_output1[12]=var2[4]*(-0.384*(t12348 + t12397 + 2.*t12266*t6546 + 2.*t12359*t6768 + (t12385 - 1.*t12201*t5780)*t6768 + t12266*t8267)*var2[3] - 0.384*t12506*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t12506*var2[3] - 0.384*(t12348 + t12397 + t12483 + t12503 + 2.*t12471*t6546 + 2.*t12494*t6768)*var2[4]);
  p_output1[14]=-0.384*t12588*var2[4];
  p_output1[15]=-0.384*t12588*var2[3] - 0.768*(t12582 + t12586 + t12471*t6768 + t12494*t8267)*var2[4];
  p_output1[16]=-0.384*(-1.*t12201*t3031 + 0.24*Power(t3031,2))*Power(var2[4],2);
  p_output1[17]=-0.768*(-1.*t12201*t5814 + 0.24*t3031*t5814)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
