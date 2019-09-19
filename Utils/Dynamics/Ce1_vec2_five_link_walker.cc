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
  double t2576;
  double t105;
  double t1715;
  double t2598;
  double t104;
  double t5143;
  double t5147;
  double t5159;
  double t5172;
  double t10517;
  double t1748;
  double t2765;
  double t3590;
  double t10549;
  double t10561;
  double t10581;
  double t5085;
  double t10527;
  double t10685;
  double t10686;
  double t10708;
  double t10723;
  double t10724;
  double t10734;
  double t10743;
  double t10744;
  double t10745;
  double t10762;
  double t10763;
  double t10764;
  double t10592;
  double t10674;
  double t10684;
  double t10709;
  double t10710;
  double t10711;
  double t10712;
  double t10715;
  double t10735;
  double t10736;
  double t10737;
  double t10738;
  double t10739;
  double t10740;
  double t10756;
  double t10757;
  double t10758;
  double t10759;
  double t10760;
  double t10761;
  double t10765;
  double t10766;
  double t10767;
  double t10774;
  double t10775;
  double t10776;
  double t10821;
  double t10824;
  double t10827;
  double t10828;
  double t10829;
  double t10836;
  double t10837;
  double t10838;
  double t10874;
  double t10877;
  double t10875;
  double t10879;
  double t10881;
  double t10883;
  double t10884;
  double t10887;
  double t10893;
  double t10896;
  double t10897;
  double t10898;
  double t10912;
  double t10892;
  double t10894;
  double t10899;
  double t10900;
  double t10911;
  double t10915;
  double t10920;
  double t10921;
  double t10922;
  double t10882;
  double t10928;
  double t10929;
  double t10930;
  double t10830;
  double t10831;
  double t10832;
  double t10833;
  double t10834;
  double t10835;
  double t10859;
  double t10863;
  double t10864;
  double t10865;
  double t10870;
  double t10873;
  double t10926;
  double t10927;
  double t10931;
  double t10932;
  double t10933;
  double t10938;
  double t10943;
  double t10944;
  double t10953;
  double t10954;
  double t10957;
  double t10958;
  double t10779;
  double t10804;
  double t10818;
  double t10819;
  double t10890;
  double t10891;
  double t10918;
  double t10919;
  double t10963;
  double t10964;
  double t10969;
  double t10970;
  double t10983;
  double t10984;
  double t10985;
  double t10986;
  double t10987;
  double t10988;
  double t10989;
  double t10990;
  double t10992;
  double t10993;
  double t10994;
  double t10998;
  double t10999;
  double t11000;
  double t10991;
  double t10995;
  double t10996;
  double t10997;
  double t11002;
  double t11003;
  double t11007;
  double t11008;
  double t11009;
  double t11010;
  double t11019;
  double t11020;
  double t11012;
  double t11022;
  double t11023;
  double t11014;
  double t10977;
  double t10978;
  double t10979;
  double t10980;
  double t10981;
  double t10982;
  double t11042;
  double t11043;
  double t11044;
  double t11045;
  double t11046;
  double t11047;
  double t11048;
  double t11049;
  double t11051;
  double t11052;
  double t11053;
  double t11036;
  double t11037;
  double t11038;
  double t11039;
  double t11040;
  double t11041;
  double t11050;
  double t11054;
  double t11055;
  double t11057;
  double t11058;
  double t11059;
  double t11064;
  double t11065;
  double t11066;
  double t11063;
  double t11068;
  double t11069;
  double t11073;
  double t11082;
  double t11083;
  double t11075;
  double t11085;
  double t11086;
  double t11077;
  double t11098;
  double t11104;
  double t11105;
  double t11106;
  double t11099;
  double t11100;
  double t11101;
  double t11102;
  double t11110;
  double t11111;
  double t11131;
  double t11137;
  double t11138;
  double t11139;
  double t11132;
  double t11133;
  double t11134;
  double t11135;
  double t11143;
  double t11144;
  t2576 = Cos(var1[3]);
  t105 = Cos(var1[4]);
  t1715 = Sin(var1[3]);
  t2598 = Sin(var1[4]);
  t104 = Sin(var1[2]);
  t5143 = Cos(var1[2]);
  t5147 = t2576*t105;
  t5159 = -1.*t1715*t2598;
  t5172 = t5147 + t5159;
  t10517 = t5143*t5172;
  t1748 = -1.*t105*t1715;
  t2765 = -1.*t2576*t2598;
  t3590 = t1748 + t2765;
  t10549 = t105*t1715;
  t10561 = t2576*t2598;
  t10581 = t10549 + t10561;
  t5085 = t104*t3590;
  t10527 = t5085 + t10517;
  t10685 = t5143*t3590;
  t10686 = -1.*t104*t5172;
  t10708 = t10685 + t10686;
  t10723 = -1.*t2576*t105;
  t10724 = t1715*t2598;
  t10734 = t10723 + t10724;
  t10743 = -1.*t2576*t104;
  t10744 = -1.*t5143*t1715;
  t10745 = t10743 + t10744;
  t10762 = t5143*t2576;
  t10763 = -1.*t104*t1715;
  t10764 = t10762 + t10763;
  t10592 = -1.*t104*t10581;
  t10674 = t10592 + t10517;
  t10684 = 3.2*t10527*t10674;
  t10709 = t5143*t10581;
  t10710 = t104*t5172;
  t10711 = t10709 + t10710;
  t10712 = 3.2*t10708*t10711;
  t10715 = -1.*t104*t3590;
  t10735 = t5143*t10734;
  t10736 = t10715 + t10735;
  t10737 = 3.2*t10527*t10736;
  t10738 = t104*t10734;
  t10739 = t10685 + t10738;
  t10740 = 3.2*t10708*t10739;
  t10756 = Power(t10745,2);
  t10757 = 6.8*t10756;
  t10758 = t2576*t104;
  t10759 = t5143*t1715;
  t10760 = t10758 + t10759;
  t10761 = 6.8*t10745*t10760;
  t10765 = Power(t10764,2);
  t10766 = 6.8*t10765;
  t10767 = -1.*t5143*t2576;
  t10774 = t104*t1715;
  t10775 = t10767 + t10774;
  t10776 = 6.8*t10764*t10775;
  t10821 = Cos(var1[5]);
  t10824 = -1.*t10821*t104;
  t10827 = Sin(var1[5]);
  t10828 = -1.*t5143*t10827;
  t10829 = t10824 + t10828;
  t10836 = t5143*t10821;
  t10837 = -1.*t104*t10827;
  t10838 = t10836 + t10837;
  t10874 = Cos(var1[6]);
  t10877 = Sin(var1[6]);
  t10875 = -1.*t10874*t10827;
  t10879 = -1.*t10821*t10877;
  t10881 = t10875 + t10879;
  t10883 = t10821*t10874;
  t10884 = -1.*t10827*t10877;
  t10887 = t10883 + t10884;
  t10893 = t5143*t10887;
  t10896 = t10874*t10827;
  t10897 = t10821*t10877;
  t10898 = t10896 + t10897;
  t10912 = -1.*t104*t10887;
  t10892 = t104*t10881;
  t10894 = t10892 + t10893;
  t10899 = -1.*t104*t10898;
  t10900 = t10899 + t10893;
  t10911 = t5143*t10881;
  t10915 = t10911 + t10912;
  t10920 = t5143*t10898;
  t10921 = t104*t10887;
  t10922 = t10920 + t10921;
  t10882 = -1.*t104*t10881;
  t10928 = -1.*t10821*t10874;
  t10929 = t10827*t10877;
  t10930 = t10928 + t10929;
  t10830 = Power(t10829,2);
  t10831 = 6.8*t10830;
  t10832 = t10821*t104;
  t10833 = t5143*t10827;
  t10834 = t10832 + t10833;
  t10835 = 6.8*t10829*t10834;
  t10859 = Power(t10838,2);
  t10863 = 6.8*t10859;
  t10864 = -1.*t5143*t10821;
  t10865 = t104*t10827;
  t10870 = t10864 + t10865;
  t10873 = 6.8*t10838*t10870;
  t10926 = 3.2*t10894*t10900;
  t10927 = 3.2*t10915*t10922;
  t10931 = t5143*t10930;
  t10932 = t10882 + t10931;
  t10933 = 3.2*t10894*t10932;
  t10938 = t104*t10930;
  t10943 = t10911 + t10938;
  t10944 = 3.2*t10915*t10943;
  t10953 = 6.4*t10674*t10708;
  t10954 = 6.4*t10708*t10736;
  t10957 = 13.6*t10745*t10764;
  t10958 = 13.6*t10745*t10775;
  t10779 = -1.*t5143*t5172;
  t10804 = t10715 + t10779;
  t10818 = -1.*t5143*t10581;
  t10819 = t10818 + t10686;
  t10890 = -1.*t5143*t10887;
  t10891 = t10882 + t10890;
  t10918 = -1.*t5143*t10898;
  t10919 = t10918 + t10912;
  t10963 = 13.6*t10829*t10838;
  t10964 = 13.6*t10829*t10870;
  t10969 = 6.4*t10900*t10915;
  t10970 = 6.4*t10915*t10932;
  t10983 = -1.*t105;
  t10984 = 1. + t10983;
  t10985 = 0.4*t10984;
  t10986 = 0.64*t105;
  t10987 = t10985 + t10986;
  t10988 = t10987*t1715;
  t10989 = 0.24*t2576*t2598;
  t10990 = t10988 + t10989;
  t10992 = t2576*t10987;
  t10993 = -0.24*t1715*t2598;
  t10994 = t10992 + t10993;
  t10998 = -1.*t10987*t1715;
  t10999 = -0.24*t2576*t2598;
  t11000 = t10998 + t10999;
  t10991 = -1.*t10990*t5172;
  t10995 = -1.*t3590*t10994;
  t10996 = t10991 + t10995;
  t10997 = 3.2*t10708*t10996;
  t11002 = t10990*t5172;
  t11003 = t3590*t10994;
  t11007 = t10990*t10581;
  t11008 = t5172*t10994;
  t11009 = t11007 + t11008;
  t11010 = 3.2*t11009*t10736;
  t11019 = -0.24*t105*t1715;
  t11020 = t11019 + t10999;
  t11012 = -1.*t3590*t10990;
  t11022 = 0.24*t2576*t105;
  t11023 = t11022 + t10993;
  t11014 = -1.*t10994*t10734;
  t10977 = Power(t2576,2);
  t10978 = 0.11*t10977;
  t10979 = Power(t1715,2);
  t10980 = 0.11*t10979;
  t10981 = t10978 + t10980;
  t10982 = 6.8*t10775*t10981;
  t11042 = -1.*t10874;
  t11043 = 1. + t11042;
  t11044 = 0.4*t11043;
  t11045 = 0.64*t10874;
  t11046 = t11044 + t11045;
  t11047 = t11046*t10827;
  t11048 = 0.24*t10821*t10877;
  t11049 = t11047 + t11048;
  t11051 = t10821*t11046;
  t11052 = -0.24*t10827*t10877;
  t11053 = t11051 + t11052;
  t11036 = Power(t10821,2);
  t11037 = 0.11*t11036;
  t11038 = Power(t10827,2);
  t11039 = 0.11*t11038;
  t11040 = t11037 + t11039;
  t11041 = 6.8*t10870*t11040;
  t11050 = -1.*t11049*t10887;
  t11054 = -1.*t10881*t11053;
  t11055 = t11050 + t11054;
  t11057 = t11049*t10898;
  t11058 = t10887*t11053;
  t11059 = t11057 + t11058;
  t11064 = -1.*t11046*t10827;
  t11065 = -0.24*t10821*t10877;
  t11066 = t11064 + t11065;
  t11063 = 3.2*t10915*t11055;
  t11068 = t11049*t10887;
  t11069 = t10881*t11053;
  t11073 = 3.2*t11059*t10932;
  t11082 = -0.24*t10874*t10827;
  t11083 = t11082 + t11065;
  t11075 = -1.*t10881*t11049;
  t11085 = 0.24*t10821*t10874;
  t11086 = t11085 + t11052;
  t11077 = -1.*t11053*t10930;
  t11098 = 0.748*t10775;
  t11104 = t10987*t2598;
  t11105 = -0.24*t105*t2598;
  t11106 = t11104 + t11105;
  t11099 = t10987*t105;
  t11100 = Power(t2598,2);
  t11101 = 0.24*t11100;
  t11102 = t11099 + t11101;
  t11110 = 3.2*t11106*t10708;
  t11111 = 3.2*t11102*t10736;
  t11131 = 0.748*t10870;
  t11137 = t11046*t10877;
  t11138 = -0.24*t10874*t10877;
  t11139 = t11137 + t11138;
  t11132 = t11046*t10874;
  t11133 = Power(t10877,2);
  t11134 = 0.24*t11133;
  t11135 = t11132 + t11134;
  t11143 = 3.2*t11139*t10915;
  t11144 = 3.2*t11135*t10932;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t10674,2) + 3.2*Power(t10708,2) + t10757 + t10761 + t10766 + t10776 + 3.2*t10527*t10804 + 3.2*t10711*t10819 + t10831 + t10835 + t10863 + t10873 + 3.2*t10891*t10894 + 3.2*Power(t10900,2) + 3.2*Power(t10915,2) + 3.2*t10919*t10922)*var2[2] - 0.5*(t10684 + t10712 + t10737 + t10740 + t10757 + t10761 + t10766 + t10776)*var2[3] - 0.5*(t10684 + t10712 + t10737 + t10740)*var2[4] - 0.5*(t10831 + t10835 + t10863 + t10873 + t10926 + t10927 + t10933 + t10944)*var2[5] - 0.5*(t10926 + t10927 + t10933 + t10944)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(6.4*t10708*t10804 + 6.4*t10674*t10819 + 6.4*t10891*t10915 + 6.4*t10900*t10919 + t10957 + t10958 + t10963 + t10964)*var2[2] - 0.5*(t10953 + t10954 + t10957 + t10958)*var2[3] - 0.5*(t10953 + t10954)*var2[4] - 0.5*(t10963 + t10964 + t10969 + t10970)*var2[5] - 0.5*(t10969 + t10970)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(t10982 + 3.2*t10819*t10996 + 3.2*t10804*t11009 + t11041 + 3.2*t10919*t11055 + 3.2*t10891*t11059 - 2.88*t5143)*var2[2] - 0.5*(t10982 + t10997 + t11010 + 3.2*t10674*(t11012 + t11014 - 1.*t11000*t3590 - 1.*t10994*t5172) + 3.2*t10708*(t10581*t10994 + t11002 + t11003 + t11000*t5172))*var2[3] - 0.5*(t10997 + t11010 + 3.2*t10708*(t11002 + t11003 + t10581*t11023 + t11020*t5172) + 3.2*t10674*(t11012 + t11014 - 1.*t11020*t3590 - 1.*t11023*t5172))*var2[4] - 0.5*(t11041 + t11063 + 3.2*t10915*(t10898*t11053 + t10887*t11066 + t11068 + t11069) + t11073 + 3.2*t10900*(-1.*t10887*t11053 - 1.*t10881*t11066 + t11075 + t11077))*var2[5] - 0.5*(t11063 + t11073 + 3.2*t10900*(t11075 + t11077 - 1.*t10881*t11083 - 1.*t10887*t11086) + 3.2*t10915*(t11068 + t11069 + t10887*t11083 + t10898*t11086))*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t11098 + 3.2*t10804*t11102 + 3.2*t10819*t11106)*var2[2] - 0.5*(t11098 + t11110 + t11111)*var2[3] - 0.5*(3.2*t10674*(-0.24*Power(t105,2) + t11099) + t11110 + t11111 + 3.2*t10708*(0.24*t105*t2598 - 1.*t10987*t2598))*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t10804*var2[2] - 0.384*t10736*var2[3] - 0.384*t10736*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t11131 + 3.2*t10891*t11135 + 3.2*t10919*t11139)*var2[2] - 0.5*(t11131 + t11143 + t11144)*var2[5] - 0.5*(3.2*t10915*(0.24*t10874*t10877 - 1.*t10877*t11046) + 3.2*t10900*(-0.24*Power(t10874,2) + t11132) + t11143 + t11144)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t10891*var2[2] - 0.384*t10932*var2[5] - 0.384*t10932*var2[6]);
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

#include "Ce1_vec2_five_link_walker.hh"

namespace SymFunction
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
