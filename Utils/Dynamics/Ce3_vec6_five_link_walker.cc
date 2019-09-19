/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:04 GMT-04:00
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
  double t12565;
  double t12616;
  double t5179;
  double t6228;
  double t5177;
  double t5248;
  double t12571;
  double t12572;
  double t12573;
  double t12577;
  double t12584;
  double t12707;
  double t12708;
  double t12709;
  double t12713;
  double t12716;
  double t12719;
  double t12720;
  double t12721;
  double t12722;
  double t12723;
  double t12626;
  double t12627;
  double t12683;
  double t12684;
  double t12692;
  double t12705;
  double t12725;
  double t12730;
  double t12731;
  double t12732;
  double t12733;
  double t12724;
  double t12726;
  double t12734;
  double t5197;
  double t6229;
  double t12563;
  double t12564;
  double t12710;
  double t12746;
  double t12747;
  double t12748;
  double t12770;
  double t12771;
  double t12772;
  double t12762;
  double t12763;
  double t12764;
  double t12766;
  double t12767;
  double t12768;
  double t12787;
  double t12788;
  double t12789;
  double t12791;
  double t12792;
  double t12793;
  double t12706;
  double t12711;
  double t12745;
  double t12749;
  double t12750;
  double t12751;
  double t12754;
  double t12755;
  double t12756;
  double t12757;
  double t12758;
  double t12759;
  double t12769;
  double t12773;
  double t12817;
  double t12818;
  double t12778;
  double t12820;
  double t12821;
  double t12780;
  t12565 = Cos(var1[6]);
  t12616 = Sin(var1[6]);
  t5179 = Sin(var1[2]);
  t6228 = Sin(var1[5]);
  t5177 = Cos(var1[5]);
  t5248 = Cos(var1[2]);
  t12571 = -1.*t12565;
  t12572 = 1. + t12571;
  t12573 = 0.4*t12572;
  t12577 = 0.64*t12565;
  t12584 = t12573 + t12577;
  t12707 = t5177*t12565;
  t12708 = -1.*t6228*t12616;
  t12709 = t12707 + t12708;
  t12713 = t12584*t12565;
  t12716 = Power(t12616,2);
  t12719 = 0.24*t12716;
  t12720 = t12713 + t12719;
  t12721 = -1.*t12565*t6228;
  t12722 = -1.*t5177*t12616;
  t12723 = t12721 + t12722;
  t12626 = t12584*t12616;
  t12627 = -0.24*t12565*t12616;
  t12683 = t12626 + t12627;
  t12684 = t12565*t6228;
  t12692 = t5177*t12616;
  t12705 = t12684 + t12692;
  t12725 = -1.*t5179*t12709;
  t12730 = -1.*t5248*t5177;
  t12731 = t5179*t6228;
  t12732 = t12730 + t12731;
  t12733 = -0.748*t12732;
  t12724 = t5248*t12723;
  t12726 = t12724 + t12725;
  t12734 = -1.*t5179*t12723;
  t5197 = -1.*t5177*t5179;
  t6229 = -1.*t5248*t6228;
  t12563 = t5197 + t6229;
  t12564 = -0.748*t12563;
  t12710 = t5248*t12709;
  t12746 = -1.*t5177*t12565;
  t12747 = t6228*t12616;
  t12748 = t12746 + t12747;
  t12770 = t5177*t12584;
  t12771 = -0.24*t6228*t12616;
  t12772 = t12770 + t12771;
  t12762 = -1.*t12584*t6228;
  t12763 = -0.24*t5177*t12616;
  t12764 = t12762 + t12763;
  t12766 = t12584*t6228;
  t12767 = 0.24*t5177*t12616;
  t12768 = t12766 + t12767;
  t12787 = -1.*t12584*t12616;
  t12788 = 0.24*t12565*t12616;
  t12789 = t12787 + t12788;
  t12791 = Power(t12565,2);
  t12792 = -0.24*t12791;
  t12793 = t12713 + t12792;
  t12706 = -1.*t5179*t12705;
  t12711 = t12706 + t12710;
  t12745 = -3.2*t12683*t12726;
  t12749 = t5248*t12748;
  t12750 = t12734 + t12749;
  t12751 = -3.2*t12720*t12750;
  t12754 = t5179*t12723;
  t12755 = t12754 + t12710;
  t12756 = -3.2*t12683*t12755;
  t12757 = t5179*t12748;
  t12758 = t12724 + t12757;
  t12759 = -3.2*t12720*t12758;
  t12769 = t12768*t12709;
  t12773 = t12723*t12772;
  t12817 = -0.24*t12565*t6228;
  t12818 = t12817 + t12763;
  t12778 = -1.*t12723*t12768;
  t12820 = 0.24*t5177*t12565;
  t12821 = t12820 + t12771;
  t12780 = -1.*t12772*t12748;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t12564 - 3.2*t12683*t12711 - 3.2*t12720*t12726)*var2[0] - 0.5*(t12733 - 3.2*t12683*(t12725 - 1.*t12705*t5248) - 3.2*t12720*(t12734 - 1.*t12709*t5248))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t12564 + t12756 + t12759)*var2[0] - 0.5*(t12733 + t12745 + t12751)*var2[1] - 0.5*(-3.2*t12720*(t12709*t12764 + t12769 + t12705*t12772 + t12773) - 3.2*t12683*(-1.*t12723*t12764 - 1.*t12709*t12772 + t12778 + t12780))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t12756 + t12759 - 3.2*t12755*t12789 - 3.2*t12793*(t12709*t5179 + t12705*t5248))*var2[0] - 0.5*(t12745 + t12751 - 3.2*t12726*t12789 - 3.2*t12711*t12793)*var2[1] - 0.5*(-3.2*(t12705*t12768 + t12709*t12772)*t12789 - 3.2*(-1.*t12709*t12768 - 1.*t12723*t12772)*t12793 - 3.2*t12720*(t12769 + t12773 + t12709*t12818 + t12705*t12821) - 3.2*t12683*(t12778 + t12780 - 1.*t12723*t12818 - 1.*t12709*t12821))*var2[2] - 0.5*(-6.4*t12720*t12789 - 6.4*t12683*t12793)*var2[5] + 0.384*t12789*var2[6]);
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

#include "Ce3_vec6_five_link_walker.hh"

namespace SymFunction
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
