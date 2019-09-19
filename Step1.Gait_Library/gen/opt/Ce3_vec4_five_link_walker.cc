/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:06 GMT-04:00
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
  double t4911;
  double t4927;
  double t1935;
  double t4895;
  double t1298;
  double t4881;
  double t4913;
  double t4914;
  double t4915;
  double t4916;
  double t4924;
  double t4953;
  double t4954;
  double t4957;
  double t4969;
  double t4970;
  double t4971;
  double t4972;
  double t4976;
  double t4981;
  double t4982;
  double t4928;
  double t4929;
  double t4937;
  double t4938;
  double t4941;
  double t4942;
  double t4992;
  double t5017;
  double t5018;
  double t5026;
  double t5027;
  double t4988;
  double t4993;
  double t5064;
  double t1963;
  double t4896;
  double t4897;
  double t4905;
  double t4958;
  double t5104;
  double t5105;
  double t5106;
  double t6833;
  double t6882;
  double t6906;
  double t6156;
  double t6482;
  double t6602;
  double t6607;
  double t6665;
  double t6801;
  double t8493;
  double t9292;
  double t9336;
  double t9411;
  double t10635;
  double t10793;
  double t4948;
  double t4959;
  double t5103;
  double t5107;
  double t5108;
  double t5109;
  double t5126;
  double t5127;
  double t5128;
  double t5129;
  double t5264;
  double t5631;
  double t6831;
  double t6987;
  double t10988;
  double t10989;
  double t7077;
  double t11000;
  double t11001;
  double t7218;
  t4911 = Cos(var1[4]);
  t4927 = Sin(var1[4]);
  t1935 = Sin(var1[2]);
  t4895 = Sin(var1[3]);
  t1298 = Cos(var1[3]);
  t4881 = Cos(var1[2]);
  t4913 = -1.*t4911;
  t4914 = 1. + t4913;
  t4915 = 0.4*t4914;
  t4916 = 0.64*t4911;
  t4924 = t4915 + t4916;
  t4953 = t1298*t4911;
  t4954 = -1.*t4895*t4927;
  t4957 = t4953 + t4954;
  t4969 = t4924*t4911;
  t4970 = Power(t4927,2);
  t4971 = 0.24*t4970;
  t4972 = t4969 + t4971;
  t4976 = -1.*t4911*t4895;
  t4981 = -1.*t1298*t4927;
  t4982 = t4976 + t4981;
  t4928 = t4924*t4927;
  t4929 = -0.24*t4911*t4927;
  t4937 = t4928 + t4929;
  t4938 = t4911*t4895;
  t4941 = t1298*t4927;
  t4942 = t4938 + t4941;
  t4992 = -1.*t1935*t4957;
  t5017 = -1.*t4881*t1298;
  t5018 = t1935*t4895;
  t5026 = t5017 + t5018;
  t5027 = -0.748*t5026;
  t4988 = t4881*t4982;
  t4993 = t4988 + t4992;
  t5064 = -1.*t1935*t4982;
  t1963 = -1.*t1298*t1935;
  t4896 = -1.*t4881*t4895;
  t4897 = t1963 + t4896;
  t4905 = -0.748*t4897;
  t4958 = t4881*t4957;
  t5104 = -1.*t1298*t4911;
  t5105 = t4895*t4927;
  t5106 = t5104 + t5105;
  t6833 = t1298*t4924;
  t6882 = -0.24*t4895*t4927;
  t6906 = t6833 + t6882;
  t6156 = -1.*t4924*t4895;
  t6482 = -0.24*t1298*t4927;
  t6602 = t6156 + t6482;
  t6607 = t4924*t4895;
  t6665 = 0.24*t1298*t4927;
  t6801 = t6607 + t6665;
  t8493 = -1.*t4924*t4927;
  t9292 = 0.24*t4911*t4927;
  t9336 = t8493 + t9292;
  t9411 = Power(t4911,2);
  t10635 = -0.24*t9411;
  t10793 = t4969 + t10635;
  t4948 = -1.*t1935*t4942;
  t4959 = t4948 + t4958;
  t5103 = -3.2*t4937*t4993;
  t5107 = t4881*t5106;
  t5108 = t5064 + t5107;
  t5109 = -3.2*t4972*t5108;
  t5126 = t1935*t4982;
  t5127 = t5126 + t4958;
  t5128 = -3.2*t4937*t5127;
  t5129 = t1935*t5106;
  t5264 = t4988 + t5129;
  t5631 = -3.2*t4972*t5264;
  t6831 = t6801*t4957;
  t6987 = t4982*t6906;
  t10988 = -0.24*t4911*t4895;
  t10989 = t10988 + t6482;
  t7077 = -1.*t4982*t6801;
  t11000 = 0.24*t1298*t4911;
  t11001 = t11000 + t6882;
  t7218 = -1.*t6906*t5106;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t4905 - 3.2*t4937*t4959 - 3.2*t4972*t4993)*var2[0] - 0.5*(-3.2*t4937*(-1.*t4881*t4942 + t4992) + t5027 - 3.2*t4972*(-1.*t4881*t4957 + t5064))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t4905 + t5128 + t5631)*var2[0] - 0.5*(t5027 + t5103 + t5109)*var2[1] - 0.5*(-3.2*t4972*(t4957*t6602 + t6831 + t4942*t6906 + t6987) - 3.2*t4937*(-1.*t4982*t6602 - 1.*t4957*t6906 + t7077 + t7218))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(-3.2*t10793*(t4881*t4942 + t1935*t4957) + t5128 + t5631 - 3.2*t5127*t9336)*var2[0] - 0.5*(-3.2*t10793*t4959 + t5103 + t5109 - 3.2*t4993*t9336)*var2[1] - 0.5*(-3.2*t10793*(-1.*t4957*t6801 - 1.*t4982*t6906) - 3.2*t4972*(t11001*t4942 + t10989*t4957 + t6831 + t6987) - 3.2*t4937*(-1.*t11001*t4957 - 1.*t10989*t4982 + t7077 + t7218) - 3.2*(t4942*t6801 + t4957*t6906)*t9336)*var2[2] - 0.5*(-6.4*t10793*t4937 - 6.4*t4972*t9336)*var2[3] + 0.384*t9336*var2[4]);
  p_output1[5]=0;
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

#include "Ce3_vec4_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
