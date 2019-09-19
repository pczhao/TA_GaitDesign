/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:00 GMT-04:00
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
  double t1198;
  double t1185;
  double t1186;
  double t1199;
  double t1174;
  double t1188;
  double t1204;
  double t1208;
  double t1209;
  double t1210;
  double t1223;
  double t1224;
  double t1225;
  double t1226;
  double t1228;
  double t1211;
  double t1212;
  double t1214;
  double t1239;
  double t1244;
  double t1245;
  double t1266;
  double t1268;
  double t1270;
  double t1271;
  double t1272;
  double t1281;
  double t1284;
  double t1287;
  double t1274;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1288;
  double t1289;
  double t1290;
  double t1291;
  t1198 = Cos(var1[3]);
  t1185 = Cos(var1[4]);
  t1186 = Sin(var1[3]);
  t1199 = Sin(var1[4]);
  t1174 = Cos(var1[2]);
  t1188 = -1.*t1185*t1186;
  t1204 = -1.*t1198*t1199;
  t1208 = t1188 + t1204;
  t1209 = t1174*t1208;
  t1210 = Sin(var1[2]);
  t1223 = -1.*t1198*t1185;
  t1224 = t1186*t1199;
  t1225 = t1223 + t1224;
  t1226 = t1210*t1225;
  t1228 = t1209 + t1226;
  t1211 = t1198*t1185;
  t1212 = -1.*t1186*t1199;
  t1214 = t1211 + t1212;
  t1239 = -1.*t1210*t1208;
  t1244 = t1174*t1225;
  t1245 = t1239 + t1244;
  t1266 = -1.*t1185;
  t1268 = 1. + t1266;
  t1270 = 0.4*t1268;
  t1271 = 0.64*t1185;
  t1272 = t1270 + t1271;
  t1281 = t1198*t1272;
  t1284 = -0.24*t1186*t1199;
  t1287 = t1281 + t1284;
  t1274 = -0.24*t1198*t1199;
  t1277 = t1272*t1186;
  t1278 = 0.24*t1198*t1199;
  t1279 = t1277 + t1278;
  t1280 = t1279*t1214;
  t1288 = t1208*t1287;
  t1289 = t1185*t1186;
  t1290 = t1198*t1199;
  t1291 = t1289 + t1290;
  p_output1[0]=var2[4]*(-0.384*(t1209 - 1.*t1210*t1214)*var2[2] - 0.384*t1228*var2[3] - 0.384*t1228*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(-1.*t1174*t1214 + t1239)*var2[2] - 0.384*t1245*var2[3] - 0.384*t1245*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t1214*(-1.*t1186*t1272 + t1274) + t1280 + t1288 + t1287*t1291)*var2[3] - 0.384*(t1214*(-0.24*t1185*t1186 + t1274) + t1280 + t1288 + (0.24*t1185*t1198 + t1284)*t1291)*var2[4]);
  p_output1[3]=-0.384*(0.24*t1185*t1199 - 1.*t1199*t1272)*Power(var2[4],2);
  p_output1[4]=0;
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

#include "Ce1_vec5_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
