/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:01 GMT-04:00
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
  double t6303;
  double t2092;
  double t2104;
  double t6314;
  double t11431;
  double t2011;
  double t5153;
  double t6337;
  double t8731;
  double t11545;
  double t11588;
  double t11589;
  double t11590;
  double t11591;
  double t11371;
  double t11445;
  double t11471;
  double t11479;
  double t11482;
  double t11486;
  double t11497;
  double t11501;
  double t11502;
  double t11625;
  double t11626;
  double t11627;
  double t11603;
  double t11604;
  double t11605;
  double t11606;
  double t11607;
  double t11608;
  double t11629;
  double t11630;
  double t11631;
  double t11633;
  double t11634;
  double t11635;
  double t11636;
  double t11637;
  double t11638;
  double t11655;
  double t11656;
  double t11671;
  double t11672;
  double t11673;
  double t11675;
  double t11676;
  double t11677;
  double t11681;
  double t11682;
  double t11683;
  double t11658;
  double t11659;
  double t11660;
  double t11648;
  double t11649;
  double t11650;
  double t11596;
  double t11597;
  double t11602;
  double t11610;
  double t11611;
  double t11620;
  double t11621;
  double t11628;
  double t11652;
  double t11653;
  double t11643;
  double t11644;
  double t11645;
  double t11646;
  double t11647;
  double t11651;
  double t11654;
  double t11657;
  double t11661;
  double t11662;
  double t11663;
  double t11665;
  double t11666;
  double t11667;
  double t11668;
  double t11669;
  double t11674;
  double t11678;
  double t11679;
  double t11684;
  double t11685;
  double t11686;
  double t11687;
  double t11688;
  double t11690;
  double t11691;
  double t11692;
  double t11694;
  double t11695;
  double t11696;
  double t11697;
  double t11698;
  double t11716;
  double t11717;
  double t11718;
  double t11719;
  double t11720;
  double t11721;
  double t11670;
  double t11680;
  double t11689;
  double t11693;
  double t11699;
  double t11700;
  double t11705;
  double t11706;
  double t11707;
  double t11708;
  double t11503;
  double t11609;
  double t11622;
  double t11623;
  double t11726;
  double t11727;
  double t11728;
  t6303 = Cos(var1[3]);
  t2092 = Cos(var1[4]);
  t2104 = Sin(var1[3]);
  t6314 = Sin(var1[4]);
  t11431 = Sin(var1[2]);
  t2011 = Cos(var1[2]);
  t5153 = -1.*t2092*t2104;
  t6337 = -1.*t6303*t6314;
  t8731 = t5153 + t6337;
  t11545 = -1.*t2092;
  t11588 = 1. + t11545;
  t11589 = 0.4*t11588;
  t11590 = 0.64*t2092;
  t11591 = t11589 + t11590;
  t11371 = t2011*t8731;
  t11445 = -1.*t6303*t2092;
  t11471 = t2104*t6314;
  t11479 = t11445 + t11471;
  t11482 = t11431*t11479;
  t11486 = t11371 + t11482;
  t11497 = -1.*t6303*t11431;
  t11501 = -1.*t2011*t2104;
  t11502 = t11497 + t11501;
  t11625 = t2011*t6303;
  t11626 = -1.*t11431*t2104;
  t11627 = t11625 + t11626;
  t11603 = t11431*t8731;
  t11604 = t6303*t2092;
  t11605 = -1.*t2104*t6314;
  t11606 = t11604 + t11605;
  t11607 = t2011*t11606;
  t11608 = t11603 + t11607;
  t11629 = t6303*t11431;
  t11630 = t2011*t2104;
  t11631 = t11629 + t11630;
  t11633 = t2092*t2104;
  t11634 = t6303*t6314;
  t11635 = t11633 + t11634;
  t11636 = t2011*t11635;
  t11637 = t11431*t11606;
  t11638 = t11636 + t11637;
  t11655 = -1.*t11431*t11606;
  t11656 = t11371 + t11655;
  t11671 = t11591*t2104;
  t11672 = 0.24*t6303*t6314;
  t11673 = t11671 + t11672;
  t11675 = t6303*t11591;
  t11676 = -0.24*t2104*t6314;
  t11677 = t11675 + t11676;
  t11681 = -1.*t11591*t2104;
  t11682 = -0.24*t6303*t6314;
  t11683 = t11681 + t11682;
  t11658 = -1.*t11431*t8731;
  t11659 = t2011*t11479;
  t11660 = t11658 + t11659;
  t11648 = -1.*t2011*t6303;
  t11649 = t11431*t2104;
  t11650 = t11648 + t11649;
  t11596 = t11591*t6314;
  t11597 = -0.24*t2092*t6314;
  t11602 = t11596 + t11597;
  t11610 = t11591*t2092;
  t11611 = Power(t6314,2);
  t11620 = 0.24*t11611;
  t11621 = t11610 + t11620;
  t11628 = 13.6*t11502*t11627;
  t11652 = -1.*t11431*t11635;
  t11653 = t11652 + t11607;
  t11643 = Power(t11502,2);
  t11644 = 6.8*t11643;
  t11645 = 6.8*t11502*t11631;
  t11646 = Power(t11627,2);
  t11647 = 6.8*t11646;
  t11651 = 6.8*t11627*t11650;
  t11654 = 3.2*t11608*t11653;
  t11657 = 3.2*t11656*t11638;
  t11661 = 3.2*t11608*t11660;
  t11662 = 3.2*t11656*t11486;
  t11663 = t11644 + t11645 + t11647 + t11651 + t11654 + t11657 + t11661 + t11662;
  t11665 = Power(t6303,2);
  t11666 = 0.11*t11665;
  t11667 = Power(t2104,2);
  t11668 = 0.11*t11667;
  t11669 = t11666 + t11668;
  t11674 = -1.*t11673*t11606;
  t11678 = -1.*t8731*t11677;
  t11679 = t11674 + t11678;
  t11684 = t11683*t11606;
  t11685 = t11673*t11606;
  t11686 = t8731*t11677;
  t11687 = t11635*t11677;
  t11688 = t11684 + t11685 + t11686 + t11687;
  t11690 = t11673*t11635;
  t11691 = t11606*t11677;
  t11692 = t11690 + t11691;
  t11694 = -1.*t8731*t11683;
  t11695 = -1.*t8731*t11673;
  t11696 = -1.*t11606*t11677;
  t11697 = -1.*t11677*t11479;
  t11698 = t11694 + t11695 + t11696 + t11697;
  t11716 = 6.8*t11650*t11669;
  t11717 = 3.2*t11656*t11679;
  t11718 = 3.2*t11656*t11688;
  t11719 = 3.2*t11692*t11660;
  t11720 = 3.2*t11653*t11698;
  t11721 = t11716 + t11717 + t11718 + t11719 + t11720;
  t11670 = 6.8*t11502*t11669;
  t11680 = 3.2*t11608*t11679;
  t11689 = 3.2*t11608*t11688;
  t11693 = 3.2*t11692*t11486;
  t11699 = 3.2*t11638*t11698;
  t11700 = t11670 + t11680 + t11689 + t11693 + t11699;
  t11705 = 0.748*t11650;
  t11706 = 3.2*t11602*t11656;
  t11707 = 3.2*t11621*t11660;
  t11708 = t11705 + t11706 + t11707;
  t11503 = 0.748*t11502;
  t11609 = 3.2*t11602*t11608;
  t11622 = 3.2*t11621*t11486;
  t11623 = t11503 + t11609 + t11622;
  t11726 = 3.2*t11621*t11688;
  t11727 = 3.2*t11602*t11698;
  t11728 = t11726 + t11727;
  p_output1[0]=var2[3]*(-0.5*(6.4*t11486*t11608 + t11628 + 13.6*t11627*t11631 + 6.4*t11608*t11638)*var2[0] - 0.5*t11663*var2[1] - 0.5*t11700*var2[2] - 0.5*t11623*var2[3] - 0.384*t11486*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t11663*var2[0] - 0.5*(t11628 + 13.6*t11502*t11650 + 6.4*t11653*t11656 + 6.4*t11656*t11660)*var2[1] - 0.5*t11721*var2[2] - 0.5*t11708*var2[3] - 0.384*t11660*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t11700*var2[0] - 0.5*t11721*var2[1] - 0.5*(6.4*t11688*t11692 + 6.4*t11679*t11698)*var2[2] - 0.5*t11728*var2[3] - 0.384*t11688*var2[4]);
  p_output1[3]=(-0.5*t11623*var2[0] - 0.5*t11708*var2[1] - 0.5*t11728*var2[2])*var2[3];
  p_output1[4]=(-0.384*t11486*var2[0] - 0.384*t11660*var2[1] - 0.384*t11688*var2[2])*var2[3];
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

#include "Ce2_vec4_five_link_walker.hh"

namespace SymFunction
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
