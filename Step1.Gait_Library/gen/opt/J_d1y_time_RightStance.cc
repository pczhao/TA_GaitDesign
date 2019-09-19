/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:40 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t16110;
  double t12354;
  double t16097;
  double t16098;
  double t16105;
  double t16106;
  double t16111;
  double t16123;
  double t16124;
  double t16126;
  double t16127;
  double t16128;
  double t16129;
  double t16133;
  double t16134;
  double t16135;
  double t16138;
  double t16139;
  double t16143;
  double t16144;
  double t16148;
  double t16149;
  double t16167;
  double t16178;
  double t16183;
  double t16203;
  double t16204;
  double t16168;
  double t16169;
  double t16170;
  double t16171;
  double t16172;
  double t16173;
  double t16174;
  double t16175;
  double t16176;
  double t16177;
  double t16179;
  double t16180;
  double t16181;
  double t16182;
  t16110 = -1.*var5[1];
  t12354 = -1. + var6[0];
  t16097 = -1. + var7[0];
  t16098 = 1/t16097;
  t16105 = -1.*t12354*t16098;
  t16106 = 1. + t16105;
  t16111 = var5[0] + t16110;
  t16123 = Power(t16111,-5);
  t16124 = -1.*var1[0];
  t16126 = t16124 + var1[1];
  t16127 = t12354*t16098*t16126;
  t16128 = t16110 + var1[0] + t16127;
  t16129 = Power(t16128,3);
  t16133 = Power(t16111,-4);
  t16134 = Power(t16128,2);
  t16135 = 1/t16111;
  t16138 = -1.*t16135*t16128;
  t16139 = 1. + t16138;
  t16143 = Power(t16111,-3);
  t16144 = Power(t16139,2);
  t16148 = Power(t16111,-2);
  t16149 = Power(t16139,3);
  t16167 = Power(t16139,4);
  t16178 = Power(t16128,4);
  t16183 = Power(t16111,-6);
  t16203 = -1.*t16148*t16128;
  t16204 = t16135 + t16203;
  t16168 = 5.*t16135*t16167;
  t16169 = 20.*t16148*t16128*t16149;
  t16170 = -5.*t16135*t16167;
  t16171 = t16169 + t16170;
  t16172 = 30.*t16143*t16134*t16144;
  t16173 = -20.*t16148*t16128*t16149;
  t16174 = t16172 + t16173;
  t16175 = 20.*t16133*t16129*t16139;
  t16176 = -30.*t16143*t16134*t16144;
  t16177 = t16175 + t16176;
  t16179 = 5.*t16123*t16178;
  t16180 = -20.*t16133*t16129*t16139;
  t16181 = t16179 + t16180;
  t16182 = -5.*t16123*t16178;
  p_output1[0]=-20.*t16106*t16148*t16149*var4[0] - 60.*t16106*t16128*t16143*t16144*var4[4] + 40.*t16106*t16148*t16149*var4[4] - 60.*t16106*t16133*t16134*t16139*var4[8] + 120.*t16106*t16128*t16143*t16144*var4[8] - 20.*t16106*t16148*t16149*var4[8] - 20.*t16106*t16123*t16129*var4[12] + 120.*t16106*t16133*t16134*t16139*var4[12] - 60.*t16106*t16128*t16143*t16144*var4[12] + 40.*t16106*t16123*t16129*var4[16] - 60.*t16106*t16133*t16134*t16139*var4[16] - 20.*t16106*t16123*t16129*var4[20];
  p_output1[1]=-20.*t12354*t16098*t16148*t16149*var4[0] - 60.*t12354*t16098*t16128*t16143*t16144*var4[4] + 40.*t12354*t16098*t16148*t16149*var4[4] - 60.*t12354*t16098*t16133*t16134*t16139*var4[8] + 120.*t12354*t16098*t16128*t16143*t16144*var4[8] - 20.*t12354*t16098*t16148*t16149*var4[8] - 20.*t12354*t16098*t16123*t16129*var4[12] + 120.*t12354*t16098*t16133*t16134*t16139*var4[12] - 60.*t12354*t16098*t16128*t16143*t16144*var4[12] + 40.*t12354*t16098*t16123*t16129*var4[16] - 60.*t12354*t16098*t16133*t16134*t16139*var4[16] - 20.*t12354*t16098*t16123*t16129*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t16168;
  p_output1[4]=t16171;
  p_output1[5]=t16174;
  p_output1[6]=t16177;
  p_output1[7]=t16181;
  p_output1[8]=t16182;
  p_output1[9]=20.*t16128*t16143*t16149*var4[0] - 5.*t16148*t16167*var4[0] + 60.*t16133*t16134*t16144*var4[4] - 60.*t16128*t16143*t16149*var4[4] + 5.*t16148*t16167*var4[4] + 60.*t16123*t16129*t16139*var4[8] - 150.*t16133*t16134*t16144*var4[8] + 40.*t16128*t16143*t16149*var4[8] - 140.*t16123*t16129*t16139*var4[12] + 90.*t16133*t16134*t16144*var4[12] + 20.*t16178*t16183*var4[12] + 80.*t16123*t16129*t16139*var4[16] - 45.*t16178*t16183*var4[16] + 25.*t16178*t16183*var4[20];
  p_output1[10]=5.*t16148*t16167*var4[0] + 20.*t16135*t16149*t16204*var4[0] + 40.*t16128*t16143*t16149*var4[4] - 20.*t16148*t16149*var4[4] - 5.*t16148*t16167*var4[4] + 60.*t16128*t16144*t16148*t16204*var4[4] - 20.*t16135*t16149*t16204*var4[4] + 90.*t16133*t16134*t16144*var4[8] - 60.*t16128*t16143*t16144*var4[8] - 40.*t16128*t16143*t16149*var4[8] + 20.*t16148*t16149*var4[8] + 60.*t16134*t16139*t16143*t16204*var4[8] - 60.*t16128*t16144*t16148*t16204*var4[8] + 80.*t16123*t16129*t16139*var4[12] - 60.*t16133*t16134*t16139*var4[12] - 90.*t16133*t16134*t16144*var4[12] + 60.*t16128*t16143*t16144*var4[12] + 20.*t16129*t16133*t16204*var4[12] - 60.*t16134*t16139*t16143*t16204*var4[12] - 20.*t16123*t16129*var4[16] - 80.*t16123*t16129*t16139*var4[16] + 60.*t16133*t16134*t16139*var4[16] + 25.*t16178*t16183*var4[16] - 20.*t16129*t16133*t16204*var4[16] + 20.*t16123*t16129*var4[20] - 25.*t16178*t16183*var4[20];
  p_output1[11]=-20.*t16106*t16148*t16149*var4[1] - 60.*t16106*t16128*t16143*t16144*var4[5] + 40.*t16106*t16148*t16149*var4[5] - 60.*t16106*t16133*t16134*t16139*var4[9] + 120.*t16106*t16128*t16143*t16144*var4[9] - 20.*t16106*t16148*t16149*var4[9] - 20.*t16106*t16123*t16129*var4[13] + 120.*t16106*t16133*t16134*t16139*var4[13] - 60.*t16106*t16128*t16143*t16144*var4[13] + 40.*t16106*t16123*t16129*var4[17] - 60.*t16106*t16133*t16134*t16139*var4[17] - 20.*t16106*t16123*t16129*var4[21];
  p_output1[12]=-20.*t12354*t16098*t16148*t16149*var4[1] - 60.*t12354*t16098*t16128*t16143*t16144*var4[5] + 40.*t12354*t16098*t16148*t16149*var4[5] - 60.*t12354*t16098*t16133*t16134*t16139*var4[9] + 120.*t12354*t16098*t16128*t16143*t16144*var4[9] - 20.*t12354*t16098*t16148*t16149*var4[9] - 20.*t12354*t16098*t16123*t16129*var4[13] + 120.*t12354*t16098*t16133*t16134*t16139*var4[13] - 60.*t12354*t16098*t16128*t16143*t16144*var4[13] + 40.*t12354*t16098*t16123*t16129*var4[17] - 60.*t12354*t16098*t16133*t16134*t16139*var4[17] - 20.*t12354*t16098*t16123*t16129*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t16168;
  p_output1[15]=t16171;
  p_output1[16]=t16174;
  p_output1[17]=t16177;
  p_output1[18]=t16181;
  p_output1[19]=t16182;
  p_output1[20]=20.*t16128*t16143*t16149*var4[1] - 5.*t16148*t16167*var4[1] + 60.*t16133*t16134*t16144*var4[5] - 60.*t16128*t16143*t16149*var4[5] + 5.*t16148*t16167*var4[5] + 60.*t16123*t16129*t16139*var4[9] - 150.*t16133*t16134*t16144*var4[9] + 40.*t16128*t16143*t16149*var4[9] - 140.*t16123*t16129*t16139*var4[13] + 90.*t16133*t16134*t16144*var4[13] + 20.*t16178*t16183*var4[13] + 80.*t16123*t16129*t16139*var4[17] - 45.*t16178*t16183*var4[17] + 25.*t16178*t16183*var4[21];
  p_output1[21]=5.*t16148*t16167*var4[1] + 20.*t16135*t16149*t16204*var4[1] + 40.*t16128*t16143*t16149*var4[5] - 20.*t16148*t16149*var4[5] - 5.*t16148*t16167*var4[5] + 60.*t16128*t16144*t16148*t16204*var4[5] - 20.*t16135*t16149*t16204*var4[5] + 90.*t16133*t16134*t16144*var4[9] - 60.*t16128*t16143*t16144*var4[9] - 40.*t16128*t16143*t16149*var4[9] + 20.*t16148*t16149*var4[9] + 60.*t16134*t16139*t16143*t16204*var4[9] - 60.*t16128*t16144*t16148*t16204*var4[9] + 80.*t16123*t16129*t16139*var4[13] - 60.*t16133*t16134*t16139*var4[13] - 90.*t16133*t16134*t16144*var4[13] + 60.*t16128*t16143*t16144*var4[13] + 20.*t16129*t16133*t16204*var4[13] - 60.*t16134*t16139*t16143*t16204*var4[13] - 20.*t16123*t16129*var4[17] - 80.*t16123*t16129*t16139*var4[17] + 60.*t16133*t16134*t16139*var4[17] + 25.*t16178*t16183*var4[17] - 20.*t16129*t16133*t16204*var4[17] + 20.*t16123*t16129*var4[21] - 25.*t16178*t16183*var4[21];
  p_output1[22]=-20.*t16106*t16148*t16149*var4[2] - 60.*t16106*t16128*t16143*t16144*var4[6] + 40.*t16106*t16148*t16149*var4[6] - 60.*t16106*t16133*t16134*t16139*var4[10] + 120.*t16106*t16128*t16143*t16144*var4[10] - 20.*t16106*t16148*t16149*var4[10] - 20.*t16106*t16123*t16129*var4[14] + 120.*t16106*t16133*t16134*t16139*var4[14] - 60.*t16106*t16128*t16143*t16144*var4[14] + 40.*t16106*t16123*t16129*var4[18] - 60.*t16106*t16133*t16134*t16139*var4[18] - 20.*t16106*t16123*t16129*var4[22];
  p_output1[23]=-20.*t12354*t16098*t16148*t16149*var4[2] - 60.*t12354*t16098*t16128*t16143*t16144*var4[6] + 40.*t12354*t16098*t16148*t16149*var4[6] - 60.*t12354*t16098*t16133*t16134*t16139*var4[10] + 120.*t12354*t16098*t16128*t16143*t16144*var4[10] - 20.*t12354*t16098*t16148*t16149*var4[10] - 20.*t12354*t16098*t16123*t16129*var4[14] + 120.*t12354*t16098*t16133*t16134*t16139*var4[14] - 60.*t12354*t16098*t16128*t16143*t16144*var4[14] + 40.*t12354*t16098*t16123*t16129*var4[18] - 60.*t12354*t16098*t16133*t16134*t16139*var4[18] - 20.*t12354*t16098*t16123*t16129*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t16168;
  p_output1[26]=t16171;
  p_output1[27]=t16174;
  p_output1[28]=t16177;
  p_output1[29]=t16181;
  p_output1[30]=t16182;
  p_output1[31]=20.*t16128*t16143*t16149*var4[2] - 5.*t16148*t16167*var4[2] + 60.*t16133*t16134*t16144*var4[6] - 60.*t16128*t16143*t16149*var4[6] + 5.*t16148*t16167*var4[6] + 60.*t16123*t16129*t16139*var4[10] - 150.*t16133*t16134*t16144*var4[10] + 40.*t16128*t16143*t16149*var4[10] - 140.*t16123*t16129*t16139*var4[14] + 90.*t16133*t16134*t16144*var4[14] + 20.*t16178*t16183*var4[14] + 80.*t16123*t16129*t16139*var4[18] - 45.*t16178*t16183*var4[18] + 25.*t16178*t16183*var4[22];
  p_output1[32]=5.*t16148*t16167*var4[2] + 20.*t16135*t16149*t16204*var4[2] + 40.*t16128*t16143*t16149*var4[6] - 20.*t16148*t16149*var4[6] - 5.*t16148*t16167*var4[6] + 60.*t16128*t16144*t16148*t16204*var4[6] - 20.*t16135*t16149*t16204*var4[6] + 90.*t16133*t16134*t16144*var4[10] - 60.*t16128*t16143*t16144*var4[10] - 40.*t16128*t16143*t16149*var4[10] + 20.*t16148*t16149*var4[10] + 60.*t16134*t16139*t16143*t16204*var4[10] - 60.*t16128*t16144*t16148*t16204*var4[10] + 80.*t16123*t16129*t16139*var4[14] - 60.*t16133*t16134*t16139*var4[14] - 90.*t16133*t16134*t16144*var4[14] + 60.*t16128*t16143*t16144*var4[14] + 20.*t16129*t16133*t16204*var4[14] - 60.*t16134*t16139*t16143*t16204*var4[14] - 20.*t16123*t16129*var4[18] - 80.*t16123*t16129*t16139*var4[18] + 60.*t16133*t16134*t16139*var4[18] + 25.*t16178*t16183*var4[18] - 20.*t16129*t16133*t16204*var4[18] + 20.*t16123*t16129*var4[22] - 25.*t16178*t16183*var4[22];
  p_output1[33]=-20.*t16106*t16148*t16149*var4[3] - 60.*t16106*t16128*t16143*t16144*var4[7] + 40.*t16106*t16148*t16149*var4[7] - 60.*t16106*t16133*t16134*t16139*var4[11] + 120.*t16106*t16128*t16143*t16144*var4[11] - 20.*t16106*t16148*t16149*var4[11] - 20.*t16106*t16123*t16129*var4[15] + 120.*t16106*t16133*t16134*t16139*var4[15] - 60.*t16106*t16128*t16143*t16144*var4[15] + 40.*t16106*t16123*t16129*var4[19] - 60.*t16106*t16133*t16134*t16139*var4[19] - 20.*t16106*t16123*t16129*var4[23];
  p_output1[34]=-20.*t12354*t16098*t16148*t16149*var4[3] - 60.*t12354*t16098*t16128*t16143*t16144*var4[7] + 40.*t12354*t16098*t16148*t16149*var4[7] - 60.*t12354*t16098*t16133*t16134*t16139*var4[11] + 120.*t12354*t16098*t16128*t16143*t16144*var4[11] - 20.*t12354*t16098*t16148*t16149*var4[11] - 20.*t12354*t16098*t16123*t16129*var4[15] + 120.*t12354*t16098*t16133*t16134*t16139*var4[15] - 60.*t12354*t16098*t16128*t16143*t16144*var4[15] + 40.*t12354*t16098*t16123*t16129*var4[19] - 60.*t12354*t16098*t16133*t16134*t16139*var4[19] - 20.*t12354*t16098*t16123*t16129*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t16168;
  p_output1[37]=t16171;
  p_output1[38]=t16174;
  p_output1[39]=t16177;
  p_output1[40]=t16181;
  p_output1[41]=t16182;
  p_output1[42]=20.*t16128*t16143*t16149*var4[3] - 5.*t16148*t16167*var4[3] + 60.*t16133*t16134*t16144*var4[7] - 60.*t16128*t16143*t16149*var4[7] + 5.*t16148*t16167*var4[7] + 60.*t16123*t16129*t16139*var4[11] - 150.*t16133*t16134*t16144*var4[11] + 40.*t16128*t16143*t16149*var4[11] - 140.*t16123*t16129*t16139*var4[15] + 90.*t16133*t16134*t16144*var4[15] + 20.*t16178*t16183*var4[15] + 80.*t16123*t16129*t16139*var4[19] - 45.*t16178*t16183*var4[19] + 25.*t16178*t16183*var4[23];
  p_output1[43]=5.*t16148*t16167*var4[3] + 20.*t16135*t16149*t16204*var4[3] + 40.*t16128*t16143*t16149*var4[7] - 20.*t16148*t16149*var4[7] - 5.*t16148*t16167*var4[7] + 60.*t16128*t16144*t16148*t16204*var4[7] - 20.*t16135*t16149*t16204*var4[7] + 90.*t16133*t16134*t16144*var4[11] - 60.*t16128*t16143*t16144*var4[11] - 40.*t16128*t16143*t16149*var4[11] + 20.*t16148*t16149*var4[11] + 60.*t16134*t16139*t16143*t16204*var4[11] - 60.*t16128*t16144*t16148*t16204*var4[11] + 80.*t16123*t16129*t16139*var4[15] - 60.*t16133*t16134*t16139*var4[15] - 90.*t16133*t16134*t16144*var4[15] + 60.*t16128*t16143*t16144*var4[15] + 20.*t16129*t16133*t16204*var4[15] - 60.*t16134*t16139*t16143*t16204*var4[15] - 20.*t16123*t16129*var4[19] - 80.*t16123*t16129*t16139*var4[19] + 60.*t16133*t16134*t16139*var4[19] + 25.*t16178*t16183*var4[19] - 20.*t16129*t16133*t16204*var4[19] + 20.*t16123*t16129*var4[23] - 25.*t16178*t16183*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
