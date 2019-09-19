/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:27 GMT-04:00
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
  double t6766;
  double t6667;
  double t6686;
  double t6775;
  double t6861;
  double t6694;
  double t6840;
  double t6841;
  double t6401;
  double t6992;
  double t7135;
  double t7160;
  double t6846;
  double t9167;
  double t10195;
  double t10210;
  double t10575;
  double t10631;
  double t10832;
  double t10839;
  double t10909;
  double t10929;
  double t10935;
  double t10938;
  double t10939;
  double t8710;
  double t8798;
  double t10940;
  double t10946;
  double t10949;
  double t11230;
  double t11460;
  double t11500;
  double t14679;
  double t14806;
  double t14807;
  double t14808;
  double t14810;
  double t14999;
  double t15000;
  double t15006;
  double t15341;
  double t15345;
  double t15346;
  double t11531;
  double t14543;
  double t14547;
  double t14595;
  double t14663;
  double t14676;
  double t15014;
  double t15015;
  double t15018;
  double t15019;
  double t15367;
  double t15368;
  double t15349;
  double t15358;
  double t15402;
  double t15406;
  double t15407;
  double t15408;
  double t15409;
  double t15390;
  double t15394;
  double t15366;
  double t15369;
  double t15370;
  double t15371;
  double t15372;
  double t15373;
  double t15374;
  double t15375;
  double t15377;
  double t15378;
  double t15379;
  double t15380;
  double t15383;
  double t15386;
  double t15395;
  double t15396;
  double t15438;
  double t15439;
  double t15440;
  double t15434;
  double t15435;
  double t15436;
  double t15412;
  double t15413;
  t6766 = Cos(var1[3]);
  t6667 = Cos(var1[4]);
  t6686 = Sin(var1[3]);
  t6775 = Sin(var1[4]);
  t6861 = Cos(var1[2]);
  t6694 = -1.*t6667*t6686;
  t6840 = -1.*t6766*t6775;
  t6841 = t6694 + t6840;
  t6401 = Sin(var1[2]);
  t6992 = t6766*t6667;
  t7135 = -1.*t6686*t6775;
  t7160 = t6992 + t7135;
  t6846 = -1.*t6401*t6841;
  t9167 = -1.*t6861*t6841;
  t10195 = -1.*t6766*t6667;
  t10210 = t6686*t6775;
  t10575 = t10195 + t10210;
  t10631 = t6861*t10575;
  t10832 = t6846 + t10631;
  t10839 = 0.384*var2[0]*t10832;
  t10909 = -1.*t6401*t10575;
  t10929 = t9167 + t10909;
  t10935 = 0.384*var2[1]*t10929;
  t10938 = t10839 + t10935;
  t10939 = var2[4]*t10938;
  t8710 = -1.*t6861*t7160;
  t8798 = t6846 + t8710;
  t10940 = t6861*t6841;
  t10946 = -1.*t6401*t7160;
  t10949 = t10940 + t10946;
  t11230 = t6667*t6686;
  t11460 = t6766*t6775;
  t11500 = t11230 + t11460;
  t14679 = -1.*t6667;
  t14806 = 1. + t14679;
  t14807 = 0.4*t14806;
  t14808 = 0.64*t6667;
  t14810 = t14807 + t14808;
  t14999 = -1.*t14810*t6686;
  t15000 = -0.24*t6766*t6775;
  t15006 = t14999 + t15000;
  t15341 = t6766*t14810;
  t15345 = -0.24*t6686*t6775;
  t15346 = t15341 + t15345;
  t11531 = t6401*t11500;
  t14543 = t11531 + t10631;
  t14547 = 0.384*var2[0]*t14543;
  t14595 = t6861*t11500;
  t14663 = t14595 + t10909;
  t14676 = 0.384*var2[1]*t14663;
  t15014 = t14810*t6686;
  t15015 = 0.24*t6766*t6775;
  t15018 = t15014 + t15015;
  t15019 = t6841*t15018;
  t15367 = -0.24*t6667*t6686;
  t15368 = t15367 + t15000;
  t15349 = 0.24*t6686*t6775;
  t15358 = t15346*t10575;
  t15402 = t15006*t7160;
  t15406 = t15018*t7160;
  t15407 = t6841*t15346;
  t15408 = t11500*t15346;
  t15409 = t15402 + t15406 + t15407 + t15408;
  t15390 = t6401*t10575;
  t15394 = t10940 + t15390;
  t15366 = t6841*t15006;
  t15369 = t6841*t15368;
  t15370 = t15368*t11500;
  t15371 = t7160*t15346;
  t15372 = 0.24*t6766*t6667;
  t15373 = t15372 + t15345;
  t15374 = t7160*t15373;
  t15375 = -0.24*t6766*t6667;
  t15377 = t15375 + t15349;
  t15378 = t7160*t15377;
  t15379 = t15366 + t15369 + t15019 + t15370 + t15371 + t15374 + t15378 + t15358;
  t15380 = 0.384*var2[2]*t15379;
  t15383 = t14547 + t14676 + t15380;
  t15386 = var2[4]*t15383;
  t15395 = 0.384*var2[4]*t15394;
  t15396 = 0.384*var2[4]*t10832;
  t15438 = -1.*t14810*t6775;
  t15439 = 0.24*t6667*t6775;
  t15440 = t15438 + t15439;
  t15434 = t15368*t7160;
  t15435 = t11500*t15373;
  t15436 = t15434 + t15406 + t15407 + t15435;
  t15412 = 0.384*var2[1]*t10832;
  t15413 = 0.384*var2[0]*t15394;
  p_output1[0]=(0.384*t8798*var2[0] + 0.384*(t6401*t7160 + t9167)*var2[1])*var2[4];
  p_output1[1]=t10939;
  p_output1[2]=t10939;
  p_output1[3]=0.384*t10949*var2[4];
  p_output1[4]=0.384*t8798*var2[4];
  p_output1[5]=0.384*t10949*var2[0] + 0.384*t8798*var2[1];
  p_output1[6]=t10939;
  p_output1[7]=(t14547 + t14676 + 0.384*(t11500*t15006 + t15019 + t15358 + 2.*t15006*t6841 + 2.*t15346*t7160 + (t15349 - 1.*t14810*t6766)*t7160)*var2[2])*var2[4];
  p_output1[8]=t15386;
  p_output1[9]=t15395;
  p_output1[10]=t15396;
  p_output1[11]=0.384*t15409*var2[4];
  p_output1[12]=t15412 + t15413 + 0.384*t15409*var2[2];
  p_output1[13]=t10939;
  p_output1[14]=t15386;
  p_output1[15]=(t14547 + t14676 + 0.384*(t15019 + t15358 + t15370 + t15378 + 2.*t15368*t6841 + 2.*t15373*t7160)*var2[2] + 0.384*(-1.*t14810*t6667 + 0.24*Power(t6667,2))*var2[3])*var2[4];
  p_output1[16]=t15395;
  p_output1[17]=t15396;
  p_output1[18]=0.384*t15436*var2[4];
  p_output1[19]=0.384*t15440*var2[4];
  p_output1[20]=t15412 + t15413 + 0.384*t15436*var2[2] + 0.384*t15440*var2[3];
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

#include "J_Ce3_vec5_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
