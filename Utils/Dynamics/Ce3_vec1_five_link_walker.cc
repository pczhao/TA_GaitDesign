/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:02 GMT-04:00
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
  double t11931;
  double t2068;
  double t2069;
  double t11980;
  double t11984;
  double t1910;
  double t11997;
  double t12030;
  double t12031;
  double t12044;
  double t12050;
  double t12051;
  double t12052;
  double t12053;
  double t5548;
  double t11981;
  double t11982;
  double t11983;
  double t12032;
  double t12033;
  double t12079;
  double t12076;
  double t12077;
  double t12080;
  double t12084;
  double t12085;
  double t12086;
  double t12094;
  double t12095;
  double t12096;
  double t12097;
  double t12098;
  double t12078;
  double t12081;
  double t12082;
  double t12083;
  double t12087;
  double t12088;
  double t12040;
  double t12041;
  double t12042;
  double t12116;
  double t12117;
  double t12118;
  double t12066;
  double t12062;
  double t12063;
  double t12064;
  double t12065;
  double t12067;
  double t12090;
  double t12091;
  double t12092;
  double t12131;
  double t12132;
  double t12133;
  double t12106;
  double t12102;
  double t12103;
  double t12104;
  double t12105;
  double t12107;
  double t12120;
  double t12121;
  double t12122;
  double t12124;
  double t12125;
  double t12127;
  double t12128;
  double t12129;
  double t12135;
  double t12136;
  double t12137;
  double t12139;
  double t12140;
  double t12142;
  double t12143;
  double t12144;
  double t12197;
  double t12198;
  double t12199;
  double t12201;
  double t12202;
  double t12203;
  double t12217;
  double t12218;
  double t12219;
  double t12221;
  double t12222;
  double t12223;
  double t12043;
  double t12059;
  double t12060;
  double t12061;
  double t12069;
  double t12070;
  double t12071;
  double t12072;
  double t12235;
  double t12236;
  double t12237;
  double t12238;
  double t12239;
  double t12119;
  double t12123;
  double t12148;
  double t12149;
  double t12150;
  double t12151;
  double t12152;
  double t12153;
  double t12154;
  double t12155;
  double t12156;
  double t12157;
  double t12191;
  double t12192;
  double t12193;
  double t12194;
  double t12195;
  double t12196;
  double t12200;
  double t12204;
  double t12205;
  double t12207;
  double t12208;
  double t12209;
  double t12258;
  double t12259;
  double t12260;
  double t12240;
  double t12241;
  double t12242;
  double t12245;
  double t12246;
  double t12249;
  double t12250;
  double t12251;
  double t12252;
  double t12253;
  double t12254;
  double t12257;
  double t12262;
  double t12263;
  double t12267;
  double t12292;
  double t12293;
  double t12269;
  double t12295;
  double t12296;
  double t12271;
  double t12093;
  double t12099;
  double t12100;
  double t12101;
  double t12109;
  double t12110;
  double t12111;
  double t12112;
  double t12308;
  double t12309;
  double t12310;
  double t12311;
  double t12312;
  double t12134;
  double t12138;
  double t12168;
  double t12169;
  double t12170;
  double t12171;
  double t12172;
  double t12173;
  double t12174;
  double t12175;
  double t12176;
  double t12177;
  double t12211;
  double t12212;
  double t12213;
  double t12214;
  double t12215;
  double t12216;
  double t12220;
  double t12224;
  double t12225;
  double t12227;
  double t12228;
  double t12229;
  double t12331;
  double t12332;
  double t12333;
  double t12313;
  double t12314;
  double t12315;
  double t12318;
  double t12319;
  double t12322;
  double t12323;
  double t12324;
  double t12325;
  double t12326;
  double t12327;
  double t12330;
  double t12335;
  double t12336;
  double t12340;
  double t12365;
  double t12366;
  double t12342;
  double t12368;
  double t12369;
  double t12344;
  t11931 = Cos(var1[3]);
  t2068 = Cos(var1[4]);
  t2069 = Sin(var1[3]);
  t11980 = Sin(var1[4]);
  t11984 = Sin(var1[2]);
  t1910 = Cos(var1[2]);
  t11997 = t11931*t2068;
  t12030 = -1.*t2069*t11980;
  t12031 = t11997 + t12030;
  t12044 = -1.*t2068;
  t12050 = 1. + t12044;
  t12051 = 0.4*t12050;
  t12052 = 0.64*t2068;
  t12053 = t12051 + t12052;
  t5548 = -1.*t2068*t2069;
  t11981 = -1.*t11931*t11980;
  t11982 = t5548 + t11981;
  t11983 = t1910*t11982;
  t12032 = -1.*t11984*t12031;
  t12033 = t11983 + t12032;
  t12079 = Cos(var1[5]);
  t12076 = Cos(var1[6]);
  t12077 = Sin(var1[5]);
  t12080 = Sin(var1[6]);
  t12084 = t12079*t12076;
  t12085 = -1.*t12077*t12080;
  t12086 = t12084 + t12085;
  t12094 = -1.*t12076;
  t12095 = 1. + t12094;
  t12096 = 0.4*t12095;
  t12097 = 0.64*t12076;
  t12098 = t12096 + t12097;
  t12078 = -1.*t12076*t12077;
  t12081 = -1.*t12079*t12080;
  t12082 = t12078 + t12081;
  t12083 = t1910*t12082;
  t12087 = -1.*t11984*t12086;
  t12088 = t12083 + t12087;
  t12040 = -1.*t11931*t11984;
  t12041 = -1.*t1910*t2069;
  t12042 = t12040 + t12041;
  t12116 = t1910*t11931;
  t12117 = -1.*t11984*t2069;
  t12118 = t12116 + t12117;
  t12066 = t1910*t12031;
  t12062 = t2068*t2069;
  t12063 = t11931*t11980;
  t12064 = t12062 + t12063;
  t12065 = -1.*t11984*t12064;
  t12067 = t12065 + t12066;
  t12090 = -1.*t12079*t11984;
  t12091 = -1.*t1910*t12077;
  t12092 = t12090 + t12091;
  t12131 = t1910*t12079;
  t12132 = -1.*t11984*t12077;
  t12133 = t12131 + t12132;
  t12106 = t1910*t12086;
  t12102 = t12076*t12077;
  t12103 = t12079*t12080;
  t12104 = t12102 + t12103;
  t12105 = -1.*t11984*t12104;
  t12107 = t12105 + t12106;
  t12120 = t11931*t11984;
  t12121 = t1910*t2069;
  t12122 = t12120 + t12121;
  t12124 = t11984*t11982;
  t12125 = t12124 + t12066;
  t12127 = t1910*t12064;
  t12128 = t11984*t12031;
  t12129 = t12127 + t12128;
  t12135 = t12079*t11984;
  t12136 = t1910*t12077;
  t12137 = t12135 + t12136;
  t12139 = t11984*t12082;
  t12140 = t12139 + t12106;
  t12142 = t1910*t12104;
  t12143 = t11984*t12086;
  t12144 = t12142 + t12143;
  t12197 = t12053*t2069;
  t12198 = 0.24*t11931*t11980;
  t12199 = t12197 + t12198;
  t12201 = t11931*t12053;
  t12202 = -0.24*t2069*t11980;
  t12203 = t12201 + t12202;
  t12217 = t12098*t12077;
  t12218 = 0.24*t12079*t12080;
  t12219 = t12217 + t12218;
  t12221 = t12079*t12098;
  t12222 = -0.24*t12077*t12080;
  t12223 = t12221 + t12222;
  t12043 = -0.748*t12042;
  t12059 = t12053*t11980;
  t12060 = -0.24*t2068*t11980;
  t12061 = t12059 + t12060;
  t12069 = t12053*t2068;
  t12070 = Power(t11980,2);
  t12071 = 0.24*t12070;
  t12072 = t12069 + t12071;
  t12235 = -1.*t11931*t2068;
  t12236 = t2069*t11980;
  t12237 = t12235 + t12236;
  t12238 = t11984*t12237;
  t12239 = t11983 + t12238;
  t12119 = -13.6*t12042*t12118;
  t12123 = -13.6*t12122*t12118;
  t12148 = Power(t12042,2);
  t12149 = -6.8*t12148;
  t12150 = -6.8*t12042*t12122;
  t12151 = Power(t12118,2);
  t12152 = -6.8*t12151;
  t12153 = -1.*t1910*t11931;
  t12154 = t11984*t2069;
  t12155 = t12153 + t12154;
  t12156 = -6.8*t12118*t12155;
  t12157 = -1.*t11984*t11982;
  t12191 = Power(t11931,2);
  t12192 = 0.11*t12191;
  t12193 = Power(t2069,2);
  t12194 = 0.11*t12193;
  t12195 = t12192 + t12194;
  t12196 = -6.8*t12042*t12195;
  t12200 = -1.*t12199*t12031;
  t12204 = -1.*t11982*t12203;
  t12205 = t12200 + t12204;
  t12207 = t12199*t12064;
  t12208 = t12031*t12203;
  t12209 = t12207 + t12208;
  t12258 = -1.*t12053*t2069;
  t12259 = -0.24*t11931*t11980;
  t12260 = t12258 + t12259;
  t12240 = 0.384*var2[4]*t12239;
  t12241 = -3.2*t12061*t12125;
  t12242 = -3.2*t12072*t12239;
  t12245 = -6.4*t12125*t12129;
  t12246 = -6.4*t12125*t12239;
  t12249 = -3.2*t12125*t12067;
  t12250 = -3.2*t12033*t12129;
  t12251 = t1910*t12237;
  t12252 = t12157 + t12251;
  t12253 = -3.2*t12125*t12252;
  t12254 = -3.2*t12033*t12239;
  t12257 = -3.2*t12125*t12205;
  t12262 = t12199*t12031;
  t12263 = t11982*t12203;
  t12267 = -3.2*t12209*t12239;
  t12292 = -0.24*t2068*t2069;
  t12293 = t12292 + t12259;
  t12269 = -1.*t11982*t12199;
  t12295 = 0.24*t11931*t2068;
  t12296 = t12295 + t12202;
  t12271 = -1.*t12203*t12237;
  t12093 = -0.748*t12092;
  t12099 = t12098*t12080;
  t12100 = -0.24*t12076*t12080;
  t12101 = t12099 + t12100;
  t12109 = t12098*t12076;
  t12110 = Power(t12080,2);
  t12111 = 0.24*t12110;
  t12112 = t12109 + t12111;
  t12308 = -1.*t12079*t12076;
  t12309 = t12077*t12080;
  t12310 = t12308 + t12309;
  t12311 = t11984*t12310;
  t12312 = t12083 + t12311;
  t12134 = -13.6*t12092*t12133;
  t12138 = -13.6*t12137*t12133;
  t12168 = Power(t12092,2);
  t12169 = -6.8*t12168;
  t12170 = -6.8*t12092*t12137;
  t12171 = Power(t12133,2);
  t12172 = -6.8*t12171;
  t12173 = -1.*t1910*t12079;
  t12174 = t11984*t12077;
  t12175 = t12173 + t12174;
  t12176 = -6.8*t12133*t12175;
  t12177 = -1.*t11984*t12082;
  t12211 = Power(t12079,2);
  t12212 = 0.11*t12211;
  t12213 = Power(t12077,2);
  t12214 = 0.11*t12213;
  t12215 = t12212 + t12214;
  t12216 = -6.8*t12092*t12215;
  t12220 = -1.*t12219*t12086;
  t12224 = -1.*t12082*t12223;
  t12225 = t12220 + t12224;
  t12227 = t12219*t12104;
  t12228 = t12086*t12223;
  t12229 = t12227 + t12228;
  t12331 = -1.*t12098*t12077;
  t12332 = -0.24*t12079*t12080;
  t12333 = t12331 + t12332;
  t12313 = 0.384*var2[6]*t12312;
  t12314 = -3.2*t12101*t12140;
  t12315 = -3.2*t12112*t12312;
  t12318 = -6.4*t12140*t12144;
  t12319 = -6.4*t12140*t12312;
  t12322 = -3.2*t12140*t12107;
  t12323 = -3.2*t12088*t12144;
  t12324 = t1910*t12310;
  t12325 = t12177 + t12324;
  t12326 = -3.2*t12140*t12325;
  t12327 = -3.2*t12088*t12312;
  t12330 = -3.2*t12140*t12225;
  t12335 = t12219*t12086;
  t12336 = t12082*t12223;
  t12340 = -3.2*t12229*t12312;
  t12365 = -0.24*t12076*t12077;
  t12366 = t12365 + t12332;
  t12342 = -1.*t12082*t12219;
  t12368 = 0.24*t12079*t12076;
  t12369 = t12368 + t12222;
  t12344 = -1.*t12223*t12310;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t12119 + t12123 - 6.4*t12033*t12125 - 6.4*t12067*t12129 + t12134 + t12138 - 6.4*t12088*t12140 - 6.4*t12107*t12144)*var2[0] - 0.5*(-3.2*Power(t12033,2) - 3.2*Power(t12067,2) - 3.2*Power(t12088,2) - 3.2*Power(t12107,2) + t12149 + t12150 + t12152 + t12156 + t12169 + t12170 + t12172 + t12176 - 3.2*t12125*(t12157 - 1.*t12031*t1910) - 3.2*t12129*(t12032 - 1.*t12064*t1910) - 3.2*t12140*(t12177 - 1.*t12086*t1910) - 3.2*t12144*(t12087 - 1.*t12104*t1910))*var2[1] - 0.5*(2.88*t11984 + t12196 - 3.2*t12067*t12205 - 3.2*t12033*t12209 + t12216 - 3.2*t12107*t12225 - 3.2*t12088*t12229)*var2[2] - 0.5*(t12043 - 3.2*t12061*t12067 - 3.2*t12033*t12072)*var2[3] + 0.384*t12033*var2[4] - 0.5*(t12093 - 3.2*t12101*t12107 - 3.2*t12088*t12112)*var2[5] + 0.384*t12088*var2[6]);
  p_output1[3]=var2[0]*(t12240 - 0.5*(t12119 + t12123 + t12245 + t12246)*var2[0] - 0.5*(t12149 + t12150 + t12152 + t12156 + t12249 + t12250 + t12253 + t12254)*var2[1] - 0.5*(t12196 + t12257 - 3.2*t12125*(t12064*t12203 + t12031*t12260 + t12262 + t12263) + t12267 - 3.2*t12129*(-1.*t12031*t12203 - 1.*t11982*t12260 + t12269 + t12271))*var2[2] - 0.5*(t12043 + t12241 + t12242)*var2[3]);
  p_output1[4]=var2[0]*(t12240 - 0.5*(t12245 + t12246)*var2[0] - 0.5*(t12249 + t12250 + t12253 + t12254)*var2[1] - 0.5*(t12257 + t12267 - 3.2*t12129*(t12269 + t12271 - 1.*t11982*t12293 - 1.*t12031*t12296) - 3.2*t12125*(t12262 + t12263 + t12031*t12293 + t12064*t12296))*var2[2] - 0.5*(t12241 + t12242 - 3.2*t12125*(-1.*t11980*t12053 + 0.24*t11980*t2068) - 3.2*t12129*(t12069 - 0.24*Power(t2068,2)))*var2[3]);
  p_output1[5]=var2[0]*(t12313 - 0.5*(t12134 + t12138 + t12318 + t12319)*var2[0] - 0.5*(t12169 + t12170 + t12172 + t12176 + t12322 + t12323 + t12326 + t12327)*var2[1] - 0.5*(t12216 + t12330 - 3.2*t12140*(t12104*t12223 + t12086*t12333 + t12335 + t12336) + t12340 - 3.2*t12144*(-1.*t12086*t12223 - 1.*t12082*t12333 + t12342 + t12344))*var2[2] - 0.5*(t12093 + t12314 + t12315)*var2[5]);
  p_output1[6]=var2[0]*(t12313 - 0.5*(t12318 + t12319)*var2[0] - 0.5*(t12322 + t12323 + t12326 + t12327)*var2[1] - 0.5*(t12330 + t12340 - 3.2*t12144*(t12342 + t12344 - 1.*t12082*t12366 - 1.*t12086*t12369) - 3.2*t12140*(t12335 + t12336 + t12086*t12366 + t12104*t12369))*var2[2] - 0.5*(-3.2*(0.24*t12076*t12080 - 1.*t12080*t12098)*t12140 - 3.2*(-0.24*Power(t12076,2) + t12109)*t12144 + t12314 + t12315)*var2[5]);
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

namespace SymFunction
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
