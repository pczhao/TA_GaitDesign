/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:28 GMT-04:00
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
  double t10176;
  double t9990;
  double t10008;
  double t9221;
  double t11625;
  double t8833;
  double t10719;
  double t10951;
  double t10952;
  double t10956;
  double t10960;
  double t15360;
  double t15364;
  double t15365;
  double t15418;
  double t15419;
  double t15425;
  double t15426;
  double t15427;
  double t15428;
  double t15410;
  double t11192;
  double t15011;
  double t15337;
  double t15347;
  double t15348;
  double t15356;
  double t15357;
  double t9236;
  double t10129;
  double t10154;
  double t10164;
  double t15430;
  double t15359;
  double t15441;
  double t15442;
  double t15443;
  double t15444;
  double t15411;
  double t15448;
  double t15459;
  double t15460;
  double t15461;
  double t15456;
  double t15457;
  double t15458;
  double t15462;
  double t15463;
  double t15464;
  double t15467;
  double t15482;
  double t15483;
  double t15484;
  double t15475;
  double t15476;
  double t15477;
  double t15429;
  double t15431;
  double t15468;
  double t15469;
  double t15470;
  double t15478;
  double t15479;
  double t15480;
  double t15414;
  double t15432;
  double t15433;
  double t15494;
  double t15495;
  double t15496;
  double t15497;
  double t15498;
  double t15499;
  double t15500;
  double t15465;
  double t15466;
  double t15471;
  double t15472;
  double t15473;
  double t15474;
  double t15445;
  double t15523;
  double t15524;
  double t15525;
  double t15519;
  double t15520;
  double t15521;
  double t15533;
  double t15534;
  double t15535;
  double t15528;
  double t15529;
  double t15530;
  double t15506;
  double t15507;
  double t15508;
  double t15509;
  double t15512;
  double t15513;
  double t15514;
  double t15515;
  double t15516;
  double t15527;
  double t15567;
  double t15568;
  double t15536;
  double t15540;
  double t15571;
  double t15572;
  double t15574;
  double t15575;
  double t15544;
  double t15555;
  double t15556;
  double t15561;
  double t15562;
  double t15563;
  double t15564;
  double t15565;
  double t15581;
  double t15582;
  double t15583;
  double t15584;
  double t15585;
  double t15599;
  double t15600;
  double t15601;
  double t15604;
  double t15605;
  double t15606;
  double t15481;
  double t15485;
  double t15486;
  double t15487;
  double t15488;
  double t15489;
  double t15490;
  double t15491;
  double t15492;
  double t15493;
  double t15551;
  double t15552;
  double t15553;
  double t15554;
  double t15557;
  double t15558;
  double t15559;
  double t15560;
  double t15566;
  double t15569;
  double t15570;
  double t15573;
  double t15576;
  double t15577;
  double t15578;
  double t15579;
  double t15580;
  double t15586;
  double t15587;
  double t15588;
  double t15589;
  double t15590;
  double t15591;
  double t15592;
  double t15593;
  double t15594;
  double t15595;
  double t15596;
  double t15597;
  double t15598;
  double t15612;
  double t15613;
  double t15614;
  double t15449;
  double t15632;
  double t15637;
  double t15638;
  double t15640;
  double t15641;
  double t15643;
  double t15644;
  double t15645;
  double t15651;
  double t15652;
  double t15653;
  double t15663;
  double t15664;
  double t15665;
  double t15668;
  double t15669;
  double t15670;
  double t15671;
  double t15672;
  t10176 = Cos(var1[6]);
  t9990 = Sin(var1[2]);
  t10008 = Sin(var1[5]);
  t9221 = Cos(var1[5]);
  t11625 = Sin(var1[6]);
  t8833 = Cos(var1[2]);
  t10719 = -1.*t10176;
  t10951 = 1. + t10719;
  t10952 = 0.4*t10951;
  t10956 = 0.64*t10176;
  t10960 = t10952 + t10956;
  t15360 = t9221*t10176;
  t15364 = -1.*t10008*t11625;
  t15365 = t15360 + t15364;
  t15418 = t10960*t11625;
  t15419 = -0.24*t10176*t11625;
  t15425 = t15418 + t15419;
  t15426 = t10176*t10008;
  t15427 = t9221*t11625;
  t15428 = t15426 + t15427;
  t15410 = -1.*t8833*t15365;
  t11192 = t10960*t10176;
  t15011 = Power(t11625,2);
  t15337 = 0.24*t15011;
  t15347 = t11192 + t15337;
  t15348 = -1.*t10176*t10008;
  t15356 = -1.*t9221*t11625;
  t15357 = t15348 + t15356;
  t9236 = -1.*t8833*t9221;
  t10129 = t9990*t10008;
  t10154 = t9236 + t10129;
  t10164 = -0.748*t10154;
  t15430 = -1.*t9990*t15365;
  t15359 = -1.*t9990*t15357;
  t15441 = t9221*t9990;
  t15442 = t8833*t10008;
  t15443 = t15441 + t15442;
  t15444 = -0.748*t15443;
  t15411 = t15359 + t15410;
  t15448 = -1.*t8833*t15357;
  t15459 = -1.*t9221*t10176;
  t15460 = t10008*t11625;
  t15461 = t15459 + t15460;
  t15456 = t8833*t15357;
  t15457 = t15456 + t15430;
  t15458 = -3.2*t15425*t15457;
  t15462 = t8833*t15461;
  t15463 = t15359 + t15462;
  t15464 = -3.2*t15347*t15463;
  t15467 = -3.2*t15425*t15411;
  t15482 = -1.*t10960*t11625;
  t15483 = 0.24*t10176*t11625;
  t15484 = t15482 + t15483;
  t15475 = Power(t10176,2);
  t15476 = -0.24*t15475;
  t15477 = t11192 + t15476;
  t15429 = -1.*t8833*t15428;
  t15431 = t15429 + t15430;
  t15468 = -1.*t9990*t15461;
  t15469 = t15448 + t15468;
  t15470 = -3.2*t15347*t15469;
  t15478 = -1.*t9990*t15428;
  t15479 = t8833*t15365;
  t15480 = t15478 + t15479;
  t15414 = -3.2*t15347*t15411;
  t15432 = -3.2*t15425*t15431;
  t15433 = t10164 + t15414 + t15432;
  t15494 = -1.*t9221*t9990;
  t15495 = -1.*t8833*t10008;
  t15496 = t15494 + t15495;
  t15497 = -0.748*t15496;
  t15498 = -3.2*t15425*t15480;
  t15499 = -3.2*t15347*t15457;
  t15500 = t15497 + t15498 + t15499;
  t15465 = t10164 + t15458 + t15464;
  t15466 = -0.5*var2[0]*t15465;
  t15471 = t15444 + t15467 + t15470;
  t15472 = -0.5*var2[1]*t15471;
  t15473 = t15466 + t15472;
  t15474 = var2[5]*t15473;
  t15445 = t9990*t15428;
  t15523 = t9221*t10960;
  t15524 = -0.24*t10008*t11625;
  t15525 = t15523 + t15524;
  t15519 = -1.*t10960*t10008;
  t15520 = -0.24*t9221*t11625;
  t15521 = t15519 + t15520;
  t15533 = t10960*t10008;
  t15534 = 0.24*t9221*t11625;
  t15535 = t15533 + t15534;
  t15528 = -1.*t9221*t10960;
  t15529 = 0.24*t10008*t11625;
  t15530 = t15528 + t15529;
  t15506 = -3.2*t15425*t15463;
  t15507 = t8833*t15428;
  t15508 = t15507 + t15468;
  t15509 = -3.2*t15347*t15508;
  t15512 = t15445 + t15462;
  t15513 = -3.2*t15347*t15512;
  t15514 = t9990*t15461;
  t15515 = t15456 + t15514;
  t15516 = -3.2*t15425*t15515;
  t15527 = -1.*t15428*t15525;
  t15567 = -0.24*t10176*t10008;
  t15568 = t15567 + t15520;
  t15536 = -1.*t15535*t15461;
  t15540 = t15357*t15535;
  t15571 = 0.24*t9221*t10176;
  t15572 = t15571 + t15524;
  t15574 = -0.24*t9221*t10176;
  t15575 = t15574 + t15529;
  t15544 = t15525*t15461;
  t15555 = t9990*t15357;
  t15556 = t15555 + t15479;
  t15561 = t15521*t15365;
  t15562 = t15535*t15365;
  t15563 = t15357*t15525;
  t15564 = t15428*t15525;
  t15565 = t15561 + t15562 + t15563 + t15564;
  t15581 = -1.*t15357*t15521;
  t15582 = -1.*t15357*t15535;
  t15583 = -1.*t15365*t15525;
  t15584 = -1.*t15525*t15461;
  t15585 = t15581 + t15582 + t15583 + t15584;
  t15599 = -3.2*t15425*t15556;
  t15600 = -3.2*t15347*t15515;
  t15601 = t15497 + t15599 + t15600;
  t15604 = -3.2*t15347*t15565;
  t15605 = -3.2*t15425*t15585;
  t15606 = t15604 + t15605;
  t15481 = -3.2*t15477*t15480;
  t15485 = -3.2*t15484*t15457;
  t15486 = t15481 + t15458 + t15485 + t15464;
  t15487 = -0.5*var2[0]*t15486;
  t15488 = -3.2*t15484*t15411;
  t15489 = -3.2*t15477*t15431;
  t15490 = t15467 + t15488 + t15489 + t15470;
  t15491 = -0.5*var2[1]*t15490;
  t15492 = t15487 + t15491;
  t15493 = var2[5]*t15492;
  t15551 = -3.2*t15477*t15457;
  t15552 = -3.2*t15484*t15463;
  t15553 = t15551 + t15506 + t15552 + t15509;
  t15554 = -0.5*var2[1]*t15553;
  t15557 = -3.2*t15477*t15556;
  t15558 = -3.2*t15484*t15515;
  t15559 = t15557 + t15513 + t15516 + t15558;
  t15560 = -0.5*var2[0]*t15559;
  t15566 = -3.2*t15484*t15565;
  t15569 = -1.*t15568*t15365;
  t15570 = -1.*t15357*t15525;
  t15573 = -1.*t15357*t15572;
  t15576 = -1.*t15357*t15575;
  t15577 = -1.*t15521*t15461;
  t15578 = -1.*t15568*t15461;
  t15579 = t15569 + t15570 + t15527 + t15573 + t15576 + t15577 + t15578 + t15536;
  t15580 = -3.2*t15425*t15579;
  t15586 = -3.2*t15477*t15585;
  t15587 = t15357*t15521;
  t15588 = t15357*t15568;
  t15589 = t15568*t15428;
  t15590 = t15365*t15525;
  t15591 = t15365*t15572;
  t15592 = t15365*t15575;
  t15593 = t15587 + t15588 + t15540 + t15589 + t15590 + t15591 + t15592 + t15544;
  t15594 = -3.2*t15347*t15593;
  t15595 = t15566 + t15580 + t15586 + t15594;
  t15596 = -0.5*var2[2]*t15595;
  t15597 = t15554 + t15560 + t15596;
  t15598 = var2[5]*t15597;
  t15612 = -1.*t10960*t10176;
  t15613 = 0.24*t15475;
  t15614 = t15612 + t15613;
  t15449 = t9990*t15365;
  t15632 = t15507 + t15449;
  t15637 = -1.*t15535*t15365;
  t15638 = t15637 + t15570;
  t15640 = t15535*t15428;
  t15641 = t15640 + t15590;
  t15643 = t15568*t15365;
  t15644 = t15428*t15572;
  t15645 = t15643 + t15562 + t15563 + t15644;
  t15651 = -1.*t15357*t15568;
  t15652 = -1.*t15365*t15572;
  t15653 = t15651 + t15582 + t15652 + t15584;
  t15663 = -3.2*t15484*t15556;
  t15664 = -3.2*t15477*t15632;
  t15665 = t15599 + t15663 + t15664 + t15600;
  t15668 = -3.2*t15477*t15638;
  t15669 = -3.2*t15484*t15641;
  t15670 = -3.2*t15347*t15645;
  t15671 = -3.2*t15425*t15653;
  t15672 = t15668 + t15669 + t15670 + t15671;
  p_output1[0]=(-0.5*t15433*var2[0] - 0.5*(t15444 - 3.2*t15425*(t15410 + t15445) - 3.2*t15347*(t15448 + t15449))*var2[1])*var2[5];
  p_output1[1]=t15474;
  p_output1[2]=t15493;
  p_output1[3]=-0.5*t15500*var2[5];
  p_output1[4]=-0.5*t15433*var2[5];
  p_output1[5]=-0.5*t15500*var2[0] - 0.5*t15433*var2[1];
  p_output1[6]=t15474;
  p_output1[7]=(-0.5*(t10164 + t15513 + t15516)*var2[0] - 0.5*(t15444 + t15506 + t15509)*var2[1] - 0.5*(-3.2*t15425*(-1.*t15365*t15521 - 2.*t15461*t15521 - 2.*t15357*t15525 + t15527 - 1.*t15357*t15530 + t15536) - 3.2*t15347*(2.*t15357*t15521 + t15428*t15521 + 2.*t15365*t15525 + t15365*t15530 + t15540 + t15544))*var2[2])*var2[5];
  p_output1[8]=t15598;
  p_output1[9]=-0.5*t15601*var2[5];
  p_output1[10]=-0.5*t15465*var2[5];
  p_output1[11]=-0.5*t15606*var2[5];
  p_output1[12]=-0.5*t15601*var2[0] - 0.5*t15465*var2[1] - 0.5*t15606*var2[2];
  p_output1[13]=t15493;
  p_output1[14]=t15598;
  p_output1[15]=var2[5]*(-0.5*(t15513 - 6.4*t15484*t15515 + t15516 - 6.4*t15477*t15556 - 3.2*t15556*t15614 - 3.2*t15484*t15632)*var2[0] - 0.5*(-6.4*t15457*t15477 - 6.4*t15463*t15484 - 3.2*t15480*t15484 + t15506 + t15509 - 3.2*t15457*t15614)*var2[1] - 0.5*(-3.2*t15425*(t15527 + t15536 - 2.*t15461*t15568 + t15569 - 2.*t15357*t15572 + t15576) - 3.2*t15347*(t15540 + t15544 + 2.*t15357*t15568 + 2.*t15365*t15572 + t15589 + t15592) - 3.2*t15484*t15638 - 3.2*t15614*t15641 - 6.4*t15484*t15645 - 6.4*t15477*t15653)*var2[2] - 0.5*(-6.4*Power(t15477,2) - 6.4*t15425*t15484 - 6.4*Power(t15484,2) - 6.4*t15347*t15614)*var2[5] + 0.384*t15614*var2[6]);
  p_output1[16]=-0.5*t15665*var2[5];
  p_output1[17]=-0.5*t15486*var2[5];
  p_output1[18]=-0.5*t15672*var2[5];
  p_output1[19]=-0.5*t15665*var2[0] - 0.5*t15486*var2[1] - 0.5*t15672*var2[2] - 1.*(-6.4*t15425*t15477 - 6.4*t15347*t15484)*var2[5] + 0.384*t15484*var2[6];
  p_output1[20]=0.384*t15484*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec6_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
