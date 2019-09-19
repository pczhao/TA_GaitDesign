/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:03 GMT-04:00
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
  double t1956;
  double t1729;
  double t1806;
  double t1968;
  double t2095;
  double t1708;
  double t1807;
  double t2046;
  double t2047;
  double t2094;
  double t3516;
  double t5156;
  double t5187;
  double t5218;
  double t5219;
  double t12068;
  double t12073;
  double t12074;
  double t12075;
  double t12089;
  double t12178;
  double t12165;
  double t12166;
  double t12179;
  double t12167;
  double t12180;
  double t12181;
  double t12182;
  double t12183;
  double t12184;
  double t12185;
  double t12186;
  double t12187;
  double t12226;
  double t12230;
  double t12231;
  double t12232;
  double t12233;
  double t12276;
  double t12277;
  double t12278;
  double t6313;
  double t6319;
  double t8177;
  double t12160;
  double t12146;
  double t12147;
  double t12158;
  double t12159;
  double t12161;
  double t12291;
  double t12294;
  double t12297;
  double t12189;
  double t12190;
  double t12206;
  double t12270;
  double t12264;
  double t12265;
  double t12266;
  double t12268;
  double t12272;
  double t12279;
  double t12280;
  double t12281;
  double t12288;
  double t12287;
  double t12289;
  double t12284;
  double t12285;
  double t12298;
  double t12299;
  double t12300;
  double t12307;
  double t12306;
  double t12316;
  double t12303;
  double t12304;
  double t12390;
  double t12391;
  double t12392;
  double t12394;
  double t12395;
  double t12396;
  double t12410;
  double t12411;
  double t12412;
  double t12414;
  double t12415;
  double t12416;
  double t12039;
  double t12130;
  double t12141;
  double t12145;
  double t12108;
  double t12113;
  double t12114;
  double t12115;
  double t12428;
  double t12429;
  double t12430;
  double t12431;
  double t12432;
  double t12282;
  double t12283;
  double t12328;
  double t12329;
  double t12334;
  double t12337;
  double t12338;
  double t12339;
  double t12341;
  double t12343;
  double t12345;
  double t12346;
  double t12347;
  double t12353;
  double t12354;
  double t12355;
  double t12384;
  double t12385;
  double t12386;
  double t12387;
  double t12388;
  double t12389;
  double t12393;
  double t12397;
  double t12398;
  double t12400;
  double t12401;
  double t12402;
  double t12451;
  double t12452;
  double t12453;
  double t12433;
  double t12434;
  double t12435;
  double t12438;
  double t12439;
  double t12442;
  double t12443;
  double t12444;
  double t12445;
  double t12446;
  double t12447;
  double t12450;
  double t12455;
  double t12456;
  double t12460;
  double t12485;
  double t12486;
  double t12462;
  double t12488;
  double t12489;
  double t12464;
  double t12210;
  double t12255;
  double t12256;
  double t12261;
  double t12234;
  double t12243;
  double t12244;
  double t12247;
  double t12501;
  double t12502;
  double t12503;
  double t12504;
  double t12505;
  double t12301;
  double t12302;
  double t12357;
  double t12358;
  double t12359;
  double t12360;
  double t12361;
  double t12362;
  double t12363;
  double t12364;
  double t12367;
  double t12370;
  double t12371;
  double t12377;
  double t12378;
  double t12379;
  double t12404;
  double t12405;
  double t12406;
  double t12407;
  double t12408;
  double t12409;
  double t12413;
  double t12417;
  double t12418;
  double t12420;
  double t12421;
  double t12422;
  double t12524;
  double t12525;
  double t12526;
  double t12506;
  double t12507;
  double t12508;
  double t12511;
  double t12512;
  double t12515;
  double t12516;
  double t12517;
  double t12518;
  double t12519;
  double t12520;
  double t12523;
  double t12528;
  double t12529;
  double t12533;
  double t12558;
  double t12559;
  double t12535;
  double t12561;
  double t12562;
  double t12537;
  t1956 = Cos(var1[3]);
  t1729 = Cos(var1[4]);
  t1806 = Sin(var1[3]);
  t1968 = Sin(var1[4]);
  t2095 = Cos(var1[2]);
  t1708 = Sin(var1[2]);
  t1807 = -1.*t1729*t1806;
  t2046 = -1.*t1956*t1968;
  t2047 = t1807 + t2046;
  t2094 = -1.*t1708*t2047;
  t3516 = t1956*t1729;
  t5156 = -1.*t1806*t1968;
  t5187 = t3516 + t5156;
  t5218 = -1.*t2095*t5187;
  t5219 = t2094 + t5218;
  t12068 = -1.*t1729;
  t12073 = 1. + t12068;
  t12074 = 0.4*t12073;
  t12075 = 0.64*t1729;
  t12089 = t12074 + t12075;
  t12178 = Cos(var1[5]);
  t12165 = Cos(var1[6]);
  t12166 = Sin(var1[5]);
  t12179 = Sin(var1[6]);
  t12167 = -1.*t12165*t12166;
  t12180 = -1.*t12178*t12179;
  t12181 = t12167 + t12180;
  t12182 = -1.*t1708*t12181;
  t12183 = t12178*t12165;
  t12184 = -1.*t12166*t12179;
  t12185 = t12183 + t12184;
  t12186 = -1.*t2095*t12185;
  t12187 = t12182 + t12186;
  t12226 = -1.*t12165;
  t12230 = 1. + t12226;
  t12231 = 0.4*t12230;
  t12232 = 0.64*t12165;
  t12233 = t12231 + t12232;
  t12276 = -1.*t1956*t1708;
  t12277 = -1.*t2095*t1806;
  t12278 = t12276 + t12277;
  t6313 = -1.*t2095*t1956;
  t6319 = t1708*t1806;
  t8177 = t6313 + t6319;
  t12160 = -1.*t1708*t5187;
  t12146 = t1729*t1806;
  t12147 = t1956*t1968;
  t12158 = t12146 + t12147;
  t12159 = -1.*t2095*t12158;
  t12161 = t12159 + t12160;
  t12291 = -1.*t12178*t1708;
  t12294 = -1.*t2095*t12166;
  t12297 = t12291 + t12294;
  t12189 = -1.*t2095*t12178;
  t12190 = t1708*t12166;
  t12206 = t12189 + t12190;
  t12270 = -1.*t1708*t12185;
  t12264 = t12165*t12166;
  t12265 = t12178*t12179;
  t12266 = t12264 + t12265;
  t12268 = -1.*t2095*t12266;
  t12272 = t12268 + t12270;
  t12279 = t2095*t1956;
  t12280 = -1.*t1708*t1806;
  t12281 = t12279 + t12280;
  t12288 = t2095*t5187;
  t12287 = -1.*t1708*t12158;
  t12289 = t12287 + t12288;
  t12284 = t2095*t2047;
  t12285 = t12284 + t12160;
  t12298 = t2095*t12178;
  t12299 = -1.*t1708*t12166;
  t12300 = t12298 + t12299;
  t12307 = t2095*t12185;
  t12306 = -1.*t1708*t12266;
  t12316 = t12306 + t12307;
  t12303 = t2095*t12181;
  t12304 = t12303 + t12270;
  t12390 = t12089*t1806;
  t12391 = 0.24*t1956*t1968;
  t12392 = t12390 + t12391;
  t12394 = t1956*t12089;
  t12395 = -0.24*t1806*t1968;
  t12396 = t12394 + t12395;
  t12410 = t12233*t12166;
  t12411 = 0.24*t12178*t12179;
  t12412 = t12410 + t12411;
  t12414 = t12178*t12233;
  t12415 = -0.24*t12166*t12179;
  t12416 = t12414 + t12415;
  t12039 = -0.748*t8177;
  t12130 = t12089*t1968;
  t12141 = -0.24*t1729*t1968;
  t12145 = t12130 + t12141;
  t12108 = t12089*t1729;
  t12113 = Power(t1968,2);
  t12114 = 0.24*t12113;
  t12115 = t12108 + t12114;
  t12428 = -1.*t1956*t1729;
  t12429 = t1806*t1968;
  t12430 = t12428 + t12429;
  t12431 = t2095*t12430;
  t12432 = t2094 + t12431;
  t12282 = -13.6*t12278*t12281;
  t12283 = -13.6*t12278*t8177;
  t12328 = Power(t12278,2);
  t12329 = -6.8*t12328;
  t12334 = t1956*t1708;
  t12337 = t2095*t1806;
  t12338 = t12334 + t12337;
  t12339 = -6.8*t12278*t12338;
  t12341 = Power(t12281,2);
  t12343 = -6.8*t12341;
  t12345 = -6.8*t12281*t8177;
  t12346 = t1708*t2047;
  t12347 = t12346 + t12288;
  t12353 = t2095*t12158;
  t12354 = t1708*t5187;
  t12355 = t12353 + t12354;
  t12384 = Power(t1956,2);
  t12385 = 0.11*t12384;
  t12386 = Power(t1806,2);
  t12387 = 0.11*t12386;
  t12388 = t12385 + t12387;
  t12389 = -6.8*t8177*t12388;
  t12393 = -1.*t12392*t5187;
  t12397 = -1.*t2047*t12396;
  t12398 = t12393 + t12397;
  t12400 = t12392*t12158;
  t12401 = t5187*t12396;
  t12402 = t12400 + t12401;
  t12451 = -1.*t12089*t1806;
  t12452 = -0.24*t1956*t1968;
  t12453 = t12451 + t12452;
  t12433 = 0.384*var2[4]*t12432;
  t12434 = -3.2*t12145*t12285;
  t12435 = -3.2*t12115*t12432;
  t12438 = -6.4*t12289*t12285;
  t12439 = -6.4*t12285*t12432;
  t12442 = -3.2*t12347*t12289;
  t12443 = -3.2*t12285*t12355;
  t12444 = -3.2*t12347*t12432;
  t12445 = t1708*t12430;
  t12446 = t12284 + t12445;
  t12447 = -3.2*t12285*t12446;
  t12450 = -3.2*t12285*t12398;
  t12455 = t12392*t5187;
  t12456 = t2047*t12396;
  t12460 = -3.2*t12402*t12432;
  t12485 = -0.24*t1729*t1806;
  t12486 = t12485 + t12452;
  t12462 = -1.*t2047*t12392;
  t12488 = 0.24*t1956*t1729;
  t12489 = t12488 + t12395;
  t12464 = -1.*t12396*t12430;
  t12210 = -0.748*t12206;
  t12255 = t12233*t12179;
  t12256 = -0.24*t12165*t12179;
  t12261 = t12255 + t12256;
  t12234 = t12233*t12165;
  t12243 = Power(t12179,2);
  t12244 = 0.24*t12243;
  t12247 = t12234 + t12244;
  t12501 = -1.*t12178*t12165;
  t12502 = t12166*t12179;
  t12503 = t12501 + t12502;
  t12504 = t2095*t12503;
  t12505 = t12182 + t12504;
  t12301 = -13.6*t12297*t12300;
  t12302 = -13.6*t12297*t12206;
  t12357 = Power(t12297,2);
  t12358 = -6.8*t12357;
  t12359 = t12178*t1708;
  t12360 = t2095*t12166;
  t12361 = t12359 + t12360;
  t12362 = -6.8*t12297*t12361;
  t12363 = Power(t12300,2);
  t12364 = -6.8*t12363;
  t12367 = -6.8*t12300*t12206;
  t12370 = t1708*t12181;
  t12371 = t12370 + t12307;
  t12377 = t2095*t12266;
  t12378 = t1708*t12185;
  t12379 = t12377 + t12378;
  t12404 = Power(t12178,2);
  t12405 = 0.11*t12404;
  t12406 = Power(t12166,2);
  t12407 = 0.11*t12406;
  t12408 = t12405 + t12407;
  t12409 = -6.8*t12206*t12408;
  t12413 = -1.*t12412*t12185;
  t12417 = -1.*t12181*t12416;
  t12418 = t12413 + t12417;
  t12420 = t12412*t12266;
  t12421 = t12185*t12416;
  t12422 = t12420 + t12421;
  t12524 = -1.*t12233*t12166;
  t12525 = -0.24*t12178*t12179;
  t12526 = t12524 + t12525;
  t12506 = 0.384*var2[6]*t12505;
  t12507 = -3.2*t12261*t12304;
  t12508 = -3.2*t12247*t12505;
  t12511 = -6.4*t12316*t12304;
  t12512 = -6.4*t12304*t12505;
  t12515 = -3.2*t12371*t12316;
  t12516 = -3.2*t12304*t12379;
  t12517 = -3.2*t12371*t12505;
  t12518 = t1708*t12503;
  t12519 = t12303 + t12518;
  t12520 = -3.2*t12304*t12519;
  t12523 = -3.2*t12304*t12418;
  t12528 = t12412*t12185;
  t12529 = t12181*t12416;
  t12533 = -3.2*t12422*t12505;
  t12558 = -0.24*t12165*t12166;
  t12559 = t12558 + t12525;
  t12535 = -1.*t12181*t12412;
  t12561 = 0.24*t12178*t12165;
  t12562 = t12561 + t12415;
  t12537 = -1.*t12416*t12503;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t12285,2) - 3.2*Power(t12289,2) - 3.2*Power(t12304,2) - 3.2*Power(t12316,2) + t12329 + t12339 + t12343 + t12345 - 3.2*t12161*t12355 + t12358 + t12362 + t12364 + t12367 - 3.2*t12187*t12371 - 3.2*t12272*t12379 - 3.2*t12347*t5219)*var2[0] - 0.5*(t12282 + t12283 - 6.4*t12161*t12289 + t12301 + t12302 - 6.4*t12187*t12304 - 6.4*t12272*t12316 - 6.4*t12285*t5219)*var2[1] - 0.5*(t12389 - 3.2*t12161*t12398 + t12409 - 3.2*t12272*t12418 - 3.2*t12187*t12422 + 2.88*t2095 - 3.2*t12402*t5219)*var2[2] - 0.5*(t12039 - 3.2*t12145*t12161 - 3.2*t12115*t5219)*var2[3] + 0.384*t5219*var2[4] - 0.5*(t12210 - 3.2*t12187*t12247 - 3.2*t12261*t12272)*var2[5] + 0.384*t12187*var2[6]);
  p_output1[3]=var2[1]*(t12433 - 0.5*(t12329 + t12339 + t12343 + t12345 + t12442 + t12443 + t12444 + t12447)*var2[0] - 0.5*(t12282 + t12283 + t12438 + t12439)*var2[1] - 0.5*(t12389 + t12450 + t12460 - 3.2*t12289*(t12462 + t12464 - 1.*t12453*t2047 - 1.*t12396*t5187) - 3.2*t12285*(t12158*t12396 + t12455 + t12456 + t12453*t5187))*var2[2] - 0.5*(t12039 + t12434 + t12435)*var2[3]);
  p_output1[4]=var2[1]*(t12433 - 0.5*(t12442 + t12443 + t12444 + t12447)*var2[0] - 0.5*(t12438 + t12439)*var2[1] - 0.5*(t12450 + t12460 - 3.2*t12285*(t12455 + t12456 + t12158*t12489 + t12486*t5187) - 3.2*t12289*(t12462 + t12464 - 1.*t12486*t2047 - 1.*t12489*t5187))*var2[2] - 0.5*(t12434 + t12435 - 3.2*t12289*(t12108 - 0.24*Power(t1729,2)) - 3.2*t12285*(-1.*t12089*t1968 + 0.24*t1729*t1968))*var2[3]);
  p_output1[5]=var2[1]*(t12506 - 0.5*(t12358 + t12362 + t12364 + t12367 + t12515 + t12516 + t12517 + t12520)*var2[0] - 0.5*(t12301 + t12302 + t12511 + t12512)*var2[1] - 0.5*(t12409 + t12523 - 3.2*t12304*(t12266*t12416 + t12185*t12526 + t12528 + t12529) + t12533 - 3.2*t12316*(-1.*t12185*t12416 - 1.*t12181*t12526 + t12535 + t12537))*var2[2] - 0.5*(t12210 + t12507 + t12508)*var2[5]);
  p_output1[6]=var2[1]*(t12506 - 0.5*(t12515 + t12516 + t12517 + t12520)*var2[0] - 0.5*(t12511 + t12512)*var2[1] - 0.5*(t12523 + t12533 - 3.2*t12316*(t12535 + t12537 - 1.*t12181*t12559 - 1.*t12185*t12562) - 3.2*t12304*(t12528 + t12529 + t12185*t12559 + t12266*t12562))*var2[2] - 0.5*(-3.2*(0.24*t12165*t12179 - 1.*t12179*t12233)*t12304 - 3.2*(-0.24*Power(t12165,2) + t12234)*t12316 + t12507 + t12508)*var2[5]);
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

#include "Ce3_vec2_five_link_walker.hh"

namespace SymFunction
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
