/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:07 GMT-04:00
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
  double t5110;
  double t7062;
  double t3045;
  double t5084;
  double t344;
  double t5080;
  double t5125;
  double t5639;
  double t6858;
  double t6859;
  double t7009;
  double t10905;
  double t10917;
  double t10920;
  double t10932;
  double t10955;
  double t10963;
  double t10975;
  double t10976;
  double t10977;
  double t10979;
  double t7066;
  double t7167;
  double t8401;
  double t8563;
  double t9235;
  double t9348;
  double t10993;
  double t11006;
  double t11007;
  double t11008;
  double t11016;
  double t10987;
  double t11002;
  double t11017;
  double t3053;
  double t5094;
  double t5096;
  double t5102;
  double t10921;
  double t11032;
  double t11033;
  double t11034;
  double t11092;
  double t11093;
  double t11094;
  double t11071;
  double t11072;
  double t11073;
  double t11079;
  double t11080;
  double t11081;
  double t11116;
  double t11117;
  double t11121;
  double t11123;
  double t11124;
  double t11125;
  double t9486;
  double t10922;
  double t11031;
  double t11035;
  double t11036;
  double t11037;
  double t11040;
  double t11041;
  double t11042;
  double t11043;
  double t11044;
  double t11045;
  double t11085;
  double t11095;
  double t11149;
  double t11150;
  double t11100;
  double t11152;
  double t11153;
  double t11109;
  t5110 = Cos(var1[6]);
  t7062 = Sin(var1[6]);
  t3045 = Sin(var1[2]);
  t5084 = Sin(var1[5]);
  t344 = Cos(var1[5]);
  t5080 = Cos(var1[2]);
  t5125 = -1.*t5110;
  t5639 = 1. + t5125;
  t6858 = 0.4*t5639;
  t6859 = 0.64*t5110;
  t7009 = t6858 + t6859;
  t10905 = t344*t5110;
  t10917 = -1.*t5084*t7062;
  t10920 = t10905 + t10917;
  t10932 = t7009*t5110;
  t10955 = Power(t7062,2);
  t10963 = 0.24*t10955;
  t10975 = t10932 + t10963;
  t10976 = -1.*t5110*t5084;
  t10977 = -1.*t344*t7062;
  t10979 = t10976 + t10977;
  t7066 = t7009*t7062;
  t7167 = -0.24*t5110*t7062;
  t8401 = t7066 + t7167;
  t8563 = t5110*t5084;
  t9235 = t344*t7062;
  t9348 = t8563 + t9235;
  t10993 = -1.*t3045*t10920;
  t11006 = -1.*t5080*t344;
  t11007 = t3045*t5084;
  t11008 = t11006 + t11007;
  t11016 = -0.748*t11008;
  t10987 = t5080*t10979;
  t11002 = t10987 + t10993;
  t11017 = -1.*t3045*t10979;
  t3053 = -1.*t344*t3045;
  t5094 = -1.*t5080*t5084;
  t5096 = t3053 + t5094;
  t5102 = -0.748*t5096;
  t10921 = t5080*t10920;
  t11032 = -1.*t344*t5110;
  t11033 = t5084*t7062;
  t11034 = t11032 + t11033;
  t11092 = t344*t7009;
  t11093 = -0.24*t5084*t7062;
  t11094 = t11092 + t11093;
  t11071 = -1.*t7009*t5084;
  t11072 = -0.24*t344*t7062;
  t11073 = t11071 + t11072;
  t11079 = t7009*t5084;
  t11080 = 0.24*t344*t7062;
  t11081 = t11079 + t11080;
  t11116 = -1.*t7009*t7062;
  t11117 = 0.24*t5110*t7062;
  t11121 = t11116 + t11117;
  t11123 = Power(t5110,2);
  t11124 = -0.24*t11123;
  t11125 = t10932 + t11124;
  t9486 = -1.*t3045*t9348;
  t10922 = t9486 + t10921;
  t11031 = -3.2*t8401*t11002;
  t11035 = t5080*t11034;
  t11036 = t11017 + t11035;
  t11037 = -3.2*t10975*t11036;
  t11040 = t3045*t10979;
  t11041 = t11040 + t10921;
  t11042 = -3.2*t8401*t11041;
  t11043 = t3045*t11034;
  t11044 = t10987 + t11043;
  t11045 = -3.2*t10975*t11044;
  t11085 = t11081*t10920;
  t11095 = t10979*t11094;
  t11149 = -0.24*t5110*t5084;
  t11150 = t11149 + t11072;
  t11100 = -1.*t10979*t11081;
  t11152 = 0.24*t344*t5110;
  t11153 = t11152 + t11093;
  t11109 = -1.*t11094*t11034;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-3.2*t10975*t11002 + t5102 - 3.2*t10922*t8401)*var2[0] - 0.5*(t11016 - 3.2*t10975*(t11017 - 1.*t10920*t5080) - 3.2*t8401*(t10993 - 1.*t5080*t9348))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t11042 + t11045 + t5102)*var2[0] - 0.5*(t11016 + t11031 + t11037)*var2[1] - 0.5*(-3.2*(-1.*t10979*t11073 - 1.*t10920*t11094 + t11100 + t11109)*t8401 - 3.2*t10975*(t10920*t11073 + t11085 + t11095 + t11094*t9348))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t11042 + t11045 - 3.2*t11041*t11121 - 3.2*t11125*(t10920*t3045 + t5080*t9348))*var2[0] - 0.5*(t11031 + t11037 - 3.2*t11002*t11121 - 3.2*t10922*t11125)*var2[1] - 0.5*(-3.2*(-1.*t10920*t11081 - 1.*t10979*t11094)*t11125 - 3.2*(t11100 + t11109 - 1.*t10979*t11150 - 1.*t10920*t11153)*t8401 - 3.2*t11121*(t10920*t11094 + t11081*t9348) - 3.2*t10975*(t11085 + t11095 + t10920*t11150 + t11153*t9348))*var2[2] - 0.5*(-6.4*t10975*t11121 - 6.4*t11125*t8401)*var2[5] + 0.384*t11121*var2[6]);
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

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
