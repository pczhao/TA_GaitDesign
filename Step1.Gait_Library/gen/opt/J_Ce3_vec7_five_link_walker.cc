/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:29 GMT-04:00
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
  double t5870;
  double t1332;
  double t5501;
  double t6685;
  double t8149;
  double t5819;
  double t6767;
  double t8004;
  double t233;
  double t8190;
  double t8243;
  double t8244;
  double t8017;
  double t8731;
  double t10163;
  double t10329;
  double t10334;
  double t10518;
  double t11525;
  double t11740;
  double t12189;
  double t12199;
  double t12200;
  double t12202;
  double t12342;
  double t8263;
  double t8268;
  double t12343;
  double t12347;
  double t12353;
  double t12498;
  double t12499;
  double t12501;
  double t15451;
  double t15452;
  double t15453;
  double t15454;
  double t15455;
  double t15501;
  double t15502;
  double t15503;
  double t15522;
  double t15526;
  double t15531;
  double t12581;
  double t12587;
  double t15437;
  double t15446;
  double t15447;
  double t15450;
  double t15505;
  double t15510;
  double t15511;
  double t15517;
  double t15549;
  double t15550;
  double t15538;
  double t15542;
  double t15625;
  double t15626;
  double t15627;
  double t15628;
  double t15629;
  double t15621;
  double t15622;
  double t15548;
  double t15602;
  double t15603;
  double t15607;
  double t15608;
  double t15609;
  double t15610;
  double t15611;
  double t15615;
  double t15616;
  double t15617;
  double t15618;
  double t15619;
  double t15620;
  double t15623;
  double t15624;
  double t15661;
  double t15662;
  double t15666;
  double t15657;
  double t15658;
  double t15659;
  double t15633;
  double t15634;
  t5870 = Cos(var1[5]);
  t1332 = Cos(var1[6]);
  t5501 = Sin(var1[5]);
  t6685 = Sin(var1[6]);
  t8149 = Cos(var1[2]);
  t5819 = -1.*t1332*t5501;
  t6767 = -1.*t5870*t6685;
  t8004 = t5819 + t6767;
  t233 = Sin(var1[2]);
  t8190 = t5870*t1332;
  t8243 = -1.*t5501*t6685;
  t8244 = t8190 + t8243;
  t8017 = -1.*t233*t8004;
  t8731 = -1.*t8149*t8004;
  t10163 = -1.*t5870*t1332;
  t10329 = t5501*t6685;
  t10334 = t10163 + t10329;
  t10518 = t8149*t10334;
  t11525 = t8017 + t10518;
  t11740 = 0.384*var2[0]*t11525;
  t12189 = -1.*t233*t10334;
  t12199 = t8731 + t12189;
  t12200 = 0.384*var2[1]*t12199;
  t12202 = t11740 + t12200;
  t12342 = var2[6]*t12202;
  t8263 = -1.*t8149*t8244;
  t8268 = t8017 + t8263;
  t12343 = t8149*t8004;
  t12347 = -1.*t233*t8244;
  t12353 = t12343 + t12347;
  t12498 = t1332*t5501;
  t12499 = t5870*t6685;
  t12501 = t12498 + t12499;
  t15451 = -1.*t1332;
  t15452 = 1. + t15451;
  t15453 = 0.4*t15452;
  t15454 = 0.64*t1332;
  t15455 = t15453 + t15454;
  t15501 = -1.*t15455*t5501;
  t15502 = -0.24*t5870*t6685;
  t15503 = t15501 + t15502;
  t15522 = t5870*t15455;
  t15526 = -0.24*t5501*t6685;
  t15531 = t15522 + t15526;
  t12581 = t233*t12501;
  t12587 = t12581 + t10518;
  t15437 = 0.384*var2[0]*t12587;
  t15446 = t8149*t12501;
  t15447 = t15446 + t12189;
  t15450 = 0.384*var2[1]*t15447;
  t15505 = t15455*t5501;
  t15510 = 0.24*t5870*t6685;
  t15511 = t15505 + t15510;
  t15517 = t8004*t15511;
  t15549 = -0.24*t1332*t5501;
  t15550 = t15549 + t15502;
  t15538 = 0.24*t5501*t6685;
  t15542 = t15531*t10334;
  t15625 = t15503*t8244;
  t15626 = t15511*t8244;
  t15627 = t8004*t15531;
  t15628 = t12501*t15531;
  t15629 = t15625 + t15626 + t15627 + t15628;
  t15621 = t233*t10334;
  t15622 = t12343 + t15621;
  t15548 = t8004*t15503;
  t15602 = t8004*t15550;
  t15603 = t15550*t12501;
  t15607 = t8244*t15531;
  t15608 = 0.24*t5870*t1332;
  t15609 = t15608 + t15526;
  t15610 = t8244*t15609;
  t15611 = -0.24*t5870*t1332;
  t15615 = t15611 + t15538;
  t15616 = t8244*t15615;
  t15617 = t15548 + t15602 + t15517 + t15603 + t15607 + t15610 + t15616 + t15542;
  t15618 = 0.384*var2[2]*t15617;
  t15619 = t15437 + t15450 + t15618;
  t15620 = var2[6]*t15619;
  t15623 = 0.384*var2[6]*t15622;
  t15624 = 0.384*var2[6]*t11525;
  t15661 = -1.*t15455*t6685;
  t15662 = 0.24*t1332*t6685;
  t15666 = t15661 + t15662;
  t15657 = t15550*t8244;
  t15658 = t12501*t15609;
  t15659 = t15657 + t15626 + t15627 + t15658;
  t15633 = 0.384*var2[1]*t11525;
  t15634 = 0.384*var2[0]*t15622;
  p_output1[0]=(0.384*t8268*var2[0] + 0.384*(t233*t8244 + t8731)*var2[1])*var2[6];
  p_output1[1]=t12342;
  p_output1[2]=t12342;
  p_output1[3]=0.384*t12353*var2[6];
  p_output1[4]=0.384*t8268*var2[6];
  p_output1[5]=0.384*t12353*var2[0] + 0.384*t8268*var2[1];
  p_output1[6]=t12342;
  p_output1[7]=(t15437 + t15450 + 0.384*(t12501*t15503 + t15517 + t15542 + 2.*t15503*t8004 + 2.*t15531*t8244 + (t15538 - 1.*t15455*t5870)*t8244)*var2[2])*var2[6];
  p_output1[8]=t15620;
  p_output1[9]=t15623;
  p_output1[10]=t15624;
  p_output1[11]=0.384*t15629*var2[6];
  p_output1[12]=t15633 + t15634 + 0.384*t15629*var2[2];
  p_output1[13]=t12342;
  p_output1[14]=t15620;
  p_output1[15]=(t15437 + t15450 + 0.384*(t15517 + t15542 + t15603 + t15616 + 2.*t15550*t8004 + 2.*t15609*t8244)*var2[2] + 0.384*(0.24*Power(t1332,2) - 1.*t1332*t15455)*var2[5])*var2[6];
  p_output1[16]=t15623;
  p_output1[17]=t15624;
  p_output1[18]=0.384*t15659*var2[6];
  p_output1[19]=0.384*t15666*var2[6];
  p_output1[20]=t15633 + t15634 + 0.384*t15659*var2[2] + 0.384*t15666*var2[5];
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

#include "J_Ce3_vec7_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
