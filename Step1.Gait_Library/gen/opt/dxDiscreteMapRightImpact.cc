/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:56 GMT-04:00
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
  double t16259;
  double t16256;
  double t16257;
  double t16260;
  double t16264;
  double t16255;
  double t16258;
  double t16261;
  double t16262;
  double t16263;
  double t16265;
  double t16266;
  double t16267;
  double t16268;
  double t16269;
  double t16318;
  double t16319;
  double t16320;
  double t16321;
  double t16322;
  double t16345;
  double t16342;
  double t16343;
  double t16346;
  double t16344;
  double t16347;
  double t16348;
  double t16349;
  double t16350;
  double t16351;
  double t16352;
  double t16353;
  double t16354;
  double t16364;
  double t16365;
  double t16366;
  double t16367;
  double t16368;
  double t16314;
  double t16315;
  double t16316;
  double t16331;
  double t16332;
  double t16333;
  double t16334;
  double t16335;
  double t16336;
  double t16358;
  double t16359;
  double t16360;
  double t16377;
  double t16378;
  double t16379;
  double t16380;
  double t16381;
  double t16382;
  double t16392;
  double t16393;
  double t16394;
  double t16407;
  double t16408;
  double t16409;
  double t16453;
  double t16454;
  double t16455;
  double t16457;
  double t16458;
  double t16459;
  double t16473;
  double t16474;
  double t16475;
  double t16477;
  double t16478;
  double t16479;
  double t16253;
  double t16254;
  double t16396;
  double t16397;
  double t16398;
  double t16312;
  double t16313;
  double t16388;
  double t16389;
  double t16390;
  double t16328;
  double t16329;
  double t16330;
  double t16400;
  double t16401;
  double t16323;
  double t16324;
  double t16325;
  double t16326;
  double t16340;
  double t16341;
  double t16411;
  double t16412;
  double t16413;
  double t16356;
  double t16357;
  double t16403;
  double t16404;
  double t16405;
  double t16374;
  double t16375;
  double t16376;
  double t16415;
  double t16416;
  double t16369;
  double t16370;
  double t16371;
  double t16372;
  double t16386;
  double t16387;
  double t16422;
  double t16423;
  double t16424;
  double t16425;
  double t16428;
  double t16429;
  double t16436;
  double t16437;
  double t16420;
  double t16421;
  double t16391;
  double t16395;
  double t16399;
  double t16402;
  double t16406;
  double t16410;
  double t16414;
  double t16417;
  double t16418;
  double t16444;
  double t16445;
  double t16447;
  double t16448;
  double t16449;
  double t16450;
  double t16451;
  double t16456;
  double t16460;
  double t16461;
  double t16463;
  double t16464;
  double t16465;
  double t16467;
  double t16468;
  double t16469;
  double t16470;
  double t16471;
  double t16476;
  double t16480;
  double t16481;
  double t16483;
  double t16484;
  double t16485;
  double t16537;
  double t16538;
  double t16539;
  double t16446;
  double t16452;
  double t16462;
  double t16466;
  double t16472;
  double t16482;
  double t16486;
  double t16487;
  double t16518;
  double t16519;
  double t16520;
  double t16521;
  double t16522;
  double t16523;
  double t16524;
  double t16525;
  double t16528;
  double t16529;
  double t16530;
  double t16531;
  double t16532;
  double t16533;
  double t16534;
  double t16535;
  double t16536;
  double t16540;
  double t16541;
  double t16542;
  double t16543;
  double t16544;
  double t16545;
  double t16546;
  double t16492;
  double t16493;
  double t16494;
  double t16495;
  double t16317;
  double t16327;
  double t16337;
  double t16338;
  double t16550;
  double t16551;
  double t16552;
  double t16553;
  double t16580;
  double t16581;
  double t16547;
  double t16548;
  double t16498;
  double t16499;
  double t16500;
  double t16501;
  double t16361;
  double t16373;
  double t16383;
  double t16384;
  double t16558;
  double t16559;
  double t16560;
  double t16561;
  double t16613;
  double t16614;
  double t16555;
  double t16556;
  t16259 = Cos(var2[3]);
  t16256 = Cos(var2[4]);
  t16257 = Sin(var2[3]);
  t16260 = Sin(var2[4]);
  t16264 = Cos(var2[2]);
  t16255 = Sin(var2[2]);
  t16258 = -1.*t16256*t16257;
  t16261 = -1.*t16259*t16260;
  t16262 = t16258 + t16261;
  t16263 = t16255*t16262;
  t16265 = t16259*t16256;
  t16266 = -1.*t16257*t16260;
  t16267 = t16265 + t16266;
  t16268 = t16264*t16267;
  t16269 = t16263 + t16268;
  t16318 = -1.*t16256;
  t16319 = 1. + t16318;
  t16320 = 0.4*t16319;
  t16321 = 0.64*t16256;
  t16322 = t16320 + t16321;
  t16345 = Cos(var2[5]);
  t16342 = Cos(var2[6]);
  t16343 = Sin(var2[5]);
  t16346 = Sin(var2[6]);
  t16344 = -1.*t16342*t16343;
  t16347 = -1.*t16345*t16346;
  t16348 = t16344 + t16347;
  t16349 = t16255*t16348;
  t16350 = t16345*t16342;
  t16351 = -1.*t16343*t16346;
  t16352 = t16350 + t16351;
  t16353 = t16264*t16352;
  t16354 = t16349 + t16353;
  t16364 = -1.*t16342;
  t16365 = 1. + t16364;
  t16366 = 0.4*t16365;
  t16367 = 0.64*t16342;
  t16368 = t16366 + t16367;
  t16314 = t16264*t16259;
  t16315 = -1.*t16255*t16257;
  t16316 = t16314 + t16315;
  t16331 = t16256*t16257;
  t16332 = t16259*t16260;
  t16333 = t16331 + t16332;
  t16334 = t16264*t16333;
  t16335 = t16255*t16267;
  t16336 = t16334 + t16335;
  t16358 = t16264*t16345;
  t16359 = -1.*t16255*t16343;
  t16360 = t16358 + t16359;
  t16377 = t16342*t16343;
  t16378 = t16345*t16346;
  t16379 = t16377 + t16378;
  t16380 = t16264*t16379;
  t16381 = t16255*t16352;
  t16382 = t16380 + t16381;
  t16392 = t16259*t16255;
  t16393 = t16264*t16257;
  t16394 = t16392 + t16393;
  t16407 = t16345*t16255;
  t16408 = t16264*t16343;
  t16409 = t16407 + t16408;
  t16453 = t16322*t16257;
  t16454 = 0.24*t16259*t16260;
  t16455 = t16453 + t16454;
  t16457 = t16259*t16322;
  t16458 = -0.24*t16257*t16260;
  t16459 = t16457 + t16458;
  t16473 = t16368*t16343;
  t16474 = 0.24*t16345*t16346;
  t16475 = t16473 + t16474;
  t16477 = t16345*t16368;
  t16478 = -0.24*t16343*t16346;
  t16479 = t16477 + t16478;
  t16253 = -1.*var1[6];
  t16254 = var3[4] + t16253;
  t16396 = t16264*t16262;
  t16397 = -1.*t16255*t16267;
  t16398 = t16396 + t16397;
  t16312 = -1.*var1[5];
  t16313 = var3[3] + t16312;
  t16388 = -1.*t16259*t16255;
  t16389 = -1.*t16264*t16257;
  t16390 = t16388 + t16389;
  t16328 = t16322*t16260;
  t16329 = -0.24*t16256*t16260;
  t16330 = t16328 + t16329;
  t16400 = -1.*t16255*t16333;
  t16401 = t16400 + t16268;
  t16323 = t16322*t16256;
  t16324 = Power(t16260,2);
  t16325 = 0.24*t16324;
  t16326 = t16323 + t16325;
  t16340 = -1.*var1[4];
  t16341 = var3[6] + t16340;
  t16411 = t16264*t16348;
  t16412 = -1.*t16255*t16352;
  t16413 = t16411 + t16412;
  t16356 = -1.*var1[3];
  t16357 = var3[5] + t16356;
  t16403 = -1.*t16345*t16255;
  t16404 = -1.*t16264*t16343;
  t16405 = t16403 + t16404;
  t16374 = t16368*t16346;
  t16375 = -0.24*t16342*t16346;
  t16376 = t16374 + t16375;
  t16415 = -1.*t16255*t16379;
  t16416 = t16415 + t16353;
  t16369 = t16368*t16342;
  t16370 = Power(t16346,2);
  t16371 = 0.24*t16370;
  t16372 = t16369 + t16371;
  t16386 = -1.*var1[1];
  t16387 = var3[1] + t16386;
  t16422 = Power(t16264,2);
  t16423 = 12.*t16422;
  t16424 = Power(t16255,2);
  t16425 = 12.*t16424;
  t16428 = Power(t16316,2);
  t16429 = 6.8*t16428;
  t16436 = Power(t16360,2);
  t16437 = 6.8*t16436;
  t16420 = -1.*var1[0];
  t16421 = var3[0] + t16420;
  t16391 = 6.8*t16390*t16316;
  t16395 = 6.8*t16394*t16316;
  t16399 = 3.2*t16269*t16398;
  t16402 = 3.2*t16401*t16336;
  t16406 = 6.8*t16405*t16360;
  t16410 = 6.8*t16409*t16360;
  t16414 = 3.2*t16354*t16413;
  t16417 = 3.2*t16416*t16382;
  t16418 = t16391 + t16395 + t16399 + t16402 + t16406 + t16410 + t16414 + t16417;
  t16444 = -1.*var1[2];
  t16445 = var3[2] + t16444;
  t16447 = Power(t16259,2);
  t16448 = 0.11*t16447;
  t16449 = Power(t16257,2);
  t16450 = 0.11*t16449;
  t16451 = t16448 + t16450;
  t16456 = -1.*t16455*t16267;
  t16460 = -1.*t16262*t16459;
  t16461 = t16456 + t16460;
  t16463 = t16455*t16333;
  t16464 = t16267*t16459;
  t16465 = t16463 + t16464;
  t16467 = Power(t16345,2);
  t16468 = 0.11*t16467;
  t16469 = Power(t16343,2);
  t16470 = 0.11*t16469;
  t16471 = t16468 + t16470;
  t16476 = -1.*t16475*t16352;
  t16480 = -1.*t16348*t16479;
  t16481 = t16476 + t16480;
  t16483 = t16475*t16379;
  t16484 = t16352*t16479;
  t16485 = t16483 + t16484;
  t16537 = -1.*t16264*t16259;
  t16538 = t16255*t16257;
  t16539 = t16537 + t16538;
  t16446 = 2.88*t16264;
  t16452 = 6.8*t16316*t16451;
  t16462 = 3.2*t16336*t16461;
  t16466 = 3.2*t16269*t16465;
  t16472 = 6.8*t16360*t16471;
  t16482 = 3.2*t16382*t16481;
  t16486 = 3.2*t16354*t16485;
  t16487 = t16446 + t16452 + t16462 + t16466 + t16472 + t16482 + t16486;
  t16518 = -2.88*t16255;
  t16519 = 6.8*t16390*t16451;
  t16520 = 3.2*t16401*t16461;
  t16521 = 3.2*t16398*t16465;
  t16522 = 6.8*t16405*t16471;
  t16523 = 3.2*t16416*t16481;
  t16524 = 3.2*t16413*t16485;
  t16525 = t16518 + t16519 + t16520 + t16521 + t16522 + t16523 + t16524;
  t16528 = 0.4*t16319*t16316;
  t16529 = -0.4*t16390*t16260;
  t16530 = t16256*t16316;
  t16531 = t16390*t16260;
  t16532 = t16530 + t16531;
  t16533 = 0.8*t16532;
  t16534 = t16528 + t16529 + t16533;
  t16535 = -1.*var4[0]*t16534;
  t16536 = 0.4*t16319*t16390;
  t16540 = -0.4*t16539*t16260;
  t16541 = t16256*t16390;
  t16542 = t16539*t16260;
  t16543 = t16541 + t16542;
  t16544 = 0.8*t16543;
  t16545 = t16536 + t16540 + t16544;
  t16546 = -1.*var4[2]*t16545;
  t16492 = 0.748*t16390;
  t16493 = 3.2*t16330*t16401;
  t16494 = 3.2*t16326*t16398;
  t16495 = t16492 + t16493 + t16494;
  t16317 = 0.748*t16316;
  t16327 = 3.2*t16326*t16269;
  t16337 = 3.2*t16330*t16336;
  t16338 = t16317 + t16327 + t16337;
  t16550 = 0.748*t16451;
  t16551 = 3.2*t16330*t16461;
  t16552 = 3.2*t16326*t16465;
  t16553 = 0.67 + t16550 + t16551 + t16552;
  t16580 = 0.768*t16326;
  t16581 = 0.2 + t16580;
  t16547 = 0.768*t16465;
  t16548 = 0.2 + t16547;
  t16498 = 0.748*t16405;
  t16499 = 3.2*t16376*t16416;
  t16500 = 3.2*t16372*t16413;
  t16501 = t16498 + t16499 + t16500;
  t16361 = 0.748*t16360;
  t16373 = 3.2*t16372*t16354;
  t16383 = 3.2*t16376*t16382;
  t16384 = t16361 + t16373 + t16383;
  t16558 = 0.748*t16471;
  t16559 = 3.2*t16376*t16481;
  t16560 = 3.2*t16372*t16485;
  t16561 = 0.67 + t16558 + t16559 + t16560;
  t16613 = 0.768*t16372;
  t16614 = 0.2 + t16613;
  t16555 = 0.768*t16485;
  t16556 = 0.2 + t16555;
  p_output1[0]=0.768*t16254*t16269 + t16313*t16338 + 0.768*t16341*t16354 + t16357*t16384 + t16387*t16418 + t16421*(3.2*Power(t16269,2) + 3.2*Power(t16336,2) + 3.2*Power(t16354,2) + 3.2*Power(t16382,2) + 6.8*Power(t16394,2) + 6.8*Power(t16409,2) + t16423 + t16425 + t16429 + t16437) + t16445*t16487 - 1.*var4[0];
  p_output1[1]=0.768*t16254*t16398 + 0.768*t16341*t16413 + t16418*t16421 + t16387*(6.8*Power(t16390,2) + 3.2*Power(t16398,2) + 3.2*Power(t16401,2) + 6.8*Power(t16405,2) + 3.2*Power(t16413,2) + 3.2*Power(t16416,2) + t16423 + t16425 + t16429 + t16437) + t16313*t16495 + t16357*t16501 + t16445*t16525 - 1.*var4[2];
  p_output1[2]=t16445*(3.3612 + 6.8*Power(t16451,2) + 3.2*Power(t16461,2) + 3.2*Power(t16465,2) + 6.8*Power(t16471,2) + 3.2*Power(t16481,2) + 3.2*Power(t16485,2)) + t16421*t16487 + t16387*t16525 + t16535 + t16546 + t16254*t16548 + t16313*t16553 + t16341*t16556 + t16357*t16561;
  p_output1[3]=t16313*(1.58228 + 3.2*Power(t16326,2) + 3.2*Power(t16330,2)) + t16338*t16421 + t16387*t16495 + t16535 + t16546 + t16445*t16553 + t16254*t16581;
  p_output1[4]=1.2143199999999998*t16254 + 0.768*t16387*t16398 + 0.768*t16269*t16421 + t16445*t16548 + t16313*t16581 - 1.*(-0.4*t16256*t16316 + 0.4*t16260*t16394 + 0.8*(-1.*t16260*t16394 + t16530))*var4[0] - 1.*(0.4*t16260*t16316 - 0.4*t16256*t16390 + 0.8*(-1.*t16260*t16316 + t16541))*var4[2];
  p_output1[5]=t16357*(1.58228 + 3.2*Power(t16372,2) + 3.2*Power(t16376,2)) + t16384*t16421 + t16387*t16501 + t16445*t16561 + t16341*t16614;
  p_output1[6]=1.2143199999999998*t16341 + 0.768*t16387*t16413 + 0.768*t16354*t16421 + t16445*t16556 + t16357*t16614;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
