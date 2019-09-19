/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t15851;
  double t15848;
  double t15849;
  double t15852;
  double t10876;
  double t15850;
  double t15853;
  double t15854;
  double t15863;
  double t15864;
  double t15865;
  double t15866;
  double t15843;
  double t15844;
  double t15890;
  double t15891;
  double t15892;
  double t15889;
  double t15893;
  double t15894;
  double t15895;
  double t15896;
  double t15897;
  double t15898;
  double t15903;
  double t15904;
  double t15905;
  double t15906;
  double t15907;
  double t15908;
  double t15911;
  double t15912;
  double t15913;
  double t15914;
  double t15915;
  double t15916;
  double t15917;
  double t15930;
  double t15931;
  double t15932;
  double t15929;
  double t15933;
  double t15934;
  double t15935;
  double t15936;
  double t15937;
  double t15928;
  double t15938;
  double t15939;
  double t15940;
  double t15950;
  double t15952;
  double t15957;
  double t15958;
  double t15959;
  double t15960;
  double t15961;
  double t15967;
  double t15968;
  double t15969;
  double t15970;
  double t15971;
  double t15972;
  double t15966;
  double t15973;
  double t15974;
  double t15975;
  t15851 = Cos(var1[2]);
  t15848 = Cos(var1[3]);
  t15849 = Sin(var1[2]);
  t15852 = Sin(var1[3]);
  t10876 = Cos(var1[4]);
  t15850 = t15848*t15849;
  t15853 = t15851*t15852;
  t15854 = t15850 + t15853;
  t15863 = t15851*t15848;
  t15864 = -1.*t15849*t15852;
  t15865 = t15863 + t15864;
  t15866 = Sin(var1[4]);
  t15843 = -1.*t10876;
  t15844 = 1. + t15843;
  t15890 = -1.*t15848*t15849;
  t15891 = -1.*t15851*t15852;
  t15892 = t15890 + t15891;
  t15889 = 0.4*t15844*t15865;
  t15893 = -0.4*t15892*t15866;
  t15894 = t10876*t15865;
  t15895 = t15892*t15866;
  t15896 = t15894 + t15895;
  t15897 = 0.8*t15896;
  t15898 = t15889 + t15893 + t15897;
  t15903 = -0.4*t10876*t15865;
  t15904 = 0.4*t15854*t15866;
  t15905 = -1.*t15854*t15866;
  t15906 = t15894 + t15905;
  t15907 = 0.8*t15906;
  t15908 = t15903 + t15904 + t15907;
  t15911 = -0.4*t10876*t15892;
  t15912 = 0.4*t15865*t15866;
  t15913 = t10876*t15892;
  t15914 = -1.*t15865*t15866;
  t15915 = t15913 + t15914;
  t15916 = 0.8*t15915;
  t15917 = t15911 + t15912 + t15916;
  t15930 = -1.*t15851*t15848;
  t15931 = t15849*t15852;
  t15932 = t15930 + t15931;
  t15929 = 0.4*t15844*t15892;
  t15933 = -0.4*t15932*t15866;
  t15934 = t15932*t15866;
  t15935 = t15913 + t15934;
  t15936 = 0.8*t15935;
  t15937 = t15929 + t15933 + t15936;
  t15928 = var2[4]*t15917;
  t15938 = var2[2]*t15937;
  t15939 = var2[3]*t15937;
  t15940 = t15928 + t15938 + t15939;
  t15950 = 0.4*t15892*t15866;
  t15952 = -1.*t15892*t15866;
  t15957 = -0.4*t10876*t15932;
  t15958 = t10876*t15932;
  t15959 = t15958 + t15952;
  t15960 = 0.8*t15959;
  t15961 = t15957 + t15950 + t15960;
  t15967 = 0.4*t15844*t15932;
  t15968 = -0.4*t15854*t15866;
  t15969 = t15854*t15866;
  t15970 = t15958 + t15969;
  t15971 = 0.8*t15970;
  t15972 = t15967 + t15968 + t15971;
  t15966 = var2[4]*t15961;
  t15973 = var2[2]*t15972;
  t15974 = var2[3]*t15972;
  t15975 = t15966 + t15973 + t15974;
  p_output1[0]=0.4*t15844*t15854 - 0.4*t15865*t15866 + 0.8*(t10876*t15854 + t15865*t15866) + var1[0] + var2[0] + t15898*var2[2] + t15940*var2[2] + t15898*var2[3] + t15940*var2[3] + t15908*var2[4] + var2[4]*(t15917*var2[2] + t15917*var2[3] + (0.4*t10876*t15854 + t15912 + 0.8*(-1.*t10876*t15854 + t15914))*var2[4]) + var3[0] + t15898*var3[2] + t15898*var3[3] + t15908*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t15889 + t15893 + t15897 + t15928 + t15938 + t15939 + var1[1] + var2[1] + t15975*var2[2] + t15975*var2[3] + var2[4]*(t15961*var2[2] + t15961*var2[3] + (0.4*t10876*t15865 + t15950 + 0.8*(-1.*t10876*t15865 + t15952))*var2[4]) + var3[1] + t15937*var3[2] + t15937*var3[3] + t15917*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
