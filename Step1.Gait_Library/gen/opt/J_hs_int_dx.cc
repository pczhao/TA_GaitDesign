/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:57 GMT-04:00
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
  double t1937;
  double t2079;
  double t5309;
  double t5387;
  double t5530;
  double t5538;
  double t5542;
  double t5563;
  double t5622;
  double t5546;
  double t5653;
  double t5654;
  double t5664;
  double t5668;
  double t5680;
  double t5682;
  double t5702;
  double t5703;
  double t5709;
  double t5710;
  double t5714;
  double t5715;
  double t5725;
  double t5727;
  double t5722;
  double t5724;
  double t5739;
  double t5746;
  double t5750;
  double t5752;
  double t5759;
  double t5760;
  double t5765;
  double t5769;
  double t5772;
  double t5773;
  t1937 = 4.*var5[0];
  t2079 = var3[0] + t1937 + var7[0];
  t5309 = -1. + var8[0];
  t5387 = 1/t5309;
  t5530 = -1.*var1[0];
  t5538 = t5530 + var1[1];
  t5542 = -0.333333333333333*t5387*t5538;
  t5563 = 4.*var5[1];
  t5622 = var3[1] + t5563 + var7[1];
  t5546 = -1.33333333333333*t5387*t5538;
  t5653 = 4.*var5[2];
  t5654 = var3[2] + t5653 + var7[2];
  t5664 = 4.*var5[3];
  t5668 = var3[3] + t5664 + var7[3];
  t5680 = 4.*var5[4];
  t5682 = var3[4] + t5680 + var7[4];
  t5702 = 4.*var5[5];
  t5703 = var3[5] + t5702 + var7[5];
  t5709 = 4.*var5[6];
  t5710 = var3[6] + t5709 + var7[6];
  t5714 = -1.*var7[0];
  t5715 = var3[0] + t5714;
  t5725 = -1.*var7[1];
  t5727 = var3[1] + t5725;
  t5722 = -0.25*t5387*t5538;
  t5724 = 0.25*t5387*t5538;
  t5739 = -1.*var7[2];
  t5746 = var3[2] + t5739;
  t5750 = -1.*var7[3];
  t5752 = var3[3] + t5750;
  t5759 = -1.*var7[4];
  t5760 = var3[4] + t5759;
  t5765 = -1.*var7[5];
  t5769 = var3[5] + t5765;
  t5772 = -1.*var7[6];
  t5773 = var3[6] + t5772;
  p_output1[0]=0.333333333333333*t2079*t5387;
  p_output1[1]=-0.333333333333333*t2079*t5387;
  p_output1[2]=-1.;
  p_output1[3]=t5542;
  p_output1[4]=t5546;
  p_output1[5]=1.;
  p_output1[6]=t5542;
  p_output1[7]=0.333333333333333*t5387*t5622;
  p_output1[8]=-0.333333333333333*t5387*t5622;
  p_output1[9]=-1.;
  p_output1[10]=t5542;
  p_output1[11]=t5546;
  p_output1[12]=1.;
  p_output1[13]=t5542;
  p_output1[14]=0.333333333333333*t5387*t5654;
  p_output1[15]=-0.333333333333333*t5387*t5654;
  p_output1[16]=-1.;
  p_output1[17]=t5542;
  p_output1[18]=t5546;
  p_output1[19]=1.;
  p_output1[20]=t5542;
  p_output1[21]=0.333333333333333*t5387*t5668;
  p_output1[22]=-0.333333333333333*t5387*t5668;
  p_output1[23]=-1.;
  p_output1[24]=t5542;
  p_output1[25]=t5546;
  p_output1[26]=1.;
  p_output1[27]=t5542;
  p_output1[28]=0.333333333333333*t5387*t5682;
  p_output1[29]=-0.333333333333333*t5387*t5682;
  p_output1[30]=-1.;
  p_output1[31]=t5542;
  p_output1[32]=t5546;
  p_output1[33]=1.;
  p_output1[34]=t5542;
  p_output1[35]=0.333333333333333*t5387*t5703;
  p_output1[36]=-0.333333333333333*t5387*t5703;
  p_output1[37]=-1.;
  p_output1[38]=t5542;
  p_output1[39]=t5546;
  p_output1[40]=1.;
  p_output1[41]=t5542;
  p_output1[42]=0.333333333333333*t5387*t5710;
  p_output1[43]=-0.333333333333333*t5387*t5710;
  p_output1[44]=-1.;
  p_output1[45]=t5542;
  p_output1[46]=t5546;
  p_output1[47]=1.;
  p_output1[48]=t5542;
  p_output1[49]=0.25*t5387*t5715;
  p_output1[50]=-0.25*t5387*t5715;
  p_output1[51]=-0.5;
  p_output1[52]=t5722;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t5724;
  p_output1[56]=0.25*t5387*t5727;
  p_output1[57]=-0.25*t5387*t5727;
  p_output1[58]=-0.5;
  p_output1[59]=t5722;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t5724;
  p_output1[63]=0.25*t5387*t5746;
  p_output1[64]=-0.25*t5387*t5746;
  p_output1[65]=-0.5;
  p_output1[66]=t5722;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t5724;
  p_output1[70]=0.25*t5387*t5752;
  p_output1[71]=-0.25*t5387*t5752;
  p_output1[72]=-0.5;
  p_output1[73]=t5722;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t5724;
  p_output1[77]=0.25*t5387*t5760;
  p_output1[78]=-0.25*t5387*t5760;
  p_output1[79]=-0.5;
  p_output1[80]=t5722;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t5724;
  p_output1[84]=0.25*t5387*t5769;
  p_output1[85]=-0.25*t5387*t5769;
  p_output1[86]=-0.5;
  p_output1[87]=t5722;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t5724;
  p_output1[91]=0.25*t5387*t5773;
  p_output1[92]=-0.25*t5387*t5773;
  p_output1[93]=-0.5;
  p_output1[94]=t5722;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t5724;
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

#include "J_hs_int_dx.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
