/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:34 GMT-04:00
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
  double t15803;
  double t15797;
  double t15798;
  double t15804;
  double t10856;
  double t15799;
  double t15805;
  double t15806;
  double t15808;
  double t15809;
  double t15810;
  double t15811;
  double t15814;
  double t15832;
  double t15833;
  double t15834;
  double t15829;
  double t15830;
  double t15831;
  double t15835;
  double t15836;
  double t15837;
  double t15838;
  double t15839;
  double t15807;
  double t15813;
  double t15815;
  double t15816;
  double t15817;
  double t15827;
  double t15828;
  double t15840;
  double t15841;
  double t15842;
  double t15845;
  double t15846;
  double t15847;
  double t15855;
  double t15856;
  double t15857;
  double t15858;
  double t15859;
  double t15860;
  double t15861;
  double t15870;
  double t15876;
  double t15877;
  double t15878;
  double t15879;
  double t15880;
  double t15881;
  double t15868;
  double t15869;
  double t15871;
  double t15872;
  double t15873;
  double t15874;
  double t15875;
  double t15882;
  double t15883;
  double t15884;
  t15803 = Cos(var1[2]);
  t15797 = Cos(var1[3]);
  t15798 = Sin(var1[2]);
  t15804 = Sin(var1[3]);
  t10856 = Cos(var1[4]);
  t15799 = -1.*t15797*t15798;
  t15805 = -1.*t15803*t15804;
  t15806 = t15799 + t15805;
  t15808 = t15803*t15797;
  t15809 = -1.*t15798*t15804;
  t15810 = t15808 + t15809;
  t15811 = Sin(var1[4]);
  t15814 = t10856*t15806;
  t15832 = -1.*t15803*t15797;
  t15833 = t15798*t15804;
  t15834 = t15832 + t15833;
  t15829 = -1.*t10856;
  t15830 = 1. + t15829;
  t15831 = 0.4*t15830*t15806;
  t15835 = -0.4*t15834*t15811;
  t15836 = t15834*t15811;
  t15837 = t15814 + t15836;
  t15838 = 0.8*t15837;
  t15839 = t15831 + t15835 + t15838;
  t15807 = -0.4*t10856*t15806;
  t15813 = 0.4*t15810*t15811;
  t15815 = -1.*t15810*t15811;
  t15816 = t15814 + t15815;
  t15817 = 0.8*t15816;
  t15827 = t15807 + t15813 + t15817;
  t15828 = var2[4]*t15827;
  t15840 = var2[2]*t15839;
  t15841 = var2[3]*t15839;
  t15842 = t15828 + t15840 + t15841;
  t15845 = t15797*t15798;
  t15846 = t15803*t15804;
  t15847 = t15845 + t15846;
  t15855 = 0.4*t15830*t15810;
  t15856 = -0.4*t15806*t15811;
  t15857 = t10856*t15810;
  t15858 = t15806*t15811;
  t15859 = t15857 + t15858;
  t15860 = 0.8*t15859;
  t15861 = t15855 + t15856 + t15860;
  t15870 = t10856*t15834;
  t15876 = 0.4*t15830*t15834;
  t15877 = -0.4*t15847*t15811;
  t15878 = t15847*t15811;
  t15879 = t15870 + t15878;
  t15880 = 0.8*t15879;
  t15881 = t15876 + t15877 + t15880;
  t15868 = -0.4*t10856*t15834;
  t15869 = 0.4*t15806*t15811;
  t15871 = -1.*t15806*t15811;
  t15872 = t15870 + t15871;
  t15873 = 0.8*t15872;
  t15874 = t15868 + t15869 + t15873;
  t15875 = var2[4]*t15874;
  t15882 = var2[2]*t15881;
  t15883 = var2[3]*t15881;
  t15884 = t15875 + t15882 + t15883;
  p_output1[0]=t15842;
  p_output1[1]=t15842;
  p_output1[2]=t15827*var2[2] + t15827*var2[3] + (t15813 + 0.4*t10856*t15847 + 0.8*(t15815 - 1.*t10856*t15847))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t15861;
  p_output1[5]=t15861;
  p_output1[6]=-0.4*t10856*t15810 + 0.4*t15811*t15847 + 0.8*(-1.*t15811*t15847 + t15857);
  p_output1[7]=t15884;
  p_output1[8]=t15884;
  p_output1[9]=t15874*var2[2] + t15874*var2[3] + (0.4*t10856*t15810 + t15869 + 0.8*(-1.*t10856*t15810 + t15871))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t15839;
  p_output1[12]=t15839;
  p_output1[13]=t15827;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
