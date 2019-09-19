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
  double t11755;
  double t11752;
  double t11753;
  double t11756;
  double t11804;
  double t11703;
  double t11754;
  double t11769;
  double t11802;
  double t11825;
  double t11831;
  double t11832;
  double t11833;
  double t11834;
  double t11803;
  double t11805;
  double t11811;
  double t11812;
  double t11813;
  double t11814;
  double t11816;
  double t11822;
  double t11823;
  double t11852;
  double t11853;
  double t11854;
  double t11838;
  double t11839;
  double t11840;
  double t11841;
  double t11842;
  double t11843;
  double t11856;
  double t11857;
  double t11858;
  double t11860;
  double t11861;
  double t11862;
  double t11863;
  double t11864;
  double t11865;
  double t11882;
  double t11883;
  double t11898;
  double t11899;
  double t11900;
  double t11902;
  double t11903;
  double t11904;
  double t11908;
  double t11909;
  double t11910;
  double t11885;
  double t11886;
  double t11887;
  double t11875;
  double t11876;
  double t11877;
  double t11835;
  double t11836;
  double t11837;
  double t11845;
  double t11846;
  double t11847;
  double t11848;
  double t11855;
  double t11879;
  double t11880;
  double t11870;
  double t11871;
  double t11872;
  double t11873;
  double t11874;
  double t11878;
  double t11881;
  double t11884;
  double t11888;
  double t11889;
  double t11890;
  double t11892;
  double t11893;
  double t11894;
  double t11895;
  double t11896;
  double t11901;
  double t11905;
  double t11906;
  double t11911;
  double t11912;
  double t11913;
  double t11914;
  double t11915;
  double t11917;
  double t11918;
  double t11919;
  double t11921;
  double t11922;
  double t11923;
  double t11924;
  double t11925;
  double t11943;
  double t11944;
  double t11945;
  double t11946;
  double t11947;
  double t11948;
  double t11897;
  double t11907;
  double t11916;
  double t11920;
  double t11926;
  double t11927;
  double t11932;
  double t11933;
  double t11934;
  double t11935;
  double t11824;
  double t11844;
  double t11849;
  double t11850;
  double t11953;
  double t11954;
  double t11955;
  t11755 = Cos(var1[5]);
  t11752 = Cos(var1[6]);
  t11753 = Sin(var1[5]);
  t11756 = Sin(var1[6]);
  t11804 = Sin(var1[2]);
  t11703 = Cos(var1[2]);
  t11754 = -1.*t11752*t11753;
  t11769 = -1.*t11755*t11756;
  t11802 = t11754 + t11769;
  t11825 = -1.*t11752;
  t11831 = 1. + t11825;
  t11832 = 0.4*t11831;
  t11833 = 0.64*t11752;
  t11834 = t11832 + t11833;
  t11803 = t11703*t11802;
  t11805 = -1.*t11755*t11752;
  t11811 = t11753*t11756;
  t11812 = t11805 + t11811;
  t11813 = t11804*t11812;
  t11814 = t11803 + t11813;
  t11816 = -1.*t11755*t11804;
  t11822 = -1.*t11703*t11753;
  t11823 = t11816 + t11822;
  t11852 = t11703*t11755;
  t11853 = -1.*t11804*t11753;
  t11854 = t11852 + t11853;
  t11838 = t11804*t11802;
  t11839 = t11755*t11752;
  t11840 = -1.*t11753*t11756;
  t11841 = t11839 + t11840;
  t11842 = t11703*t11841;
  t11843 = t11838 + t11842;
  t11856 = t11755*t11804;
  t11857 = t11703*t11753;
  t11858 = t11856 + t11857;
  t11860 = t11752*t11753;
  t11861 = t11755*t11756;
  t11862 = t11860 + t11861;
  t11863 = t11703*t11862;
  t11864 = t11804*t11841;
  t11865 = t11863 + t11864;
  t11882 = -1.*t11804*t11841;
  t11883 = t11803 + t11882;
  t11898 = t11834*t11753;
  t11899 = 0.24*t11755*t11756;
  t11900 = t11898 + t11899;
  t11902 = t11755*t11834;
  t11903 = -0.24*t11753*t11756;
  t11904 = t11902 + t11903;
  t11908 = -1.*t11834*t11753;
  t11909 = -0.24*t11755*t11756;
  t11910 = t11908 + t11909;
  t11885 = -1.*t11804*t11802;
  t11886 = t11703*t11812;
  t11887 = t11885 + t11886;
  t11875 = -1.*t11703*t11755;
  t11876 = t11804*t11753;
  t11877 = t11875 + t11876;
  t11835 = t11834*t11756;
  t11836 = -0.24*t11752*t11756;
  t11837 = t11835 + t11836;
  t11845 = t11834*t11752;
  t11846 = Power(t11756,2);
  t11847 = 0.24*t11846;
  t11848 = t11845 + t11847;
  t11855 = 13.6*t11823*t11854;
  t11879 = -1.*t11804*t11862;
  t11880 = t11879 + t11842;
  t11870 = Power(t11823,2);
  t11871 = 6.8*t11870;
  t11872 = 6.8*t11823*t11858;
  t11873 = Power(t11854,2);
  t11874 = 6.8*t11873;
  t11878 = 6.8*t11854*t11877;
  t11881 = 3.2*t11843*t11880;
  t11884 = 3.2*t11883*t11865;
  t11888 = 3.2*t11843*t11887;
  t11889 = 3.2*t11883*t11814;
  t11890 = t11871 + t11872 + t11874 + t11878 + t11881 + t11884 + t11888 + t11889;
  t11892 = Power(t11755,2);
  t11893 = 0.11*t11892;
  t11894 = Power(t11753,2);
  t11895 = 0.11*t11894;
  t11896 = t11893 + t11895;
  t11901 = -1.*t11900*t11841;
  t11905 = -1.*t11802*t11904;
  t11906 = t11901 + t11905;
  t11911 = t11910*t11841;
  t11912 = t11900*t11841;
  t11913 = t11802*t11904;
  t11914 = t11862*t11904;
  t11915 = t11911 + t11912 + t11913 + t11914;
  t11917 = t11900*t11862;
  t11918 = t11841*t11904;
  t11919 = t11917 + t11918;
  t11921 = -1.*t11802*t11910;
  t11922 = -1.*t11802*t11900;
  t11923 = -1.*t11841*t11904;
  t11924 = -1.*t11904*t11812;
  t11925 = t11921 + t11922 + t11923 + t11924;
  t11943 = 6.8*t11877*t11896;
  t11944 = 3.2*t11883*t11906;
  t11945 = 3.2*t11883*t11915;
  t11946 = 3.2*t11919*t11887;
  t11947 = 3.2*t11880*t11925;
  t11948 = t11943 + t11944 + t11945 + t11946 + t11947;
  t11897 = 6.8*t11823*t11896;
  t11907 = 3.2*t11843*t11906;
  t11916 = 3.2*t11843*t11915;
  t11920 = 3.2*t11919*t11814;
  t11926 = 3.2*t11865*t11925;
  t11927 = t11897 + t11907 + t11916 + t11920 + t11926;
  t11932 = 0.748*t11877;
  t11933 = 3.2*t11837*t11883;
  t11934 = 3.2*t11848*t11887;
  t11935 = t11932 + t11933 + t11934;
  t11824 = 0.748*t11823;
  t11844 = 3.2*t11837*t11843;
  t11849 = 3.2*t11848*t11814;
  t11850 = t11824 + t11844 + t11849;
  t11953 = 3.2*t11848*t11915;
  t11954 = 3.2*t11837*t11925;
  t11955 = t11953 + t11954;
  p_output1[0]=var2[5]*(-0.5*(6.4*t11814*t11843 + t11855 + 13.6*t11854*t11858 + 6.4*t11843*t11865)*var2[0] - 0.5*t11890*var2[1] - 0.5*t11927*var2[2] - 0.5*t11850*var2[5] - 0.384*t11814*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t11890*var2[0] - 0.5*(t11855 + 13.6*t11823*t11877 + 6.4*t11880*t11883 + 6.4*t11883*t11887)*var2[1] - 0.5*t11948*var2[2] - 0.5*t11935*var2[5] - 0.384*t11887*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t11927*var2[0] - 0.5*t11948*var2[1] - 0.5*(6.4*t11915*t11919 + 6.4*t11906*t11925)*var2[2] - 0.5*t11955*var2[5] - 0.384*t11915*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t11850*var2[0] - 0.5*t11935*var2[1] - 0.5*t11955*var2[2])*var2[5];
  p_output1[6]=(-0.384*t11814*var2[0] - 0.384*t11887*var2[1] - 0.384*t11915*var2[2])*var2[5];
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

#include "Ce2_vec6_five_link_walker.hh"

namespace SymFunction
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
