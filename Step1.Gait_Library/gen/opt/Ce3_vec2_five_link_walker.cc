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
  double t5625;
  double t3184;
  double t3272;
  double t5751;
  double t6024;
  double t2197;
  double t5624;
  double t5766;
  double t5835;
  double t5982;
  double t6037;
  double t6038;
  double t6361;
  double t6646;
  double t6660;
  double t6693;
  double t6694;
  double t6695;
  double t6720;
  double t6723;
  double t10520;
  double t10508;
  double t10518;
  double t10534;
  double t10519;
  double t10553;
  double t10558;
  double t10559;
  double t10560;
  double t10571;
  double t10575;
  double t10586;
  double t10590;
  double t10606;
  double t10607;
  double t10608;
  double t10609;
  double t10610;
  double t10671;
  double t10675;
  double t10676;
  double t6671;
  double t6672;
  double t6675;
  double t7960;
  double t7156;
  double t7159;
  double t7160;
  double t7200;
  double t8312;
  double t10711;
  double t10713;
  double t10715;
  double t10592;
  double t10603;
  double t10604;
  double t10633;
  double t10629;
  double t10630;
  double t10631;
  double t10632;
  double t10634;
  double t10677;
  double t10678;
  double t10679;
  double t10706;
  double t10701;
  double t10709;
  double t10692;
  double t10693;
  double t10717;
  double t10718;
  double t10719;
  double t10726;
  double t10725;
  double t10727;
  double t10722;
  double t10723;
  double t10809;
  double t10812;
  double t10815;
  double t10817;
  double t10818;
  double t10819;
  double t10833;
  double t10834;
  double t10835;
  double t10837;
  double t10838;
  double t10839;
  double t6686;
  double t7064;
  double t7135;
  double t7155;
  double t6846;
  double t6847;
  double t7017;
  double t7018;
  double t10851;
  double t10852;
  double t10853;
  double t10854;
  double t10855;
  double t10688;
  double t10689;
  double t10731;
  double t10732;
  double t10733;
  double t10734;
  double t10735;
  double t10736;
  double t10739;
  double t10742;
  double t10743;
  double t10744;
  double t10745;
  double t10751;
  double t10752;
  double t10761;
  double t10803;
  double t10804;
  double t10805;
  double t10806;
  double t10807;
  double t10808;
  double t10816;
  double t10820;
  double t10821;
  double t10823;
  double t10824;
  double t10825;
  double t10874;
  double t10875;
  double t10876;
  double t10856;
  double t10857;
  double t10858;
  double t10861;
  double t10862;
  double t10865;
  double t10866;
  double t10867;
  double t10868;
  double t10869;
  double t10870;
  double t10873;
  double t10878;
  double t10879;
  double t10883;
  double t10908;
  double t10909;
  double t10885;
  double t10911;
  double t10912;
  double t10887;
  double t10605;
  double t10626;
  double t10627;
  double t10628;
  double t10611;
  double t10612;
  double t10623;
  double t10624;
  double t10924;
  double t10925;
  double t10926;
  double t10927;
  double t10928;
  double t10720;
  double t10721;
  double t10765;
  double t10766;
  double t10773;
  double t10774;
  double t10779;
  double t10782;
  double t10783;
  double t10784;
  double t10786;
  double t10788;
  double t10790;
  double t10796;
  double t10797;
  double t10798;
  double t10827;
  double t10828;
  double t10829;
  double t10830;
  double t10831;
  double t10832;
  double t10836;
  double t10840;
  double t10841;
  double t10843;
  double t10844;
  double t10845;
  double t10947;
  double t10948;
  double t10949;
  double t10929;
  double t10930;
  double t10931;
  double t10934;
  double t10935;
  double t10938;
  double t10939;
  double t10940;
  double t10941;
  double t10942;
  double t10943;
  double t10946;
  double t10951;
  double t10952;
  double t10956;
  double t10981;
  double t10982;
  double t10958;
  double t10984;
  double t10985;
  double t10960;
  t5625 = Cos(var1[3]);
  t3184 = Cos(var1[4]);
  t3272 = Sin(var1[3]);
  t5751 = Sin(var1[4]);
  t6024 = Cos(var1[2]);
  t2197 = Sin(var1[2]);
  t5624 = -1.*t3184*t3272;
  t5766 = -1.*t5625*t5751;
  t5835 = t5624 + t5766;
  t5982 = -1.*t2197*t5835;
  t6037 = t5625*t3184;
  t6038 = -1.*t3272*t5751;
  t6361 = t6037 + t6038;
  t6646 = -1.*t6024*t6361;
  t6660 = t5982 + t6646;
  t6693 = -1.*t3184;
  t6694 = 1. + t6693;
  t6695 = 0.4*t6694;
  t6720 = 0.64*t3184;
  t6723 = t6695 + t6720;
  t10520 = Cos(var1[5]);
  t10508 = Cos(var1[6]);
  t10518 = Sin(var1[5]);
  t10534 = Sin(var1[6]);
  t10519 = -1.*t10508*t10518;
  t10553 = -1.*t10520*t10534;
  t10558 = t10519 + t10553;
  t10559 = -1.*t2197*t10558;
  t10560 = t10520*t10508;
  t10571 = -1.*t10518*t10534;
  t10575 = t10560 + t10571;
  t10586 = -1.*t6024*t10575;
  t10590 = t10559 + t10586;
  t10606 = -1.*t10508;
  t10607 = 1. + t10606;
  t10608 = 0.4*t10607;
  t10609 = 0.64*t10508;
  t10610 = t10608 + t10609;
  t10671 = -1.*t5625*t2197;
  t10675 = -1.*t6024*t3272;
  t10676 = t10671 + t10675;
  t6671 = -1.*t6024*t5625;
  t6672 = t2197*t3272;
  t6675 = t6671 + t6672;
  t7960 = -1.*t2197*t6361;
  t7156 = t3184*t3272;
  t7159 = t5625*t5751;
  t7160 = t7156 + t7159;
  t7200 = -1.*t6024*t7160;
  t8312 = t7200 + t7960;
  t10711 = -1.*t10520*t2197;
  t10713 = -1.*t6024*t10518;
  t10715 = t10711 + t10713;
  t10592 = -1.*t6024*t10520;
  t10603 = t2197*t10518;
  t10604 = t10592 + t10603;
  t10633 = -1.*t2197*t10575;
  t10629 = t10508*t10518;
  t10630 = t10520*t10534;
  t10631 = t10629 + t10630;
  t10632 = -1.*t6024*t10631;
  t10634 = t10632 + t10633;
  t10677 = t6024*t5625;
  t10678 = -1.*t2197*t3272;
  t10679 = t10677 + t10678;
  t10706 = t6024*t6361;
  t10701 = -1.*t2197*t7160;
  t10709 = t10701 + t10706;
  t10692 = t6024*t5835;
  t10693 = t10692 + t7960;
  t10717 = t6024*t10520;
  t10718 = -1.*t2197*t10518;
  t10719 = t10717 + t10718;
  t10726 = t6024*t10575;
  t10725 = -1.*t2197*t10631;
  t10727 = t10725 + t10726;
  t10722 = t6024*t10558;
  t10723 = t10722 + t10633;
  t10809 = t6723*t3272;
  t10812 = 0.24*t5625*t5751;
  t10815 = t10809 + t10812;
  t10817 = t5625*t6723;
  t10818 = -0.24*t3272*t5751;
  t10819 = t10817 + t10818;
  t10833 = t10610*t10518;
  t10834 = 0.24*t10520*t10534;
  t10835 = t10833 + t10834;
  t10837 = t10520*t10610;
  t10838 = -0.24*t10518*t10534;
  t10839 = t10837 + t10838;
  t6686 = -0.748*t6675;
  t7064 = t6723*t5751;
  t7135 = -0.24*t3184*t5751;
  t7155 = t7064 + t7135;
  t6846 = t6723*t3184;
  t6847 = Power(t5751,2);
  t7017 = 0.24*t6847;
  t7018 = t6846 + t7017;
  t10851 = -1.*t5625*t3184;
  t10852 = t3272*t5751;
  t10853 = t10851 + t10852;
  t10854 = t6024*t10853;
  t10855 = t5982 + t10854;
  t10688 = -13.6*t10676*t10679;
  t10689 = -13.6*t10676*t6675;
  t10731 = Power(t10676,2);
  t10732 = -6.8*t10731;
  t10733 = t5625*t2197;
  t10734 = t6024*t3272;
  t10735 = t10733 + t10734;
  t10736 = -6.8*t10676*t10735;
  t10739 = Power(t10679,2);
  t10742 = -6.8*t10739;
  t10743 = -6.8*t10679*t6675;
  t10744 = t2197*t5835;
  t10745 = t10744 + t10706;
  t10751 = t6024*t7160;
  t10752 = t2197*t6361;
  t10761 = t10751 + t10752;
  t10803 = Power(t5625,2);
  t10804 = 0.11*t10803;
  t10805 = Power(t3272,2);
  t10806 = 0.11*t10805;
  t10807 = t10804 + t10806;
  t10808 = -6.8*t6675*t10807;
  t10816 = -1.*t10815*t6361;
  t10820 = -1.*t5835*t10819;
  t10821 = t10816 + t10820;
  t10823 = t10815*t7160;
  t10824 = t6361*t10819;
  t10825 = t10823 + t10824;
  t10874 = -1.*t6723*t3272;
  t10875 = -0.24*t5625*t5751;
  t10876 = t10874 + t10875;
  t10856 = 0.384*var2[4]*t10855;
  t10857 = -3.2*t7155*t10693;
  t10858 = -3.2*t7018*t10855;
  t10861 = -6.4*t10709*t10693;
  t10862 = -6.4*t10693*t10855;
  t10865 = -3.2*t10745*t10709;
  t10866 = -3.2*t10693*t10761;
  t10867 = -3.2*t10745*t10855;
  t10868 = t2197*t10853;
  t10869 = t10692 + t10868;
  t10870 = -3.2*t10693*t10869;
  t10873 = -3.2*t10693*t10821;
  t10878 = t10815*t6361;
  t10879 = t5835*t10819;
  t10883 = -3.2*t10825*t10855;
  t10908 = -0.24*t3184*t3272;
  t10909 = t10908 + t10875;
  t10885 = -1.*t5835*t10815;
  t10911 = 0.24*t5625*t3184;
  t10912 = t10911 + t10818;
  t10887 = -1.*t10819*t10853;
  t10605 = -0.748*t10604;
  t10626 = t10610*t10534;
  t10627 = -0.24*t10508*t10534;
  t10628 = t10626 + t10627;
  t10611 = t10610*t10508;
  t10612 = Power(t10534,2);
  t10623 = 0.24*t10612;
  t10624 = t10611 + t10623;
  t10924 = -1.*t10520*t10508;
  t10925 = t10518*t10534;
  t10926 = t10924 + t10925;
  t10927 = t6024*t10926;
  t10928 = t10559 + t10927;
  t10720 = -13.6*t10715*t10719;
  t10721 = -13.6*t10715*t10604;
  t10765 = Power(t10715,2);
  t10766 = -6.8*t10765;
  t10773 = t10520*t2197;
  t10774 = t6024*t10518;
  t10779 = t10773 + t10774;
  t10782 = -6.8*t10715*t10779;
  t10783 = Power(t10719,2);
  t10784 = -6.8*t10783;
  t10786 = -6.8*t10719*t10604;
  t10788 = t2197*t10558;
  t10790 = t10788 + t10726;
  t10796 = t6024*t10631;
  t10797 = t2197*t10575;
  t10798 = t10796 + t10797;
  t10827 = Power(t10520,2);
  t10828 = 0.11*t10827;
  t10829 = Power(t10518,2);
  t10830 = 0.11*t10829;
  t10831 = t10828 + t10830;
  t10832 = -6.8*t10604*t10831;
  t10836 = -1.*t10835*t10575;
  t10840 = -1.*t10558*t10839;
  t10841 = t10836 + t10840;
  t10843 = t10835*t10631;
  t10844 = t10575*t10839;
  t10845 = t10843 + t10844;
  t10947 = -1.*t10610*t10518;
  t10948 = -0.24*t10520*t10534;
  t10949 = t10947 + t10948;
  t10929 = 0.384*var2[6]*t10928;
  t10930 = -3.2*t10628*t10723;
  t10931 = -3.2*t10624*t10928;
  t10934 = -6.4*t10727*t10723;
  t10935 = -6.4*t10723*t10928;
  t10938 = -3.2*t10790*t10727;
  t10939 = -3.2*t10723*t10798;
  t10940 = -3.2*t10790*t10928;
  t10941 = t2197*t10926;
  t10942 = t10722 + t10941;
  t10943 = -3.2*t10723*t10942;
  t10946 = -3.2*t10723*t10841;
  t10951 = t10835*t10575;
  t10952 = t10558*t10839;
  t10956 = -3.2*t10845*t10928;
  t10981 = -0.24*t10508*t10518;
  t10982 = t10981 + t10948;
  t10958 = -1.*t10558*t10835;
  t10984 = 0.24*t10520*t10508;
  t10985 = t10984 + t10838;
  t10960 = -1.*t10839*t10926;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t10693,2) - 3.2*Power(t10709,2) - 3.2*Power(t10723,2) - 3.2*Power(t10727,2) + t10732 + t10736 + t10742 + t10743 + t10766 + t10782 + t10784 + t10786 - 3.2*t10590*t10790 - 3.2*t10634*t10798 - 3.2*t10745*t6660 - 3.2*t10761*t8312)*var2[0] - 0.5*(t10688 + t10689 + t10720 + t10721 - 6.4*t10590*t10723 - 6.4*t10634*t10727 - 6.4*t10693*t6660 - 6.4*t10709*t8312)*var2[1] - 0.5*(t10808 + t10832 - 3.2*t10634*t10841 - 3.2*t10590*t10845 + 2.88*t6024 - 3.2*t10825*t6660 - 3.2*t10821*t8312)*var2[2] - 0.5*(t6686 - 3.2*t6660*t7018 - 3.2*t7155*t8312)*var2[3] + 0.384*t6660*var2[4] - 0.5*(t10605 - 3.2*t10590*t10624 - 3.2*t10628*t10634)*var2[5] + 0.384*t10590*var2[6]);
  p_output1[3]=var2[1]*(t10856 - 0.5*(t10732 + t10736 + t10742 + t10743 + t10865 + t10866 + t10867 + t10870)*var2[0] - 0.5*(t10688 + t10689 + t10861 + t10862)*var2[1] - 0.5*(t10808 + t10873 + t10883 - 3.2*t10709*(t10885 + t10887 - 1.*t10876*t5835 - 1.*t10819*t6361) - 3.2*t10693*(t10878 + t10879 + t10876*t6361 + t10819*t7160))*var2[2] - 0.5*(t10857 + t10858 + t6686)*var2[3]);
  p_output1[4]=var2[1]*(t10856 - 0.5*(t10865 + t10866 + t10867 + t10870)*var2[0] - 0.5*(t10861 + t10862)*var2[1] - 0.5*(t10873 + t10883 - 3.2*t10709*(t10885 + t10887 - 1.*t10909*t5835 - 1.*t10912*t6361) - 3.2*t10693*(t10878 + t10879 + t10909*t6361 + t10912*t7160))*var2[2] - 0.5*(t10857 + t10858 - 3.2*t10693*(0.24*t3184*t5751 - 1.*t5751*t6723) - 3.2*t10709*(-0.24*Power(t3184,2) + t6846))*var2[3]);
  p_output1[5]=var2[1]*(t10929 - 0.5*(t10766 + t10782 + t10784 + t10786 + t10938 + t10939 + t10940 + t10943)*var2[0] - 0.5*(t10720 + t10721 + t10934 + t10935)*var2[1] - 0.5*(t10832 + t10946 - 3.2*t10723*(t10631*t10839 + t10575*t10949 + t10951 + t10952) + t10956 - 3.2*t10727*(-1.*t10575*t10839 - 1.*t10558*t10949 + t10958 + t10960))*var2[2] - 0.5*(t10605 + t10930 + t10931)*var2[5]);
  p_output1[6]=var2[1]*(t10929 - 0.5*(t10938 + t10939 + t10940 + t10943)*var2[0] - 0.5*(t10934 + t10935)*var2[1] - 0.5*(t10946 + t10956 - 3.2*t10727*(t10958 + t10960 - 1.*t10558*t10982 - 1.*t10575*t10985) - 3.2*t10723*(t10951 + t10952 + t10575*t10982 + t10631*t10985))*var2[2] - 0.5*(-3.2*(0.24*t10508*t10534 - 1.*t10534*t10610)*t10723 - 3.2*(-0.24*Power(t10508,2) + t10611)*t10727 + t10930 + t10931)*var2[5]);
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

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
