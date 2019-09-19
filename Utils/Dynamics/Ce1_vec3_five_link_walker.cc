/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:46:58 GMT-04:00
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
  double t3214;
  double t5064;
  double t5026;
  double t5035;
  double t10808;
  double t10814;
  double t10905;
  double t10910;
  double t10916;
  double t10809;
  double t10816;
  double t10820;
  double t10924;
  double t10925;
  double t10945;
  double t10948;
  double t10949;
  double t10895;
  double t10917;
  double t10923;
  double t10950;
  double t10951;
  double t10952;
  double t10956;
  double t10959;
  double t10960;
  double t10974;
  double t10975;
  double t10976;
  double t10966;
  double t10967;
  double t10968;
  double t11016;
  double t11017;
  double t11018;
  double t10955;
  double t10961;
  double t10962;
  double t10965;
  double t10972;
  double t10973;
  double t11006;
  double t11011;
  double t11013;
  double t11015;
  double t11021;
  double t11024;
  double t11025;
  double t11026;
  double t11027;
  double t11028;
  double t11060;
  double t11061;
  double t11030;
  double t11067;
  double t11070;
  double t11032;
  double t5033;
  double t5089;
  double t6316;
  double t6367;
  double t10741;
  double t10742;
  double t10777;
  double t10778;
  double t10807;
  double t11094;
  double t11096;
  double t11115;
  double t11117;
  double t11121;
  double t11122;
  double t11123;
  double t11126;
  double t11127;
  double t11128;
  double t11129;
  double t11130;
  double t11145;
  double t11146;
  double t11147;
  double t11136;
  double t11140;
  double t11141;
  double t11116;
  double t11118;
  double t11119;
  double t11148;
  double t11149;
  double t11150;
  double t11095;
  double t11097;
  double t11103;
  double t11107;
  double t11108;
  double t11109;
  double t11112;
  double t11113;
  double t11114;
  double t11124;
  double t11142;
  double t11151;
  double t11152;
  double t11163;
  double t11164;
  double t11157;
  double t11158;
  double t11159;
  double t11154;
  double t11166;
  double t11167;
  double t11168;
  double t11175;
  double t11176;
  double t11177;
  double t11165;
  double t11170;
  double t11171;
  double t11178;
  double t11179;
  double t11180;
  double t11181;
  double t11182;
  double t11183;
  double t11192;
  double t11193;
  double t11185;
  double t11195;
  double t11196;
  double t11187;
  double t11091;
  double t11092;
  double t10971;
  double t11001;
  double t11004;
  double t11088;
  double t11089;
  double t11029;
  double t11031;
  double t11033;
  double t11212;
  double t11062;
  double t11071;
  double t11072;
  double t11214;
  double t11215;
  double t11216;
  double t11217;
  double t11076;
  double t11078;
  double t11079;
  double t11208;
  double t11209;
  double t11210;
  double t11211;
  double t11155;
  double t11232;
  double t11233;
  double t11234;
  double t11235;
  double t11156;
  double t11169;
  double t11172;
  double t11173;
  double t11239;
  double t11120;
  double t11125;
  double t11184;
  double t11186;
  double t11188;
  double t11245;
  double t11194;
  double t11197;
  double t11198;
  double t11247;
  double t11248;
  double t11249;
  double t11200;
  double t11201;
  double t11202;
  double t11277;
  double t11278;
  double t11279;
  double t11280;
  double t11282;
  double t11283;
  double t11284;
  double t11306;
  double t11307;
  double t11308;
  double t11309;
  double t11311;
  double t11312;
  double t11313;
  t3214 = Cos(var1[3]);
  t5064 = Sin(var1[3]);
  t5026 = Sin(var1[2]);
  t5035 = Cos(var1[2]);
  t10808 = Cos(var1[4]);
  t10814 = Sin(var1[4]);
  t10905 = t3214*t10808;
  t10910 = -1.*t5064*t10814;
  t10916 = t10905 + t10910;
  t10809 = -1.*t10808*t5064;
  t10816 = -1.*t3214*t10814;
  t10820 = t10809 + t10816;
  t10924 = -1.*t10808;
  t10925 = 1. + t10924;
  t10945 = 0.4*t10925;
  t10948 = 0.64*t10808;
  t10949 = t10945 + t10948;
  t10895 = t5026*t10820;
  t10917 = t5035*t10916;
  t10923 = t10895 + t10917;
  t10950 = t10949*t5064;
  t10951 = 0.24*t3214*t10814;
  t10952 = t10950 + t10951;
  t10956 = t3214*t10949;
  t10959 = -0.24*t5064*t10814;
  t10960 = t10956 + t10959;
  t10974 = t10808*t5064;
  t10975 = t3214*t10814;
  t10976 = t10974 + t10975;
  t10966 = -1.*t10949*t5064;
  t10967 = -0.24*t3214*t10814;
  t10968 = t10966 + t10967;
  t11016 = -1.*t3214*t10808;
  t11017 = t5064*t10814;
  t11018 = t11016 + t11017;
  t10955 = -1.*t10952*t10916;
  t10961 = -1.*t10820*t10960;
  t10962 = t10955 + t10961;
  t10965 = 3.2*t10923*t10962;
  t10972 = t10952*t10916;
  t10973 = t10820*t10960;
  t11006 = t10952*t10976;
  t11011 = t10916*t10960;
  t11013 = t11006 + t11011;
  t11015 = t5035*t10820;
  t11021 = t5026*t11018;
  t11024 = t11015 + t11021;
  t11025 = 3.2*t11013*t11024;
  t11026 = t5035*t10976;
  t11027 = t5026*t10916;
  t11028 = t11026 + t11027;
  t11060 = -0.24*t10808*t5064;
  t11061 = t11060 + t10967;
  t11030 = -1.*t10820*t10952;
  t11067 = 0.24*t3214*t10808;
  t11070 = t11067 + t10959;
  t11032 = -1.*t10960*t11018;
  t5033 = -1.*t3214*t5026;
  t5089 = -1.*t5035*t5064;
  t6316 = t5033 + t5089;
  t6367 = Power(t3214,2);
  t10741 = 0.11*t6367;
  t10742 = Power(t5064,2);
  t10777 = 0.11*t10742;
  t10778 = t10741 + t10777;
  t10807 = 6.8*t6316*t10778;
  t11094 = Cos(var1[5]);
  t11096 = Sin(var1[5]);
  t11115 = Cos(var1[6]);
  t11117 = Sin(var1[6]);
  t11121 = t11094*t11115;
  t11122 = -1.*t11096*t11117;
  t11123 = t11121 + t11122;
  t11126 = -1.*t11115;
  t11127 = 1. + t11126;
  t11128 = 0.4*t11127;
  t11129 = 0.64*t11115;
  t11130 = t11128 + t11129;
  t11145 = -1.*t11115*t11096;
  t11146 = -1.*t11094*t11117;
  t11147 = t11145 + t11146;
  t11136 = t11130*t11096;
  t11140 = 0.24*t11094*t11117;
  t11141 = t11136 + t11140;
  t11116 = t11115*t11096;
  t11118 = t11094*t11117;
  t11119 = t11116 + t11118;
  t11148 = t11094*t11130;
  t11149 = -0.24*t11096*t11117;
  t11150 = t11148 + t11149;
  t11095 = -1.*t11094*t5026;
  t11097 = -1.*t5035*t11096;
  t11103 = t11095 + t11097;
  t11107 = Power(t11094,2);
  t11108 = 0.11*t11107;
  t11109 = Power(t11096,2);
  t11112 = 0.11*t11109;
  t11113 = t11108 + t11112;
  t11114 = 6.8*t11103*t11113;
  t11124 = t5035*t11123;
  t11142 = -1.*t11141*t11123;
  t11151 = -1.*t11147*t11150;
  t11152 = t11142 + t11151;
  t11163 = t5026*t11147;
  t11164 = t11163 + t11124;
  t11157 = t11141*t11119;
  t11158 = t11123*t11150;
  t11159 = t11157 + t11158;
  t11154 = t5035*t11147;
  t11166 = -1.*t11130*t11096;
  t11167 = -0.24*t11094*t11117;
  t11168 = t11166 + t11167;
  t11175 = -1.*t11094*t11115;
  t11176 = t11096*t11117;
  t11177 = t11175 + t11176;
  t11165 = 3.2*t11164*t11152;
  t11170 = t11141*t11123;
  t11171 = t11147*t11150;
  t11178 = t5026*t11177;
  t11179 = t11154 + t11178;
  t11180 = 3.2*t11159*t11179;
  t11181 = t5035*t11119;
  t11182 = t5026*t11123;
  t11183 = t11181 + t11182;
  t11192 = -0.24*t11115*t11096;
  t11193 = t11192 + t11167;
  t11185 = -1.*t11147*t11141;
  t11195 = 0.24*t11094*t11115;
  t11196 = t11195 + t11149;
  t11187 = -1.*t11150*t11177;
  t11091 = -1.*t5026*t10916;
  t11092 = t11015 + t11091;
  t10971 = t10968*t10916;
  t11001 = t10976*t10960;
  t11004 = t10971 + t10972 + t10973 + t11001;
  t11088 = -1.*t5026*t10976;
  t11089 = t11088 + t10917;
  t11029 = -1.*t10820*t10968;
  t11031 = -1.*t10916*t10960;
  t11033 = t11029 + t11030 + t11031 + t11032;
  t11212 = 3.2*t11092*t10962;
  t11062 = t11061*t10916;
  t11071 = t10976*t11070;
  t11072 = t11062 + t10972 + t10973 + t11071;
  t11214 = -1.*t5026*t10820;
  t11215 = t5035*t11018;
  t11216 = t11214 + t11215;
  t11217 = 3.2*t11013*t11216;
  t11076 = -1.*t10820*t11061;
  t11078 = -1.*t10916*t11070;
  t11079 = t11076 + t11030 + t11078 + t11032;
  t11208 = -1.*t5035*t3214;
  t11209 = t5026*t5064;
  t11210 = t11208 + t11209;
  t11211 = 6.8*t11210*t10778;
  t11155 = -1.*t5026*t11123;
  t11232 = -1.*t5035*t11094;
  t11233 = t5026*t11096;
  t11234 = t11232 + t11233;
  t11235 = 6.8*t11234*t11113;
  t11156 = t11154 + t11155;
  t11169 = t11168*t11123;
  t11172 = t11119*t11150;
  t11173 = t11169 + t11170 + t11171 + t11172;
  t11239 = -1.*t5026*t11147;
  t11120 = -1.*t5026*t11119;
  t11125 = t11120 + t11124;
  t11184 = -1.*t11147*t11168;
  t11186 = -1.*t11123*t11150;
  t11188 = t11184 + t11185 + t11186 + t11187;
  t11245 = 3.2*t11156*t11152;
  t11194 = t11193*t11123;
  t11197 = t11119*t11196;
  t11198 = t11194 + t11170 + t11171 + t11197;
  t11247 = t5035*t11177;
  t11248 = t11239 + t11247;
  t11249 = 3.2*t11159*t11248;
  t11200 = -1.*t11147*t11193;
  t11201 = -1.*t11123*t11196;
  t11202 = t11200 + t11185 + t11201 + t11187;
  t11277 = t10949*t10808;
  t11278 = Power(t10814,2);
  t11279 = 0.24*t11278;
  t11280 = t11277 + t11279;
  t11282 = t10949*t10814;
  t11283 = -0.24*t10808*t10814;
  t11284 = t11282 + t11283;
  t11306 = t11130*t11115;
  t11307 = Power(t11117,2);
  t11308 = 0.24*t11307;
  t11309 = t11306 + t11308;
  t11311 = t11130*t11117;
  t11312 = -0.24*t11115*t11117;
  t11313 = t11311 + t11312;
  p_output1[0]=var2[2]*(-0.5*(t10807 + 3.2*t10962*t11089 + 3.2*t11013*t11092 + t11114 + 3.2*t11125*t11152 + 3.2*t11156*t11159 - 2.88*t5026)*var2[2] - 0.5*(t10807 + t10965 + 3.2*t10923*t11004 + t11025 + 3.2*t11028*t11033)*var2[3] - 0.5*(t10965 + t11025 + 3.2*t10923*t11072 + 3.2*t11028*t11079)*var2[4] - 0.5*(t11114 + t11165 + 3.2*t11164*t11173 + t11180 + 3.2*t11183*t11188)*var2[5] - 0.5*(t11165 + t11180 + 3.2*t11164*t11198 + 3.2*t11183*t11202)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t11211 + t11235 - 2.88*t5035 + 3.2*t11013*(t11214 - 1.*t10916*t5035) + 3.2*t10962*(t11091 - 1.*t10976*t5035) + 3.2*t11152*(t11155 - 1.*t11119*t5035) + 3.2*t11159*(t11239 - 1.*t11123*t5035))*var2[2] - 0.5*(3.2*t11033*t11089 + 3.2*t11004*t11092 + t11211 + t11212 + t11217)*var2[3] - 0.5*(3.2*t11079*t11089 + 3.2*t11072*t11092 + t11212 + t11217)*var2[4] - 0.5*(3.2*t11156*t11173 + 3.2*t11125*t11188 + t11235 + t11245 + t11249)*var2[5] - 0.5*(3.2*t11156*t11198 + 3.2*t11125*t11202 + t11245 + t11249)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t11004*t11013 + 6.4*t10962*t11033)*var2[3] - 0.5*(6.4*t11013*t11072 + 6.4*t10962*t11079)*var2[4] - 0.5*(6.4*t11159*t11173 + 6.4*t11152*t11188)*var2[5] - 0.5*(6.4*t11159*t11198 + 6.4*t11152*t11202)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t11004*t11280 + 3.2*t11033*t11284)*var2[3] - 0.5*(3.2*(0.24*t10808*t10814 - 1.*t10814*t10949)*t11013 + 3.2*t10962*(-0.24*Power(t10808,2) + t11277) + 3.2*t11072*t11280 + 3.2*t11079*t11284)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t11004*var2[3] - 0.384*t11072*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t11173*t11309 + 3.2*t11188*t11313)*var2[5] - 0.5*(3.2*(0.24*t11115*t11117 - 1.*t11117*t11130)*t11159 + 3.2*t11152*(-0.24*Power(t11115,2) + t11306) + 3.2*t11198*t11309 + 3.2*t11202*t11313)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t11173*var2[5] - 0.384*t11198*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace SymFunction
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
