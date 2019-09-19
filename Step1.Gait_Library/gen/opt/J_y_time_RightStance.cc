/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:38 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t16023;
  double t11476;
  double t11511;
  double t11626;
  double t11676;
  double t16017;
  double t16031;
  double t16069;
  double t16071;
  double t16073;
  double t16074;
  double t16075;
  double t16076;
  double t16079;
  double t16080;
  double t16081;
  double t16082;
  double t16087;
  double t16090;
  double t16091;
  double t16092;
  double t16095;
  double t16096;
  double t16099;
  double t16120;
  double t16122;
  double t16136;
  double t16137;
  double t16114;
  double t16115;
  double t16116;
  double t16117;
  double t16118;
  double t16119;
  double t16121;
  t16023 = -1.*var4[1];
  t11476 = -1. + var5[0];
  t11511 = -1. + var6[0];
  t11626 = 1/t11511;
  t11676 = -1.*t11476*t11626;
  t16017 = 1. + t11676;
  t16031 = var4[0] + t16023;
  t16069 = Power(t16031,-5);
  t16071 = -1.*var1[0];
  t16073 = t16071 + var1[1];
  t16074 = t11476*t11626*t16073;
  t16075 = t16023 + var1[0] + t16074;
  t16076 = Power(t16075,4);
  t16079 = Power(t16031,-4);
  t16080 = Power(t16075,3);
  t16081 = 1/t16031;
  t16082 = -1.*t16081*t16075;
  t16087 = 1. + t16082;
  t16090 = Power(t16031,-3);
  t16091 = Power(t16075,2);
  t16092 = Power(t16087,2);
  t16095 = Power(t16031,-2);
  t16096 = Power(t16087,3);
  t16099 = Power(t16087,4);
  t16120 = Power(t16075,5);
  t16122 = Power(t16031,-6);
  t16136 = -1.*t16095*t16075;
  t16137 = t16081 + t16136;
  t16114 = Power(t16087,5);
  t16115 = -1.*t16114;
  t16116 = -5.*t16081*t16075*t16099;
  t16117 = -10.*t16095*t16091*t16096;
  t16118 = -10.*t16090*t16080*t16092;
  t16119 = -5.*t16079*t16076*t16087;
  t16121 = -1.*t16069*t16120;
  p_output1[0]=5.*t16017*t16081*t16099*var3[0] + 20.*t16017*t16075*t16095*t16096*var3[4] - 5.*t16017*t16081*t16099*var3[4] + 30.*t16017*t16090*t16091*t16092*var3[8] - 20.*t16017*t16075*t16095*t16096*var3[8] + 20.*t16017*t16079*t16080*t16087*var3[12] - 30.*t16017*t16090*t16091*t16092*var3[12] + 5.*t16017*t16069*t16076*var3[16] - 20.*t16017*t16079*t16080*t16087*var3[16] - 5.*t16017*t16069*t16076*var3[20];
  p_output1[1]=5.*t11476*t11626*t16081*t16099*var3[0] + 20.*t11476*t11626*t16075*t16095*t16096*var3[4] - 5.*t11476*t11626*t16081*t16099*var3[4] + 30.*t11476*t11626*t16090*t16091*t16092*var3[8] - 20.*t11476*t11626*t16075*t16095*t16096*var3[8] + 20.*t11476*t11626*t16079*t16080*t16087*var3[12] - 30.*t11476*t11626*t16090*t16091*t16092*var3[12] + 5.*t11476*t11626*t16069*t16076*var3[16] - 20.*t11476*t11626*t16079*t16080*t16087*var3[16] - 5.*t11476*t11626*t16069*t16076*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t16115;
  p_output1[4]=t16116;
  p_output1[5]=t16117;
  p_output1[6]=t16118;
  p_output1[7]=t16119;
  p_output1[8]=t16121;
  p_output1[9]=-5.*t16075*t16095*t16099*var3[0] - 20.*t16090*t16091*t16096*var3[4] + 5.*t16075*t16095*t16099*var3[4] - 30.*t16079*t16080*t16092*var3[8] + 20.*t16090*t16091*t16096*var3[8] - 20.*t16069*t16076*t16087*var3[12] + 30.*t16079*t16080*t16092*var3[12] + 20.*t16069*t16076*t16087*var3[16] - 5.*t16120*t16122*var3[16] + 5.*t16120*t16122*var3[20];
  p_output1[10]=-5.*t16099*t16137*var3[0] + 5.*t16081*t16099*var3[4] - 5.*t16075*t16095*t16099*var3[4] - 20.*t16075*t16081*t16096*t16137*var3[4] - 20.*t16090*t16091*t16096*var3[8] + 20.*t16075*t16095*t16096*var3[8] - 30.*t16091*t16092*t16095*t16137*var3[8] - 30.*t16079*t16080*t16092*var3[12] + 30.*t16090*t16091*t16092*var3[12] - 20.*t16080*t16087*t16090*t16137*var3[12] - 20.*t16069*t16076*t16087*var3[16] + 20.*t16079*t16080*t16087*var3[16] - 5.*t16076*t16079*t16137*var3[16] + 5.*t16069*t16076*var3[20] - 5.*t16120*t16122*var3[20];
  p_output1[11]=5.*t16017*t16081*t16099*var3[1] + 20.*t16017*t16075*t16095*t16096*var3[5] - 5.*t16017*t16081*t16099*var3[5] + 30.*t16017*t16090*t16091*t16092*var3[9] - 20.*t16017*t16075*t16095*t16096*var3[9] + 20.*t16017*t16079*t16080*t16087*var3[13] - 30.*t16017*t16090*t16091*t16092*var3[13] + 5.*t16017*t16069*t16076*var3[17] - 20.*t16017*t16079*t16080*t16087*var3[17] - 5.*t16017*t16069*t16076*var3[21];
  p_output1[12]=5.*t11476*t11626*t16081*t16099*var3[1] + 20.*t11476*t11626*t16075*t16095*t16096*var3[5] - 5.*t11476*t11626*t16081*t16099*var3[5] + 30.*t11476*t11626*t16090*t16091*t16092*var3[9] - 20.*t11476*t11626*t16075*t16095*t16096*var3[9] + 20.*t11476*t11626*t16079*t16080*t16087*var3[13] - 30.*t11476*t11626*t16090*t16091*t16092*var3[13] + 5.*t11476*t11626*t16069*t16076*var3[17] - 20.*t11476*t11626*t16079*t16080*t16087*var3[17] - 5.*t11476*t11626*t16069*t16076*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t16115;
  p_output1[15]=t16116;
  p_output1[16]=t16117;
  p_output1[17]=t16118;
  p_output1[18]=t16119;
  p_output1[19]=t16121;
  p_output1[20]=-5.*t16075*t16095*t16099*var3[1] - 20.*t16090*t16091*t16096*var3[5] + 5.*t16075*t16095*t16099*var3[5] - 30.*t16079*t16080*t16092*var3[9] + 20.*t16090*t16091*t16096*var3[9] - 20.*t16069*t16076*t16087*var3[13] + 30.*t16079*t16080*t16092*var3[13] + 20.*t16069*t16076*t16087*var3[17] - 5.*t16120*t16122*var3[17] + 5.*t16120*t16122*var3[21];
  p_output1[21]=-5.*t16099*t16137*var3[1] + 5.*t16081*t16099*var3[5] - 5.*t16075*t16095*t16099*var3[5] - 20.*t16075*t16081*t16096*t16137*var3[5] - 20.*t16090*t16091*t16096*var3[9] + 20.*t16075*t16095*t16096*var3[9] - 30.*t16091*t16092*t16095*t16137*var3[9] - 30.*t16079*t16080*t16092*var3[13] + 30.*t16090*t16091*t16092*var3[13] - 20.*t16080*t16087*t16090*t16137*var3[13] - 20.*t16069*t16076*t16087*var3[17] + 20.*t16079*t16080*t16087*var3[17] - 5.*t16076*t16079*t16137*var3[17] + 5.*t16069*t16076*var3[21] - 5.*t16120*t16122*var3[21];
  p_output1[22]=5.*t16017*t16081*t16099*var3[2] + 20.*t16017*t16075*t16095*t16096*var3[6] - 5.*t16017*t16081*t16099*var3[6] + 30.*t16017*t16090*t16091*t16092*var3[10] - 20.*t16017*t16075*t16095*t16096*var3[10] + 20.*t16017*t16079*t16080*t16087*var3[14] - 30.*t16017*t16090*t16091*t16092*var3[14] + 5.*t16017*t16069*t16076*var3[18] - 20.*t16017*t16079*t16080*t16087*var3[18] - 5.*t16017*t16069*t16076*var3[22];
  p_output1[23]=5.*t11476*t11626*t16081*t16099*var3[2] + 20.*t11476*t11626*t16075*t16095*t16096*var3[6] - 5.*t11476*t11626*t16081*t16099*var3[6] + 30.*t11476*t11626*t16090*t16091*t16092*var3[10] - 20.*t11476*t11626*t16075*t16095*t16096*var3[10] + 20.*t11476*t11626*t16079*t16080*t16087*var3[14] - 30.*t11476*t11626*t16090*t16091*t16092*var3[14] + 5.*t11476*t11626*t16069*t16076*var3[18] - 20.*t11476*t11626*t16079*t16080*t16087*var3[18] - 5.*t11476*t11626*t16069*t16076*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t16115;
  p_output1[26]=t16116;
  p_output1[27]=t16117;
  p_output1[28]=t16118;
  p_output1[29]=t16119;
  p_output1[30]=t16121;
  p_output1[31]=-5.*t16075*t16095*t16099*var3[2] - 20.*t16090*t16091*t16096*var3[6] + 5.*t16075*t16095*t16099*var3[6] - 30.*t16079*t16080*t16092*var3[10] + 20.*t16090*t16091*t16096*var3[10] - 20.*t16069*t16076*t16087*var3[14] + 30.*t16079*t16080*t16092*var3[14] + 20.*t16069*t16076*t16087*var3[18] - 5.*t16120*t16122*var3[18] + 5.*t16120*t16122*var3[22];
  p_output1[32]=-5.*t16099*t16137*var3[2] + 5.*t16081*t16099*var3[6] - 5.*t16075*t16095*t16099*var3[6] - 20.*t16075*t16081*t16096*t16137*var3[6] - 20.*t16090*t16091*t16096*var3[10] + 20.*t16075*t16095*t16096*var3[10] - 30.*t16091*t16092*t16095*t16137*var3[10] - 30.*t16079*t16080*t16092*var3[14] + 30.*t16090*t16091*t16092*var3[14] - 20.*t16080*t16087*t16090*t16137*var3[14] - 20.*t16069*t16076*t16087*var3[18] + 20.*t16079*t16080*t16087*var3[18] - 5.*t16076*t16079*t16137*var3[18] + 5.*t16069*t16076*var3[22] - 5.*t16120*t16122*var3[22];
  p_output1[33]=5.*t16017*t16081*t16099*var3[3] + 20.*t16017*t16075*t16095*t16096*var3[7] - 5.*t16017*t16081*t16099*var3[7] + 30.*t16017*t16090*t16091*t16092*var3[11] - 20.*t16017*t16075*t16095*t16096*var3[11] + 20.*t16017*t16079*t16080*t16087*var3[15] - 30.*t16017*t16090*t16091*t16092*var3[15] + 5.*t16017*t16069*t16076*var3[19] - 20.*t16017*t16079*t16080*t16087*var3[19] - 5.*t16017*t16069*t16076*var3[23];
  p_output1[34]=5.*t11476*t11626*t16081*t16099*var3[3] + 20.*t11476*t11626*t16075*t16095*t16096*var3[7] - 5.*t11476*t11626*t16081*t16099*var3[7] + 30.*t11476*t11626*t16090*t16091*t16092*var3[11] - 20.*t11476*t11626*t16075*t16095*t16096*var3[11] + 20.*t11476*t11626*t16079*t16080*t16087*var3[15] - 30.*t11476*t11626*t16090*t16091*t16092*var3[15] + 5.*t11476*t11626*t16069*t16076*var3[19] - 20.*t11476*t11626*t16079*t16080*t16087*var3[19] - 5.*t11476*t11626*t16069*t16076*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t16115;
  p_output1[37]=t16116;
  p_output1[38]=t16117;
  p_output1[39]=t16118;
  p_output1[40]=t16119;
  p_output1[41]=t16121;
  p_output1[42]=-5.*t16075*t16095*t16099*var3[3] - 20.*t16090*t16091*t16096*var3[7] + 5.*t16075*t16095*t16099*var3[7] - 30.*t16079*t16080*t16092*var3[11] + 20.*t16090*t16091*t16096*var3[11] - 20.*t16069*t16076*t16087*var3[15] + 30.*t16079*t16080*t16092*var3[15] + 20.*t16069*t16076*t16087*var3[19] - 5.*t16120*t16122*var3[19] + 5.*t16120*t16122*var3[23];
  p_output1[43]=-5.*t16099*t16137*var3[3] + 5.*t16081*t16099*var3[7] - 5.*t16075*t16095*t16099*var3[7] - 20.*t16075*t16081*t16096*t16137*var3[7] - 20.*t16090*t16091*t16096*var3[11] + 20.*t16075*t16095*t16096*var3[11] - 30.*t16091*t16092*t16095*t16137*var3[11] - 30.*t16079*t16080*t16092*var3[15] + 30.*t16090*t16091*t16092*var3[15] - 20.*t16080*t16087*t16090*t16137*var3[15] - 20.*t16069*t16076*t16087*var3[19] + 20.*t16079*t16080*t16087*var3[19] - 5.*t16076*t16079*t16137*var3[19] + 5.*t16069*t16076*var3[23] - 5.*t16120*t16122*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
