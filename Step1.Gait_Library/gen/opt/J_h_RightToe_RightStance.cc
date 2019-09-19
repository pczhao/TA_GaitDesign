/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:33 GMT-04:00
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
  double t15750;
  double t15752;
  double t15745;
  double t15753;
  double t1368;
  double t15751;
  double t15754;
  double t15755;
  double t15757;
  double t15758;
  double t15762;
  double t15763;
  double t10612;
  double t11648;
  double t15756;
  double t15764;
  double t15765;
  double t15766;
  double t15767;
  double t15768;
  double t15769;
  double t15771;
  double t15772;
  double t15773;
  double t15780;
  double t15781;
  double t15782;
  double t15779;
  double t15783;
  double t15784;
  double t15785;
  double t15786;
  double t15787;
  double t15788;
  t15750 = Cos(var1[3]);
  t15752 = Sin(var1[2]);
  t15745 = Cos(var1[2]);
  t15753 = Sin(var1[3]);
  t1368 = Cos(var1[4]);
  t15751 = t15745*t15750;
  t15754 = -1.*t15752*t15753;
  t15755 = t15751 + t15754;
  t15757 = -1.*t15750*t15752;
  t15758 = -1.*t15745*t15753;
  t15762 = t15757 + t15758;
  t15763 = Sin(var1[4]);
  t10612 = -1.*t1368;
  t11648 = 1. + t10612;
  t15756 = 0.4*t11648*t15755;
  t15764 = -0.4*t15762*t15763;
  t15765 = t1368*t15755;
  t15766 = t15762*t15763;
  t15767 = t15765 + t15766;
  t15768 = 0.8*t15767;
  t15769 = t15756 + t15764 + t15768;
  t15771 = t15750*t15752;
  t15772 = t15745*t15753;
  t15773 = t15771 + t15772;
  t15780 = -1.*t15745*t15750;
  t15781 = t15752*t15753;
  t15782 = t15780 + t15781;
  t15779 = 0.4*t11648*t15762;
  t15783 = -0.4*t15782*t15763;
  t15784 = t1368*t15762;
  t15785 = t15782*t15763;
  t15786 = t15784 + t15785;
  t15787 = 0.8*t15786;
  t15788 = t15779 + t15783 + t15787;
  p_output1[0]=1.;
  p_output1[1]=t15769;
  p_output1[2]=t15769;
  p_output1[3]=-0.4*t1368*t15755 + 0.4*t15763*t15773 + 0.8*(t15765 - 1.*t15763*t15773);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t15788;
  p_output1[8]=t15788;
  p_output1[9]=-0.4*t1368*t15762 + 0.4*t15755*t15763 + 0.8*(-1.*t15755*t15763 + t15784);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
