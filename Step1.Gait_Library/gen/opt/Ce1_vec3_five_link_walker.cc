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
  double t2034;
  double t5651;
  double t2209;
  double t5547;
  double t5870;
  double t6480;
  double t6918;
  double t6983;
  double t6992;
  double t5880;
  double t6481;
  double t6842;
  double t7280;
  double t8462;
  double t9081;
  double t9448;
  double t9680;
  double t6879;
  double t7177;
  double t7211;
  double t9681;
  double t9712;
  double t9716;
  double t9718;
  double t9722;
  double t9728;
  double t9978;
  double t9979;
  double t9980;
  double t9938;
  double t9939;
  double t9953;
  double t9992;
  double t10003;
  double t10004;
  double t9717;
  double t9914;
  double t9930;
  double t9932;
  double t9955;
  double t9977;
  double t9986;
  double t9989;
  double t9990;
  double t9991;
  double t10007;
  double t10008;
  double t10011;
  double t10012;
  double t10013;
  double t10014;
  double t10055;
  double t10056;
  double t10016;
  double t10058;
  double t10061;
  double t10044;
  double t2992;
  double t5686;
  double t5723;
  double t5726;
  double t5763;
  double t5794;
  double t5807;
  double t5818;
  double t5833;
  double t10107;
  double t10111;
  double t10127;
  double t10129;
  double t10133;
  double t10134;
  double t10135;
  double t10143;
  double t10147;
  double t10148;
  double t10149;
  double t10152;
  double t10157;
  double t10158;
  double t10159;
  double t10153;
  double t10154;
  double t10155;
  double t10128;
  double t10130;
  double t10131;
  double t10160;
  double t10161;
  double t10162;
  double t10110;
  double t10112;
  double t10114;
  double t10116;
  double t10118;
  double t10119;
  double t10120;
  double t10121;
  double t10124;
  double t10136;
  double t10156;
  double t10163;
  double t10164;
  double t10185;
  double t10186;
  double t10169;
  double t10170;
  double t10176;
  double t10166;
  double t10188;
  double t10189;
  double t10190;
  double t10197;
  double t10198;
  double t10199;
  double t10187;
  double t10192;
  double t10193;
  double t10200;
  double t10201;
  double t10202;
  double t10203;
  double t10204;
  double t10205;
  double t10214;
  double t10215;
  double t10207;
  double t10217;
  double t10218;
  double t10209;
  double t10100;
  double t10101;
  double t9954;
  double t9981;
  double t9982;
  double t10074;
  double t10075;
  double t10015;
  double t10041;
  double t10045;
  double t10234;
  double t10057;
  double t10064;
  double t10065;
  double t10236;
  double t10237;
  double t10238;
  double t10239;
  double t10067;
  double t10068;
  double t10069;
  double t10230;
  double t10231;
  double t10232;
  double t10233;
  double t10167;
  double t10254;
  double t10255;
  double t10256;
  double t10257;
  double t10168;
  double t10191;
  double t10194;
  double t10195;
  double t10261;
  double t10132;
  double t10137;
  double t10206;
  double t10208;
  double t10210;
  double t10267;
  double t10216;
  double t10219;
  double t10220;
  double t10269;
  double t10270;
  double t10271;
  double t10222;
  double t10223;
  double t10224;
  double t10299;
  double t10300;
  double t10301;
  double t10302;
  double t10304;
  double t10305;
  double t10306;
  double t10328;
  double t10329;
  double t10330;
  double t10331;
  double t10333;
  double t10334;
  double t10335;
  t2034 = Cos(var1[3]);
  t5651 = Sin(var1[3]);
  t2209 = Sin(var1[2]);
  t5547 = Cos(var1[2]);
  t5870 = Cos(var1[4]);
  t6480 = Sin(var1[4]);
  t6918 = t2034*t5870;
  t6983 = -1.*t5651*t6480;
  t6992 = t6918 + t6983;
  t5880 = -1.*t5870*t5651;
  t6481 = -1.*t2034*t6480;
  t6842 = t5880 + t6481;
  t7280 = -1.*t5870;
  t8462 = 1. + t7280;
  t9081 = 0.4*t8462;
  t9448 = 0.64*t5870;
  t9680 = t9081 + t9448;
  t6879 = t2209*t6842;
  t7177 = t5547*t6992;
  t7211 = t6879 + t7177;
  t9681 = t9680*t5651;
  t9712 = 0.24*t2034*t6480;
  t9716 = t9681 + t9712;
  t9718 = t2034*t9680;
  t9722 = -0.24*t5651*t6480;
  t9728 = t9718 + t9722;
  t9978 = t5870*t5651;
  t9979 = t2034*t6480;
  t9980 = t9978 + t9979;
  t9938 = -1.*t9680*t5651;
  t9939 = -0.24*t2034*t6480;
  t9953 = t9938 + t9939;
  t9992 = -1.*t2034*t5870;
  t10003 = t5651*t6480;
  t10004 = t9992 + t10003;
  t9717 = -1.*t9716*t6992;
  t9914 = -1.*t6842*t9728;
  t9930 = t9717 + t9914;
  t9932 = 3.2*t7211*t9930;
  t9955 = t9716*t6992;
  t9977 = t6842*t9728;
  t9986 = t9716*t9980;
  t9989 = t6992*t9728;
  t9990 = t9986 + t9989;
  t9991 = t5547*t6842;
  t10007 = t2209*t10004;
  t10008 = t9991 + t10007;
  t10011 = 3.2*t9990*t10008;
  t10012 = t5547*t9980;
  t10013 = t2209*t6992;
  t10014 = t10012 + t10013;
  t10055 = -0.24*t5870*t5651;
  t10056 = t10055 + t9939;
  t10016 = -1.*t6842*t9716;
  t10058 = 0.24*t2034*t5870;
  t10061 = t10058 + t9722;
  t10044 = -1.*t9728*t10004;
  t2992 = -1.*t2034*t2209;
  t5686 = -1.*t5547*t5651;
  t5723 = t2992 + t5686;
  t5726 = Power(t2034,2);
  t5763 = 0.11*t5726;
  t5794 = Power(t5651,2);
  t5807 = 0.11*t5794;
  t5818 = t5763 + t5807;
  t5833 = 6.8*t5723*t5818;
  t10107 = Cos(var1[5]);
  t10111 = Sin(var1[5]);
  t10127 = Cos(var1[6]);
  t10129 = Sin(var1[6]);
  t10133 = t10107*t10127;
  t10134 = -1.*t10111*t10129;
  t10135 = t10133 + t10134;
  t10143 = -1.*t10127;
  t10147 = 1. + t10143;
  t10148 = 0.4*t10147;
  t10149 = 0.64*t10127;
  t10152 = t10148 + t10149;
  t10157 = -1.*t10127*t10111;
  t10158 = -1.*t10107*t10129;
  t10159 = t10157 + t10158;
  t10153 = t10152*t10111;
  t10154 = 0.24*t10107*t10129;
  t10155 = t10153 + t10154;
  t10128 = t10127*t10111;
  t10130 = t10107*t10129;
  t10131 = t10128 + t10130;
  t10160 = t10107*t10152;
  t10161 = -0.24*t10111*t10129;
  t10162 = t10160 + t10161;
  t10110 = -1.*t10107*t2209;
  t10112 = -1.*t5547*t10111;
  t10114 = t10110 + t10112;
  t10116 = Power(t10107,2);
  t10118 = 0.11*t10116;
  t10119 = Power(t10111,2);
  t10120 = 0.11*t10119;
  t10121 = t10118 + t10120;
  t10124 = 6.8*t10114*t10121;
  t10136 = t5547*t10135;
  t10156 = -1.*t10155*t10135;
  t10163 = -1.*t10159*t10162;
  t10164 = t10156 + t10163;
  t10185 = t2209*t10159;
  t10186 = t10185 + t10136;
  t10169 = t10155*t10131;
  t10170 = t10135*t10162;
  t10176 = t10169 + t10170;
  t10166 = t5547*t10159;
  t10188 = -1.*t10152*t10111;
  t10189 = -0.24*t10107*t10129;
  t10190 = t10188 + t10189;
  t10197 = -1.*t10107*t10127;
  t10198 = t10111*t10129;
  t10199 = t10197 + t10198;
  t10187 = 3.2*t10186*t10164;
  t10192 = t10155*t10135;
  t10193 = t10159*t10162;
  t10200 = t2209*t10199;
  t10201 = t10166 + t10200;
  t10202 = 3.2*t10176*t10201;
  t10203 = t5547*t10131;
  t10204 = t2209*t10135;
  t10205 = t10203 + t10204;
  t10214 = -0.24*t10127*t10111;
  t10215 = t10214 + t10189;
  t10207 = -1.*t10159*t10155;
  t10217 = 0.24*t10107*t10127;
  t10218 = t10217 + t10161;
  t10209 = -1.*t10162*t10199;
  t10100 = -1.*t2209*t6992;
  t10101 = t9991 + t10100;
  t9954 = t9953*t6992;
  t9981 = t9980*t9728;
  t9982 = t9954 + t9955 + t9977 + t9981;
  t10074 = -1.*t2209*t9980;
  t10075 = t10074 + t7177;
  t10015 = -1.*t6842*t9953;
  t10041 = -1.*t6992*t9728;
  t10045 = t10015 + t10016 + t10041 + t10044;
  t10234 = 3.2*t10101*t9930;
  t10057 = t10056*t6992;
  t10064 = t9980*t10061;
  t10065 = t10057 + t9955 + t9977 + t10064;
  t10236 = -1.*t2209*t6842;
  t10237 = t5547*t10004;
  t10238 = t10236 + t10237;
  t10239 = 3.2*t9990*t10238;
  t10067 = -1.*t6842*t10056;
  t10068 = -1.*t6992*t10061;
  t10069 = t10067 + t10016 + t10068 + t10044;
  t10230 = -1.*t5547*t2034;
  t10231 = t2209*t5651;
  t10232 = t10230 + t10231;
  t10233 = 6.8*t10232*t5818;
  t10167 = -1.*t2209*t10135;
  t10254 = -1.*t5547*t10107;
  t10255 = t2209*t10111;
  t10256 = t10254 + t10255;
  t10257 = 6.8*t10256*t10121;
  t10168 = t10166 + t10167;
  t10191 = t10190*t10135;
  t10194 = t10131*t10162;
  t10195 = t10191 + t10192 + t10193 + t10194;
  t10261 = -1.*t2209*t10159;
  t10132 = -1.*t2209*t10131;
  t10137 = t10132 + t10136;
  t10206 = -1.*t10159*t10190;
  t10208 = -1.*t10135*t10162;
  t10210 = t10206 + t10207 + t10208 + t10209;
  t10267 = 3.2*t10168*t10164;
  t10216 = t10215*t10135;
  t10219 = t10131*t10218;
  t10220 = t10216 + t10192 + t10193 + t10219;
  t10269 = t5547*t10199;
  t10270 = t10261 + t10269;
  t10271 = 3.2*t10176*t10270;
  t10222 = -1.*t10159*t10215;
  t10223 = -1.*t10135*t10218;
  t10224 = t10222 + t10207 + t10223 + t10209;
  t10299 = t9680*t5870;
  t10300 = Power(t6480,2);
  t10301 = 0.24*t10300;
  t10302 = t10299 + t10301;
  t10304 = t9680*t6480;
  t10305 = -0.24*t5870*t6480;
  t10306 = t10304 + t10305;
  t10328 = t10152*t10127;
  t10329 = Power(t10129,2);
  t10330 = 0.24*t10329;
  t10331 = t10328 + t10330;
  t10333 = t10152*t10129;
  t10334 = -0.24*t10127*t10129;
  t10335 = t10333 + t10334;
  p_output1[0]=var2[2]*(-0.5*(t10124 + 3.2*t10137*t10164 + 3.2*t10168*t10176 - 2.88*t2209 + t5833 + 3.2*t10075*t9930 + 3.2*t10101*t9990)*var2[2] - 0.5*(t10011 + 3.2*t10014*t10045 + t5833 + t9932 + 3.2*t7211*t9982)*var2[3] - 0.5*(t10011 + 3.2*t10014*t10069 + 3.2*t10065*t7211 + t9932)*var2[4] - 0.5*(t10124 + t10187 + 3.2*t10186*t10195 + t10202 + 3.2*t10205*t10210)*var2[5] - 0.5*(t10187 + t10202 + 3.2*t10186*t10220 + 3.2*t10205*t10224)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t10233 + t10257 - 2.88*t5547 + 3.2*t10164*(t10167 - 1.*t10131*t5547) + 3.2*t10176*(t10261 - 1.*t10135*t5547) + 3.2*t9930*(t10100 - 1.*t5547*t9980) + 3.2*(t10236 - 1.*t5547*t6992)*t9990)*var2[2] - 0.5*(3.2*t10045*t10075 + t10233 + t10234 + t10239 + 3.2*t10101*t9982)*var2[3] - 0.5*(3.2*t10069*t10075 + 3.2*t10065*t10101 + t10234 + t10239)*var2[4] - 0.5*(3.2*t10168*t10195 + 3.2*t10137*t10210 + t10257 + t10267 + t10271)*var2[5] - 0.5*(3.2*t10168*t10220 + 3.2*t10137*t10224 + t10267 + t10271)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t10045*t9930 + 6.4*t9982*t9990)*var2[3] - 0.5*(6.4*t10069*t9930 + 6.4*t10065*t9990)*var2[4] - 0.5*(6.4*t10176*t10195 + 6.4*t10164*t10210)*var2[5] - 0.5*(6.4*t10176*t10220 + 6.4*t10164*t10224)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t10045*t10306 + 3.2*t10302*t9982)*var2[3] - 0.5*(3.2*t10065*t10302 + 3.2*t10069*t10306 + 3.2*(t10299 - 0.24*Power(t5870,2))*t9930 + 3.2*(0.24*t5870*t6480 - 1.*t6480*t9680)*t9990)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t9982*var2[3] - 0.384*t10065*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t10195*t10331 + 3.2*t10210*t10335)*var2[5] - 0.5*(3.2*(0.24*t10127*t10129 - 1.*t10129*t10152)*t10176 + 3.2*t10164*(-0.24*Power(t10127,2) + t10328) + 3.2*t10220*t10331 + 3.2*t10224*t10335)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t10195*var2[5] - 0.384*t10220*var2[6]);
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

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
