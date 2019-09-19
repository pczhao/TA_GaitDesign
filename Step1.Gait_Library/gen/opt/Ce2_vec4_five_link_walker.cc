/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:03 GMT-04:00
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
  double t1962;
  double t1922;
  double t1941;
  double t1965;
  double t2061;
  double t6;
  double t1960;
  double t2026;
  double t2046;
  double t2134;
  double t2136;
  double t2137;
  double t2140;
  double t2154;
  double t2054;
  double t2062;
  double t2064;
  double t2077;
  double t2078;
  double t2080;
  double t2098;
  double t2117;
  double t2119;
  double t2248;
  double t2299;
  double t2315;
  double t2182;
  double t2184;
  double t2187;
  double t2191;
  double t2198;
  double t2202;
  double t2708;
  double t2762;
  double t3108;
  double t5583;
  double t5592;
  double t5671;
  double t5672;
  double t5674;
  double t5679;
  double t5808;
  double t5810;
  double t5868;
  double t5876;
  double t5878;
  double t5883;
  double t5885;
  double t5886;
  double t5891;
  double t5892;
  double t5896;
  double t5812;
  double t5813;
  double t5822;
  double t5745;
  double t5768;
  double t5777;
  double t2155;
  double t2161;
  double t2174;
  double t2210;
  double t2211;
  double t2212;
  double t2218;
  double t2321;
  double t5779;
  double t5785;
  double t5701;
  double t5730;
  double t5741;
  double t5743;
  double t5744;
  double t5778;
  double t5788;
  double t5811;
  double t5823;
  double t5825;
  double t5827;
  double t5849;
  double t5850;
  double t5851;
  double t5859;
  double t5860;
  double t5881;
  double t5888;
  double t5889;
  double t5897;
  double t5898;
  double t5900;
  double t5901;
  double t5902;
  double t5905;
  double t5906;
  double t5907;
  double t5909;
  double t5914;
  double t5915;
  double t5916;
  double t5917;
  double t5949;
  double t5951;
  double t5953;
  double t5954;
  double t5958;
  double t5959;
  double t5861;
  double t5890;
  double t5903;
  double t5908;
  double t5918;
  double t5919;
  double t5930;
  double t5934;
  double t5935;
  double t5936;
  double t2129;
  double t2207;
  double t2226;
  double t2242;
  double t5967;
  double t5969;
  double t5974;
  t1962 = Cos(var1[3]);
  t1922 = Cos(var1[4]);
  t1941 = Sin(var1[3]);
  t1965 = Sin(var1[4]);
  t2061 = Sin(var1[2]);
  t6 = Cos(var1[2]);
  t1960 = -1.*t1922*t1941;
  t2026 = -1.*t1962*t1965;
  t2046 = t1960 + t2026;
  t2134 = -1.*t1922;
  t2136 = 1. + t2134;
  t2137 = 0.4*t2136;
  t2140 = 0.64*t1922;
  t2154 = t2137 + t2140;
  t2054 = t6*t2046;
  t2062 = -1.*t1962*t1922;
  t2064 = t1941*t1965;
  t2077 = t2062 + t2064;
  t2078 = t2061*t2077;
  t2080 = t2054 + t2078;
  t2098 = -1.*t1962*t2061;
  t2117 = -1.*t6*t1941;
  t2119 = t2098 + t2117;
  t2248 = t6*t1962;
  t2299 = -1.*t2061*t1941;
  t2315 = t2248 + t2299;
  t2182 = t2061*t2046;
  t2184 = t1962*t1922;
  t2187 = -1.*t1941*t1965;
  t2191 = t2184 + t2187;
  t2198 = t6*t2191;
  t2202 = t2182 + t2198;
  t2708 = t1962*t2061;
  t2762 = t6*t1941;
  t3108 = t2708 + t2762;
  t5583 = t1922*t1941;
  t5592 = t1962*t1965;
  t5671 = t5583 + t5592;
  t5672 = t6*t5671;
  t5674 = t2061*t2191;
  t5679 = t5672 + t5674;
  t5808 = -1.*t2061*t2191;
  t5810 = t2054 + t5808;
  t5868 = t2154*t1941;
  t5876 = 0.24*t1962*t1965;
  t5878 = t5868 + t5876;
  t5883 = t1962*t2154;
  t5885 = -0.24*t1941*t1965;
  t5886 = t5883 + t5885;
  t5891 = -1.*t2154*t1941;
  t5892 = -0.24*t1962*t1965;
  t5896 = t5891 + t5892;
  t5812 = -1.*t2061*t2046;
  t5813 = t6*t2077;
  t5822 = t5812 + t5813;
  t5745 = -1.*t6*t1962;
  t5768 = t2061*t1941;
  t5777 = t5745 + t5768;
  t2155 = t2154*t1965;
  t2161 = -0.24*t1922*t1965;
  t2174 = t2155 + t2161;
  t2210 = t2154*t1922;
  t2211 = Power(t1965,2);
  t2212 = 0.24*t2211;
  t2218 = t2210 + t2212;
  t2321 = 13.6*t2119*t2315;
  t5779 = -1.*t2061*t5671;
  t5785 = t5779 + t2198;
  t5701 = Power(t2119,2);
  t5730 = 6.8*t5701;
  t5741 = 6.8*t2119*t3108;
  t5743 = Power(t2315,2);
  t5744 = 6.8*t5743;
  t5778 = 6.8*t2315*t5777;
  t5788 = 3.2*t2202*t5785;
  t5811 = 3.2*t5810*t5679;
  t5823 = 3.2*t2202*t5822;
  t5825 = 3.2*t5810*t2080;
  t5827 = t5730 + t5741 + t5744 + t5778 + t5788 + t5811 + t5823 + t5825;
  t5849 = Power(t1962,2);
  t5850 = 0.11*t5849;
  t5851 = Power(t1941,2);
  t5859 = 0.11*t5851;
  t5860 = t5850 + t5859;
  t5881 = -1.*t5878*t2191;
  t5888 = -1.*t2046*t5886;
  t5889 = t5881 + t5888;
  t5897 = t5896*t2191;
  t5898 = t5878*t2191;
  t5900 = t2046*t5886;
  t5901 = t5671*t5886;
  t5902 = t5897 + t5898 + t5900 + t5901;
  t5905 = t5878*t5671;
  t5906 = t2191*t5886;
  t5907 = t5905 + t5906;
  t5909 = -1.*t2046*t5896;
  t5914 = -1.*t2046*t5878;
  t5915 = -1.*t2191*t5886;
  t5916 = -1.*t5886*t2077;
  t5917 = t5909 + t5914 + t5915 + t5916;
  t5949 = 6.8*t5777*t5860;
  t5951 = 3.2*t5810*t5889;
  t5953 = 3.2*t5810*t5902;
  t5954 = 3.2*t5907*t5822;
  t5958 = 3.2*t5785*t5917;
  t5959 = t5949 + t5951 + t5953 + t5954 + t5958;
  t5861 = 6.8*t2119*t5860;
  t5890 = 3.2*t2202*t5889;
  t5903 = 3.2*t2202*t5902;
  t5908 = 3.2*t5907*t2080;
  t5918 = 3.2*t5679*t5917;
  t5919 = t5861 + t5890 + t5903 + t5908 + t5918;
  t5930 = 0.748*t5777;
  t5934 = 3.2*t2174*t5810;
  t5935 = 3.2*t2218*t5822;
  t5936 = t5930 + t5934 + t5935;
  t2129 = 0.748*t2119;
  t2207 = 3.2*t2174*t2202;
  t2226 = 3.2*t2218*t2080;
  t2242 = t2129 + t2207 + t2226;
  t5967 = 3.2*t2218*t5902;
  t5969 = 3.2*t2174*t5917;
  t5974 = t5967 + t5969;
  p_output1[0]=var2[3]*(-0.5*(6.4*t2080*t2202 + t2321 + 13.6*t2315*t3108 + 6.4*t2202*t5679)*var2[0] - 0.5*t5827*var2[1] - 0.5*t5919*var2[2] - 0.5*t2242*var2[3] - 0.384*t2080*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t5827*var2[0] - 0.5*(t2321 + 13.6*t2119*t5777 + 6.4*t5785*t5810 + 6.4*t5810*t5822)*var2[1] - 0.5*t5959*var2[2] - 0.5*t5936*var2[3] - 0.384*t5822*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t5919*var2[0] - 0.5*t5959*var2[1] - 0.5*(6.4*t5902*t5907 + 6.4*t5889*t5917)*var2[2] - 0.5*t5974*var2[3] - 0.384*t5902*var2[4]);
  p_output1[3]=(-0.5*t2242*var2[0] - 0.5*t5936*var2[1] - 0.5*t5974*var2[2])*var2[3];
  p_output1[4]=(-0.384*t2080*var2[0] - 0.384*t5822*var2[1] - 0.384*t5902*var2[2])*var2[3];
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

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
