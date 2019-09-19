/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:36 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t8818;
  double t9982;
  double t7211;
  double t10011;
  double t5833;
  double t9932;
  double t10014;
  double t10045;
  double t10715;
  double t15862;
  double t15867;
  double t15885;
  double t15901;
  double t15902;
  double t15909;
  double t15910;
  double t15918;
  double t15919;
  double t15920;
  double t5835;
  double t6957;
  double t15924;
  double t15925;
  double t15926;
  double t15923;
  double t15927;
  double t15941;
  double t15942;
  double t15943;
  double t15944;
  double t15951;
  double t15954;
  double t15964;
  double t15965;
  double t15976;
  double t15977;
  double t15978;
  double t15985;
  double t15986;
  double t15987;
  double t15984;
  double t15988;
  double t15989;
  double t15990;
  double t15991;
  double t15992;
  double t15983;
  double t15993;
  double t15994;
  double t15995;
  double t10604;
  double t15886;
  double t15887;
  double t15888;
  double t15899;
  double t15900;
  double t15921;
  double t15922;
  double t15945;
  double t15946;
  double t15947;
  double t15948;
  double t15949;
  double t15953;
  double t15955;
  double t15956;
  double t15962;
  double t15963;
  double t15979;
  double t15980;
  double t15981;
  double t15982;
  double t15996;
  double t15997;
  double t15998;
  double t16008;
  double t16009;
  double t16010;
  double t16011;
  double t16012;
  double t16026;
  double t16027;
  double t16028;
  double t16029;
  double t15999;
  double t16000;
  double t16001;
  double t16002;
  double t16003;
  double t16034;
  double t16040;
  double t16042;
  double t16047;
  double t16048;
  double t16049;
  double t16050;
  double t16051;
  double t16056;
  double t16057;
  double t16058;
  double t16059;
  double t16060;
  double t16061;
  double t16062;
  double t16063;
  double t16064;
  double t16065;
  double t16036;
  double t16037;
  double t16038;
  double t16039;
  double t16041;
  double t16043;
  double t16044;
  double t16045;
  double t16046;
  double t16052;
  double t16053;
  double t16054;
  double t16055;
  double t16066;
  double t16067;
  double t16068;
  double t16083;
  double t16084;
  double t16085;
  double t16086;
  t8818 = Cos(var1[3]);
  t9982 = Sin(var1[2]);
  t7211 = Cos(var1[2]);
  t10011 = Sin(var1[3]);
  t5833 = Cos(var1[4]);
  t9932 = t7211*t8818;
  t10014 = -1.*t9982*t10011;
  t10045 = t9932 + t10014;
  t10715 = -1.*t8818*t9982;
  t15862 = -1.*t7211*t10011;
  t15867 = t10715 + t15862;
  t15885 = Sin(var1[4]);
  t15901 = -0.4*t5833*t15867;
  t15902 = 0.4*t10045*t15885;
  t15909 = t5833*t15867;
  t15910 = -1.*t10045*t15885;
  t15918 = t15909 + t15910;
  t15919 = 0.8*t15918;
  t15920 = t15901 + t15902 + t15919;
  t5835 = -1.*t5833;
  t6957 = 1. + t5835;
  t15924 = -1.*t7211*t8818;
  t15925 = t9982*t10011;
  t15926 = t15924 + t15925;
  t15923 = 0.4*t6957*t15867;
  t15927 = -0.4*t15926*t15885;
  t15941 = t15926*t15885;
  t15942 = t15909 + t15941;
  t15943 = 0.8*t15942;
  t15944 = t15923 + t15927 + t15943;
  t15951 = 0.4*t15867*t15885;
  t15954 = -1.*t15867*t15885;
  t15964 = -0.4*t5833*t15926;
  t15965 = t5833*t15926;
  t15976 = t15965 + t15954;
  t15977 = 0.8*t15976;
  t15978 = t15964 + t15951 + t15977;
  t15985 = t8818*t9982;
  t15986 = t7211*t10011;
  t15987 = t15985 + t15986;
  t15984 = 0.4*t6957*t15926;
  t15988 = -0.4*t15987*t15885;
  t15989 = t15987*t15885;
  t15990 = t15965 + t15989;
  t15991 = 0.8*t15990;
  t15992 = t15984 + t15988 + t15991;
  t15983 = var2[4]*t15978;
  t15993 = var2[2]*t15992;
  t15994 = var2[3]*t15992;
  t15995 = t15983 + t15993 + t15994;
  t10604 = 0.4*t6957*t10045;
  t15886 = -0.4*t15867*t15885;
  t15887 = t5833*t10045;
  t15888 = t15867*t15885;
  t15899 = t15887 + t15888;
  t15900 = 0.8*t15899;
  t15921 = var3[4]*t15920;
  t15922 = var2[4]*t15920;
  t15945 = var3[2]*t15944;
  t15946 = var3[3]*t15944;
  t15947 = var2[2]*t15944;
  t15948 = var2[3]*t15944;
  t15949 = 0.4*t5833*t10045;
  t15953 = -1.*t5833*t10045;
  t15955 = t15953 + t15954;
  t15956 = 0.8*t15955;
  t15962 = t15949 + t15951 + t15956;
  t15963 = var2[4]*t15962;
  t15979 = var2[2]*t15978;
  t15980 = var2[3]*t15978;
  t15981 = t15963 + t15979 + t15980;
  t15982 = var2[4]*t15981;
  t15996 = var2[2]*t15995;
  t15997 = var2[3]*t15995;
  t15998 = t10604 + t15886 + t15900 + t15921 + t15922 + t15945 + t15946 + t15947 + t15948 + t15982 + t15996 + t15997;
  t16008 = 0.4*t5833*t15987;
  t16009 = -1.*t5833*t15987;
  t16010 = t16009 + t15910;
  t16011 = 0.8*t16010;
  t16012 = t16008 + t15902 + t16011;
  t16026 = 2.*var2[4]*t15920;
  t16027 = 2.*var2[2]*t15944;
  t16028 = 2.*var2[3]*t15944;
  t16029 = t10604 + t15886 + t15900 + t16026 + t16027 + t16028;
  t15999 = -0.4*t5833*t10045;
  t16000 = 0.4*t15987*t15885;
  t16001 = -1.*t15987*t15885;
  t16002 = t15887 + t16001;
  t16003 = 0.8*t16002;
  t16034 = t10604 + t15886 + t15900;
  t16040 = 0.4*t15926*t15885;
  t16042 = -1.*t15926*t15885;
  t16047 = -0.4*t5833*t15987;
  t16048 = t5833*t15987;
  t16049 = t16048 + t16042;
  t16050 = 0.8*t16049;
  t16051 = t16047 + t16040 + t16050;
  t16056 = 0.4*t6957*t15987;
  t16057 = -0.4*t10045*t15885;
  t16058 = t10045*t15885;
  t16059 = t16048 + t16058;
  t16060 = 0.8*t16059;
  t16061 = t16056 + t16057 + t16060;
  t16062 = var2[2]*t16061;
  t16063 = var2[3]*t16061;
  t16064 = var2[4]*t16051;
  t16065 = t16062 + t16063 + t16064;
  t16036 = var3[4]*t15978;
  t16037 = var3[2]*t15992;
  t16038 = var3[3]*t15992;
  t16039 = 0.4*t5833*t15867;
  t16041 = -1.*t5833*t15867;
  t16043 = t16041 + t16042;
  t16044 = 0.8*t16043;
  t16045 = t16039 + t16040 + t16044;
  t16046 = var2[4]*t16045;
  t16052 = var2[2]*t16051;
  t16053 = var2[3]*t16051;
  t16054 = t16046 + t16052 + t16053;
  t16055 = var2[4]*t16054;
  t16066 = var2[2]*t16065;
  t16067 = var2[3]*t16065;
  t16068 = t15923 + t15927 + t15943 + t16036 + t15983 + t16037 + t16038 + t15993 + t15994 + t16055 + t16066 + t16067;
  t16083 = 2.*var2[4]*t15978;
  t16084 = 2.*var2[2]*t15992;
  t16085 = 2.*var2[3]*t15992;
  t16086 = t15923 + t15927 + t15943 + t16083 + t16084 + t16085;
  p_output1[0]=1.;
  p_output1[1]=t15998;
  p_output1[2]=t15998;
  p_output1[3]=t15999 + t16000 + t16003 + t15920*var2[2] + t15981*var2[2] + t15920*var2[3] + t15981*var2[3] + t16012*var2[4] + var2[4]*(t15962*var2[2] + t15962*var2[3] + (t15949 + t15988 + 0.8*(t15953 + t15989))*var2[4]) + t15920*var3[2] + t15920*var3[3] + t16012*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t16029;
  p_output1[6]=t16029;
  p_output1[7]=t15999 + t16000 + t16003 + 2.*t15920*var2[2] + 2.*t15920*var2[3] + 2.*t16012*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t16034;
  p_output1[10]=t16034;
  p_output1[11]=t15999 + t16000 + t16003;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t16068;
  p_output1[16]=t16068;
  p_output1[17]=t15901 + t15902 + t15919 + t15963 + t15979 + t15980 + t16054*var2[2] + t16054*var2[3] + var2[4]*(t16045*var2[2] + t16045*var2[3] + (t16039 + t16057 + 0.8*(t16041 + t16058))*var2[4]) + t15978*var3[2] + t15978*var3[3] + t15962*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t16086;
  p_output1[20]=t16086;
  p_output1[21]=t15901 + t15902 + t15919 + 2.*t15978*var2[2] + 2.*t15978*var2[3] + 2.*t15962*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t15944;
  p_output1[24]=t15944;
  p_output1[25]=t15920;
  p_output1[26]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
