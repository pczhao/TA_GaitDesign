/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:06 GMT-04:00
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
  double t1213;
  double t1356;
  double t5372;
  double t2981;
  double t6778;
  double t6823;
  double t7005;
  double t7006;
  double t7019;
  double t7057;
  double t7059;
  double t7217;
  double t7226;
  double t7240;
  double t8245;
  double t8254;
  double t8318;
  double t7245;
  double t7289;
  double t7977;
  double t6811;
  double t6868;
  double t6875;
  double t8323;
  double t8525;
  double t9094;
  double t10651;
  double t10700;
  double t10749;
  double t10762;
  double t10794;
  double t10795;
  double t10799;
  double t10802;
  double t10822;
  double t10826;
  double t10842;
  double t10846;
  double t10859;
  double t10860;
  double t10863;
  double t10847;
  double t10848;
  double t10849;
  double t10750;
  double t10791;
  double t10792;
  double t10864;
  double t10871;
  double t10872;
  double t5932;
  double t5943;
  double t5950;
  double t6097;
  double t6661;
  double t8214;
  double t9098;
  double t9291;
  double t7020;
  double t10435;
  double t10591;
  double t10625;
  double t10728;
  double t10729;
  double t10730;
  double t10746;
  double t10747;
  double t10850;
  double t10877;
  double t10880;
  double t10800;
  double t10888;
  double t10889;
  double t10890;
  double t10933;
  double t10936;
  double t10937;
  double t10944;
  double t10945;
  double t10950;
  double t10953;
  double t10954;
  double t2955;
  double t5570;
  double t5782;
  double t6708;
  double t10903;
  double t10904;
  double t9308;
  double t10970;
  double t10971;
  double t10972;
  double t10899;
  double t10900;
  double t10901;
  double t10967;
  double t10968;
  double t10969;
  double t10973;
  double t10974;
  double t10895;
  double t10896;
  double t10897;
  double t10898;
  double t10990;
  double t10991;
  double t10957;
  double t10959;
  double t10961;
  double t10962;
  double t11009;
  double t11010;
  double t11011;
  double t11012;
  double t11013;
  double t11014;
  double t11015;
  double t10964;
  double t10965;
  double t10966;
  double t10978;
  double t10980;
  double t10983;
  double t10986;
  double t11026;
  double t11027;
  double t11028;
  double t10992;
  double t10994;
  double t10995;
  double t10996;
  double t10997;
  double t10998;
  double t10999;
  double t11046;
  double t11047;
  double t11048;
  double t11049;
  double t11050;
  double t11051;
  double t11052;
  double t11053;
  double t10655;
  double t10710;
  double t10724;
  double t10748;
  double t10918;
  double t10919;
  double t10882;
  double t11066;
  double t11067;
  double t11068;
  double t10914;
  double t10915;
  double t10916;
  double t11063;
  double t11064;
  double t11065;
  double t11069;
  double t11070;
  double t10906;
  double t10907;
  double t10910;
  double t10913;
  double t11082;
  double t11083;
  double t11055;
  double t11056;
  double t11057;
  double t11058;
  double t11101;
  double t11102;
  double t11103;
  double t11104;
  double t11105;
  double t11106;
  double t11107;
  double t11060;
  double t11061;
  double t11062;
  double t11074;
  double t11076;
  double t11077;
  double t11078;
  double t11118;
  double t11119;
  double t11120;
  double t11084;
  double t11086;
  double t11087;
  double t11088;
  double t11089;
  double t11090;
  double t11091;
  t1213 = Cos(var1[2]);
  t1356 = Cos(var1[3]);
  t5372 = Sin(var1[3]);
  t2981 = Sin(var1[2]);
  t6778 = Cos(var1[4]);
  t6823 = Sin(var1[4]);
  t7005 = t1356*t6778;
  t7006 = -1.*t5372*t6823;
  t7019 = t7005 + t7006;
  t7057 = -1.*t6778;
  t7059 = 1. + t7057;
  t7217 = 0.4*t7059;
  t7226 = 0.64*t6778;
  t7240 = t7217 + t7226;
  t8245 = -1.*t6778*t5372;
  t8254 = -1.*t1356*t6823;
  t8318 = t8245 + t8254;
  t7245 = t7240*t5372;
  t7289 = 0.24*t1356*t6823;
  t7977 = t7245 + t7289;
  t6811 = t6778*t5372;
  t6868 = t1356*t6823;
  t6875 = t6811 + t6868;
  t8323 = t1356*t7240;
  t8525 = -0.24*t5372*t6823;
  t9094 = t8323 + t8525;
  t10651 = Cos(var1[5]);
  t10700 = Sin(var1[5]);
  t10749 = Cos(var1[6]);
  t10762 = Sin(var1[6]);
  t10794 = t10651*t10749;
  t10795 = -1.*t10700*t10762;
  t10799 = t10794 + t10795;
  t10802 = -1.*t10749;
  t10822 = 1. + t10802;
  t10826 = 0.4*t10822;
  t10842 = 0.64*t10749;
  t10846 = t10826 + t10842;
  t10859 = -1.*t10749*t10700;
  t10860 = -1.*t10651*t10762;
  t10863 = t10859 + t10860;
  t10847 = t10846*t10700;
  t10848 = 0.24*t10651*t10762;
  t10849 = t10847 + t10848;
  t10750 = t10749*t10700;
  t10791 = t10651*t10762;
  t10792 = t10750 + t10791;
  t10864 = t10651*t10846;
  t10871 = -0.24*t10700*t10762;
  t10872 = t10864 + t10871;
  t5932 = Power(t1356,2);
  t5943 = 0.11*t5932;
  t5950 = Power(t5372,2);
  t6097 = 0.11*t5950;
  t6661 = t5943 + t6097;
  t8214 = -1.*t7977*t7019;
  t9098 = -1.*t8318*t9094;
  t9291 = t8214 + t9098;
  t7020 = -1.*t2981*t7019;
  t10435 = t7977*t6875;
  t10591 = t7019*t9094;
  t10625 = t10435 + t10591;
  t10728 = Power(t10651,2);
  t10729 = 0.11*t10728;
  t10730 = Power(t10700,2);
  t10746 = 0.11*t10730;
  t10747 = t10729 + t10746;
  t10850 = -1.*t10849*t10799;
  t10877 = -1.*t10863*t10872;
  t10880 = t10850 + t10877;
  t10800 = -1.*t2981*t10799;
  t10888 = t10849*t10792;
  t10889 = t10799*t10872;
  t10890 = t10888 + t10889;
  t10933 = -1.*t7240*t5372;
  t10936 = -0.24*t1356*t6823;
  t10937 = t10933 + t10936;
  t10944 = t10937*t7019;
  t10945 = t7977*t7019;
  t10950 = t8318*t9094;
  t10953 = t6875*t9094;
  t10954 = t10944 + t10945 + t10950 + t10953;
  t2955 = -1.*t1213*t1356;
  t5570 = t2981*t5372;
  t5782 = t2955 + t5570;
  t6708 = -6.8*t5782*t6661;
  t10903 = t1213*t8318;
  t10904 = t10903 + t7020;
  t9308 = -1.*t2981*t8318;
  t10970 = -1.*t1356*t6778;
  t10971 = t5372*t6823;
  t10972 = t10970 + t10971;
  t10899 = -1.*t2981*t6875;
  t10900 = t1213*t7019;
  t10901 = t10899 + t10900;
  t10967 = -1.*t8318*t10937;
  t10968 = -1.*t8318*t7977;
  t10969 = -1.*t7019*t9094;
  t10973 = -1.*t9094*t10972;
  t10974 = t10967 + t10968 + t10969 + t10973;
  t10895 = -1.*t1356*t2981;
  t10896 = -1.*t1213*t5372;
  t10897 = t10895 + t10896;
  t10898 = -6.8*t10897*t6661;
  t10990 = t2981*t8318;
  t10991 = t10990 + t10900;
  t10957 = t7240*t6778;
  t10959 = Power(t6823,2);
  t10961 = 0.24*t10959;
  t10962 = t10957 + t10961;
  t11009 = -0.24*t6778*t5372;
  t11010 = t11009 + t10936;
  t11011 = t11010*t7019;
  t11012 = 0.24*t1356*t6778;
  t11013 = t11012 + t8525;
  t11014 = t6875*t11013;
  t11015 = t11011 + t10945 + t10950 + t11014;
  t10964 = t7240*t6823;
  t10965 = -0.24*t6778*t6823;
  t10966 = t10964 + t10965;
  t10978 = -3.2*t10904*t9291;
  t10980 = t1213*t10972;
  t10983 = t9308 + t10980;
  t10986 = -3.2*t10625*t10983;
  t11026 = -1.*t8318*t11010;
  t11027 = -1.*t7019*t11013;
  t11028 = t11026 + t10968 + t11027 + t10973;
  t10992 = -3.2*t10991*t9291;
  t10994 = t2981*t10972;
  t10995 = t10903 + t10994;
  t10996 = -3.2*t10625*t10995;
  t10997 = t1213*t6875;
  t10998 = t2981*t7019;
  t10999 = t10997 + t10998;
  t11046 = -1.*t10846*t10700;
  t11047 = -0.24*t10651*t10762;
  t11048 = t11046 + t11047;
  t11049 = t11048*t10799;
  t11050 = t10849*t10799;
  t11051 = t10863*t10872;
  t11052 = t10792*t10872;
  t11053 = t11049 + t11050 + t11051 + t11052;
  t10655 = -1.*t1213*t10651;
  t10710 = t2981*t10700;
  t10724 = t10655 + t10710;
  t10748 = -6.8*t10724*t10747;
  t10918 = t1213*t10863;
  t10919 = t10918 + t10800;
  t10882 = -1.*t2981*t10863;
  t11066 = -1.*t10651*t10749;
  t11067 = t10700*t10762;
  t11068 = t11066 + t11067;
  t10914 = -1.*t2981*t10792;
  t10915 = t1213*t10799;
  t10916 = t10914 + t10915;
  t11063 = -1.*t10863*t11048;
  t11064 = -1.*t10863*t10849;
  t11065 = -1.*t10799*t10872;
  t11069 = -1.*t10872*t11068;
  t11070 = t11063 + t11064 + t11065 + t11069;
  t10906 = -1.*t10651*t2981;
  t10907 = -1.*t1213*t10700;
  t10910 = t10906 + t10907;
  t10913 = -6.8*t10910*t10747;
  t11082 = t2981*t10863;
  t11083 = t11082 + t10915;
  t11055 = t10846*t10749;
  t11056 = Power(t10762,2);
  t11057 = 0.24*t11056;
  t11058 = t11055 + t11057;
  t11101 = -0.24*t10749*t10700;
  t11102 = t11101 + t11047;
  t11103 = t11102*t10799;
  t11104 = 0.24*t10651*t10749;
  t11105 = t11104 + t10871;
  t11106 = t10792*t11105;
  t11107 = t11103 + t11050 + t11051 + t11106;
  t11060 = t10846*t10762;
  t11061 = -0.24*t10749*t10762;
  t11062 = t11060 + t11061;
  t11074 = -3.2*t10919*t10880;
  t11076 = t1213*t11068;
  t11077 = t10882 + t11076;
  t11078 = -3.2*t10890*t11077;
  t11118 = -1.*t10863*t11102;
  t11119 = -1.*t10799*t11105;
  t11120 = t11118 + t11064 + t11119 + t11069;
  t11084 = -3.2*t11083*t10880;
  t11086 = t2981*t11068;
  t11087 = t10918 + t11086;
  t11088 = -3.2*t10890*t11087;
  t11089 = t1213*t10792;
  t11090 = t2981*t10799;
  t11091 = t11089 + t11090;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t10898 - 3.2*t10625*t10904 + t10913 - 3.2*t10880*t10916 - 3.2*t10890*t10919 + 2.88*t2981 - 3.2*t10901*t9291)*var2[0] - 0.5*(t10748 + 2.88*t1213 - 3.2*t10880*(t10800 - 1.*t10792*t1213) - 3.2*t10890*(t10882 - 1.*t10799*t1213) + t6708 - 3.2*(-1.*t1213*t6875 + t7020)*t9291 - 3.2*t10625*(-1.*t1213*t7019 + t9308))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t10898 - 3.2*t10954*t10991 + t10992 + t10996 - 3.2*t10974*t10999)*var2[0] - 0.5*(-3.2*t10904*t10954 - 3.2*t10901*t10974 + t10978 + t10986 + t6708)*var2[1] - 0.5*(-6.4*t10625*t10954 - 6.4*t10974*t9291)*var2[2] - 0.5*(-3.2*t10954*t10962 - 3.2*t10966*t10974)*var2[3] + 0.384*t10954*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t10992 + t10996 - 3.2*t10991*t11015 - 3.2*t10999*t11028)*var2[0] - 0.5*(t10978 + t10986 - 3.2*t10904*t11015 - 3.2*t10901*t11028)*var2[1] - 0.5*(-6.4*t10625*t11015 - 6.4*t11028*t9291)*var2[2] - 0.5*(-3.2*t10962*t11015 - 3.2*t10966*t11028 - 3.2*t10625*(0.24*t6778*t6823 - 1.*t6823*t7240) - 3.2*(t10957 - 0.24*Power(t6778,2))*t9291)*var2[3] + 0.384*t11015*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t10913 - 3.2*t11053*t11083 + t11084 + t11088 - 3.2*t11070*t11091)*var2[0] - 0.5*(t10748 - 3.2*t10919*t11053 - 3.2*t10916*t11070 + t11074 + t11078)*var2[1] - 0.5*(-6.4*t10890*t11053 - 6.4*t10880*t11070)*var2[2] - 0.5*(-3.2*t11053*t11058 - 3.2*t11062*t11070)*var2[5] + 0.384*t11053*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t11084 + t11088 - 3.2*t11083*t11107 - 3.2*t11091*t11120)*var2[0] - 0.5*(t11074 + t11078 - 3.2*t10919*t11107 - 3.2*t10916*t11120)*var2[1] - 0.5*(-6.4*t10890*t11107 - 6.4*t10880*t11120)*var2[2] - 0.5*(-3.2*(0.24*t10749*t10762 - 1.*t10762*t10846)*t10890 - 3.2*t10880*(-0.24*Power(t10749,2) + t11055) - 3.2*t11058*t11107 - 3.2*t11062*t11120)*var2[5] + 0.384*t11107*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
