/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:08 GMT-04:00
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
  double t3213;
  double t6889;
  double t6942;
  double t7021;
  double t7152;
  double t7230;
  double t8170;
  double t9167;
  double t11021;
  double t11023;
  double t11024;
  double t11099;
  double t11134;
  double t11135;
  double t11136;
  double t11137;
  double t11138;
  double t11140;
  double t11144;
  double t11145;
  double t11146;
  double t11147;
  double t8335;
  double t9595;
  double t10923;
  double t11003;
  double t11108;
  double t11110;
  double t11129;
  double t11130;
  double t11131;
  double t11132;
  double t11133;
  double t11162;
  double t11163;
  double t11164;
  double t11139;
  double t11141;
  double t11142;
  double t11143;
  double t11148;
  double t11151;
  double t11154;
  double t11155;
  double t11156;
  double t11157;
  double t11158;
  double t11173;
  double t11174;
  double t11175;
  t3213 = Sin(var1[2]);
  t6889 = Cos(var1[3]);
  t6942 = -1.*t6889*t3213;
  t7021 = Cos(var1[2]);
  t7152 = Sin(var1[3]);
  t7230 = -1.*t7021*t7152;
  t8170 = t6942 + t7230;
  t9167 = Cos(var1[4]);
  t11021 = -1.*t7021*t6889;
  t11023 = t3213*t7152;
  t11024 = t11021 + t11023;
  t11099 = Sin(var1[4]);
  t11134 = Cos(var1[5]);
  t11135 = -1.*t11134*t3213;
  t11136 = Sin(var1[5]);
  t11137 = -1.*t7021*t11136;
  t11138 = t11135 + t11137;
  t11140 = Cos(var1[6]);
  t11144 = -1.*t7021*t11134;
  t11145 = t3213*t11136;
  t11146 = t11144 + t11145;
  t11147 = Sin(var1[6]);
  t8335 = -7.33788*t8170;
  t9595 = -1.*t9167;
  t10923 = 1. + t9595;
  t11003 = 0.4*t10923*t8170;
  t11108 = -0.4*t11024*t11099;
  t11110 = t9167*t8170;
  t11129 = t11024*t11099;
  t11130 = t11110 + t11129;
  t11131 = 0.64*t11130;
  t11132 = t11003 + t11108 + t11131;
  t11133 = -31.392000000000003*t11132;
  t11162 = t7021*t6889;
  t11163 = -1.*t3213*t7152;
  t11164 = t11162 + t11163;
  t11139 = -7.33788*t11138;
  t11141 = -1.*t11140;
  t11142 = 1. + t11141;
  t11143 = 0.4*t11142*t11138;
  t11148 = -0.4*t11146*t11147;
  t11151 = t11140*t11138;
  t11154 = t11146*t11147;
  t11155 = t11151 + t11154;
  t11156 = 0.64*t11155;
  t11157 = t11143 + t11148 + t11156;
  t11158 = -31.392000000000003*t11157;
  t11173 = t7021*t11134;
  t11174 = -1.*t3213*t11136;
  t11175 = t11173 + t11174;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t11133 + t11139 + t11158 + 28.252799999999997*t3213 + t8335;
  p_output1[3]=t11133 + t8335;
  p_output1[4]=-31.392000000000003*(0.4*t11099*t11164 + 0.64*(t11110 - 1.*t11099*t11164) - 0.4*t8170*t9167);
  p_output1[5]=t11139 + t11158;
  p_output1[6]=-31.392000000000003*(-0.4*t11138*t11140 + 0.4*t11147*t11175 + 0.64*(t11151 - 1.*t11147*t11175));
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

#include "Ge_vec_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
