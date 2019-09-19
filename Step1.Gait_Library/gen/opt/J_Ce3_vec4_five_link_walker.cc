/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:26 GMT-04:00
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
  double t6077;
  double t6024;
  double t6057;
  double t3272;
  double t6109;
  double t2980;
  double t6078;
  double t6095;
  double t6103;
  double t6106;
  double t6107;
  double t6308;
  double t6323;
  double t6331;
  double t6349;
  double t6361;
  double t6362;
  double t6363;
  double t6364;
  double t6379;
  double t6332;
  double t6108;
  double t6110;
  double t6111;
  double t6276;
  double t6282;
  double t6284;
  double t6285;
  double t5928;
  double t6063;
  double t6073;
  double t6074;
  double t6395;
  double t6286;
  double t6402;
  double t6408;
  double t6433;
  double t6434;
  double t6333;
  double t6695;
  double t10127;
  double t10135;
  double t10143;
  double t9558;
  double t9728;
  double t10069;
  double t10147;
  double t10162;
  double t10236;
  double t10628;
  double t10819;
  double t10825;
  double t10841;
  double t10766;
  double t10782;
  double t10784;
  double t6381;
  double t6396;
  double t10675;
  double t10731;
  double t10732;
  double t10786;
  double t10790;
  double t10798;
  double t6343;
  double t6397;
  double t6400;
  double t10878;
  double t10879;
  double t10883;
  double t10885;
  double t10887;
  double t10912;
  double t10928;
  double t10605;
  double t10624;
  double t10736;
  double t10742;
  double t10743;
  double t10761;
  double t6480;
  double t14635;
  double t14651;
  double t14652;
  double t14548;
  double t14555;
  double t14594;
  double t14692;
  double t14731;
  double t14736;
  double t14667;
  double t14670;
  double t14675;
  double t10943;
  double t10982;
  double t10985;
  double t11479;
  double t11576;
  double t14047;
  double t14262;
  double t14283;
  double t14514;
  double t14664;
  double t15075;
  double t15077;
  double t14801;
  double t14809;
  double t15081;
  double t15082;
  double t15151;
  double t15156;
  double t15005;
  double t15032;
  double t15033;
  double t15050;
  double t15058;
  double t15070;
  double t15072;
  double t15073;
  double t15178;
  double t15179;
  double t15180;
  double t15186;
  double t15194;
  double t15223;
  double t15335;
  double t15336;
  double t15342;
  double t15343;
  double t15344;
  double t10808;
  double t10845;
  double t10857;
  double t10858;
  double t10861;
  double t10862;
  double t10865;
  double t10866;
  double t10870;
  double t10873;
  double t15020;
  double t15021;
  double t15022;
  double t15031;
  double t15034;
  double t15035;
  double t15036;
  double t15049;
  double t15074;
  double t15078;
  double t15079;
  double t15139;
  double t15157;
  double t15158;
  double t15164;
  double t15171;
  double t15174;
  double t15202;
  double t15203;
  double t15205;
  double t15207;
  double t15208;
  double t15213;
  double t15214;
  double t15216;
  double t15217;
  double t15218;
  double t15219;
  double t15221;
  double t15222;
  double t15350;
  double t15354;
  double t15355;
  double t6826;
  double t15376;
  double t15381;
  double t15382;
  double t15384;
  double t15385;
  double t15387;
  double t15388;
  double t15389;
  double t15403;
  double t15404;
  double t15405;
  double t15415;
  double t15416;
  double t15417;
  double t15420;
  double t15421;
  double t15422;
  double t15423;
  double t15424;
  t6077 = Cos(var1[4]);
  t6024 = Sin(var1[2]);
  t6057 = Sin(var1[3]);
  t3272 = Cos(var1[3]);
  t6109 = Sin(var1[4]);
  t2980 = Cos(var1[2]);
  t6078 = -1.*t6077;
  t6095 = 1. + t6078;
  t6103 = 0.4*t6095;
  t6106 = 0.64*t6077;
  t6107 = t6103 + t6106;
  t6308 = t3272*t6077;
  t6323 = -1.*t6057*t6109;
  t6331 = t6308 + t6323;
  t6349 = t6107*t6109;
  t6361 = -0.24*t6077*t6109;
  t6362 = t6349 + t6361;
  t6363 = t6077*t6057;
  t6364 = t3272*t6109;
  t6379 = t6363 + t6364;
  t6332 = -1.*t2980*t6331;
  t6108 = t6107*t6077;
  t6110 = Power(t6109,2);
  t6111 = 0.24*t6110;
  t6276 = t6108 + t6111;
  t6282 = -1.*t6077*t6057;
  t6284 = -1.*t3272*t6109;
  t6285 = t6282 + t6284;
  t5928 = -1.*t2980*t3272;
  t6063 = t6024*t6057;
  t6073 = t5928 + t6063;
  t6074 = -0.748*t6073;
  t6395 = -1.*t6024*t6331;
  t6286 = -1.*t6024*t6285;
  t6402 = t3272*t6024;
  t6408 = t2980*t6057;
  t6433 = t6402 + t6408;
  t6434 = -0.748*t6433;
  t6333 = t6286 + t6332;
  t6695 = -1.*t2980*t6285;
  t10127 = -1.*t3272*t6077;
  t10135 = t6057*t6109;
  t10143 = t10127 + t10135;
  t9558 = t2980*t6285;
  t9728 = t9558 + t6395;
  t10069 = -3.2*t6362*t9728;
  t10147 = t2980*t10143;
  t10162 = t6286 + t10147;
  t10236 = -3.2*t6276*t10162;
  t10628 = -3.2*t6362*t6333;
  t10819 = -1.*t6107*t6109;
  t10825 = 0.24*t6077*t6109;
  t10841 = t10819 + t10825;
  t10766 = Power(t6077,2);
  t10782 = -0.24*t10766;
  t10784 = t6108 + t10782;
  t6381 = -1.*t2980*t6379;
  t6396 = t6381 + t6395;
  t10675 = -1.*t6024*t10143;
  t10731 = t6695 + t10675;
  t10732 = -3.2*t6276*t10731;
  t10786 = -1.*t6024*t6379;
  t10790 = t2980*t6331;
  t10798 = t10786 + t10790;
  t6343 = -3.2*t6276*t6333;
  t6397 = -3.2*t6362*t6396;
  t6400 = t6074 + t6343 + t6397;
  t10878 = -1.*t3272*t6024;
  t10879 = -1.*t2980*t6057;
  t10883 = t10878 + t10879;
  t10885 = -0.748*t10883;
  t10887 = -3.2*t6362*t10798;
  t10912 = -3.2*t6276*t9728;
  t10928 = t10885 + t10887 + t10912;
  t10605 = t6074 + t10069 + t10236;
  t10624 = -0.5*var2[0]*t10605;
  t10736 = t6434 + t10628 + t10732;
  t10742 = -0.5*var2[1]*t10736;
  t10743 = t10624 + t10742;
  t10761 = var2[3]*t10743;
  t6480 = t6024*t6379;
  t14635 = t3272*t6107;
  t14651 = -0.24*t6057*t6109;
  t14652 = t14635 + t14651;
  t14548 = -1.*t6107*t6057;
  t14555 = -0.24*t3272*t6109;
  t14594 = t14548 + t14555;
  t14692 = t6107*t6057;
  t14731 = 0.24*t3272*t6109;
  t14736 = t14692 + t14731;
  t14667 = -1.*t3272*t6107;
  t14670 = 0.24*t6057*t6109;
  t14675 = t14667 + t14670;
  t10943 = -3.2*t6362*t10162;
  t10982 = t2980*t6379;
  t10985 = t10982 + t10675;
  t11479 = -3.2*t6276*t10985;
  t11576 = t6480 + t10147;
  t14047 = -3.2*t6276*t11576;
  t14262 = t6024*t10143;
  t14283 = t9558 + t14262;
  t14514 = -3.2*t6362*t14283;
  t14664 = -1.*t6379*t14652;
  t15075 = -0.24*t6077*t6057;
  t15077 = t15075 + t14555;
  t14801 = -1.*t14736*t10143;
  t14809 = t6285*t14736;
  t15081 = 0.24*t3272*t6077;
  t15082 = t15081 + t14651;
  t15151 = -0.24*t3272*t6077;
  t15156 = t15151 + t14670;
  t15005 = t14652*t10143;
  t15032 = t6024*t6285;
  t15033 = t15032 + t10790;
  t15050 = t14594*t6331;
  t15058 = t14736*t6331;
  t15070 = t6285*t14652;
  t15072 = t6379*t14652;
  t15073 = t15050 + t15058 + t15070 + t15072;
  t15178 = -1.*t6285*t14594;
  t15179 = -1.*t6285*t14736;
  t15180 = -1.*t6331*t14652;
  t15186 = -1.*t14652*t10143;
  t15194 = t15178 + t15179 + t15180 + t15186;
  t15223 = -3.2*t6362*t15033;
  t15335 = -3.2*t6276*t14283;
  t15336 = t10885 + t15223 + t15335;
  t15342 = -3.2*t6276*t15073;
  t15343 = -3.2*t6362*t15194;
  t15344 = t15342 + t15343;
  t10808 = -3.2*t10784*t10798;
  t10845 = -3.2*t10841*t9728;
  t10857 = t10808 + t10069 + t10845 + t10236;
  t10858 = -0.5*var2[0]*t10857;
  t10861 = -3.2*t10841*t6333;
  t10862 = -3.2*t10784*t6396;
  t10865 = t10628 + t10861 + t10862 + t10732;
  t10866 = -0.5*var2[1]*t10865;
  t10870 = t10858 + t10866;
  t10873 = var2[3]*t10870;
  t15020 = -3.2*t10784*t9728;
  t15021 = -3.2*t10841*t10162;
  t15022 = t15020 + t10943 + t15021 + t11479;
  t15031 = -0.5*var2[1]*t15022;
  t15034 = -3.2*t10784*t15033;
  t15035 = -3.2*t10841*t14283;
  t15036 = t15034 + t14047 + t14514 + t15035;
  t15049 = -0.5*var2[0]*t15036;
  t15074 = -3.2*t10841*t15073;
  t15078 = -1.*t15077*t6331;
  t15079 = -1.*t6285*t14652;
  t15139 = -1.*t6285*t15082;
  t15157 = -1.*t6285*t15156;
  t15158 = -1.*t14594*t10143;
  t15164 = -1.*t15077*t10143;
  t15171 = t15078 + t15079 + t14664 + t15139 + t15157 + t15158 + t15164 + t14801;
  t15174 = -3.2*t6362*t15171;
  t15202 = -3.2*t10784*t15194;
  t15203 = t6285*t14594;
  t15205 = t6285*t15077;
  t15207 = t15077*t6379;
  t15208 = t6331*t14652;
  t15213 = t6331*t15082;
  t15214 = t6331*t15156;
  t15216 = t15203 + t15205 + t14809 + t15207 + t15208 + t15213 + t15214 + t15005;
  t15217 = -3.2*t6276*t15216;
  t15218 = t15074 + t15174 + t15202 + t15217;
  t15219 = -0.5*var2[2]*t15218;
  t15221 = t15031 + t15049 + t15219;
  t15222 = var2[3]*t15221;
  t15350 = -1.*t6107*t6077;
  t15354 = 0.24*t10766;
  t15355 = t15350 + t15354;
  t6826 = t6024*t6331;
  t15376 = t10982 + t6826;
  t15381 = -1.*t14736*t6331;
  t15382 = t15381 + t15079;
  t15384 = t14736*t6379;
  t15385 = t15384 + t15208;
  t15387 = t15077*t6331;
  t15388 = t6379*t15082;
  t15389 = t15387 + t15058 + t15070 + t15388;
  t15403 = -1.*t6285*t15077;
  t15404 = -1.*t6331*t15082;
  t15405 = t15403 + t15179 + t15404 + t15186;
  t15415 = -3.2*t10841*t15033;
  t15416 = -3.2*t10784*t15376;
  t15417 = t15223 + t15415 + t15416 + t15335;
  t15420 = -3.2*t10784*t15382;
  t15421 = -3.2*t10841*t15385;
  t15422 = -3.2*t6276*t15389;
  t15423 = -3.2*t6362*t15405;
  t15424 = t15420 + t15421 + t15422 + t15423;
  p_output1[0]=(-0.5*t6400*var2[0] - 0.5*(t6434 - 3.2*t6362*(t6332 + t6480) - 3.2*t6276*(t6695 + t6826))*var2[1])*var2[3];
  p_output1[1]=t10761;
  p_output1[2]=t10873;
  p_output1[3]=-0.5*t10928*var2[3];
  p_output1[4]=-0.5*t6400*var2[3];
  p_output1[5]=-0.5*t10928*var2[0] - 0.5*t6400*var2[1];
  p_output1[6]=t10761;
  p_output1[7]=(-0.5*(t14047 + t14514 + t6074)*var2[0] - 0.5*(t10943 + t11479 + t6434)*var2[1] - 0.5*(-3.2*(-2.*t10143*t14594 + t14664 + t14801 - 2.*t14652*t6285 - 1.*t14675*t6285 - 1.*t14594*t6331)*t6362 - 3.2*t6276*(t14809 + t15005 + 2.*t14594*t6285 + 2.*t14652*t6331 + t14675*t6331 + t14594*t6379))*var2[2])*var2[3];
  p_output1[8]=t15222;
  p_output1[9]=-0.5*t15336*var2[3];
  p_output1[10]=-0.5*t10605*var2[3];
  p_output1[11]=-0.5*t15344*var2[3];
  p_output1[12]=-0.5*t15336*var2[0] - 0.5*t10605*var2[1] - 0.5*t15344*var2[2];
  p_output1[13]=t10873;
  p_output1[14]=t15222;
  p_output1[15]=var2[3]*(-0.5*(t14047 - 6.4*t10841*t14283 + t14514 - 6.4*t10784*t15033 - 3.2*t15033*t15355 - 3.2*t10841*t15376)*var2[0] - 0.5*(-6.4*t10162*t10841 - 3.2*t10798*t10841 + t10943 + t11479 - 6.4*t10784*t9728 - 3.2*t15355*t9728)*var2[1] - 0.5*(-3.2*t10841*t15382 - 3.2*t15355*t15385 - 6.4*t10841*t15389 - 6.4*t10784*t15405 - 3.2*t6276*(t14809 + t15005 + t15207 + t15214 + 2.*t15077*t6285 + 2.*t15082*t6331) - 3.2*(t14664 + t14801 - 2.*t10143*t15077 + t15078 + t15157 - 2.*t15082*t6285)*t6362)*var2[2] - 0.5*(-6.4*Power(t10784,2) - 6.4*Power(t10841,2) - 6.4*t15355*t6276 - 6.4*t10841*t6362)*var2[3] + 0.384*t15355*var2[4]);
  p_output1[16]=-0.5*t15417*var2[3];
  p_output1[17]=-0.5*t10857*var2[3];
  p_output1[18]=-0.5*t15424*var2[3];
  p_output1[19]=-0.5*t15417*var2[0] - 0.5*t10857*var2[1] - 0.5*t15424*var2[2] - 1.*(-6.4*t10841*t6276 - 6.4*t10784*t6362)*var2[3] + 0.384*t10841*var2[4];
  p_output1[20]=0.384*t10841*var2[3];
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

#include "J_Ce3_vec4_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
