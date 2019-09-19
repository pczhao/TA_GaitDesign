/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:22 GMT-04:00
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
  double t3039;
  double t2203;
  double t2723;
  double t3179;
  double t6671;
  double t362;
  double t2992;
  double t5723;
  double t5818;
  double t9205;
  double t9354;
  double t9512;
  double t9516;
  double t9584;
  double t5880;
  double t6693;
  double t6956;
  double t7940;
  double t8024;
  double t8028;
  double t10223;
  double t10305;
  double t10607;
  double t10190;
  double t10208;
  double t10218;
  double t8464;
  double t8720;
  double t8780;
  double t10908;
  double t11003;
  double t11350;
  double t9717;
  double t9750;
  double t9755;
  double t9716;
  double t9783;
  double t9992;
  double t13433;
  double t11579;
  double t11631;
  double t13358;
  double t13541;
  double t13556;
  double t13575;
  double t13596;
  double t13359;
  double t13539;
  double t13597;
  double t13598;
  double t13599;
  double t13611;
  double t13612;
  double t13676;
  double t13677;
  double t13678;
  double t13685;
  double t13686;
  double t13687;
  double t13691;
  double t13692;
  double t13693;
  double t9161;
  double t10015;
  double t10058;
  double t10101;
  double t10110;
  double t13730;
  double t13731;
  double t9588;
  double t9597;
  double t9651;
  double t10805;
  double t11443;
  double t11487;
  double t11510;
  double t13608;
  double t13621;
  double t13622;
  double t13623;
  double t13630;
  double t13649;
  double t13650;
  double t13670;
  double t13671;
  double t13672;
  double t13673;
  double t13674;
  double t13675;
  double t13707;
  double t13708;
  double t13709;
  double t13684;
  double t13688;
  double t13689;
  double t13694;
  double t13695;
  double t13703;
  double t13704;
  double t13705;
  double t13711;
  double t13712;
  double t13713;
  double t13714;
  double t13715;
  double t13763;
  double t13764;
  double t13765;
  double t13732;
  double t13733;
  double t13734;
  double t13737;
  double t13738;
  double t13739;
  double t13740;
  double t13741;
  double t13742;
  double t13743;
  double t13746;
  double t13747;
  double t13748;
  double t13749;
  double t13750;
  double t13751;
  double t13754;
  double t13758;
  double t13801;
  double t13802;
  double t13762;
  double t13804;
  double t13805;
  double t13768;
  double t13775;
  double t13811;
  double t13812;
  double t13779;
  double t13834;
  double t13835;
  double t13836;
  double t13837;
  double t13838;
  double t13840;
  double t13841;
  double t13842;
  double t13843;
  double t13844;
  double t13845;
  double t13846;
  double t13847;
  double t13848;
  double t13850;
  double t13851;
  double t13852;
  double t13853;
  double t13854;
  double t13855;
  double t13602;
  double t13609;
  double t13569;
  double t13570;
  double t13540;
  double t13571;
  double t13600;
  double t13601;
  double t13610;
  double t13613;
  double t13614;
  double t13869;
  double t13874;
  double t13875;
  double t13744;
  double t13883;
  double t13760;
  double t13761;
  double t13766;
  double t13767;
  double t13771;
  double t13774;
  double t13776;
  double t13777;
  double t13778;
  double t13780;
  double t13892;
  double t13786;
  double t13787;
  double t13788;
  double t13893;
  double t13790;
  double t13791;
  double t13792;
  double t13894;
  double t13897;
  double t13898;
  double t13899;
  double t13900;
  double t13901;
  double t13902;
  double t13796;
  double t13906;
  double t13803;
  double t13806;
  double t13807;
  double t13908;
  double t13809;
  double t13810;
  double t13813;
  double t13814;
  double t13815;
  double t13816;
  double t13819;
  double t13820;
  double t13821;
  double t13823;
  double t13824;
  double t13825;
  double t13826;
  double t13827;
  double t13828;
  double t13849;
  double t13690;
  double t13706;
  double t13710;
  double t13719;
  double t13726;
  double t8388;
  double t10004;
  double t10119;
  double t10132;
  double t13933;
  double t13934;
  double t13727;
  double t13884;
  double t13885;
  double t13886;
  double t13887;
  double t13888;
  double t13759;
  double t13772;
  double t13773;
  double t13781;
  double t13782;
  double t13907;
  double t13909;
  double t13910;
  double t13911;
  double t13912;
  double t13800;
  double t13808;
  double t13817;
  double t13818;
  double t13822;
  double t13829;
  double t13830;
  double t13923;
  double t13924;
  double t13925;
  double t13926;
  double t13927;
  double t13928;
  double t13929;
  double t13856;
  double t13936;
  double t13980;
  double t13981;
  double t13982;
  double t13870;
  double t13871;
  double t13872;
  double t13895;
  double t13735;
  double t13947;
  double t13948;
  double t13949;
  double t13916;
  double t13917;
  double t13918;
  double t13789;
  double t13793;
  double t13794;
  double t13964;
  double t13965;
  double t13966;
  double t13967;
  double t13968;
  double t13858;
  double t13859;
  double t13860;
  double t13861;
  double t10186;
  double t13985;
  double t13986;
  double t13987;
  double t14018;
  double t14019;
  double t13867;
  double t13941;
  double t13993;
  t3039 = Cos(var1[5]);
  t2203 = Cos(var1[6]);
  t2723 = Sin(var1[5]);
  t3179 = Sin(var1[6]);
  t6671 = Cos(var1[2]);
  t362 = Sin(var1[2]);
  t2992 = -1.*t2203*t2723;
  t5723 = -1.*t3039*t3179;
  t5818 = t2992 + t5723;
  t9205 = -1.*t2203;
  t9354 = 1. + t9205;
  t9512 = 0.4*t9354;
  t9516 = 0.64*t2203;
  t9584 = t9512 + t9516;
  t5880 = -1.*t362*t5818;
  t6693 = -1.*t3039*t2203;
  t6956 = t2723*t3179;
  t7940 = t6693 + t6956;
  t8024 = t6671*t7940;
  t8028 = t5880 + t8024;
  t10223 = t6671*t3039;
  t10305 = -1.*t362*t2723;
  t10607 = t10223 + t10305;
  t10190 = -1.*t3039*t362;
  t10208 = -1.*t6671*t2723;
  t10218 = t10190 + t10208;
  t8464 = -1.*t6671*t3039;
  t8720 = t362*t2723;
  t8780 = t8464 + t8720;
  t10908 = t3039*t362;
  t11003 = t6671*t2723;
  t11350 = t10908 + t11003;
  t9717 = t3039*t2203;
  t9750 = -1.*t2723*t3179;
  t9755 = t9717 + t9750;
  t9716 = t6671*t5818;
  t9783 = -1.*t362*t9755;
  t9992 = t9716 + t9783;
  t13433 = t6671*t9755;
  t11579 = t2203*t2723;
  t11631 = t3039*t3179;
  t13358 = t11579 + t11631;
  t13541 = t362*t5818;
  t13556 = t13541 + t13433;
  t13575 = -1.*t6671*t9755;
  t13596 = t5880 + t13575;
  t13359 = -1.*t362*t13358;
  t13539 = t13359 + t13433;
  t13597 = t6671*t13358;
  t13598 = t362*t9755;
  t13599 = t13597 + t13598;
  t13611 = t362*t7940;
  t13612 = t9716 + t13611;
  t13676 = t9584*t2723;
  t13677 = 0.24*t3039*t3179;
  t13678 = t13676 + t13677;
  t13685 = t3039*t9584;
  t13686 = -0.24*t2723*t3179;
  t13687 = t13685 + t13686;
  t13691 = -1.*t9584*t2723;
  t13692 = -0.24*t3039*t3179;
  t13693 = t13691 + t13692;
  t9161 = 0.748*t8780;
  t10015 = t9584*t2203;
  t10058 = Power(t3179,2);
  t10101 = 0.24*t10058;
  t10110 = t10015 + t10101;
  t13730 = t362*t13358;
  t13731 = t13730 + t8024;
  t9588 = t9584*t3179;
  t9597 = -0.24*t2203*t3179;
  t9651 = t9588 + t9597;
  t10805 = 20.4*t10218*t10607;
  t11443 = 6.8*t11350*t10607;
  t11487 = 20.4*t10218*t8780;
  t11510 = 6.8*t11350*t8780;
  t13608 = -1.*t362*t7940;
  t13621 = Power(t10218,2);
  t13622 = 13.6*t13621;
  t13623 = 13.6*t10218*t11350;
  t13630 = Power(t10607,2);
  t13649 = 13.6*t13630;
  t13650 = 13.6*t10607*t8780;
  t13670 = Power(t3039,2);
  t13671 = 0.11*t13670;
  t13672 = Power(t2723,2);
  t13673 = 0.11*t13672;
  t13674 = t13671 + t13673;
  t13675 = 6.8*t8780*t13674;
  t13707 = t13678*t13358;
  t13708 = t9755*t13687;
  t13709 = t13707 + t13708;
  t13684 = -1.*t13678*t9755;
  t13688 = -1.*t5818*t13687;
  t13689 = t13684 + t13688;
  t13694 = t13693*t9755;
  t13695 = t13678*t9755;
  t13703 = t5818*t13687;
  t13704 = t13358*t13687;
  t13705 = t13694 + t13695 + t13703 + t13704;
  t13711 = -1.*t5818*t13693;
  t13712 = -1.*t5818*t13678;
  t13713 = -1.*t9755*t13687;
  t13714 = -1.*t13687*t7940;
  t13715 = t13711 + t13712 + t13713 + t13714;
  t13763 = -1.*t3039*t9584;
  t13764 = 0.24*t2723*t3179;
  t13765 = t13763 + t13764;
  t13732 = -0.384*var2[6]*t13731;
  t13733 = 3.2*t10110*t13731;
  t13734 = 3.2*t9651*t13612;
  t13737 = 6.4*t13556*t9992;
  t13738 = 3.2*t13599*t8028;
  t13739 = 3.2*t9992*t13731;
  t13740 = t13597 + t13608;
  t13741 = 3.2*t13556*t13740;
  t13742 = 3.2*t13539*t13612;
  t13743 = 6.4*t8028*t13612;
  t13746 = Power(t13556,2);
  t13747 = 6.4*t13746;
  t13748 = 6.4*t13556*t13731;
  t13749 = 6.4*t13599*t13612;
  t13750 = Power(t13612,2);
  t13751 = 6.4*t13750;
  t13754 = 3.2*t13709*t13731;
  t13758 = 3.2*t13689*t13612;
  t13801 = -0.24*t2203*t2723;
  t13802 = t13801 + t13692;
  t13762 = -1.*t13358*t13687;
  t13804 = 0.24*t3039*t2203;
  t13805 = t13804 + t13686;
  t13768 = -1.*t13678*t7940;
  t13775 = t5818*t13678;
  t13811 = -0.24*t3039*t2203;
  t13812 = t13811 + t13764;
  t13779 = t13687*t7940;
  t13834 = 13.6*t10218*t10607;
  t13835 = 13.6*t11350*t10607;
  t13836 = 6.4*t13556*t13599;
  t13837 = 6.4*t13556*t13612;
  t13838 = t13834 + t13835 + t13836 + t13837;
  t13840 = 6.8*t13621;
  t13841 = 6.8*t10218*t11350;
  t13842 = 6.8*t13630;
  t13843 = 6.8*t10607*t8780;
  t13844 = 3.2*t13556*t13539;
  t13845 = 3.2*t9992*t13599;
  t13846 = 3.2*t13556*t8028;
  t13847 = 3.2*t9992*t13612;
  t13848 = t13840 + t13841 + t13842 + t13843 + t13844 + t13845 + t13846 + t13847;
  t13850 = 6.8*t10218*t13674;
  t13851 = 3.2*t13556*t13689;
  t13852 = 3.2*t13556*t13705;
  t13853 = 3.2*t13709*t13612;
  t13854 = 3.2*t13599*t13715;
  t13855 = t13850 + t13851 + t13852 + t13853 + t13854;
  t13602 = -1.*t6671*t5818;
  t13609 = t13602 + t13608;
  t13569 = -1.*t6671*t13358;
  t13570 = t13569 + t9783;
  t13540 = 6.4*t13539*t9992;
  t13571 = 3.2*t13556*t13570;
  t13600 = 3.2*t13596*t13599;
  t13601 = 6.4*t9992*t8028;
  t13610 = 3.2*t13556*t13609;
  t13613 = 3.2*t13596*t13612;
  t13614 = t10805 + t11443 + t11487 + t11510 + t13540 + t13571 + t13600 + t13601 + t13610 + t13613;
  t13869 = 0.748*t11350;
  t13874 = Power(t8780,2);
  t13875 = 13.6*t13874;
  t13744 = t10805 + t11443 + t11487 + t11510 + t13737 + t13738 + t13739 + t13741 + t13742 + t13743;
  t13883 = 6.8*t11350*t13674;
  t13760 = -1.*t13693*t9755;
  t13761 = -2.*t5818*t13687;
  t13766 = -1.*t5818*t13765;
  t13767 = -2.*t13693*t7940;
  t13771 = t13760 + t13761 + t13762 + t13766 + t13767 + t13768;
  t13774 = 2.*t5818*t13693;
  t13776 = t13693*t13358;
  t13777 = 2.*t9755*t13687;
  t13778 = t9755*t13765;
  t13780 = t13774 + t13775 + t13776 + t13777 + t13778 + t13779;
  t13892 = -0.384*var2[6]*t13740;
  t13786 = Power(t2203,2);
  t13787 = -0.24*t13786;
  t13788 = t10015 + t13787;
  t13893 = 3.2*t9651*t8028;
  t13790 = -1.*t9584*t3179;
  t13791 = 0.24*t2203*t3179;
  t13792 = t13790 + t13791;
  t13894 = 3.2*t10110*t13740;
  t13897 = Power(t9992,2);
  t13898 = 6.4*t13897;
  t13899 = 6.4*t13539*t8028;
  t13900 = Power(t8028,2);
  t13901 = 6.4*t13900;
  t13902 = 6.4*t9992*t13740;
  t13796 = t13737 + t13738 + t13739 + t13741 + t13742 + t13743;
  t13906 = 3.2*t13689*t8028;
  t13803 = t13802*t9755;
  t13806 = t13358*t13805;
  t13807 = t13803 + t13695 + t13703 + t13806;
  t13908 = 3.2*t13709*t13740;
  t13809 = -1.*t13802*t9755;
  t13810 = -1.*t5818*t13805;
  t13813 = -1.*t5818*t13812;
  t13814 = -1.*t13693*t7940;
  t13815 = -1.*t13802*t7940;
  t13816 = t13809 + t13688 + t13762 + t13810 + t13813 + t13814 + t13815 + t13768;
  t13819 = -1.*t5818*t13802;
  t13820 = -1.*t9755*t13805;
  t13821 = t13819 + t13712 + t13820 + t13714;
  t13823 = t5818*t13693;
  t13824 = t5818*t13802;
  t13825 = t13802*t13358;
  t13826 = t9755*t13805;
  t13827 = t9755*t13812;
  t13828 = t13823 + t13824 + t13775 + t13825 + t13708 + t13826 + t13827 + t13779;
  t13849 = -0.5*var2[5]*t13848;
  t13690 = 3.2*t9992*t13689;
  t13706 = 3.2*t9992*t13705;
  t13710 = 3.2*t13709*t8028;
  t13719 = 3.2*t13539*t13715;
  t13726 = t13675 + t13690 + t13706 + t13710 + t13719;
  t8388 = -0.384*var2[6]*t8028;
  t10004 = 3.2*t9651*t9992;
  t10119 = 3.2*t10110*t8028;
  t10132 = t9161 + t10004 + t10119;
  t13933 = 13.6*t10218*t8780;
  t13934 = t13834 + t13933 + t13540 + t13601;
  t13727 = -0.5*var2[2]*t13726;
  t13884 = 3.2*t13596*t13689;
  t13885 = 3.2*t13596*t13705;
  t13886 = 3.2*t13709*t13609;
  t13887 = 3.2*t13570*t13715;
  t13888 = t13883 + t13884 + t13885 + t13886 + t13887;
  t13759 = 6.4*t13705*t13612;
  t13772 = 3.2*t13599*t13771;
  t13773 = 6.4*t13556*t13715;
  t13781 = 3.2*t13556*t13780;
  t13782 = t13675 + t13754 + t13758 + t13759 + t13772 + t13773 + t13781;
  t13907 = 6.4*t13705*t8028;
  t13909 = 3.2*t13539*t13771;
  t13910 = 6.4*t9992*t13715;
  t13911 = 3.2*t9992*t13780;
  t13912 = t13883 + t13906 + t13907 + t13908 + t13909 + t13910 + t13911;
  t13800 = 3.2*t13705*t13612;
  t13808 = 3.2*t13807*t13612;
  t13817 = 3.2*t13599*t13816;
  t13818 = 3.2*t13556*t13715;
  t13822 = 3.2*t13556*t13821;
  t13829 = 3.2*t13556*t13828;
  t13830 = t13754 + t13758 + t13800 + t13808 + t13817 + t13818 + t13822 + t13829;
  t13923 = 3.2*t13705*t8028;
  t13924 = 3.2*t13807*t8028;
  t13925 = 3.2*t13539*t13816;
  t13926 = 3.2*t9992*t13715;
  t13927 = 3.2*t9992*t13821;
  t13928 = 3.2*t9992*t13828;
  t13929 = t13906 + t13923 + t13924 + t13908 + t13925 + t13926 + t13927 + t13928;
  t13856 = -0.5*var2[5]*t13855;
  t13936 = -0.5*var2[5]*t13726;
  t13980 = 6.4*t13705*t13709;
  t13981 = 6.4*t13689*t13715;
  t13982 = t13980 + t13981;
  t13870 = 3.2*t9651*t13596;
  t13871 = 3.2*t10110*t13609;
  t13872 = t13869 + t13870 + t13871;
  t13895 = t13869 + t13893 + t13894;
  t13735 = t9161 + t13733 + t13734;
  t13947 = 3.2*t9651*t13771;
  t13948 = 3.2*t10110*t13780;
  t13949 = t13947 + t13948;
  t13916 = 3.2*t13788*t9992;
  t13917 = 3.2*t13792*t8028;
  t13918 = t13916 + t13893 + t13917 + t13894;
  t13789 = 3.2*t13788*t13556;
  t13793 = 3.2*t13792*t13612;
  t13794 = t13789 + t13733 + t13734 + t13793;
  t13964 = 3.2*t13792*t13705;
  t13965 = 3.2*t9651*t13816;
  t13966 = 3.2*t13788*t13715;
  t13967 = 3.2*t10110*t13828;
  t13968 = t13964 + t13965 + t13966 + t13967;
  t13858 = 0.748*t10218;
  t13859 = 3.2*t9651*t13556;
  t13860 = 3.2*t10110*t13612;
  t13861 = t13858 + t13859 + t13860;
  t10186 = -0.5*var2[5]*t10132;
  t13985 = 3.2*t10110*t13705;
  t13986 = 3.2*t9651*t13715;
  t13987 = t13985 + t13986;
  t14018 = -0.384*var2[0]*t13731;
  t14019 = -0.384*var2[1]*t13740;
  t13867 = -0.384*var2[5]*t13612;
  t13941 = -0.384*var2[5]*t8028;
  t13993 = -0.384*var2[5]*t13705;
  p_output1[0]=(t10186 + t13727 + t8388 - 0.5*(6.4*t13539*t13556 + t13622 + t13623 + t13649 + t13650 + 6.4*t13556*t8028 + 6.4*t13599*t9992 + 6.4*t13612*t9992)*var2[0] - 0.5*t13614*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t13732 - 0.5*(t13622 + t13623 + t13649 + t13650 + t13747 + t13748 + t13749 + t13751)*var2[0] - 0.5*t13744*var2[1] - 0.5*t13782*var2[2] - 0.5*t13735*var2[5]);
  p_output1[2]=var2[5]*(t13732 - 0.5*(t13747 + t13748 + t13749 + t13751)*var2[0] - 0.5*t13796*var2[1] - 0.5*t13830*var2[2] - 0.5*t13794*var2[5]);
  p_output1[3]=-0.5*t13838*var2[5];
  p_output1[4]=t13849;
  p_output1[5]=t13856;
  p_output1[6]=-0.5*t13838*var2[0] - 0.5*t13848*var2[1] - 0.5*t13855*var2[2] - 1.*t13861*var2[5] - 0.384*t13612*var2[6];
  p_output1[7]=t13867;
  p_output1[8]=var2[5]*(-0.5*t13614*var2[0] - 0.5*(6.4*t13539*t13596 + t13622 + t13623 + t13650 + t13875 + 6.4*t13596*t8028 + 6.4*t13570*t9992 + 6.4*t13609*t9992)*var2[1] - 0.5*t13888*var2[2] - 0.5*t13872*var2[5] - 0.384*t13609*var2[6]);
  p_output1[9]=var2[5]*(t13892 - 0.5*t13744*var2[0] - 0.5*(t13622 + t13623 + t13650 + t13875 + t13898 + t13899 + t13901 + t13902)*var2[1] - 0.5*t13912*var2[2] - 0.5*t13895*var2[5]);
  p_output1[10]=var2[5]*(t13892 - 0.5*t13796*var2[0] - 0.5*(t13898 + t13899 + t13901 + t13902)*var2[1] - 0.5*t13929*var2[2] - 0.5*t13918*var2[5]);
  p_output1[11]=t13849;
  p_output1[12]=-0.5*t13934*var2[5];
  p_output1[13]=t13936;
  p_output1[14]=t13727 + t8388 - 0.5*t13848*var2[0] - 0.5*t13934*var2[1] - 1.*t10132*var2[5];
  p_output1[15]=t13941;
  p_output1[16]=(-0.5*t13726*var2[0] - 0.5*t13888*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t13782*var2[0] - 0.5*t13912*var2[1] - 0.5*(6.4*Power(t13705,2) + 6.4*Power(t13715,2) + 6.4*t13689*t13771 + 6.4*t13709*t13780)*var2[2] - 0.5*t13949*var2[5] - 0.384*t13780*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t13830*var2[0] - 0.5*t13929*var2[1] - 0.5*(6.4*t13705*t13807 + 6.4*t13689*t13816 + 6.4*t13715*t13821 + 6.4*t13709*t13828)*var2[2] - 0.5*t13968*var2[5] - 0.384*t13828*var2[6]);
  p_output1[19]=t13856;
  p_output1[20]=t13936;
  p_output1[21]=-0.5*t13982*var2[5];
  p_output1[22]=-0.5*t13855*var2[0] - 0.5*t13726*var2[1] - 0.5*t13982*var2[2] - 1.*t13987*var2[5] - 0.384*t13705*var2[6];
  p_output1[23]=t13993;
  p_output1[24]=(-0.5*t10132*var2[0] - 0.5*t13872*var2[1])*var2[5];
  p_output1[25]=(-0.5*t13735*var2[0] - 0.5*t13895*var2[1] - 0.5*t13949*var2[2])*var2[5];
  p_output1[26]=(-0.5*t13794*var2[0] - 0.5*t13918*var2[1] - 0.5*t13968*var2[2])*var2[5];
  p_output1[27]=-0.5*t13861*var2[5];
  p_output1[28]=t10186;
  p_output1[29]=-0.5*t13987*var2[5];
  p_output1[30]=-0.5*t13861*var2[0] - 0.5*t10132*var2[1] - 0.5*t13987*var2[2];
  p_output1[31]=(-0.384*t8028*var2[0] - 0.384*t13609*var2[1])*var2[5];
  p_output1[32]=(t14018 + t14019 - 0.384*t13780*var2[2])*var2[5];
  p_output1[33]=(t14018 + t14019 - 0.384*t13828*var2[2])*var2[5];
  p_output1[34]=t13867;
  p_output1[35]=t13941;
  p_output1[36]=t13993;
  p_output1[37]=-0.384*t13612*var2[0] - 0.384*t8028*var2[1] - 0.384*t13705*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec6_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
