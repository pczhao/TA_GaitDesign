/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:59 GMT-04:00
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
  double t2156;
  double t1967;
  double t2094;
  double t2240;
  double t208;
  double t5705;
  double t5735;
  double t5738;
  double t5740;
  double t5742;
  double t2106;
  double t2811;
  double t5447;
  double t5776;
  double t5817;
  double t5841;
  double t5554;
  double t5757;
  double t6627;
  double t6756;
  double t6772;
  double t6873;
  double t6874;
  double t6876;
  double t9456;
  double t9481;
  double t9538;
  double t9574;
  double t9659;
  double t9663;
  double t5845;
  double t6553;
  double t6562;
  double t6795;
  double t6809;
  double t6810;
  double t6836;
  double t6845;
  double t6877;
  double t7012;
  double t7014;
  double t7063;
  double t7093;
  double t7142;
  double t9539;
  double t9549;
  double t9550;
  double t9551;
  double t9552;
  double t9573;
  double t9664;
  double t9667;
  double t9668;
  double t9669;
  double t9675;
  double t9676;
  double t9730;
  double t9748;
  double t9749;
  double t9756;
  double t9770;
  double t9830;
  double t9831;
  double t9832;
  double t9870;
  double t9874;
  double t9873;
  double t9875;
  double t9876;
  double t9878;
  double t9879;
  double t9880;
  double t9884;
  double t9915;
  double t9916;
  double t9925;
  double t9936;
  double t9883;
  double t9910;
  double t9928;
  double t9929;
  double t9934;
  double t9937;
  double t9948;
  double t9949;
  double t9952;
  double t9877;
  double t9958;
  double t9959;
  double t9964;
  double t9771;
  double t9772;
  double t9773;
  double t9774;
  double t9775;
  double t9827;
  double t9837;
  double t9855;
  double t9861;
  double t9863;
  double t9864;
  double t9867;
  double t9956;
  double t9957;
  double t9969;
  double t9970;
  double t9971;
  double t9974;
  double t9975;
  double t9976;
  double t9983;
  double t9984;
  double t9987;
  double t9988;
  double t9682;
  double t9683;
  double t9724;
  double t9726;
  double t9881;
  double t9882;
  double t9942;
  double t9947;
  double t9997;
  double t10002;
  double t10009;
  double t10010;
  double t10023;
  double t10024;
  double t10025;
  double t10026;
  double t10027;
  double t10028;
  double t10029;
  double t10030;
  double t10032;
  double t10033;
  double t10034;
  double t10038;
  double t10039;
  double t10040;
  double t10031;
  double t10035;
  double t10036;
  double t10037;
  double t10042;
  double t10043;
  double t10047;
  double t10048;
  double t10049;
  double t10050;
  double t10059;
  double t10060;
  double t10052;
  double t10062;
  double t10063;
  double t10054;
  double t10017;
  double t10018;
  double t10019;
  double t10020;
  double t10021;
  double t10022;
  double t10082;
  double t10083;
  double t10084;
  double t10085;
  double t10086;
  double t10087;
  double t10088;
  double t10089;
  double t10091;
  double t10092;
  double t10093;
  double t10076;
  double t10077;
  double t10078;
  double t10079;
  double t10080;
  double t10081;
  double t10090;
  double t10094;
  double t10095;
  double t10097;
  double t10098;
  double t10099;
  double t10104;
  double t10105;
  double t10106;
  double t10103;
  double t10108;
  double t10109;
  double t10113;
  double t10122;
  double t10123;
  double t10115;
  double t10125;
  double t10126;
  double t10117;
  double t10138;
  double t10144;
  double t10145;
  double t10146;
  double t10139;
  double t10140;
  double t10141;
  double t10142;
  double t10150;
  double t10151;
  double t10171;
  double t10177;
  double t10178;
  double t10179;
  double t10172;
  double t10173;
  double t10174;
  double t10175;
  double t10183;
  double t10184;
  t2156 = Cos(var1[3]);
  t1967 = Cos(var1[4]);
  t2094 = Sin(var1[3]);
  t2240 = Sin(var1[4]);
  t208 = Sin(var1[2]);
  t5705 = Cos(var1[2]);
  t5735 = t2156*t1967;
  t5738 = -1.*t2094*t2240;
  t5740 = t5735 + t5738;
  t5742 = t5705*t5740;
  t2106 = -1.*t1967*t2094;
  t2811 = -1.*t2156*t2240;
  t5447 = t2106 + t2811;
  t5776 = t1967*t2094;
  t5817 = t2156*t2240;
  t5841 = t5776 + t5817;
  t5554 = t208*t5447;
  t5757 = t5554 + t5742;
  t6627 = t5705*t5447;
  t6756 = -1.*t208*t5740;
  t6772 = t6627 + t6756;
  t6873 = -1.*t2156*t1967;
  t6874 = t2094*t2240;
  t6876 = t6873 + t6874;
  t9456 = -1.*t2156*t208;
  t9481 = -1.*t5705*t2094;
  t9538 = t9456 + t9481;
  t9574 = t5705*t2156;
  t9659 = -1.*t208*t2094;
  t9663 = t9574 + t9659;
  t5845 = -1.*t208*t5841;
  t6553 = t5845 + t5742;
  t6562 = 3.2*t5757*t6553;
  t6795 = t5705*t5841;
  t6809 = t208*t5740;
  t6810 = t6795 + t6809;
  t6836 = 3.2*t6772*t6810;
  t6845 = -1.*t208*t5447;
  t6877 = t5705*t6876;
  t7012 = t6845 + t6877;
  t7014 = 3.2*t5757*t7012;
  t7063 = t208*t6876;
  t7093 = t6627 + t7063;
  t7142 = 3.2*t6772*t7093;
  t9539 = Power(t9538,2);
  t9549 = 6.8*t9539;
  t9550 = t2156*t208;
  t9551 = t5705*t2094;
  t9552 = t9550 + t9551;
  t9573 = 6.8*t9538*t9552;
  t9664 = Power(t9663,2);
  t9667 = 6.8*t9664;
  t9668 = -1.*t5705*t2156;
  t9669 = t208*t2094;
  t9675 = t9668 + t9669;
  t9676 = 6.8*t9663*t9675;
  t9730 = Cos(var1[5]);
  t9748 = -1.*t9730*t208;
  t9749 = Sin(var1[5]);
  t9756 = -1.*t5705*t9749;
  t9770 = t9748 + t9756;
  t9830 = t5705*t9730;
  t9831 = -1.*t208*t9749;
  t9832 = t9830 + t9831;
  t9870 = Cos(var1[6]);
  t9874 = Sin(var1[6]);
  t9873 = -1.*t9870*t9749;
  t9875 = -1.*t9730*t9874;
  t9876 = t9873 + t9875;
  t9878 = t9730*t9870;
  t9879 = -1.*t9749*t9874;
  t9880 = t9878 + t9879;
  t9884 = t5705*t9880;
  t9915 = t9870*t9749;
  t9916 = t9730*t9874;
  t9925 = t9915 + t9916;
  t9936 = -1.*t208*t9880;
  t9883 = t208*t9876;
  t9910 = t9883 + t9884;
  t9928 = -1.*t208*t9925;
  t9929 = t9928 + t9884;
  t9934 = t5705*t9876;
  t9937 = t9934 + t9936;
  t9948 = t5705*t9925;
  t9949 = t208*t9880;
  t9952 = t9948 + t9949;
  t9877 = -1.*t208*t9876;
  t9958 = -1.*t9730*t9870;
  t9959 = t9749*t9874;
  t9964 = t9958 + t9959;
  t9771 = Power(t9770,2);
  t9772 = 6.8*t9771;
  t9773 = t9730*t208;
  t9774 = t5705*t9749;
  t9775 = t9773 + t9774;
  t9827 = 6.8*t9770*t9775;
  t9837 = Power(t9832,2);
  t9855 = 6.8*t9837;
  t9861 = -1.*t5705*t9730;
  t9863 = t208*t9749;
  t9864 = t9861 + t9863;
  t9867 = 6.8*t9832*t9864;
  t9956 = 3.2*t9910*t9929;
  t9957 = 3.2*t9937*t9952;
  t9969 = t5705*t9964;
  t9970 = t9877 + t9969;
  t9971 = 3.2*t9910*t9970;
  t9974 = t208*t9964;
  t9975 = t9934 + t9974;
  t9976 = 3.2*t9937*t9975;
  t9983 = 6.4*t6553*t6772;
  t9984 = 6.4*t6772*t7012;
  t9987 = 13.6*t9538*t9663;
  t9988 = 13.6*t9538*t9675;
  t9682 = -1.*t5705*t5740;
  t9683 = t6845 + t9682;
  t9724 = -1.*t5705*t5841;
  t9726 = t9724 + t6756;
  t9881 = -1.*t5705*t9880;
  t9882 = t9877 + t9881;
  t9942 = -1.*t5705*t9925;
  t9947 = t9942 + t9936;
  t9997 = 13.6*t9770*t9832;
  t10002 = 13.6*t9770*t9864;
  t10009 = 6.4*t9929*t9937;
  t10010 = 6.4*t9937*t9970;
  t10023 = -1.*t1967;
  t10024 = 1. + t10023;
  t10025 = 0.4*t10024;
  t10026 = 0.64*t1967;
  t10027 = t10025 + t10026;
  t10028 = t10027*t2094;
  t10029 = 0.24*t2156*t2240;
  t10030 = t10028 + t10029;
  t10032 = t2156*t10027;
  t10033 = -0.24*t2094*t2240;
  t10034 = t10032 + t10033;
  t10038 = -1.*t10027*t2094;
  t10039 = -0.24*t2156*t2240;
  t10040 = t10038 + t10039;
  t10031 = -1.*t10030*t5740;
  t10035 = -1.*t5447*t10034;
  t10036 = t10031 + t10035;
  t10037 = 3.2*t6772*t10036;
  t10042 = t10030*t5740;
  t10043 = t5447*t10034;
  t10047 = t10030*t5841;
  t10048 = t5740*t10034;
  t10049 = t10047 + t10048;
  t10050 = 3.2*t10049*t7012;
  t10059 = -0.24*t1967*t2094;
  t10060 = t10059 + t10039;
  t10052 = -1.*t5447*t10030;
  t10062 = 0.24*t2156*t1967;
  t10063 = t10062 + t10033;
  t10054 = -1.*t10034*t6876;
  t10017 = Power(t2156,2);
  t10018 = 0.11*t10017;
  t10019 = Power(t2094,2);
  t10020 = 0.11*t10019;
  t10021 = t10018 + t10020;
  t10022 = 6.8*t9675*t10021;
  t10082 = -1.*t9870;
  t10083 = 1. + t10082;
  t10084 = 0.4*t10083;
  t10085 = 0.64*t9870;
  t10086 = t10084 + t10085;
  t10087 = t10086*t9749;
  t10088 = 0.24*t9730*t9874;
  t10089 = t10087 + t10088;
  t10091 = t9730*t10086;
  t10092 = -0.24*t9749*t9874;
  t10093 = t10091 + t10092;
  t10076 = Power(t9730,2);
  t10077 = 0.11*t10076;
  t10078 = Power(t9749,2);
  t10079 = 0.11*t10078;
  t10080 = t10077 + t10079;
  t10081 = 6.8*t9864*t10080;
  t10090 = -1.*t10089*t9880;
  t10094 = -1.*t9876*t10093;
  t10095 = t10090 + t10094;
  t10097 = t10089*t9925;
  t10098 = t9880*t10093;
  t10099 = t10097 + t10098;
  t10104 = -1.*t10086*t9749;
  t10105 = -0.24*t9730*t9874;
  t10106 = t10104 + t10105;
  t10103 = 3.2*t9937*t10095;
  t10108 = t10089*t9880;
  t10109 = t9876*t10093;
  t10113 = 3.2*t10099*t9970;
  t10122 = -0.24*t9870*t9749;
  t10123 = t10122 + t10105;
  t10115 = -1.*t9876*t10089;
  t10125 = 0.24*t9730*t9870;
  t10126 = t10125 + t10092;
  t10117 = -1.*t10093*t9964;
  t10138 = 0.748*t9675;
  t10144 = t10027*t2240;
  t10145 = -0.24*t1967*t2240;
  t10146 = t10144 + t10145;
  t10139 = t10027*t1967;
  t10140 = Power(t2240,2);
  t10141 = 0.24*t10140;
  t10142 = t10139 + t10141;
  t10150 = 3.2*t10146*t6772;
  t10151 = 3.2*t10142*t7012;
  t10171 = 0.748*t9864;
  t10177 = t10086*t9874;
  t10178 = -0.24*t9870*t9874;
  t10179 = t10177 + t10178;
  t10172 = t10086*t9870;
  t10173 = Power(t9874,2);
  t10174 = 0.24*t10173;
  t10175 = t10172 + t10174;
  t10183 = 3.2*t10179*t9937;
  t10184 = 3.2*t10175*t9970;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t6553,2) + 3.2*Power(t6772,2) + t9549 + t9573 + t9667 + t9676 + 3.2*t5757*t9683 + 3.2*t6810*t9726 + t9772 + t9827 + t9855 + t9867 + 3.2*t9882*t9910 + 3.2*Power(t9929,2) + 3.2*Power(t9937,2) + 3.2*t9947*t9952)*var2[2] - 0.5*(t6562 + t6836 + t7014 + t7142 + t9549 + t9573 + t9667 + t9676)*var2[3] - 0.5*(t6562 + t6836 + t7014 + t7142)*var2[4] - 0.5*(t9772 + t9827 + t9855 + t9867 + t9956 + t9957 + t9971 + t9976)*var2[5] - 0.5*(t9956 + t9957 + t9971 + t9976)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(t10002 + 6.4*t6772*t9683 + 6.4*t6553*t9726 + 6.4*t9882*t9937 + 6.4*t9929*t9947 + t9987 + t9988 + t9997)*var2[2] - 0.5*(t9983 + t9984 + t9987 + t9988)*var2[3] - 0.5*(t9983 + t9984)*var2[4] - 0.5*(t10002 + t10009 + t10010 + t9997)*var2[5] - 0.5*(t10009 + t10010)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(t10022 + t10081 - 2.88*t5705 + 3.2*t10049*t9683 + 3.2*t10036*t9726 + 3.2*t10099*t9882 + 3.2*t10095*t9947)*var2[2] - 0.5*(t10022 + t10037 + t10050 + 3.2*(t10052 + t10054 - 1.*t10040*t5447 - 1.*t10034*t5740)*t6553 + 3.2*(t10042 + t10043 + t10040*t5740 + t10034*t5841)*t6772)*var2[3] - 0.5*(t10037 + t10050 + 3.2*(t10052 + t10054 - 1.*t10060*t5447 - 1.*t10063*t5740)*t6553 + 3.2*(t10042 + t10043 + t10060*t5740 + t10063*t5841)*t6772)*var2[4] - 0.5*(t10081 + t10103 + t10113 + 3.2*(t10115 + t10117 - 1.*t10106*t9876 - 1.*t10093*t9880)*t9929 + 3.2*(t10108 + t10109 + t10106*t9880 + t10093*t9925)*t9937)*var2[5] - 0.5*(t10103 + t10113 + 3.2*(t10115 + t10117 - 1.*t10123*t9876 - 1.*t10126*t9880)*t9929 + 3.2*(t10108 + t10109 + t10123*t9880 + t10126*t9925)*t9937)*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t10138 + 3.2*t10142*t9683 + 3.2*t10146*t9726)*var2[2] - 0.5*(t10138 + t10150 + t10151)*var2[3] - 0.5*(t10150 + t10151 + 3.2*(t10139 - 0.24*Power(t1967,2))*t6553 + 3.2*(-1.*t10027*t2240 + 0.24*t1967*t2240)*t6772)*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t9683*var2[2] - 0.384*t7012*var2[3] - 0.384*t7012*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t10171 + 3.2*t10175*t9882 + 3.2*t10179*t9947)*var2[2] - 0.5*(t10171 + t10183 + t10184)*var2[5] - 0.5*(t10183 + t10184 + 3.2*(t10172 - 0.24*Power(t9870,2))*t9929 + 3.2*(-1.*t10086*t9874 + 0.24*t9870*t9874)*t9937)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t9882*var2[2] - 0.384*t9970*var2[5] - 0.384*t9970*var2[6]);
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

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
