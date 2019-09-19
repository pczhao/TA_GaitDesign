/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:05 GMT-04:00
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
  double t6733;
  double t5238;
  double t5259;
  double t6734;
  double t7942;
  double t2257;
  double t8297;
  double t8308;
  double t8316;
  double t10452;
  double t10485;
  double t10486;
  double t10487;
  double t10488;
  double t5986;
  double t7134;
  double t7210;
  double t7279;
  double t8421;
  double t9866;
  double t10524;
  double t10521;
  double t10522;
  double t10525;
  double t10529;
  double t10530;
  double t10531;
  double t10539;
  double t10540;
  double t10541;
  double t10542;
  double t10543;
  double t10523;
  double t10526;
  double t10527;
  double t10528;
  double t10532;
  double t10533;
  double t10436;
  double t10437;
  double t10438;
  double t10561;
  double t10562;
  double t10563;
  double t10506;
  double t10497;
  double t10498;
  double t10499;
  double t10505;
  double t10507;
  double t10535;
  double t10536;
  double t10537;
  double t10576;
  double t10577;
  double t10578;
  double t10551;
  double t10547;
  double t10548;
  double t10549;
  double t10550;
  double t10552;
  double t10565;
  double t10566;
  double t10567;
  double t10569;
  double t10570;
  double t10572;
  double t10573;
  double t10574;
  double t10580;
  double t10581;
  double t10582;
  double t10584;
  double t10585;
  double t10587;
  double t10588;
  double t10589;
  double t10642;
  double t10643;
  double t10644;
  double t10646;
  double t10647;
  double t10648;
  double t10662;
  double t10663;
  double t10664;
  double t10666;
  double t10667;
  double t10668;
  double t10439;
  double t10494;
  double t10495;
  double t10496;
  double t10514;
  double t10515;
  double t10516;
  double t10517;
  double t10680;
  double t10681;
  double t10682;
  double t10683;
  double t10684;
  double t10564;
  double t10568;
  double t10593;
  double t10594;
  double t10595;
  double t10596;
  double t10597;
  double t10598;
  double t10599;
  double t10600;
  double t10601;
  double t10602;
  double t10636;
  double t10637;
  double t10638;
  double t10639;
  double t10640;
  double t10641;
  double t10645;
  double t10649;
  double t10650;
  double t10652;
  double t10653;
  double t10654;
  double t10703;
  double t10704;
  double t10705;
  double t10685;
  double t10686;
  double t10687;
  double t10690;
  double t10691;
  double t10694;
  double t10695;
  double t10696;
  double t10697;
  double t10698;
  double t10699;
  double t10702;
  double t10707;
  double t10708;
  double t10712;
  double t10737;
  double t10738;
  double t10714;
  double t10740;
  double t10741;
  double t10716;
  double t10538;
  double t10544;
  double t10545;
  double t10546;
  double t10554;
  double t10555;
  double t10556;
  double t10557;
  double t10753;
  double t10754;
  double t10755;
  double t10756;
  double t10757;
  double t10579;
  double t10583;
  double t10613;
  double t10614;
  double t10615;
  double t10616;
  double t10617;
  double t10618;
  double t10619;
  double t10620;
  double t10621;
  double t10622;
  double t10656;
  double t10657;
  double t10658;
  double t10659;
  double t10660;
  double t10661;
  double t10665;
  double t10669;
  double t10670;
  double t10672;
  double t10673;
  double t10674;
  double t10776;
  double t10777;
  double t10778;
  double t10758;
  double t10759;
  double t10760;
  double t10763;
  double t10764;
  double t10767;
  double t10768;
  double t10769;
  double t10770;
  double t10771;
  double t10772;
  double t10775;
  double t10780;
  double t10781;
  double t10785;
  double t10810;
  double t10811;
  double t10787;
  double t10813;
  double t10814;
  double t10789;
  t6733 = Cos(var1[3]);
  t5238 = Cos(var1[4]);
  t5259 = Sin(var1[3]);
  t6734 = Sin(var1[4]);
  t7942 = Sin(var1[2]);
  t2257 = Cos(var1[2]);
  t8297 = t6733*t5238;
  t8308 = -1.*t5259*t6734;
  t8316 = t8297 + t8308;
  t10452 = -1.*t5238;
  t10485 = 1. + t10452;
  t10486 = 0.4*t10485;
  t10487 = 0.64*t5238;
  t10488 = t10486 + t10487;
  t5986 = -1.*t5238*t5259;
  t7134 = -1.*t6733*t6734;
  t7210 = t5986 + t7134;
  t7279 = t2257*t7210;
  t8421 = -1.*t7942*t8316;
  t9866 = t7279 + t8421;
  t10524 = Cos(var1[5]);
  t10521 = Cos(var1[6]);
  t10522 = Sin(var1[5]);
  t10525 = Sin(var1[6]);
  t10529 = t10524*t10521;
  t10530 = -1.*t10522*t10525;
  t10531 = t10529 + t10530;
  t10539 = -1.*t10521;
  t10540 = 1. + t10539;
  t10541 = 0.4*t10540;
  t10542 = 0.64*t10521;
  t10543 = t10541 + t10542;
  t10523 = -1.*t10521*t10522;
  t10526 = -1.*t10524*t10525;
  t10527 = t10523 + t10526;
  t10528 = t2257*t10527;
  t10532 = -1.*t7942*t10531;
  t10533 = t10528 + t10532;
  t10436 = -1.*t6733*t7942;
  t10437 = -1.*t2257*t5259;
  t10438 = t10436 + t10437;
  t10561 = t2257*t6733;
  t10562 = -1.*t7942*t5259;
  t10563 = t10561 + t10562;
  t10506 = t2257*t8316;
  t10497 = t5238*t5259;
  t10498 = t6733*t6734;
  t10499 = t10497 + t10498;
  t10505 = -1.*t7942*t10499;
  t10507 = t10505 + t10506;
  t10535 = -1.*t10524*t7942;
  t10536 = -1.*t2257*t10522;
  t10537 = t10535 + t10536;
  t10576 = t2257*t10524;
  t10577 = -1.*t7942*t10522;
  t10578 = t10576 + t10577;
  t10551 = t2257*t10531;
  t10547 = t10521*t10522;
  t10548 = t10524*t10525;
  t10549 = t10547 + t10548;
  t10550 = -1.*t7942*t10549;
  t10552 = t10550 + t10551;
  t10565 = t6733*t7942;
  t10566 = t2257*t5259;
  t10567 = t10565 + t10566;
  t10569 = t7942*t7210;
  t10570 = t10569 + t10506;
  t10572 = t2257*t10499;
  t10573 = t7942*t8316;
  t10574 = t10572 + t10573;
  t10580 = t10524*t7942;
  t10581 = t2257*t10522;
  t10582 = t10580 + t10581;
  t10584 = t7942*t10527;
  t10585 = t10584 + t10551;
  t10587 = t2257*t10549;
  t10588 = t7942*t10531;
  t10589 = t10587 + t10588;
  t10642 = t10488*t5259;
  t10643 = 0.24*t6733*t6734;
  t10644 = t10642 + t10643;
  t10646 = t6733*t10488;
  t10647 = -0.24*t5259*t6734;
  t10648 = t10646 + t10647;
  t10662 = t10543*t10522;
  t10663 = 0.24*t10524*t10525;
  t10664 = t10662 + t10663;
  t10666 = t10524*t10543;
  t10667 = -0.24*t10522*t10525;
  t10668 = t10666 + t10667;
  t10439 = -0.748*t10438;
  t10494 = t10488*t6734;
  t10495 = -0.24*t5238*t6734;
  t10496 = t10494 + t10495;
  t10514 = t10488*t5238;
  t10515 = Power(t6734,2);
  t10516 = 0.24*t10515;
  t10517 = t10514 + t10516;
  t10680 = -1.*t6733*t5238;
  t10681 = t5259*t6734;
  t10682 = t10680 + t10681;
  t10683 = t7942*t10682;
  t10684 = t7279 + t10683;
  t10564 = -13.6*t10438*t10563;
  t10568 = -13.6*t10567*t10563;
  t10593 = Power(t10438,2);
  t10594 = -6.8*t10593;
  t10595 = -6.8*t10438*t10567;
  t10596 = Power(t10563,2);
  t10597 = -6.8*t10596;
  t10598 = -1.*t2257*t6733;
  t10599 = t7942*t5259;
  t10600 = t10598 + t10599;
  t10601 = -6.8*t10563*t10600;
  t10602 = -1.*t7942*t7210;
  t10636 = Power(t6733,2);
  t10637 = 0.11*t10636;
  t10638 = Power(t5259,2);
  t10639 = 0.11*t10638;
  t10640 = t10637 + t10639;
  t10641 = -6.8*t10438*t10640;
  t10645 = -1.*t10644*t8316;
  t10649 = -1.*t7210*t10648;
  t10650 = t10645 + t10649;
  t10652 = t10644*t10499;
  t10653 = t8316*t10648;
  t10654 = t10652 + t10653;
  t10703 = -1.*t10488*t5259;
  t10704 = -0.24*t6733*t6734;
  t10705 = t10703 + t10704;
  t10685 = 0.384*var2[4]*t10684;
  t10686 = -3.2*t10496*t10570;
  t10687 = -3.2*t10517*t10684;
  t10690 = -6.4*t10570*t10574;
  t10691 = -6.4*t10570*t10684;
  t10694 = -3.2*t10570*t10507;
  t10695 = -3.2*t9866*t10574;
  t10696 = t2257*t10682;
  t10697 = t10602 + t10696;
  t10698 = -3.2*t10570*t10697;
  t10699 = -3.2*t9866*t10684;
  t10702 = -3.2*t10570*t10650;
  t10707 = t10644*t8316;
  t10708 = t7210*t10648;
  t10712 = -3.2*t10654*t10684;
  t10737 = -0.24*t5238*t5259;
  t10738 = t10737 + t10704;
  t10714 = -1.*t7210*t10644;
  t10740 = 0.24*t6733*t5238;
  t10741 = t10740 + t10647;
  t10716 = -1.*t10648*t10682;
  t10538 = -0.748*t10537;
  t10544 = t10543*t10525;
  t10545 = -0.24*t10521*t10525;
  t10546 = t10544 + t10545;
  t10554 = t10543*t10521;
  t10555 = Power(t10525,2);
  t10556 = 0.24*t10555;
  t10557 = t10554 + t10556;
  t10753 = -1.*t10524*t10521;
  t10754 = t10522*t10525;
  t10755 = t10753 + t10754;
  t10756 = t7942*t10755;
  t10757 = t10528 + t10756;
  t10579 = -13.6*t10537*t10578;
  t10583 = -13.6*t10582*t10578;
  t10613 = Power(t10537,2);
  t10614 = -6.8*t10613;
  t10615 = -6.8*t10537*t10582;
  t10616 = Power(t10578,2);
  t10617 = -6.8*t10616;
  t10618 = -1.*t2257*t10524;
  t10619 = t7942*t10522;
  t10620 = t10618 + t10619;
  t10621 = -6.8*t10578*t10620;
  t10622 = -1.*t7942*t10527;
  t10656 = Power(t10524,2);
  t10657 = 0.11*t10656;
  t10658 = Power(t10522,2);
  t10659 = 0.11*t10658;
  t10660 = t10657 + t10659;
  t10661 = -6.8*t10537*t10660;
  t10665 = -1.*t10664*t10531;
  t10669 = -1.*t10527*t10668;
  t10670 = t10665 + t10669;
  t10672 = t10664*t10549;
  t10673 = t10531*t10668;
  t10674 = t10672 + t10673;
  t10776 = -1.*t10543*t10522;
  t10777 = -0.24*t10524*t10525;
  t10778 = t10776 + t10777;
  t10758 = 0.384*var2[6]*t10757;
  t10759 = -3.2*t10546*t10585;
  t10760 = -3.2*t10557*t10757;
  t10763 = -6.4*t10585*t10589;
  t10764 = -6.4*t10585*t10757;
  t10767 = -3.2*t10585*t10552;
  t10768 = -3.2*t10533*t10589;
  t10769 = t2257*t10755;
  t10770 = t10622 + t10769;
  t10771 = -3.2*t10585*t10770;
  t10772 = -3.2*t10533*t10757;
  t10775 = -3.2*t10585*t10670;
  t10780 = t10664*t10531;
  t10781 = t10527*t10668;
  t10785 = -3.2*t10674*t10757;
  t10810 = -0.24*t10521*t10522;
  t10811 = t10810 + t10777;
  t10787 = -1.*t10527*t10664;
  t10813 = 0.24*t10524*t10521;
  t10814 = t10813 + t10667;
  t10789 = -1.*t10668*t10755;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t10564 + t10568 - 6.4*t10507*t10574 + t10579 + t10583 - 6.4*t10533*t10585 - 6.4*t10552*t10589 - 6.4*t10570*t9866)*var2[0] - 0.5*(-3.2*Power(t10507,2) - 3.2*Power(t10533,2) - 3.2*Power(t10552,2) + t10594 + t10595 + t10597 + t10601 + t10614 + t10615 + t10617 + t10621 - 3.2*t10585*(t10622 - 1.*t10531*t2257) - 3.2*t10589*(t10532 - 1.*t10549*t2257) - 3.2*t10570*(t10602 - 1.*t2257*t8316) - 3.2*t10574*(-1.*t10499*t2257 + t8421) - 3.2*Power(t9866,2))*var2[1] - 0.5*(t10641 - 3.2*t10507*t10650 + t10661 - 3.2*t10552*t10670 - 3.2*t10533*t10674 + 2.88*t7942 - 3.2*t10654*t9866)*var2[2] - 0.5*(t10439 - 3.2*t10496*t10507 - 3.2*t10517*t9866)*var2[3] + 0.384*t9866*var2[4] - 0.5*(t10538 - 3.2*t10546*t10552 - 3.2*t10533*t10557)*var2[5] + 0.384*t10533*var2[6]);
  p_output1[3]=var2[0]*(t10685 - 0.5*(t10564 + t10568 + t10690 + t10691)*var2[0] - 0.5*(t10594 + t10595 + t10597 + t10601 + t10694 + t10695 + t10698 + t10699)*var2[1] - 0.5*(t10641 + t10702 + t10712 - 3.2*t10574*(t10714 + t10716 - 1.*t10705*t7210 - 1.*t10648*t8316) - 3.2*t10570*(t10499*t10648 + t10707 + t10708 + t10705*t8316))*var2[2] - 0.5*(t10439 + t10686 + t10687)*var2[3]);
  p_output1[4]=var2[0]*(t10685 - 0.5*(t10690 + t10691)*var2[0] - 0.5*(t10694 + t10695 + t10698 + t10699)*var2[1] - 0.5*(t10702 + t10712 - 3.2*t10570*(t10707 + t10708 + t10499*t10741 + t10738*t8316) - 3.2*t10574*(t10714 + t10716 - 1.*t10738*t7210 - 1.*t10741*t8316))*var2[2] - 0.5*(t10686 + t10687 - 3.2*t10574*(t10514 - 0.24*Power(t5238,2)) - 3.2*t10570*(-1.*t10488*t6734 + 0.24*t5238*t6734))*var2[3]);
  p_output1[5]=var2[0]*(t10758 - 0.5*(t10579 + t10583 + t10763 + t10764)*var2[0] - 0.5*(t10614 + t10615 + t10617 + t10621 + t10767 + t10768 + t10771 + t10772)*var2[1] - 0.5*(t10661 + t10775 - 3.2*t10585*(t10549*t10668 + t10531*t10778 + t10780 + t10781) + t10785 - 3.2*t10589*(-1.*t10531*t10668 - 1.*t10527*t10778 + t10787 + t10789))*var2[2] - 0.5*(t10538 + t10759 + t10760)*var2[5]);
  p_output1[6]=var2[0]*(t10758 - 0.5*(t10763 + t10764)*var2[0] - 0.5*(t10767 + t10768 + t10771 + t10772)*var2[1] - 0.5*(t10775 + t10785 - 3.2*t10589*(t10787 + t10789 - 1.*t10527*t10811 - 1.*t10531*t10814) - 3.2*t10585*(t10780 + t10781 + t10531*t10811 + t10549*t10814))*var2[2] - 0.5*(-3.2*(0.24*t10521*t10525 - 1.*t10525*t10543)*t10585 - 3.2*(-0.24*Power(t10521,2) + t10554)*t10589 + t10759 + t10760)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
