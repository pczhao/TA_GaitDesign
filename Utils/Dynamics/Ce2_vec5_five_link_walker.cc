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
  double t8306;
  double t3338;
  double t5208;
  double t11494;
  double t11640;
  double t5234;
  double t11624;
  double t11632;
  double t1912;
  double t11704;
  double t11709;
  double t11710;
  double t11711;
  double t11712;
  double t11722;
  double t11723;
  double t11724;
  double t11725;
  double t11729;
  double t11730;
  double t11736;
  double t11639;
  double t11641;
  double t11642;
  double t11664;
  double t11701;
  double t11702;
  double t11740;
  double t11741;
  double t11742;
  double t11743;
  double t11744;
  double t11745;
  double t11760;
  double t11761;
  double t11770;
  double t11771;
  double t11772;
  double t11774;
  double t11775;
  double t11776;
  double t11780;
  double t11781;
  double t11782;
  double t11786;
  double t11787;
  double t11763;
  double t11764;
  double t11765;
  double t11737;
  double t11738;
  double t11739;
  double t11757;
  double t11758;
  double t11713;
  double t11714;
  double t11715;
  double t11732;
  double t11733;
  double t11734;
  double t11747;
  double t11748;
  double t11749;
  double t11759;
  double t11762;
  double t11766;
  double t11767;
  double t11768;
  double t11773;
  double t11777;
  double t11778;
  double t11783;
  double t11784;
  double t11785;
  double t11788;
  double t11789;
  double t11791;
  double t11792;
  double t11793;
  double t11795;
  double t11796;
  double t11797;
  double t11798;
  double t11799;
  double t11817;
  double t11818;
  double t11819;
  double t11820;
  double t11821;
  double t11779;
  double t11790;
  double t11794;
  double t11800;
  double t11801;
  double t11806;
  double t11807;
  double t11808;
  double t11809;
  double t11810;
  double t11731;
  double t11735;
  double t11746;
  double t11750;
  double t11751;
  double t11826;
  double t11827;
  double t11828;
  double t11829;
  double t11830;
  t8306 = Cos(var1[3]);
  t3338 = Cos(var1[4]);
  t5208 = Sin(var1[3]);
  t11494 = Sin(var1[4]);
  t11640 = Sin(var1[2]);
  t5234 = -1.*t3338*t5208;
  t11624 = -1.*t8306*t11494;
  t11632 = t5234 + t11624;
  t1912 = Cos(var1[2]);
  t11704 = -1.*t3338;
  t11709 = 1. + t11704;
  t11710 = 0.4*t11709;
  t11711 = 0.64*t3338;
  t11712 = t11710 + t11711;
  t11722 = t11640*t11632;
  t11723 = t8306*t3338;
  t11724 = -1.*t5208*t11494;
  t11725 = t11723 + t11724;
  t11729 = t1912*t11725;
  t11730 = t11722 + t11729;
  t11736 = t11712*t3338;
  t11639 = t1912*t11632;
  t11641 = -1.*t8306*t3338;
  t11642 = t5208*t11494;
  t11664 = t11641 + t11642;
  t11701 = t11640*t11664;
  t11702 = t11639 + t11701;
  t11740 = t3338*t5208;
  t11741 = t8306*t11494;
  t11742 = t11740 + t11741;
  t11743 = t1912*t11742;
  t11744 = t11640*t11725;
  t11745 = t11743 + t11744;
  t11760 = -1.*t11640*t11725;
  t11761 = t11639 + t11760;
  t11770 = t11712*t5208;
  t11771 = 0.24*t8306*t11494;
  t11772 = t11770 + t11771;
  t11774 = t8306*t11712;
  t11775 = -0.24*t5208*t11494;
  t11776 = t11774 + t11775;
  t11780 = -0.24*t3338*t5208;
  t11781 = -0.24*t8306*t11494;
  t11782 = t11780 + t11781;
  t11786 = 0.24*t8306*t3338;
  t11787 = t11786 + t11775;
  t11763 = -1.*t11640*t11632;
  t11764 = t1912*t11664;
  t11765 = t11763 + t11764;
  t11737 = Power(t3338,2);
  t11738 = -0.24*t11737;
  t11739 = t11736 + t11738;
  t11757 = -1.*t11640*t11742;
  t11758 = t11757 + t11729;
  t11713 = t11712*t11494;
  t11714 = -0.24*t3338*t11494;
  t11715 = t11713 + t11714;
  t11732 = -1.*t11712*t11494;
  t11733 = 0.24*t3338*t11494;
  t11734 = t11732 + t11733;
  t11747 = Power(t11494,2);
  t11748 = 0.24*t11747;
  t11749 = t11736 + t11748;
  t11759 = 3.2*t11730*t11758;
  t11762 = 3.2*t11761*t11745;
  t11766 = 3.2*t11730*t11765;
  t11767 = 3.2*t11761*t11702;
  t11768 = t11759 + t11762 + t11766 + t11767;
  t11773 = -1.*t11772*t11725;
  t11777 = -1.*t11632*t11776;
  t11778 = t11773 + t11777;
  t11783 = t11782*t11725;
  t11784 = t11772*t11725;
  t11785 = t11632*t11776;
  t11788 = t11742*t11787;
  t11789 = t11783 + t11784 + t11785 + t11788;
  t11791 = t11772*t11742;
  t11792 = t11725*t11776;
  t11793 = t11791 + t11792;
  t11795 = -1.*t11632*t11782;
  t11796 = -1.*t11632*t11772;
  t11797 = -1.*t11725*t11787;
  t11798 = -1.*t11776*t11664;
  t11799 = t11795 + t11796 + t11797 + t11798;
  t11817 = 3.2*t11761*t11778;
  t11818 = 3.2*t11761*t11789;
  t11819 = 3.2*t11793*t11765;
  t11820 = 3.2*t11758*t11799;
  t11821 = t11817 + t11818 + t11819 + t11820;
  t11779 = 3.2*t11730*t11778;
  t11790 = 3.2*t11730*t11789;
  t11794 = 3.2*t11793*t11702;
  t11800 = 3.2*t11745*t11799;
  t11801 = t11779 + t11790 + t11794 + t11800;
  t11806 = 3.2*t11739*t11758;
  t11807 = 3.2*t11715*t11761;
  t11808 = 3.2*t11734*t11761;
  t11809 = 3.2*t11749*t11765;
  t11810 = t11806 + t11807 + t11808 + t11809;
  t11731 = 3.2*t11715*t11730;
  t11735 = 3.2*t11734*t11730;
  t11746 = 3.2*t11739*t11745;
  t11750 = 3.2*t11749*t11702;
  t11751 = t11731 + t11735 + t11746 + t11750;
  t11826 = 3.2*t11739*t11778;
  t11827 = 3.2*t11734*t11793;
  t11828 = 3.2*t11749*t11789;
  t11829 = 3.2*t11715*t11799;
  t11830 = t11826 + t11827 + t11828 + t11829;
  p_output1[0]=var2[4]*(-0.5*(6.4*t11702*t11730 + 6.4*t11730*t11745)*var2[0] - 0.5*t11768*var2[1] - 0.5*t11801*var2[2] - 0.5*t11751*var2[3] - 0.384*t11702*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t11768*var2[0] - 0.5*(6.4*t11758*t11761 + 6.4*t11761*t11765)*var2[1] - 0.5*t11821*var2[2] - 0.5*t11810*var2[3] - 0.384*t11765*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t11801*var2[0] - 0.5*t11821*var2[1] - 0.5*(6.4*t11789*t11793 + 6.4*t11778*t11799)*var2[2] - 0.5*t11830*var2[3] - 0.384*t11789*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t11751*var2[0] - 0.5*t11810*var2[1] - 0.5*t11830*var2[2] - 0.5*(6.4*t11715*t11739 + 6.4*t11734*t11749)*var2[3] - 0.384*t11734*var2[4]);
  p_output1[4]=(-0.384*t11702*var2[0] - 0.384*t11765*var2[1] - 0.384*t11789*var2[2] - 0.384*t11734*var2[3])*var2[4];
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

#include "Ce2_vec5_five_link_walker.hh"

namespace SymFunction
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
