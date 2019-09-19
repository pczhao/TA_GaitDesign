/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:46:57 GMT-04:00
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
  double t3529;
  double t1874;
  double t1917;
  double t3580;
  double t10478;
  double t1781;
  double t10480;
  double t10482;
  double t10483;
  double t2056;
  double t5403;
  double t5497;
  double t6263;
  double t10484;
  double t10494;
  double t10534;
  double t10535;
  double t10536;
  double t10495;
  double t10498;
  double t10500;
  double t10501;
  double t10502;
  double t10503;
  double t10505;
  double t10506;
  double t10508;
  double t10509;
  double t10511;
  double t10513;
  double t10515;
  double t10516;
  double t10528;
  double t10531;
  double t10533;
  double t10538;
  double t10539;
  double t10541;
  double t10542;
  double t10543;
  double t10605;
  double t10610;
  double t10620;
  double t10622;
  double t10627;
  double t10646;
  double t10648;
  double t10647;
  double t10649;
  double t10650;
  double t10652;
  double t10653;
  double t10654;
  double t10655;
  double t10676;
  double t10677;
  double t10678;
  double t10651;
  double t10656;
  double t10681;
  double t10682;
  double t10683;
  double t10657;
  double t10606;
  double t10616;
  double t10617;
  double t10631;
  double t10634;
  double t10639;
  double t10643;
  double t10645;
  double t10687;
  double t10688;
  double t10701;
  double t10702;
  double t10703;
  double t10704;
  double t10705;
  double t10585;
  double t10591;
  double t10568;
  double t10580;
  double t10716;
  double t10717;
  double t10718;
  double t10719;
  double t10720;
  double t10721;
  double t10722;
  double t10725;
  double t10726;
  double t10727;
  double t10728;
  double t10729;
  double t10730;
  double t10731;
  double t10732;
  double t10733;
  double t10679;
  double t10680;
  double t10665;
  double t10669;
  double t10755;
  double t10746;
  double t10747;
  double t10748;
  double t10749;
  double t10750;
  double t10751;
  double t10752;
  double t10753;
  double t10754;
  double t10768;
  double t10769;
  double t10770;
  double t10771;
  double t10772;
  double t10773;
  double t10786;
  double t10787;
  double t10788;
  double t10789;
  double t10790;
  double t10791;
  double t10792;
  double t10793;
  double t10795;
  double t10796;
  double t10797;
  double t10801;
  double t10802;
  double t10803;
  double t10794;
  double t10798;
  double t10799;
  double t10800;
  double t10805;
  double t10806;
  double t10810;
  double t10811;
  double t10812;
  double t10813;
  double t10822;
  double t10823;
  double t10815;
  double t10825;
  double t10826;
  double t10817;
  double t10780;
  double t10781;
  double t10782;
  double t10783;
  double t10784;
  double t10785;
  double t10845;
  double t10846;
  double t10847;
  double t10848;
  double t10849;
  double t10850;
  double t10851;
  double t10852;
  double t10854;
  double t10855;
  double t10856;
  double t10839;
  double t10840;
  double t10841;
  double t10842;
  double t10843;
  double t10844;
  double t10853;
  double t10857;
  double t10858;
  double t10860;
  double t10861;
  double t10862;
  double t10867;
  double t10868;
  double t10869;
  double t10866;
  double t10871;
  double t10872;
  double t10876;
  double t10885;
  double t10886;
  double t10878;
  double t10888;
  double t10889;
  double t10880;
  double t10901;
  double t10902;
  double t10903;
  double t10904;
  double t10906;
  double t10907;
  double t10908;
  double t10909;
  double t10913;
  double t10914;
  double t10934;
  double t10935;
  double t10936;
  double t10937;
  double t10939;
  double t10940;
  double t10941;
  double t10942;
  double t10946;
  double t10947;
  t3529 = Cos(var1[3]);
  t1874 = Cos(var1[4]);
  t1917 = Sin(var1[3]);
  t3580 = Sin(var1[4]);
  t10478 = Cos(var1[2]);
  t1781 = Sin(var1[2]);
  t10480 = t3529*t1874;
  t10482 = -1.*t1917*t3580;
  t10483 = t10480 + t10482;
  t2056 = -1.*t1874*t1917;
  t5403 = -1.*t3529*t3580;
  t5497 = t2056 + t5403;
  t6263 = t1781*t5497;
  t10484 = t10478*t10483;
  t10494 = t6263 + t10484;
  t10534 = t10478*t3529;
  t10535 = -1.*t1781*t1917;
  t10536 = t10534 + t10535;
  t10495 = t1874*t1917;
  t10498 = t3529*t3580;
  t10500 = t10495 + t10498;
  t10501 = t10478*t10500;
  t10502 = t1781*t10483;
  t10503 = t10501 + t10502;
  t10505 = 6.4*t10494*t10503;
  t10506 = t10478*t5497;
  t10508 = -1.*t3529*t1874;
  t10509 = t1917*t3580;
  t10511 = t10508 + t10509;
  t10513 = t1781*t10511;
  t10515 = t10506 + t10513;
  t10516 = 6.4*t10494*t10515;
  t10528 = -1.*t3529*t1781;
  t10531 = -1.*t10478*t1917;
  t10533 = t10528 + t10531;
  t10538 = 13.6*t10533*t10536;
  t10539 = t3529*t1781;
  t10541 = t10478*t1917;
  t10542 = t10539 + t10541;
  t10543 = 13.6*t10542*t10536;
  t10605 = Cos(var1[5]);
  t10610 = Sin(var1[5]);
  t10620 = t10478*t10605;
  t10622 = -1.*t1781*t10610;
  t10627 = t10620 + t10622;
  t10646 = Cos(var1[6]);
  t10648 = Sin(var1[6]);
  t10647 = -1.*t10646*t10610;
  t10649 = -1.*t10605*t10648;
  t10650 = t10647 + t10649;
  t10652 = t10605*t10646;
  t10653 = -1.*t10610*t10648;
  t10654 = t10652 + t10653;
  t10655 = t10478*t10654;
  t10676 = t10646*t10610;
  t10677 = t10605*t10648;
  t10678 = t10676 + t10677;
  t10651 = t1781*t10650;
  t10656 = t10651 + t10655;
  t10681 = t10478*t10678;
  t10682 = t1781*t10654;
  t10683 = t10681 + t10682;
  t10657 = t10478*t10650;
  t10606 = -1.*t10605*t1781;
  t10616 = -1.*t10478*t10610;
  t10617 = t10606 + t10616;
  t10631 = 13.6*t10617*t10627;
  t10634 = t10605*t1781;
  t10639 = t10478*t10610;
  t10643 = t10634 + t10639;
  t10645 = 13.6*t10643*t10627;
  t10687 = 6.4*t10656*t10683;
  t10688 = -1.*t10605*t10646;
  t10701 = t10610*t10648;
  t10702 = t10688 + t10701;
  t10703 = t1781*t10702;
  t10704 = t10657 + t10703;
  t10705 = 6.4*t10656*t10704;
  t10585 = -1.*t1781*t10500;
  t10591 = t10585 + t10484;
  t10568 = -1.*t1781*t10483;
  t10580 = t10506 + t10568;
  t10716 = 3.2*t10494*t10591;
  t10717 = 3.2*t10580*t10503;
  t10718 = -1.*t1781*t5497;
  t10719 = t10478*t10511;
  t10720 = t10718 + t10719;
  t10721 = 3.2*t10494*t10720;
  t10722 = 3.2*t10580*t10515;
  t10725 = Power(t10533,2);
  t10726 = 6.8*t10725;
  t10727 = 6.8*t10533*t10542;
  t10728 = Power(t10536,2);
  t10729 = 6.8*t10728;
  t10730 = -1.*t10478*t3529;
  t10731 = t1781*t1917;
  t10732 = t10730 + t10731;
  t10733 = 6.8*t10536*t10732;
  t10679 = -1.*t1781*t10678;
  t10680 = t10679 + t10655;
  t10665 = -1.*t1781*t10654;
  t10669 = t10657 + t10665;
  t10755 = -1.*t1781*t10650;
  t10746 = Power(t10617,2);
  t10747 = 6.8*t10746;
  t10748 = 6.8*t10617*t10643;
  t10749 = Power(t10627,2);
  t10750 = 6.8*t10749;
  t10751 = -1.*t10478*t10605;
  t10752 = t1781*t10610;
  t10753 = t10751 + t10752;
  t10754 = 6.8*t10627*t10753;
  t10768 = 3.2*t10656*t10680;
  t10769 = 3.2*t10669*t10683;
  t10770 = t10478*t10702;
  t10771 = t10755 + t10770;
  t10772 = 3.2*t10656*t10771;
  t10773 = 3.2*t10669*t10704;
  t10786 = -1.*t1874;
  t10787 = 1. + t10786;
  t10788 = 0.4*t10787;
  t10789 = 0.64*t1874;
  t10790 = t10788 + t10789;
  t10791 = t10790*t1917;
  t10792 = 0.24*t3529*t3580;
  t10793 = t10791 + t10792;
  t10795 = t3529*t10790;
  t10796 = -0.24*t1917*t3580;
  t10797 = t10795 + t10796;
  t10801 = -1.*t10790*t1917;
  t10802 = -0.24*t3529*t3580;
  t10803 = t10801 + t10802;
  t10794 = -1.*t10793*t10483;
  t10798 = -1.*t5497*t10797;
  t10799 = t10794 + t10798;
  t10800 = 3.2*t10494*t10799;
  t10805 = t10793*t10483;
  t10806 = t5497*t10797;
  t10810 = t10793*t10500;
  t10811 = t10483*t10797;
  t10812 = t10810 + t10811;
  t10813 = 3.2*t10812*t10515;
  t10822 = -0.24*t1874*t1917;
  t10823 = t10822 + t10802;
  t10815 = -1.*t5497*t10793;
  t10825 = 0.24*t3529*t1874;
  t10826 = t10825 + t10796;
  t10817 = -1.*t10797*t10511;
  t10780 = Power(t3529,2);
  t10781 = 0.11*t10780;
  t10782 = Power(t1917,2);
  t10783 = 0.11*t10782;
  t10784 = t10781 + t10783;
  t10785 = 6.8*t10533*t10784;
  t10845 = -1.*t10646;
  t10846 = 1. + t10845;
  t10847 = 0.4*t10846;
  t10848 = 0.64*t10646;
  t10849 = t10847 + t10848;
  t10850 = t10849*t10610;
  t10851 = 0.24*t10605*t10648;
  t10852 = t10850 + t10851;
  t10854 = t10605*t10849;
  t10855 = -0.24*t10610*t10648;
  t10856 = t10854 + t10855;
  t10839 = Power(t10605,2);
  t10840 = 0.11*t10839;
  t10841 = Power(t10610,2);
  t10842 = 0.11*t10841;
  t10843 = t10840 + t10842;
  t10844 = 6.8*t10617*t10843;
  t10853 = -1.*t10852*t10654;
  t10857 = -1.*t10650*t10856;
  t10858 = t10853 + t10857;
  t10860 = t10852*t10678;
  t10861 = t10654*t10856;
  t10862 = t10860 + t10861;
  t10867 = -1.*t10849*t10610;
  t10868 = -0.24*t10605*t10648;
  t10869 = t10867 + t10868;
  t10866 = 3.2*t10656*t10858;
  t10871 = t10852*t10654;
  t10872 = t10650*t10856;
  t10876 = 3.2*t10862*t10704;
  t10885 = -0.24*t10646*t10610;
  t10886 = t10885 + t10868;
  t10878 = -1.*t10650*t10852;
  t10888 = 0.24*t10605*t10646;
  t10889 = t10888 + t10855;
  t10880 = -1.*t10856*t10702;
  t10901 = 0.748*t10533;
  t10902 = t10790*t3580;
  t10903 = -0.24*t1874*t3580;
  t10904 = t10902 + t10903;
  t10906 = t10790*t1874;
  t10907 = Power(t3580,2);
  t10908 = 0.24*t10907;
  t10909 = t10906 + t10908;
  t10913 = 3.2*t10904*t10494;
  t10914 = 3.2*t10909*t10515;
  t10934 = 0.748*t10617;
  t10935 = t10849*t10648;
  t10936 = -0.24*t10646*t10648;
  t10937 = t10935 + t10936;
  t10939 = t10849*t10646;
  t10940 = Power(t10648,2);
  t10941 = 0.24*t10940;
  t10942 = t10939 + t10941;
  t10946 = 3.2*t10937*t10656;
  t10947 = 3.2*t10942*t10704;
  p_output1[0]=var2[0]*(-0.5*(t10538 + t10543 + 6.4*t10494*t10580 + 6.4*t10503*t10591 + t10631 + t10645 + 6.4*t10656*t10669 + 6.4*t10680*t10683)*var2[2] - 0.5*(t10505 + t10516 + t10538 + t10543)*var2[3] - 0.5*(t10505 + t10516)*var2[4] - 0.5*(t10631 + t10645 + t10687 + t10705)*var2[5] - 0.5*(t10687 + t10705)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*t10503*(-1.*t10478*t10500 + t10568) + 3.2*Power(t10580,2) + 3.2*Power(t10591,2) + 3.2*Power(t10669,2) + 3.2*Power(t10680,2) + 3.2*(t10665 - 1.*t10478*t10678)*t10683 + 3.2*t10494*(-1.*t10478*t10483 + t10718) + t10726 + t10727 + t10729 + t10733 + t10747 + t10748 + t10750 + t10754 + 3.2*t10656*(-1.*t10478*t10654 + t10755))*var2[2] - 0.5*(t10716 + t10717 + t10721 + t10722 + t10726 + t10727 + t10729 + t10733)*var2[3] - 0.5*(t10716 + t10717 + t10721 + t10722)*var2[4] - 0.5*(t10747 + t10748 + t10750 + t10754 + t10768 + t10769 + t10772 + t10773)*var2[5] - 0.5*(t10768 + t10769 + t10772 + t10773)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(t10785 + 3.2*t10591*t10799 + 3.2*t10580*t10812 + t10844 + 3.2*t10680*t10858 + 3.2*t10669*t10862 - 2.88*t1781)*var2[2] - 0.5*(t10785 + t10800 + 3.2*t10494*(t10500*t10797 + t10483*t10803 + t10805 + t10806) + t10813 + 3.2*t10503*(-1.*t10483*t10797 + t10815 + t10817 - 1.*t10803*t5497))*var2[3] - 0.5*(t10800 + t10813 + 3.2*t10494*(t10805 + t10806 + t10483*t10823 + t10500*t10826) + 3.2*t10503*(t10815 + t10817 - 1.*t10483*t10826 - 1.*t10823*t5497))*var2[4] - 0.5*(t10844 + t10866 + 3.2*t10656*(t10678*t10856 + t10654*t10869 + t10871 + t10872) + t10876 + 3.2*t10683*(-1.*t10654*t10856 - 1.*t10650*t10869 + t10878 + t10880))*var2[5] - 0.5*(t10866 + t10876 + 3.2*t10683*(t10878 + t10880 - 1.*t10650*t10886 - 1.*t10654*t10889) + 3.2*t10656*(t10871 + t10872 + t10654*t10886 + t10678*t10889))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t10901 + 3.2*t10591*t10904 + 3.2*t10580*t10909)*var2[2] - 0.5*(t10901 + t10913 + t10914)*var2[3] - 0.5*(t10913 + t10914 + 3.2*t10503*(t10906 - 0.24*Power(t1874,2)) + 3.2*t10494*(-1.*t10790*t3580 + 0.24*t1874*t3580))*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t10580*var2[2] - 0.384*t10515*var2[3] - 0.384*t10515*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t10934 + 3.2*t10680*t10937 + 3.2*t10669*t10942)*var2[2] - 0.5*(t10934 + t10946 + t10947)*var2[5] - 0.5*(3.2*t10656*(0.24*t10646*t10648 - 1.*t10648*t10849) + 3.2*t10683*(-0.24*Power(t10646,2) + t10939) + t10946 + t10947)*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t10669*var2[2] - 0.384*t10704*var2[5] - 0.384*t10704*var2[6]);
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

#include "Ce1_vec1_five_link_walker.hh"

namespace SymFunction
{

void Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
