/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:01 GMT-04:00
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
  double t1241;
  double t1273;
  double t1216;
  double t1230;
  double t1215;
  double t1229;
  double t1243;
  double t1249;
  double t1263;
  double t1264;
  double t1265;
  double t1297;
  double t1299;
  double t1300;
  double t1222;
  double t1236;
  double t1237;
  double t1240;
  double t1275;
  double t1276;
  double t1292;
  double t1309;
  double t1310;
  double t1311;
  double t1302;
  double t1305;
  double t1306;
  double t1307;
  double t1308;
  double t1312;
  double t1318;
  double t1319;
  double t1320;
  double t1293;
  double t1294;
  double t1295;
  double t1321;
  double t1322;
  double t1323;
  double t1324;
  double t1325;
  double t1326;
  double t1313;
  double t1348;
  double t1349;
  double t1350;
  double t1351;
  double t1314;
  double t1354;
  double t1333;
  double t1334;
  double t1335;
  double t1296;
  double t1303;
  double t1374;
  double t1329;
  double t1330;
  double t1331;
  double t1375;
  double t1707;
  double t1725;
  double t3130;
  double t3172;
  double t3180;
  double t1831;
  double t2010;
  double t2583;
  double t2627;
  double t2819;
  double t2971;
  double t2988;
  double t3233;
  double t7178;
  double t7213;
  double t5748;
  double t7243;
  double t7783;
  double t5875;
  t1241 = Cos(var1[6]);
  t1273 = Sin(var1[6]);
  t1216 = Sin(var1[2]);
  t1230 = Sin(var1[5]);
  t1215 = Cos(var1[5]);
  t1229 = Cos(var1[2]);
  t1243 = -1.*t1241;
  t1249 = 1. + t1243;
  t1263 = 0.4*t1249;
  t1264 = 0.64*t1241;
  t1265 = t1263 + t1264;
  t1297 = t1215*t1241;
  t1299 = -1.*t1230*t1273;
  t1300 = t1297 + t1299;
  t1222 = -1.*t1215*t1216;
  t1236 = -1.*t1229*t1230;
  t1237 = t1222 + t1236;
  t1240 = 0.748*t1237;
  t1275 = t1265*t1273;
  t1276 = -0.24*t1241*t1273;
  t1292 = t1275 + t1276;
  t1309 = -1.*t1241*t1230;
  t1310 = -1.*t1215*t1273;
  t1311 = t1309 + t1310;
  t1302 = t1229*t1300;
  t1305 = t1265*t1241;
  t1306 = Power(t1273,2);
  t1307 = 0.24*t1306;
  t1308 = t1305 + t1307;
  t1312 = t1229*t1311;
  t1318 = t1216*t1311;
  t1319 = t1318 + t1302;
  t1320 = 3.2*t1292*t1319;
  t1293 = t1241*t1230;
  t1294 = t1215*t1273;
  t1295 = t1293 + t1294;
  t1321 = -1.*t1215*t1241;
  t1322 = t1230*t1273;
  t1323 = t1321 + t1322;
  t1324 = t1216*t1323;
  t1325 = t1312 + t1324;
  t1326 = 3.2*t1308*t1325;
  t1313 = -1.*t1216*t1300;
  t1348 = -1.*t1229*t1215;
  t1349 = t1216*t1230;
  t1350 = t1348 + t1349;
  t1351 = 0.748*t1350;
  t1314 = t1312 + t1313;
  t1354 = -1.*t1216*t1311;
  t1333 = Power(t1241,2);
  t1334 = -0.24*t1333;
  t1335 = t1305 + t1334;
  t1296 = -1.*t1216*t1295;
  t1303 = t1296 + t1302;
  t1374 = 3.2*t1292*t1314;
  t1329 = -1.*t1265*t1273;
  t1330 = 0.24*t1241*t1273;
  t1331 = t1329 + t1330;
  t1375 = t1229*t1323;
  t1707 = t1354 + t1375;
  t1725 = 3.2*t1308*t1707;
  t3130 = t1215*t1265;
  t3172 = -0.24*t1230*t1273;
  t3180 = t3130 + t3172;
  t1831 = -1.*t1265*t1230;
  t2010 = -0.24*t1215*t1273;
  t2583 = t1831 + t2010;
  t2627 = t1265*t1230;
  t2819 = 0.24*t1215*t1273;
  t2971 = t2627 + t2819;
  t2988 = t2971*t1300;
  t3233 = t1311*t3180;
  t7178 = -0.24*t1241*t1230;
  t7213 = t7178 + t2010;
  t5748 = -1.*t1311*t2971;
  t7243 = 0.24*t1215*t1241;
  t7783 = t7243 + t3172;
  t5875 = -1.*t3180*t1323;
  p_output1[0]=var2[5]*(-0.5*(t1240 + 3.2*t1292*t1303 + 3.2*t1308*t1314)*var2[2] - 0.5*(t1240 + t1320 + t1326)*var2[5] - 0.5*(t1320 + t1326 + 3.2*t1319*t1331 + 3.2*(t1229*t1295 + t1216*t1300)*t1335)*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(3.2*t1292*(-1.*t1229*t1295 + t1313) + t1351 + 3.2*t1308*(-1.*t1229*t1300 + t1354))*var2[2] - 0.5*(t1351 + t1374 + t1725)*var2[5] - 0.5*(3.2*t1314*t1331 + 3.2*t1303*t1335 + t1374 + t1725)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t1308*(t1300*t2583 + t2988 + t1295*t3180 + t3233) + 3.2*t1292*(-1.*t1311*t2583 - 1.*t1300*t3180 + t5748 + t5875))*var2[5] - 0.5*(3.2*t1331*(t1295*t2971 + t1300*t3180) + 3.2*t1335*(-1.*t1300*t2971 - 1.*t1311*t3180) + 3.2*t1308*(t2988 + t3233 + t1300*t7213 + t1295*t7783) + 3.2*t1292*(t5748 + t5875 - 1.*t1311*t7213 - 1.*t1300*t7783))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t1308*t1331 + 6.4*t1292*t1335)*var2[5]*var2[6];
  p_output1[6]=-0.384*t1331*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
