/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:15 GMT-04:00
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
  double t8240;
  double t6935;
  double t7187;
  double t6681;
  double t9323;
  double t6581;
  double t8241;
  double t8827;
  double t8836;
  double t8837;
  double t8843;
  double t10148;
  double t10234;
  double t11875;
  double t6932;
  double t7191;
  double t7221;
  double t7223;
  double t12352;
  double t12363;
  double t12376;
  double t9678;
  double t9722;
  double t9938;
  double t12507;
  double t9256;
  double t9415;
  double t9418;
  double t9419;
  double t9939;
  double t12386;
  double t12392;
  double t12414;
  double t12566;
  double t12569;
  double t12578;
  double t12579;
  double t12580;
  double t12589;
  double t12590;
  double t12591;
  double t12592;
  double t12593;
  double t12595;
  double t12596;
  double t12597;
  double t12609;
  double t12636;
  double t12637;
  double t12641;
  double t12646;
  double t12647;
  double t12648;
  double t12612;
  double t12613;
  double t12614;
  double t12603;
  double t12610;
  double t12611;
  double t12615;
  double t12616;
  double t12662;
  double t12663;
  double t12664;
  double t12665;
  double t12666;
  double t12694;
  double t12695;
  double t12696;
  double t12697;
  double t12698;
  double t12699;
  double t12700;
  double t12706;
  double t12680;
  double t12686;
  double t12687;
  double t12711;
  double t12725;
  double t12726;
  double t12727;
  double t11878;
  double t12731;
  double t12732;
  double t12733;
  double t12734;
  double t12052;
  double t12737;
  double t12745;
  double t12415;
  double t12560;
  double t12751;
  double t12752;
  double t12753;
  double t12754;
  double t12763;
  double t12764;
  double t12765;
  double t12756;
  double t12757;
  double t12758;
  double t12768;
  double t12769;
  double t12770;
  double t12673;
  double t12674;
  double t12675;
  double t12340;
  double t12561;
  double t12562;
  double t12563;
  double t12620;
  double t12792;
  double t12793;
  double t12794;
  double t12788;
  double t12789;
  double t12790;
  double t12802;
  double t12803;
  double t12804;
  double t12797;
  double t12798;
  double t12799;
  double t12796;
  double t12824;
  double t12825;
  double t12805;
  double t12809;
  double t12828;
  double t12829;
  double t12831;
  double t12832;
  double t12813;
  double t12818;
  double t12819;
  double t12820;
  double t12821;
  double t12822;
  double t12823;
  double t12826;
  double t12827;
  double t12830;
  double t12833;
  double t12834;
  double t12835;
  double t12836;
  double t12837;
  double t12838;
  double t12839;
  double t12840;
  double t12841;
  double t12842;
  double t12843;
  double t12844;
  double t12845;
  double t12846;
  double t12847;
  double t12848;
  double t12849;
  double t12850;
  double t12851;
  double t12852;
  double t12857;
  double t12858;
  double t12860;
  double t12861;
  double t12863;
  double t12864;
  double t12865;
  double t12871;
  double t12872;
  double t12873;
  double t12887;
  double t12888;
  double t12889;
  double t12890;
  double t12891;
  double t12903;
  double t12904;
  double t12905;
  t8240 = Cos(var1[6]);
  t6935 = Sin(var1[2]);
  t7187 = Sin(var1[5]);
  t6681 = Cos(var1[5]);
  t9323 = Sin(var1[6]);
  t6581 = Cos(var1[2]);
  t8241 = -1.*t8240;
  t8827 = 1. + t8241;
  t8836 = 0.4*t8827;
  t8837 = 0.64*t8240;
  t8843 = t8836 + t8837;
  t10148 = t6681*t8240;
  t10234 = -1.*t7187*t9323;
  t11875 = t10148 + t10234;
  t6932 = -1.*t6581*t6681;
  t7191 = t6935*t7187;
  t7221 = t6932 + t7191;
  t7223 = 0.748*t7221;
  t12352 = t8843*t9323;
  t12363 = -0.24*t8240*t9323;
  t12376 = t12352 + t12363;
  t9678 = -1.*t8240*t7187;
  t9722 = -1.*t6681*t9323;
  t9938 = t9678 + t9722;
  t12507 = -1.*t6935*t11875;
  t9256 = t8843*t8240;
  t9415 = Power(t9323,2);
  t9418 = 0.24*t9415;
  t9419 = t9256 + t9418;
  t9939 = -1.*t6935*t9938;
  t12386 = t8240*t7187;
  t12392 = t6681*t9323;
  t12414 = t12386 + t12392;
  t12566 = t6581*t9938;
  t12569 = t12566 + t12507;
  t12578 = 3.2*t12376*t12569;
  t12579 = -1.*t6681*t8240;
  t12580 = t7187*t9323;
  t12589 = t12579 + t12580;
  t12590 = t6581*t12589;
  t12591 = t9939 + t12590;
  t12592 = 3.2*t9419*t12591;
  t12593 = t7223 + t12578 + t12592;
  t12595 = Power(t8240,2);
  t12596 = -0.24*t12595;
  t12597 = t9256 + t12596;
  t12609 = t6581*t11875;
  t12636 = t6935*t12414;
  t12637 = t12636 + t12590;
  t12641 = 3.2*t9419*t12637;
  t12646 = t6935*t12589;
  t12647 = t12566 + t12646;
  t12648 = 3.2*t12376*t12647;
  t12612 = -1.*t8843*t9323;
  t12613 = 0.24*t8240*t9323;
  t12614 = t12612 + t12613;
  t12603 = -1.*t6935*t12414;
  t12610 = t12603 + t12609;
  t12611 = 3.2*t12597*t12610;
  t12615 = 3.2*t12614*t12569;
  t12616 = t12611 + t12578 + t12615 + t12592;
  t12662 = t6935*t9938;
  t12663 = t12662 + t12609;
  t12664 = 3.2*t12597*t12663;
  t12665 = 3.2*t12614*t12647;
  t12666 = t12664 + t12641 + t12648 + t12665;
  t12694 = -1.*t6681*t6935;
  t12695 = -1.*t6581*t7187;
  t12696 = t12694 + t12695;
  t12697 = 0.748*t12696;
  t12698 = 3.2*t12376*t12610;
  t12699 = 3.2*t9419*t12569;
  t12700 = t12697 + t12698 + t12699;
  t12706 = 3.2*t12376*t12663;
  t12680 = t6581*t12414;
  t12686 = t6935*t11875;
  t12687 = t12680 + t12686;
  t12711 = 3.2*t9419*t12647;
  t12725 = 3.2*t12614*t12663;
  t12726 = 3.2*t12597*t12687;
  t12727 = t12706 + t12725 + t12726 + t12711;
  t11878 = -1.*t6581*t11875;
  t12731 = t6681*t6935;
  t12732 = t6581*t7187;
  t12733 = t12731 + t12732;
  t12734 = 0.748*t12733;
  t12052 = t9939 + t11878;
  t12737 = -1.*t6581*t9938;
  t12745 = 3.2*t12376*t12052;
  t12415 = -1.*t6581*t12414;
  t12560 = t12415 + t12507;
  t12751 = -1.*t6935*t12589;
  t12752 = t12737 + t12751;
  t12753 = 3.2*t9419*t12752;
  t12754 = t12734 + t12745 + t12753;
  t12763 = 3.2*t12376*t12591;
  t12764 = t12680 + t12751;
  t12765 = 3.2*t9419*t12764;
  t12756 = 3.2*t12614*t12052;
  t12757 = 3.2*t12597*t12560;
  t12758 = t12745 + t12756 + t12757 + t12753;
  t12768 = 3.2*t12597*t12569;
  t12769 = 3.2*t12614*t12591;
  t12770 = t12768 + t12763 + t12769 + t12765;
  t12673 = -1.*t8843*t8240;
  t12674 = 0.24*t12595;
  t12675 = t12673 + t12674;
  t12340 = 3.2*t9419*t12052;
  t12561 = 3.2*t12376*t12560;
  t12562 = t7223 + t12340 + t12561;
  t12563 = -0.5*var2[2]*t12562;
  t12620 = -0.5*var2[6]*t12616;
  t12792 = t6681*t8843;
  t12793 = -0.24*t7187*t9323;
  t12794 = t12792 + t12793;
  t12788 = -1.*t8843*t7187;
  t12789 = -0.24*t6681*t9323;
  t12790 = t12788 + t12789;
  t12802 = t8843*t7187;
  t12803 = 0.24*t6681*t9323;
  t12804 = t12802 + t12803;
  t12797 = -1.*t6681*t8843;
  t12798 = 0.24*t7187*t9323;
  t12799 = t12797 + t12798;
  t12796 = -1.*t12414*t12794;
  t12824 = -0.24*t8240*t7187;
  t12825 = t12824 + t12789;
  t12805 = -1.*t12804*t12589;
  t12809 = t9938*t12804;
  t12828 = 0.24*t6681*t8240;
  t12829 = t12828 + t12793;
  t12831 = -0.24*t6681*t8240;
  t12832 = t12831 + t12798;
  t12813 = t12794*t12589;
  t12818 = t12790*t11875;
  t12819 = t12804*t11875;
  t12820 = t9938*t12794;
  t12821 = t12414*t12794;
  t12822 = t12818 + t12819 + t12820 + t12821;
  t12823 = 3.2*t12614*t12822;
  t12826 = -1.*t12825*t11875;
  t12827 = -1.*t9938*t12794;
  t12830 = -1.*t9938*t12829;
  t12833 = -1.*t9938*t12832;
  t12834 = -1.*t12790*t12589;
  t12835 = -1.*t12825*t12589;
  t12836 = t12826 + t12827 + t12796 + t12830 + t12833 + t12834 + t12835 + t12805;
  t12837 = 3.2*t12376*t12836;
  t12838 = -1.*t9938*t12790;
  t12839 = -1.*t9938*t12804;
  t12840 = -1.*t11875*t12794;
  t12841 = -1.*t12794*t12589;
  t12842 = t12838 + t12839 + t12840 + t12841;
  t12843 = 3.2*t12597*t12842;
  t12844 = t9938*t12790;
  t12845 = t9938*t12825;
  t12846 = t12825*t12414;
  t12847 = t11875*t12794;
  t12848 = t11875*t12829;
  t12849 = t11875*t12832;
  t12850 = t12844 + t12845 + t12809 + t12846 + t12847 + t12848 + t12849 + t12813;
  t12851 = 3.2*t9419*t12850;
  t12852 = t12823 + t12837 + t12843 + t12851;
  t12857 = -1.*t12804*t11875;
  t12858 = t12857 + t12827;
  t12860 = t12804*t12414;
  t12861 = t12860 + t12847;
  t12863 = t12825*t11875;
  t12864 = t12414*t12829;
  t12865 = t12863 + t12819 + t12820 + t12864;
  t12871 = -1.*t9938*t12825;
  t12872 = -1.*t11875*t12829;
  t12873 = t12871 + t12839 + t12872 + t12841;
  t12887 = 3.2*t12597*t12858;
  t12888 = 3.2*t12614*t12861;
  t12889 = 3.2*t9419*t12865;
  t12890 = 3.2*t12376*t12873;
  t12891 = t12887 + t12888 + t12889 + t12890;
  t12903 = 6.4*t12597*t12376;
  t12904 = 6.4*t12614*t9419;
  t12905 = t12903 + t12904;
  p_output1[0]=var2[5]*(t12563 + t12620 - 0.5*t12593*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t12593*var2[2] - 0.5*(t12641 + t12648 + t7223)*var2[5] - 0.5*t12666*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t12616*var2[2] - 0.5*t12666*var2[5] - 0.5*(t12641 + 6.4*t12614*t12647 + t12648 + 6.4*t12597*t12663 + 3.2*t12663*t12675 + 3.2*t12614*t12687)*var2[6]);
  p_output1[3]=-0.5*t12700*var2[5];
  p_output1[4]=-0.5*t12700*var2[2] - 1.*(t12697 + t12706 + t12711)*var2[5] - 0.5*t12727*var2[6];
  p_output1[5]=-0.5*t12727*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t12376*(t11878 + t12636) + t12734 + 3.2*(t12686 + t12737)*t9419)*var2[2] - 0.5*t12754*var2[5] - 0.5*t12758*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t12754*var2[2] - 0.5*(t12734 + t12763 + t12765)*var2[5] - 0.5*t12770*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t12758*var2[2] - 0.5*t12770*var2[5] - 0.5*(6.4*t12569*t12597 + 6.4*t12591*t12614 + 3.2*t12610*t12614 + 3.2*t12569*t12675 + t12763 + t12765)*var2[6]);
  p_output1[9]=-0.5*t12562*var2[5];
  p_output1[10]=t12563 + t12620 - 1.*t12593*var2[5];
  p_output1[11]=-0.5*t12616*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t9419*(t12414*t12790 + 2.*t11875*t12794 + t11875*t12799 + t12809 + t12813 + 2.*t12790*t9938) + 3.2*t12376*(-1.*t11875*t12790 - 2.*t12589*t12790 + t12796 + t12805 - 2.*t12794*t9938 - 1.*t12799*t9938))*var2[5] - 0.5*t12852*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t12852*var2[5] - 0.5*(3.2*t12614*t12858 + 3.2*t12675*t12861 + 6.4*t12614*t12865 + 6.4*t12597*t12873 + 3.2*t9419*(t12809 + t12813 + 2.*t11875*t12829 + t12846 + t12849 + 2.*t12825*t9938) + 3.2*t12376*(t12796 + t12805 - 2.*t12589*t12825 + t12826 + t12833 - 2.*t12829*t9938))*var2[6]);
  p_output1[14]=-1.*(3.2*t12376*t12842 + 3.2*t12822*t9419)*var2[5] - 0.5*t12891*var2[6];
  p_output1[15]=-0.5*t12891*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t12597,2) + 6.4*t12376*t12614 + 6.4*Power(t12614,2) + 6.4*t12675*t9419)*var2[5]*var2[6];
  p_output1[17]=-0.5*t12905*var2[6];
  p_output1[18]=-0.5*t12905*var2[5];
  p_output1[19]=-0.384*t12675*var2[5]*var2[6];
  p_output1[20]=-0.384*t12614*var2[6];
  p_output1[21]=-0.384*t12614*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec6_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
