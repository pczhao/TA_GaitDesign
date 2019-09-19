/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:02 GMT-04:00
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
  double t1370;
  double t1340;
  double t1341;
  double t1371;
  double t1779;
  double t1339;
  double t1800;
  double t1802;
  double t1822;
  double t6934;
  double t6990;
  double t7078;
  double t7079;
  double t7096;
  double t1369;
  double t1372;
  double t1740;
  double t1762;
  double t2610;
  double t5589;
  double t8184;
  double t8176;
  double t8179;
  double t8205;
  double t8217;
  double t8221;
  double t8228;
  double t8257;
  double t8258;
  double t8261;
  double t9353;
  double t9612;
  double t8181;
  double t8211;
  double t8213;
  double t8216;
  double t8229;
  double t8230;
  double t5786;
  double t5872;
  double t6367;
  double t10212;
  double t10213;
  double t10221;
  double t7955;
  double t7242;
  double t7808;
  double t7948;
  double t7949;
  double t7967;
  double t8236;
  double t8237;
  double t8238;
  double t10246;
  double t10247;
  double t10248;
  double t10072;
  double t10053;
  double t10066;
  double t10070;
  double t10071;
  double t10073;
  double t10226;
  double t10227;
  double t10228;
  double t10235;
  double t10240;
  double t10242;
  double t10243;
  double t10244;
  double t10250;
  double t10251;
  double t10252;
  double t10258;
  double t10259;
  double t10262;
  double t10263;
  double t10264;
  double t10332;
  double t10336;
  double t10337;
  double t10339;
  double t10340;
  double t10341;
  double t10355;
  double t10356;
  double t10357;
  double t10359;
  double t10360;
  double t10361;
  double t10281;
  double t10282;
  double t10283;
  double t10277;
  double t10278;
  double t10279;
  double t8009;
  double t8031;
  double t8032;
  double t8150;
  double t7100;
  double t7133;
  double t7163;
  double t10289;
  double t10290;
  double t10308;
  double t10309;
  double t10310;
  double t10297;
  double t10298;
  double t10303;
  double t10102;
  double t10165;
  double t10180;
  double t10181;
  double t9985;
  double t10046;
  double t10051;
  double t10316;
  double t10317;
  double t10225;
  double t10249;
  double t10272;
  double t10273;
  double t10274;
  double t10275;
  double t10276;
  double t10280;
  double t10284;
  double t10285;
  double t10286;
  double t10287;
  double t10288;
  double t10291;
  double t10292;
  double t10293;
  double t10294;
  double t10295;
  double t10296;
  double t10307;
  double t10311;
  double t10312;
  double t10313;
  double t10314;
  double t10315;
  double t10318;
  double t10319;
  double t10322;
  double t10323;
  double t10324;
  double t10325;
  double t10326;
  double t10338;
  double t10342;
  double t10343;
  double t10345;
  double t10346;
  double t10347;
  double t10349;
  double t10350;
  double t10351;
  double t10352;
  double t10353;
  double t10358;
  double t10362;
  double t10363;
  double t10365;
  double t10366;
  double t10367;
  double t10394;
  double t10395;
  double t10396;
  double t10397;
  double t10398;
  double t10399;
  double t10400;
  double t10401;
  double t10321;
  double t10327;
  double t10344;
  double t10348;
  double t10354;
  double t10364;
  double t10368;
  double t10369;
  double t6753;
  double t7993;
  double t8156;
  double t8172;
  double t10374;
  double t10375;
  double t10376;
  double t10377;
  double t8239;
  double t10096;
  double t10182;
  double t10196;
  double t10380;
  double t10381;
  double t10382;
  double t10383;
  t1370 = Cos(var1[3]);
  t1340 = Cos(var1[4]);
  t1341 = Sin(var1[3]);
  t1371 = Sin(var1[4]);
  t1779 = Sin(var1[2]);
  t1339 = Cos(var1[2]);
  t1800 = t1370*t1340;
  t1802 = -1.*t1341*t1371;
  t1822 = t1800 + t1802;
  t6934 = -1.*t1340;
  t6990 = 1. + t6934;
  t7078 = 0.4*t6990;
  t7079 = 0.64*t1340;
  t7096 = t7078 + t7079;
  t1369 = -1.*t1340*t1341;
  t1372 = -1.*t1370*t1371;
  t1740 = t1369 + t1372;
  t1762 = t1339*t1740;
  t2610 = -1.*t1779*t1822;
  t5589 = t1762 + t2610;
  t8184 = Cos(var1[5]);
  t8176 = Cos(var1[6]);
  t8179 = Sin(var1[5]);
  t8205 = Sin(var1[6]);
  t8217 = t8184*t8176;
  t8221 = -1.*t8179*t8205;
  t8228 = t8217 + t8221;
  t8257 = -1.*t8176;
  t8258 = 1. + t8257;
  t8261 = 0.4*t8258;
  t9353 = 0.64*t8176;
  t9612 = t8261 + t9353;
  t8181 = -1.*t8176*t8179;
  t8211 = -1.*t8184*t8205;
  t8213 = t8181 + t8211;
  t8216 = t1339*t8213;
  t8229 = -1.*t1779*t8228;
  t8230 = t8216 + t8229;
  t5786 = -1.*t1370*t1779;
  t5872 = -1.*t1339*t1341;
  t6367 = t5786 + t5872;
  t10212 = t1339*t1370;
  t10213 = -1.*t1779*t1341;
  t10221 = t10212 + t10213;
  t7955 = t1339*t1822;
  t7242 = t1340*t1341;
  t7808 = t1370*t1371;
  t7948 = t7242 + t7808;
  t7949 = -1.*t1779*t7948;
  t7967 = t7949 + t7955;
  t8236 = -1.*t8184*t1779;
  t8237 = -1.*t1339*t8179;
  t8238 = t8236 + t8237;
  t10246 = t1339*t8184;
  t10247 = -1.*t1779*t8179;
  t10248 = t10246 + t10247;
  t10072 = t1339*t8228;
  t10053 = t8176*t8179;
  t10066 = t8184*t8205;
  t10070 = t10053 + t10066;
  t10071 = -1.*t1779*t10070;
  t10073 = t10071 + t10072;
  t10226 = t1370*t1779;
  t10227 = t1339*t1341;
  t10228 = t10226 + t10227;
  t10235 = t1779*t1740;
  t10240 = t10235 + t7955;
  t10242 = t1339*t7948;
  t10243 = t1779*t1822;
  t10244 = t10242 + t10243;
  t10250 = t8184*t1779;
  t10251 = t1339*t8179;
  t10252 = t10250 + t10251;
  t10258 = t1779*t8213;
  t10259 = t10258 + t10072;
  t10262 = t1339*t10070;
  t10263 = t1779*t8228;
  t10264 = t10262 + t10263;
  t10332 = t7096*t1341;
  t10336 = 0.24*t1370*t1371;
  t10337 = t10332 + t10336;
  t10339 = t1370*t7096;
  t10340 = -0.24*t1341*t1371;
  t10341 = t10339 + t10340;
  t10355 = t9612*t8179;
  t10356 = 0.24*t8184*t8205;
  t10357 = t10355 + t10356;
  t10359 = t8184*t9612;
  t10360 = -0.24*t8179*t8205;
  t10361 = t10359 + t10360;
  t10281 = -1.*t1779*t1740;
  t10282 = -1.*t1339*t1822;
  t10283 = t10281 + t10282;
  t10277 = -1.*t1339*t1370;
  t10278 = t1779*t1341;
  t10279 = t10277 + t10278;
  t8009 = t7096*t1340;
  t8031 = Power(t1371,2);
  t8032 = 0.24*t8031;
  t8150 = t8009 + t8032;
  t7100 = t7096*t1371;
  t7133 = -0.24*t1340*t1371;
  t7163 = t7100 + t7133;
  t10289 = -1.*t1339*t7948;
  t10290 = t10289 + t2610;
  t10308 = -1.*t1779*t8213;
  t10309 = -1.*t1339*t8228;
  t10310 = t10308 + t10309;
  t10297 = -1.*t1339*t8184;
  t10298 = t1779*t8179;
  t10303 = t10297 + t10298;
  t10102 = t9612*t8176;
  t10165 = Power(t8205,2);
  t10180 = 0.24*t10165;
  t10181 = t10102 + t10180;
  t9985 = t9612*t8205;
  t10046 = -0.24*t8176*t8205;
  t10051 = t9985 + t10046;
  t10316 = -1.*t1339*t10070;
  t10317 = t10316 + t8229;
  t10225 = 13.6*t6367*t10221;
  t10249 = 13.6*t8238*t10248;
  t10272 = Power(t6367,2);
  t10273 = 6.8*t10272;
  t10274 = 6.8*t6367*t10228;
  t10275 = Power(t10221,2);
  t10276 = 6.8*t10275;
  t10280 = 6.8*t10221*t10279;
  t10284 = 3.2*t10283*t10240;
  t10285 = Power(t7967,2);
  t10286 = 3.2*t10285;
  t10287 = Power(t5589,2);
  t10288 = 3.2*t10287;
  t10291 = 3.2*t10290*t10244;
  t10292 = Power(t8238,2);
  t10293 = 6.8*t10292;
  t10294 = 6.8*t8238*t10252;
  t10295 = Power(t10248,2);
  t10296 = 6.8*t10295;
  t10307 = 6.8*t10248*t10303;
  t10311 = 3.2*t10310*t10259;
  t10312 = Power(t10073,2);
  t10313 = 3.2*t10312;
  t10314 = Power(t8230,2);
  t10315 = 3.2*t10314;
  t10318 = 3.2*t10317*t10264;
  t10319 = t10273 + t10274 + t10276 + t10280 + t10284 + t10286 + t10288 + t10291 + t10293 + t10294 + t10296 + t10307 + t10311 + t10313 + t10315 + t10318;
  t10322 = Power(t1370,2);
  t10323 = 0.11*t10322;
  t10324 = Power(t1341,2);
  t10325 = 0.11*t10324;
  t10326 = t10323 + t10325;
  t10338 = -1.*t10337*t1822;
  t10342 = -1.*t1740*t10341;
  t10343 = t10338 + t10342;
  t10345 = t10337*t7948;
  t10346 = t1822*t10341;
  t10347 = t10345 + t10346;
  t10349 = Power(t8184,2);
  t10350 = 0.11*t10349;
  t10351 = Power(t8179,2);
  t10352 = 0.11*t10351;
  t10353 = t10350 + t10352;
  t10358 = -1.*t10357*t8228;
  t10362 = -1.*t8213*t10361;
  t10363 = t10358 + t10362;
  t10365 = t10357*t10070;
  t10366 = t8228*t10361;
  t10367 = t10365 + t10366;
  t10394 = -2.88*t1339;
  t10395 = 6.8*t10279*t10326;
  t10396 = 3.2*t10290*t10343;
  t10397 = 3.2*t10283*t10347;
  t10398 = 6.8*t10303*t10353;
  t10399 = 3.2*t10317*t10363;
  t10400 = 3.2*t10310*t10367;
  t10401 = t10394 + t10395 + t10396 + t10397 + t10398 + t10399 + t10400;
  t10321 = -2.88*t1779;
  t10327 = 6.8*t6367*t10326;
  t10344 = 3.2*t7967*t10343;
  t10348 = 3.2*t5589*t10347;
  t10354 = 6.8*t8238*t10353;
  t10364 = 3.2*t10073*t10363;
  t10368 = 3.2*t8230*t10367;
  t10369 = t10321 + t10327 + t10344 + t10348 + t10354 + t10364 + t10368;
  t6753 = 0.748*t6367;
  t7993 = 3.2*t7163*t7967;
  t8156 = 3.2*t8150*t5589;
  t8172 = t6753 + t7993 + t8156;
  t10374 = 0.748*t10279;
  t10375 = 3.2*t8150*t10283;
  t10376 = 3.2*t7163*t10290;
  t10377 = t10374 + t10375 + t10376;
  t8239 = 0.748*t8238;
  t10096 = 3.2*t10051*t10073;
  t10182 = 3.2*t10181*t8230;
  t10196 = t8239 + t10096 + t10182;
  t10380 = 0.748*t10303;
  t10381 = 3.2*t10181*t10310;
  t10382 = 3.2*t10051*t10317;
  t10383 = t10380 + t10381 + t10382;
  p_output1[0]=var2[2]*(-0.5*(t10225 + 13.6*t10221*t10228 + t10249 + 13.6*t10248*t10252 + 6.4*t10073*t10264 + 6.4*t10240*t5589 + 6.4*t10244*t7967 + 6.4*t10259*t8230)*var2[0] - 0.5*t10319*var2[1] - 0.5*t10369*var2[2] - 0.5*t8172*var2[3] - 0.384*t5589*var2[4] - 0.5*t10196*var2[5] - 0.384*t8230*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t10319*var2[0] - 0.5*(t10225 + t10249 + 6.4*t10073*t10317 + 6.4*t10283*t5589 + 13.6*t10279*t6367 + 6.4*t10290*t7967 + 6.4*t10310*t8230 + 13.6*t10303*t8238)*var2[1] - 0.5*t10401*var2[2] - 0.5*t10377*var2[3] - 0.384*t10283*var2[4] - 0.5*t10383*var2[5] - 0.384*t10310*var2[6]);
  p_output1[2]=(-0.5*t10369*var2[0] - 0.5*t10401*var2[1])*var2[2];
  p_output1[3]=(-0.5*t8172*var2[0] - 0.5*t10377*var2[1])*var2[2];
  p_output1[4]=(-0.384*t5589*var2[0] - 0.384*t10283*var2[1])*var2[2];
  p_output1[5]=(-0.5*t10196*var2[0] - 0.5*t10383*var2[1])*var2[2];
  p_output1[6]=(-0.384*t8230*var2[0] - 0.384*t10310*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
