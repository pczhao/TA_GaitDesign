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
  double t4973;
  double t11005;
  double t119;
  double t2031;
  double t25;
  double t1884;
  double t5051;
  double t5068;
  double t5133;
  double t5199;
  double t5202;
  double t11087;
  double t11090;
  double t11093;
  double t120;
  double t2076;
  double t2077;
  double t2624;
  double t11034;
  double t11035;
  double t11056;
  double t11191;
  double t11199;
  double t11203;
  double t11153;
  double t11162;
  double t11174;
  double t11189;
  double t11190;
  double t11204;
  double t11219;
  double t11220;
  double t11221;
  double t11074;
  double t11080;
  double t11081;
  double t11222;
  double t11223;
  double t11224;
  double t11225;
  double t11226;
  double t11227;
  double t11205;
  double t11254;
  double t11255;
  double t11256;
  double t11257;
  double t11206;
  double t11258;
  double t11238;
  double t11240;
  double t11241;
  double t11084;
  double t11160;
  double t11267;
  double t11230;
  double t11231;
  double t11236;
  double t11268;
  double t11269;
  double t11270;
  double t11294;
  double t11295;
  double t11296;
  double t11286;
  double t11287;
  double t11288;
  double t11290;
  double t11291;
  double t11292;
  double t11293;
  double t11297;
  double t11324;
  double t11325;
  double t11302;
  double t11327;
  double t11328;
  double t11304;
  t4973 = Cos(var1[4]);
  t11005 = Sin(var1[4]);
  t119 = Sin(var1[2]);
  t2031 = Sin(var1[3]);
  t25 = Cos(var1[3]);
  t1884 = Cos(var1[2]);
  t5051 = -1.*t4973;
  t5068 = 1. + t5051;
  t5133 = 0.4*t5068;
  t5199 = 0.64*t4973;
  t5202 = t5133 + t5199;
  t11087 = t25*t4973;
  t11090 = -1.*t2031*t11005;
  t11093 = t11087 + t11090;
  t120 = -1.*t25*t119;
  t2076 = -1.*t1884*t2031;
  t2077 = t120 + t2076;
  t2624 = 0.748*t2077;
  t11034 = t5202*t11005;
  t11035 = -0.24*t4973*t11005;
  t11056 = t11034 + t11035;
  t11191 = -1.*t4973*t2031;
  t11199 = -1.*t25*t11005;
  t11203 = t11191 + t11199;
  t11153 = t1884*t11093;
  t11162 = t5202*t4973;
  t11174 = Power(t11005,2);
  t11189 = 0.24*t11174;
  t11190 = t11162 + t11189;
  t11204 = t1884*t11203;
  t11219 = t119*t11203;
  t11220 = t11219 + t11153;
  t11221 = 3.2*t11056*t11220;
  t11074 = t4973*t2031;
  t11080 = t25*t11005;
  t11081 = t11074 + t11080;
  t11222 = -1.*t25*t4973;
  t11223 = t2031*t11005;
  t11224 = t11222 + t11223;
  t11225 = t119*t11224;
  t11226 = t11204 + t11225;
  t11227 = 3.2*t11190*t11226;
  t11205 = -1.*t119*t11093;
  t11254 = -1.*t1884*t25;
  t11255 = t119*t2031;
  t11256 = t11254 + t11255;
  t11257 = 0.748*t11256;
  t11206 = t11204 + t11205;
  t11258 = -1.*t119*t11203;
  t11238 = Power(t4973,2);
  t11240 = -0.24*t11238;
  t11241 = t11162 + t11240;
  t11084 = -1.*t119*t11081;
  t11160 = t11084 + t11153;
  t11267 = 3.2*t11056*t11206;
  t11230 = -1.*t5202*t11005;
  t11231 = 0.24*t4973*t11005;
  t11236 = t11230 + t11231;
  t11268 = t1884*t11224;
  t11269 = t11258 + t11268;
  t11270 = 3.2*t11190*t11269;
  t11294 = t25*t5202;
  t11295 = -0.24*t2031*t11005;
  t11296 = t11294 + t11295;
  t11286 = -1.*t5202*t2031;
  t11287 = -0.24*t25*t11005;
  t11288 = t11286 + t11287;
  t11290 = t5202*t2031;
  t11291 = 0.24*t25*t11005;
  t11292 = t11290 + t11291;
  t11293 = t11292*t11093;
  t11297 = t11203*t11296;
  t11324 = -0.24*t4973*t2031;
  t11325 = t11324 + t11287;
  t11302 = -1.*t11203*t11292;
  t11327 = 0.24*t25*t4973;
  t11328 = t11327 + t11295;
  t11304 = -1.*t11296*t11224;
  p_output1[0]=var2[3]*(-0.5*(3.2*t11056*t11160 + 3.2*t11190*t11206 + t2624)*var2[2] - 0.5*(t11221 + t11227 + t2624)*var2[3] - 0.5*(t11221 + t11227 + 3.2*t11220*t11236 + 3.2*t11241*(t11093*t119 + t11081*t1884))*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(t11257 + 3.2*t11056*(t11205 - 1.*t11081*t1884) + 3.2*t11190*(t11258 - 1.*t11093*t1884))*var2[2] - 0.5*(t11257 + t11267 + t11270)*var2[3] - 0.5*(3.2*t11206*t11236 + 3.2*t11160*t11241 + t11267 + t11270)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*t11190*(t11093*t11288 + t11293 + t11081*t11296 + t11297) + 3.2*t11056*(-1.*t11203*t11288 - 1.*t11093*t11296 + t11302 + t11304))*var2[3] - 0.5*(3.2*t11236*(t11081*t11292 + t11093*t11296) + 3.2*t11241*(-1.*t11093*t11292 - 1.*t11203*t11296) + 3.2*t11190*(t11293 + t11297 + t11093*t11325 + t11081*t11328) + 3.2*t11056*(t11302 + t11304 - 1.*t11203*t11325 - 1.*t11093*t11328))*var2[4]);
  p_output1[3]=-0.5*(6.4*t11190*t11236 + 6.4*t11056*t11241)*var2[3]*var2[4];
  p_output1[4]=-0.384*t11236*var2[3]*var2[4];
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

namespace SymFunction
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
