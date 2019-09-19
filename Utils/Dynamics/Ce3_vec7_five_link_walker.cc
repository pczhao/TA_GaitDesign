/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:05 GMT-04:00
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
  double t12729;
  double t12712;
  double t12727;
  double t12735;
  double t12739;
  double t12728;
  double t12736;
  double t12737;
  double t6235;
  double t12740;
  double t12741;
  double t12742;
  double t12776;
  double t12777;
  double t12779;
  double t12781;
  double t12782;
  double t12797;
  double t12798;
  double t12799;
  double t12738;
  double t12753;
  double t12807;
  double t12808;
  double t12809;
  double t12784;
  double t12790;
  double t12794;
  double t12795;
  double t12796;
  double t12800;
  double t12801;
  double t12802;
  double t12803;
  double t12810;
  double t12811;
  double t12812;
  double t12813;
  double t12814;
  double t12815;
  t12729 = Cos(var1[5]);
  t12712 = Cos(var1[6]);
  t12727 = Sin(var1[5]);
  t12735 = Sin(var1[6]);
  t12739 = Cos(var1[2]);
  t12728 = -1.*t12712*t12727;
  t12736 = -1.*t12729*t12735;
  t12737 = t12728 + t12736;
  t6235 = Sin(var1[2]);
  t12740 = t12729*t12712;
  t12741 = -1.*t12727*t12735;
  t12742 = t12740 + t12741;
  t12776 = -1.*t12712;
  t12777 = 1. + t12776;
  t12779 = 0.4*t12777;
  t12781 = 0.64*t12712;
  t12782 = t12779 + t12781;
  t12797 = t12729*t12782;
  t12798 = -0.24*t12727*t12735;
  t12799 = t12797 + t12798;
  t12738 = -1.*t6235*t12737;
  t12753 = t12739*t12737;
  t12807 = -1.*t12729*t12712;
  t12808 = t12727*t12735;
  t12809 = t12807 + t12808;
  t12784 = -0.24*t12729*t12735;
  t12790 = t12782*t12727;
  t12794 = 0.24*t12729*t12735;
  t12795 = t12790 + t12794;
  t12796 = t12795*t12742;
  t12800 = t12737*t12799;
  t12801 = t12712*t12727;
  t12802 = t12729*t12735;
  t12803 = t12801 + t12802;
  t12810 = t12739*t12809;
  t12811 = t12738 + t12810;
  t12812 = 0.384*var2[1]*t12811;
  t12813 = t6235*t12809;
  t12814 = t12753 + t12813;
  t12815 = 0.384*var2[0]*t12814;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(t12753 - 1.*t12742*t6235)*var2[0] + 0.384*(t12738 - 1.*t12739*t12742)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t12812 + t12815 + 0.384*(t12742*(-1.*t12727*t12782 + t12784) + t12796 + t12800 + t12799*t12803)*var2[2])*var2[6];
  p_output1[6]=(t12812 + t12815 + 0.384*(t12742*(-0.24*t12712*t12727 + t12784) + t12796 + t12800 + (0.24*t12712*t12729 + t12798)*t12803)*var2[2] + 0.384*(0.24*t12712*t12735 - 1.*t12735*t12782)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace SymFunction
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
