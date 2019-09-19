/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:46:56 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t10474;
  double t3574;
  double t10477;
  double t10479;
  double t10489;
  double t10491;
  double t10495;
  double t10496;
  double t10497;
  double t10510;
  double t10512;
  double t10522;
  double t10524;
  double t10528;
  double t10529;
  double t10530;
  double t10484;
  double t10485;
  double t10486;
  double t10478;
  double t10480;
  double t10481;
  double t10490;
  double t10492;
  double t10493;
  double t10494;
  double t10498;
  double t10499;
  double t10502;
  double t10503;
  double t10504;
  double t10505;
  double t10506;
  double t10507;
  double t10517;
  double t10518;
  double t10519;
  double t10511;
  double t10513;
  double t10514;
  double t10523;
  double t10525;
  double t10526;
  double t10527;
  double t10531;
  double t10532;
  double t10535;
  double t10536;
  double t10537;
  double t10538;
  double t10539;
  double t10540;
  double t10576;
  double t10577;
  double t10578;
  double t10579;
  double t10580;
  double t10581;
  double t10582;
  double t10583;
  double t10585;
  double t10586;
  double t10587;
  double t10601;
  double t10602;
  double t10603;
  double t10604;
  double t10605;
  double t10606;
  double t10607;
  double t10608;
  double t10610;
  double t10611;
  double t10612;
  double t10544;
  double t10545;
  double t10546;
  double t10547;
  double t10548;
  double t10549;
  double t10550;
  double t10551;
  double t10552;
  double t10553;
  double t10554;
  double t10555;
  double t10556;
  double t10557;
  double t10558;
  double t10559;
  double t10560;
  double t10561;
  double t10562;
  double t10563;
  double t10564;
  double t10565;
  double t10566;
  double t10567;
  double t10568;
  double t3576;
  double t10470;
  double t10475;
  double t10476;
  double t10487;
  double t10488;
  double t10520;
  double t10521;
  double t10570;
  double t10571;
  double t10572;
  double t10573;
  double t10574;
  double t10584;
  double t10588;
  double t10589;
  double t10591;
  double t10592;
  double t10593;
  double t10595;
  double t10596;
  double t10597;
  double t10598;
  double t10599;
  double t10609;
  double t10613;
  double t10614;
  double t10616;
  double t10617;
  double t10618;
  double t10627;
  double t10628;
  double t10629;
  double t10622;
  double t10623;
  double t10624;
  double t10625;
  double t10639;
  double t10640;
  double t10641;
  double t10634;
  double t10635;
  double t10636;
  double t10637;
  double t10569;
  double t10575;
  double t10590;
  double t10594;
  double t10600;
  double t10615;
  double t10619;
  double t10620;
  double t10658;
  double t10659;
  double t10660;
  double t10661;
  double t10662;
  double t10663;
  double t10664;
  double t10665;
  double t10621;
  double t10626;
  double t10630;
  double t10631;
  double t10666;
  double t10667;
  double t10668;
  double t10669;
  double t10689;
  double t10690;
  double t10691;
  double t10692;
  double t10632;
  double t10670;
  double t10693;
  double t10694;
  double t10706;
  double t10707;
  double t10633;
  double t10638;
  double t10642;
  double t10643;
  double t10671;
  double t10672;
  double t10673;
  double t10674;
  double t10695;
  double t10696;
  double t10697;
  double t10698;
  double t10644;
  double t10675;
  double t10699;
  double t10700;
  double t10713;
  double t10714;
  t10474 = Sin(var1[2]);
  t3574 = Cos(var1[2]);
  t10477 = Cos(var1[3]);
  t10479 = Sin(var1[3]);
  t10489 = Cos(var1[4]);
  t10491 = Sin(var1[4]);
  t10495 = t10477*t10489;
  t10496 = -1.*t10479*t10491;
  t10497 = t10495 + t10496;
  t10510 = Cos(var1[5]);
  t10512 = Sin(var1[5]);
  t10522 = Cos(var1[6]);
  t10524 = Sin(var1[6]);
  t10528 = t10510*t10522;
  t10529 = -1.*t10512*t10524;
  t10530 = t10528 + t10529;
  t10484 = t3574*t10477;
  t10485 = -1.*t10474*t10479;
  t10486 = t10484 + t10485;
  t10478 = t10477*t10474;
  t10480 = t3574*t10479;
  t10481 = t10478 + t10480;
  t10490 = -1.*t10489*t10479;
  t10492 = -1.*t10477*t10491;
  t10493 = t10490 + t10492;
  t10494 = t10474*t10493;
  t10498 = t3574*t10497;
  t10499 = t10494 + t10498;
  t10502 = t10489*t10479;
  t10503 = t10477*t10491;
  t10504 = t10502 + t10503;
  t10505 = t3574*t10504;
  t10506 = t10474*t10497;
  t10507 = t10505 + t10506;
  t10517 = t3574*t10510;
  t10518 = -1.*t10474*t10512;
  t10519 = t10517 + t10518;
  t10511 = t10510*t10474;
  t10513 = t3574*t10512;
  t10514 = t10511 + t10513;
  t10523 = -1.*t10522*t10512;
  t10525 = -1.*t10510*t10524;
  t10526 = t10523 + t10525;
  t10527 = t10474*t10526;
  t10531 = t3574*t10530;
  t10532 = t10527 + t10531;
  t10535 = t10522*t10512;
  t10536 = t10510*t10524;
  t10537 = t10535 + t10536;
  t10538 = t3574*t10537;
  t10539 = t10474*t10530;
  t10540 = t10538 + t10539;
  t10576 = -1.*t10489;
  t10577 = 1. + t10576;
  t10578 = 0.4*t10577;
  t10579 = 0.64*t10489;
  t10580 = t10578 + t10579;
  t10581 = t10580*t10479;
  t10582 = 0.24*t10477*t10491;
  t10583 = t10581 + t10582;
  t10585 = t10477*t10580;
  t10586 = -0.24*t10479*t10491;
  t10587 = t10585 + t10586;
  t10601 = -1.*t10522;
  t10602 = 1. + t10601;
  t10603 = 0.4*t10602;
  t10604 = 0.64*t10522;
  t10605 = t10603 + t10604;
  t10606 = t10605*t10512;
  t10607 = 0.24*t10510*t10524;
  t10608 = t10606 + t10607;
  t10610 = t10510*t10605;
  t10611 = -0.24*t10512*t10524;
  t10612 = t10610 + t10611;
  t10544 = -1.*t10477*t10474;
  t10545 = -1.*t3574*t10479;
  t10546 = t10544 + t10545;
  t10547 = 6.8*t10546*t10486;
  t10548 = 6.8*t10481*t10486;
  t10549 = t3574*t10493;
  t10550 = -1.*t10474*t10497;
  t10551 = t10549 + t10550;
  t10552 = 3.2*t10499*t10551;
  t10553 = -1.*t10474*t10504;
  t10554 = t10553 + t10498;
  t10555 = 3.2*t10554*t10507;
  t10556 = -1.*t10510*t10474;
  t10557 = -1.*t3574*t10512;
  t10558 = t10556 + t10557;
  t10559 = 6.8*t10558*t10519;
  t10560 = 6.8*t10514*t10519;
  t10561 = t3574*t10526;
  t10562 = -1.*t10474*t10530;
  t10563 = t10561 + t10562;
  t10564 = 3.2*t10532*t10563;
  t10565 = -1.*t10474*t10537;
  t10566 = t10565 + t10531;
  t10567 = 3.2*t10566*t10540;
  t10568 = t10547 + t10548 + t10552 + t10555 + t10559 + t10560 + t10564 + t10567;
  t3576 = Power(t3574,2);
  t10470 = 12.*t3576;
  t10475 = Power(t10474,2);
  t10476 = 12.*t10475;
  t10487 = Power(t10486,2);
  t10488 = 6.8*t10487;
  t10520 = Power(t10519,2);
  t10521 = 6.8*t10520;
  t10570 = Power(t10477,2);
  t10571 = 0.11*t10570;
  t10572 = Power(t10479,2);
  t10573 = 0.11*t10572;
  t10574 = t10571 + t10573;
  t10584 = -1.*t10583*t10497;
  t10588 = -1.*t10493*t10587;
  t10589 = t10584 + t10588;
  t10591 = t10583*t10504;
  t10592 = t10497*t10587;
  t10593 = t10591 + t10592;
  t10595 = Power(t10510,2);
  t10596 = 0.11*t10595;
  t10597 = Power(t10512,2);
  t10598 = 0.11*t10597;
  t10599 = t10596 + t10598;
  t10609 = -1.*t10608*t10530;
  t10613 = -1.*t10526*t10612;
  t10614 = t10609 + t10613;
  t10616 = t10608*t10537;
  t10617 = t10530*t10612;
  t10618 = t10616 + t10617;
  t10627 = t10580*t10491;
  t10628 = -0.24*t10489*t10491;
  t10629 = t10627 + t10628;
  t10622 = t10580*t10489;
  t10623 = Power(t10491,2);
  t10624 = 0.24*t10623;
  t10625 = t10622 + t10624;
  t10639 = t10605*t10524;
  t10640 = -0.24*t10522*t10524;
  t10641 = t10639 + t10640;
  t10634 = t10605*t10522;
  t10635 = Power(t10524,2);
  t10636 = 0.24*t10635;
  t10637 = t10634 + t10636;
  t10569 = 2.88*t3574;
  t10575 = 6.8*t10486*t10574;
  t10590 = 3.2*t10507*t10589;
  t10594 = 3.2*t10499*t10593;
  t10600 = 6.8*t10519*t10599;
  t10615 = 3.2*t10540*t10614;
  t10619 = 3.2*t10532*t10618;
  t10620 = t10569 + t10575 + t10590 + t10594 + t10600 + t10615 + t10619;
  t10658 = -2.88*t10474;
  t10659 = 6.8*t10546*t10574;
  t10660 = 3.2*t10554*t10589;
  t10661 = 3.2*t10551*t10593;
  t10662 = 6.8*t10558*t10599;
  t10663 = 3.2*t10566*t10614;
  t10664 = 3.2*t10563*t10618;
  t10665 = t10658 + t10659 + t10660 + t10661 + t10662 + t10663 + t10664;
  t10621 = 0.748*t10486;
  t10626 = 3.2*t10625*t10499;
  t10630 = 3.2*t10629*t10507;
  t10631 = t10621 + t10626 + t10630;
  t10666 = 0.748*t10546;
  t10667 = 3.2*t10629*t10554;
  t10668 = 3.2*t10625*t10551;
  t10669 = t10666 + t10667 + t10668;
  t10689 = 0.748*t10574;
  t10690 = 3.2*t10629*t10589;
  t10691 = 3.2*t10625*t10593;
  t10692 = 0.67 + t10689 + t10690 + t10691;
  t10632 = 0.768*t10499;
  t10670 = 0.768*t10551;
  t10693 = 0.768*t10593;
  t10694 = 0.2 + t10693;
  t10706 = 0.768*t10625;
  t10707 = 0.2 + t10706;
  t10633 = 0.748*t10519;
  t10638 = 3.2*t10637*t10532;
  t10642 = 3.2*t10641*t10540;
  t10643 = t10633 + t10638 + t10642;
  t10671 = 0.748*t10558;
  t10672 = 3.2*t10641*t10566;
  t10673 = 3.2*t10637*t10563;
  t10674 = t10671 + t10672 + t10673;
  t10695 = 0.748*t10599;
  t10696 = 3.2*t10641*t10614;
  t10697 = 3.2*t10637*t10618;
  t10698 = 0.67 + t10695 + t10696 + t10697;
  t10644 = 0.768*t10532;
  t10675 = 0.768*t10563;
  t10699 = 0.768*t10618;
  t10700 = 0.2 + t10699;
  t10713 = 0.768*t10637;
  t10714 = 0.2 + t10713;
  p_output1[0]=t10470 + t10476 + 6.8*Power(t10481,2) + t10488 + 3.2*Power(t10499,2) + 3.2*Power(t10507,2) + 6.8*Power(t10514,2) + t10521 + 3.2*Power(t10532,2) + 3.2*Power(t10540,2);
  p_output1[1]=t10568;
  p_output1[2]=t10620;
  p_output1[3]=t10631;
  p_output1[4]=t10632;
  p_output1[5]=t10643;
  p_output1[6]=t10644;
  p_output1[7]=t10568;
  p_output1[8]=t10470 + t10476 + t10488 + t10521 + 6.8*Power(t10546,2) + 3.2*Power(t10551,2) + 3.2*Power(t10554,2) + 6.8*Power(t10558,2) + 3.2*Power(t10563,2) + 3.2*Power(t10566,2);
  p_output1[9]=t10665;
  p_output1[10]=t10669;
  p_output1[11]=t10670;
  p_output1[12]=t10674;
  p_output1[13]=t10675;
  p_output1[14]=t10620;
  p_output1[15]=t10665;
  p_output1[16]=3.3612 + 6.8*Power(t10574,2) + 3.2*Power(t10589,2) + 3.2*Power(t10593,2) + 6.8*Power(t10599,2) + 3.2*Power(t10614,2) + 3.2*Power(t10618,2);
  p_output1[17]=t10692;
  p_output1[18]=t10694;
  p_output1[19]=t10698;
  p_output1[20]=t10700;
  p_output1[21]=t10631;
  p_output1[22]=t10669;
  p_output1[23]=t10692;
  p_output1[24]=1.58228 + 3.2*Power(t10625,2) + 3.2*Power(t10629,2);
  p_output1[25]=t10707;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t10632;
  p_output1[29]=t10670;
  p_output1[30]=t10694;
  p_output1[31]=t10707;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t10643;
  p_output1[36]=t10674;
  p_output1[37]=t10698;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t10637,2) + 3.2*Power(t10641,2);
  p_output1[41]=t10714;
  p_output1[42]=t10644;
  p_output1[43]=t10675;
  p_output1[44]=t10700;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t10714;
  p_output1[48]=1.2143199999999998;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat_five_link_walker.hh"

namespace SymFunction
{

void Mmat_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
