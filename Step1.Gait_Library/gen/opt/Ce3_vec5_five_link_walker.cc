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
  double t2652;
  double t1907;
  double t2594;
  double t4965;
  double t5065;
  double t2595;
  double t5001;
  double t5005;
  double t1903;
  double t5072;
  double t5076;
  double t5077;
  double t5828;
  double t6606;
  double t6725;
  double t6755;
  double t6974;
  double t7281;
  double t7956;
  double t8183;
  double t5016;
  double t5095;
  double t10801;
  double t10881;
  double t10884;
  double t7056;
  double t7070;
  double t7075;
  double t7099;
  double t7255;
  double t8203;
  double t8266;
  double t8314;
  double t8427;
  double t10886;
  double t10891;
  double t10892;
  double t10893;
  double t10894;
  double t10902;
  t2652 = Cos(var1[3]);
  t1907 = Cos(var1[4]);
  t2594 = Sin(var1[3]);
  t4965 = Sin(var1[4]);
  t5065 = Cos(var1[2]);
  t2595 = -1.*t1907*t2594;
  t5001 = -1.*t2652*t4965;
  t5005 = t2595 + t5001;
  t1903 = Sin(var1[2]);
  t5072 = t2652*t1907;
  t5076 = -1.*t2594*t4965;
  t5077 = t5072 + t5076;
  t5828 = -1.*t1907;
  t6606 = 1. + t5828;
  t6725 = 0.4*t6606;
  t6755 = 0.64*t1907;
  t6974 = t6725 + t6755;
  t7281 = t2652*t6974;
  t7956 = -0.24*t2594*t4965;
  t8183 = t7281 + t7956;
  t5016 = -1.*t1903*t5005;
  t5095 = t5065*t5005;
  t10801 = -1.*t2652*t1907;
  t10881 = t2594*t4965;
  t10884 = t10801 + t10881;
  t7056 = -0.24*t2652*t4965;
  t7070 = t6974*t2594;
  t7075 = 0.24*t2652*t4965;
  t7099 = t7070 + t7075;
  t7255 = t7099*t5077;
  t8203 = t5005*t8183;
  t8266 = t1907*t2594;
  t8314 = t2652*t4965;
  t8427 = t8266 + t8314;
  t10886 = t5065*t10884;
  t10891 = t5016 + t10886;
  t10892 = 0.384*var2[1]*t10891;
  t10893 = t1903*t10884;
  t10894 = t5095 + t10893;
  t10902 = 0.384*var2[0]*t10894;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t1903*t5077 + t5095)*var2[0] + 0.384*(t5016 - 1.*t5065*t5077)*var2[1])*var2[4];
  p_output1[3]=(t10892 + t10902 + 0.384*(t5077*(-1.*t2594*t6974 + t7056) + t7255 + t8203 + t8183*t8427)*var2[2])*var2[4];
  p_output1[4]=(t10892 + t10902 + 0.384*(t5077*(-0.24*t1907*t2594 + t7056) + t7255 + t8203 + (0.24*t1907*t2652 + t7956)*t8427)*var2[2] + 0.384*(0.24*t1907*t4965 - 1.*t4965*t6974)*var2[3])*var2[4];
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

#include "Ce3_vec5_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
