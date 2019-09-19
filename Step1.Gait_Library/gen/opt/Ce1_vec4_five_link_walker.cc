/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:00 GMT-04:00
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
  double t1118;
  double t1144;
  double t1096;
  double t1109;
  double t1095;
  double t1108;
  double t1119;
  double t1125;
  double t1134;
  double t1135;
  double t1136;
  double t1169;
  double t1170;
  double t1171;
  double t1102;
  double t1114;
  double t1115;
  double t1117;
  double t1147;
  double t1163;
  double t1164;
  double t1179;
  double t1180;
  double t1181;
  double t1172;
  double t1175;
  double t1176;
  double t1177;
  double t1178;
  double t1182;
  double t1189;
  double t1190;
  double t1191;
  double t1165;
  double t1166;
  double t1167;
  double t1192;
  double t1193;
  double t1194;
  double t1195;
  double t1196;
  double t1197;
  double t1183;
  double t1217;
  double t1218;
  double t1219;
  double t1220;
  double t1184;
  double t1221;
  double t1205;
  double t1206;
  double t1207;
  double t1168;
  double t1173;
  double t1231;
  double t1200;
  double t1202;
  double t1203;
  double t1232;
  double t1233;
  double t1234;
  double t1256;
  double t1260;
  double t1261;
  double t1246;
  double t1247;
  double t1248;
  double t1251;
  double t1252;
  double t1254;
  double t1255;
  double t1262;
  double t1282;
  double t1283;
  double t1267;
  double t1285;
  double t1286;
  double t1269;
  t1118 = Cos(var1[4]);
  t1144 = Sin(var1[4]);
  t1096 = Sin(var1[2]);
  t1109 = Sin(var1[3]);
  t1095 = Cos(var1[3]);
  t1108 = Cos(var1[2]);
  t1119 = -1.*t1118;
  t1125 = 1. + t1119;
  t1134 = 0.4*t1125;
  t1135 = 0.64*t1118;
  t1136 = t1134 + t1135;
  t1169 = t1095*t1118;
  t1170 = -1.*t1109*t1144;
  t1171 = t1169 + t1170;
  t1102 = -1.*t1095*t1096;
  t1114 = -1.*t1108*t1109;
  t1115 = t1102 + t1114;
  t1117 = 0.748*t1115;
  t1147 = t1136*t1144;
  t1163 = -0.24*t1118*t1144;
  t1164 = t1147 + t1163;
  t1179 = -1.*t1118*t1109;
  t1180 = -1.*t1095*t1144;
  t1181 = t1179 + t1180;
  t1172 = t1108*t1171;
  t1175 = t1136*t1118;
  t1176 = Power(t1144,2);
  t1177 = 0.24*t1176;
  t1178 = t1175 + t1177;
  t1182 = t1108*t1181;
  t1189 = t1096*t1181;
  t1190 = t1189 + t1172;
  t1191 = 3.2*t1164*t1190;
  t1165 = t1118*t1109;
  t1166 = t1095*t1144;
  t1167 = t1165 + t1166;
  t1192 = -1.*t1095*t1118;
  t1193 = t1109*t1144;
  t1194 = t1192 + t1193;
  t1195 = t1096*t1194;
  t1196 = t1182 + t1195;
  t1197 = 3.2*t1178*t1196;
  t1183 = -1.*t1096*t1171;
  t1217 = -1.*t1108*t1095;
  t1218 = t1096*t1109;
  t1219 = t1217 + t1218;
  t1220 = 0.748*t1219;
  t1184 = t1182 + t1183;
  t1221 = -1.*t1096*t1181;
  t1205 = Power(t1118,2);
  t1206 = -0.24*t1205;
  t1207 = t1175 + t1206;
  t1168 = -1.*t1096*t1167;
  t1173 = t1168 + t1172;
  t1231 = 3.2*t1164*t1184;
  t1200 = -1.*t1136*t1144;
  t1202 = 0.24*t1118*t1144;
  t1203 = t1200 + t1202;
  t1232 = t1108*t1194;
  t1233 = t1221 + t1232;
  t1234 = 3.2*t1178*t1233;
  t1256 = t1095*t1136;
  t1260 = -0.24*t1109*t1144;
  t1261 = t1256 + t1260;
  t1246 = -1.*t1136*t1109;
  t1247 = -0.24*t1095*t1144;
  t1248 = t1246 + t1247;
  t1251 = t1136*t1109;
  t1252 = 0.24*t1095*t1144;
  t1254 = t1251 + t1252;
  t1255 = t1254*t1171;
  t1262 = t1181*t1261;
  t1282 = -0.24*t1118*t1109;
  t1283 = t1282 + t1247;
  t1267 = -1.*t1181*t1254;
  t1285 = 0.24*t1095*t1118;
  t1286 = t1285 + t1260;
  t1269 = -1.*t1261*t1194;
  p_output1[0]=var2[3]*(-0.5*(t1117 + 3.2*t1164*t1173 + 3.2*t1178*t1184)*var2[2] - 0.5*(t1117 + t1191 + t1197)*var2[3] - 0.5*(t1191 + t1197 + 3.2*t1190*t1203 + 3.2*(t1108*t1167 + t1096*t1171)*t1207)*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(3.2*t1164*(-1.*t1108*t1167 + t1183) + t1220 + 3.2*t1178*(-1.*t1108*t1171 + t1221))*var2[2] - 0.5*(t1220 + t1231 + t1234)*var2[3] - 0.5*(3.2*t1184*t1203 + 3.2*t1173*t1207 + t1231 + t1234)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*t1178*(t1171*t1248 + t1255 + t1167*t1261 + t1262) + 3.2*t1164*(-1.*t1181*t1248 - 1.*t1171*t1261 + t1267 + t1269))*var2[3] - 0.5*(3.2*t1203*(t1167*t1254 + t1171*t1261) + 3.2*t1207*(-1.*t1171*t1254 - 1.*t1181*t1261) + 3.2*t1178*(t1255 + t1262 + t1171*t1283 + t1167*t1286) + 3.2*t1164*(t1267 + t1269 - 1.*t1181*t1283 - 1.*t1171*t1286))*var2[4]);
  p_output1[3]=-0.5*(6.4*t1178*t1203 + 6.4*t1164*t1207)*var2[3]*var2[4];
  p_output1[4]=-0.384*t1203*var2[3]*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce1_vec4_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
