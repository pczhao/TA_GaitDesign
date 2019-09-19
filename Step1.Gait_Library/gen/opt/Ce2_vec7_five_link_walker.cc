/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:04 GMT-04:00
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
  double t5308;
  double t277;
  double t326;
  double t5670;
  double t7205;
  double t2301;
  double t6731;
  double t7011;
  double t276;
  double t8311;
  double t8340;
  double t8390;
  double t8398;
  double t8416;
  double t10387;
  double t10388;
  double t10393;
  double t10402;
  double t10403;
  double t10404;
  double t10416;
  double t7204;
  double t7232;
  double t8247;
  double t8279;
  double t8301;
  double t8302;
  double t10423;
  double t10424;
  double t10425;
  double t10426;
  double t10427;
  double t10428;
  double t10443;
  double t10444;
  double t10453;
  double t10454;
  double t10455;
  double t10457;
  double t10458;
  double t10459;
  double t10463;
  double t10464;
  double t10465;
  double t10469;
  double t10470;
  double t10446;
  double t10447;
  double t10448;
  double t10417;
  double t10421;
  double t10422;
  double t10440;
  double t10441;
  double t8417;
  double t10385;
  double t10386;
  double t10406;
  double t10407;
  double t10414;
  double t10430;
  double t10431;
  double t10432;
  double t10442;
  double t10445;
  double t10449;
  double t10450;
  double t10451;
  double t10456;
  double t10460;
  double t10461;
  double t10466;
  double t10467;
  double t10468;
  double t10471;
  double t10472;
  double t10474;
  double t10475;
  double t10476;
  double t10478;
  double t10479;
  double t10480;
  double t10481;
  double t10482;
  double t10500;
  double t10501;
  double t10502;
  double t10503;
  double t10504;
  double t10462;
  double t10473;
  double t10477;
  double t10483;
  double t10484;
  double t10489;
  double t10490;
  double t10491;
  double t10492;
  double t10493;
  double t10405;
  double t10415;
  double t10429;
  double t10433;
  double t10434;
  double t10509;
  double t10510;
  double t10511;
  double t10512;
  double t10513;
  t5308 = Cos(var1[5]);
  t277 = Cos(var1[6]);
  t326 = Sin(var1[5]);
  t5670 = Sin(var1[6]);
  t7205 = Sin(var1[2]);
  t2301 = -1.*t277*t326;
  t6731 = -1.*t5308*t5670;
  t7011 = t2301 + t6731;
  t276 = Cos(var1[2]);
  t8311 = -1.*t277;
  t8340 = 1. + t8311;
  t8390 = 0.4*t8340;
  t8398 = 0.64*t277;
  t8416 = t8390 + t8398;
  t10387 = t7205*t7011;
  t10388 = t5308*t277;
  t10393 = -1.*t326*t5670;
  t10402 = t10388 + t10393;
  t10403 = t276*t10402;
  t10404 = t10387 + t10403;
  t10416 = t8416*t277;
  t7204 = t276*t7011;
  t7232 = -1.*t5308*t277;
  t8247 = t326*t5670;
  t8279 = t7232 + t8247;
  t8301 = t7205*t8279;
  t8302 = t7204 + t8301;
  t10423 = t277*t326;
  t10424 = t5308*t5670;
  t10425 = t10423 + t10424;
  t10426 = t276*t10425;
  t10427 = t7205*t10402;
  t10428 = t10426 + t10427;
  t10443 = -1.*t7205*t10402;
  t10444 = t7204 + t10443;
  t10453 = t8416*t326;
  t10454 = 0.24*t5308*t5670;
  t10455 = t10453 + t10454;
  t10457 = t5308*t8416;
  t10458 = -0.24*t326*t5670;
  t10459 = t10457 + t10458;
  t10463 = -0.24*t277*t326;
  t10464 = -0.24*t5308*t5670;
  t10465 = t10463 + t10464;
  t10469 = 0.24*t5308*t277;
  t10470 = t10469 + t10458;
  t10446 = -1.*t7205*t7011;
  t10447 = t276*t8279;
  t10448 = t10446 + t10447;
  t10417 = Power(t277,2);
  t10421 = -0.24*t10417;
  t10422 = t10416 + t10421;
  t10440 = -1.*t7205*t10425;
  t10441 = t10440 + t10403;
  t8417 = t8416*t5670;
  t10385 = -0.24*t277*t5670;
  t10386 = t8417 + t10385;
  t10406 = -1.*t8416*t5670;
  t10407 = 0.24*t277*t5670;
  t10414 = t10406 + t10407;
  t10430 = Power(t5670,2);
  t10431 = 0.24*t10430;
  t10432 = t10416 + t10431;
  t10442 = 3.2*t10404*t10441;
  t10445 = 3.2*t10444*t10428;
  t10449 = 3.2*t10404*t10448;
  t10450 = 3.2*t10444*t8302;
  t10451 = t10442 + t10445 + t10449 + t10450;
  t10456 = -1.*t10455*t10402;
  t10460 = -1.*t7011*t10459;
  t10461 = t10456 + t10460;
  t10466 = t10465*t10402;
  t10467 = t10455*t10402;
  t10468 = t7011*t10459;
  t10471 = t10425*t10470;
  t10472 = t10466 + t10467 + t10468 + t10471;
  t10474 = t10455*t10425;
  t10475 = t10402*t10459;
  t10476 = t10474 + t10475;
  t10478 = -1.*t7011*t10465;
  t10479 = -1.*t7011*t10455;
  t10480 = -1.*t10402*t10470;
  t10481 = -1.*t10459*t8279;
  t10482 = t10478 + t10479 + t10480 + t10481;
  t10500 = 3.2*t10444*t10461;
  t10501 = 3.2*t10444*t10472;
  t10502 = 3.2*t10476*t10448;
  t10503 = 3.2*t10441*t10482;
  t10504 = t10500 + t10501 + t10502 + t10503;
  t10462 = 3.2*t10404*t10461;
  t10473 = 3.2*t10404*t10472;
  t10477 = 3.2*t10476*t8302;
  t10483 = 3.2*t10428*t10482;
  t10484 = t10462 + t10473 + t10477 + t10483;
  t10489 = 3.2*t10422*t10441;
  t10490 = 3.2*t10386*t10444;
  t10491 = 3.2*t10414*t10444;
  t10492 = 3.2*t10432*t10448;
  t10493 = t10489 + t10490 + t10491 + t10492;
  t10405 = 3.2*t10386*t10404;
  t10415 = 3.2*t10414*t10404;
  t10429 = 3.2*t10422*t10428;
  t10433 = 3.2*t10432*t8302;
  t10434 = t10405 + t10415 + t10429 + t10433;
  t10509 = 3.2*t10422*t10461;
  t10510 = 3.2*t10414*t10476;
  t10511 = 3.2*t10432*t10472;
  t10512 = 3.2*t10386*t10482;
  t10513 = t10509 + t10510 + t10511 + t10512;
  p_output1[0]=var2[6]*(-0.5*(6.4*t10404*t10428 + 6.4*t10404*t8302)*var2[0] - 0.5*t10451*var2[1] - 0.5*t10484*var2[2] - 0.5*t10434*var2[5] - 0.384*t8302*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t10451*var2[0] - 0.5*(6.4*t10441*t10444 + 6.4*t10444*t10448)*var2[1] - 0.5*t10504*var2[2] - 0.5*t10493*var2[5] - 0.384*t10448*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t10484*var2[0] - 0.5*t10504*var2[1] - 0.5*(6.4*t10472*t10476 + 6.4*t10461*t10482)*var2[2] - 0.5*t10513*var2[5] - 0.384*t10472*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t10434*var2[0] - 0.5*t10493*var2[1] - 0.5*t10513*var2[2] - 0.5*(6.4*t10386*t10422 + 6.4*t10414*t10432)*var2[5] - 0.384*t10414*var2[6]);
  p_output1[6]=(-0.384*t8302*var2[0] - 0.384*t10448*var2[1] - 0.384*t10472*var2[2] - 0.384*t10414*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
