/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:56 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t5247;
  double t5257;
  double t5261;
  double t5262;
  double t5319;
  double t5357;
  double t5358;
  double t5371;
  double t5386;
  double t5370;
  double t5416;
  double t5435;
  double t5466;
  double t5477;
  double t5507;
  double t5508;
  double t5524;
  double t5529;
  double t5539;
  double t5541;
  double t5549;
  double t5551;
  double t5575;
  double t5576;
  double t5564;
  double t5565;
  double t5629;
  double t5630;
  double t5643;
  double t5649;
  double t5655;
  double t5656;
  double t5660;
  double t5662;
  double t5665;
  double t5666;
  t5247 = 4.*var5[0];
  t5257 = t5247 + var7[0] + var3[0];
  t5261 = -1. + var8[0];
  t5262 = 1/t5261;
  t5319 = -1.*var1[0];
  t5357 = t5319 + var1[1];
  t5358 = -0.333333333333333*t5262*t5357;
  t5371 = 4.*var5[1];
  t5386 = t5371 + var7[1] + var3[1];
  t5370 = -1.33333333333333*t5262*t5357;
  t5416 = 4.*var5[2];
  t5435 = t5416 + var7[2] + var3[2];
  t5466 = 4.*var5[3];
  t5477 = t5466 + var7[3] + var3[3];
  t5507 = 4.*var5[4];
  t5508 = t5507 + var7[4] + var3[4];
  t5524 = 4.*var5[5];
  t5529 = t5524 + var7[5] + var3[5];
  t5539 = 4.*var5[6];
  t5541 = t5539 + var7[6] + var3[6];
  t5549 = -1.*var7[0];
  t5551 = t5549 + var3[0];
  t5575 = -1.*var7[1];
  t5576 = t5575 + var3[1];
  t5564 = -0.25*t5262*t5357;
  t5565 = 0.25*t5262*t5357;
  t5629 = -1.*var7[2];
  t5630 = t5629 + var3[2];
  t5643 = -1.*var7[3];
  t5649 = t5643 + var3[3];
  t5655 = -1.*var7[4];
  t5656 = t5655 + var3[4];
  t5660 = -1.*var7[5];
  t5662 = t5660 + var3[5];
  t5665 = -1.*var7[6];
  t5666 = t5665 + var3[6];
  p_output1[0]=0.333333333333333*t5257*t5262;
  p_output1[1]=-0.333333333333333*t5257*t5262;
  p_output1[2]=-1.;
  p_output1[3]=t5358;
  p_output1[4]=t5370;
  p_output1[5]=1.;
  p_output1[6]=t5358;
  p_output1[7]=0.333333333333333*t5262*t5386;
  p_output1[8]=-0.333333333333333*t5262*t5386;
  p_output1[9]=-1.;
  p_output1[10]=t5358;
  p_output1[11]=t5370;
  p_output1[12]=1.;
  p_output1[13]=t5358;
  p_output1[14]=0.333333333333333*t5262*t5435;
  p_output1[15]=-0.333333333333333*t5262*t5435;
  p_output1[16]=-1.;
  p_output1[17]=t5358;
  p_output1[18]=t5370;
  p_output1[19]=1.;
  p_output1[20]=t5358;
  p_output1[21]=0.333333333333333*t5262*t5477;
  p_output1[22]=-0.333333333333333*t5262*t5477;
  p_output1[23]=-1.;
  p_output1[24]=t5358;
  p_output1[25]=t5370;
  p_output1[26]=1.;
  p_output1[27]=t5358;
  p_output1[28]=0.333333333333333*t5262*t5508;
  p_output1[29]=-0.333333333333333*t5262*t5508;
  p_output1[30]=-1.;
  p_output1[31]=t5358;
  p_output1[32]=t5370;
  p_output1[33]=1.;
  p_output1[34]=t5358;
  p_output1[35]=0.333333333333333*t5262*t5529;
  p_output1[36]=-0.333333333333333*t5262*t5529;
  p_output1[37]=-1.;
  p_output1[38]=t5358;
  p_output1[39]=t5370;
  p_output1[40]=1.;
  p_output1[41]=t5358;
  p_output1[42]=0.333333333333333*t5262*t5541;
  p_output1[43]=-0.333333333333333*t5262*t5541;
  p_output1[44]=-1.;
  p_output1[45]=t5358;
  p_output1[46]=t5370;
  p_output1[47]=1.;
  p_output1[48]=t5358;
  p_output1[49]=0.25*t5262*t5551;
  p_output1[50]=-0.25*t5262*t5551;
  p_output1[51]=-0.5;
  p_output1[52]=t5564;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t5565;
  p_output1[56]=0.25*t5262*t5576;
  p_output1[57]=-0.25*t5262*t5576;
  p_output1[58]=-0.5;
  p_output1[59]=t5564;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t5565;
  p_output1[63]=0.25*t5262*t5630;
  p_output1[64]=-0.25*t5262*t5630;
  p_output1[65]=-0.5;
  p_output1[66]=t5564;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t5565;
  p_output1[70]=0.25*t5262*t5649;
  p_output1[71]=-0.25*t5262*t5649;
  p_output1[72]=-0.5;
  p_output1[73]=t5564;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t5565;
  p_output1[77]=0.25*t5262*t5656;
  p_output1[78]=-0.25*t5262*t5656;
  p_output1[79]=-0.5;
  p_output1[80]=t5564;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t5565;
  p_output1[84]=0.25*t5262*t5662;
  p_output1[85]=-0.25*t5262*t5662;
  p_output1[86]=-0.5;
  p_output1[87]=t5564;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t5565;
  p_output1[91]=0.25*t5262*t5666;
  p_output1[92]=-0.25*t5262*t5666;
  p_output1[93]=-0.5;
  p_output1[94]=t5564;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t5565;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
