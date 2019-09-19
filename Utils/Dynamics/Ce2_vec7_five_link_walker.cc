/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:02 GMT-04:00
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
  double t11815;
  double t5201;
  double t6261;
  double t11851;
  double t11868;
  double t6293;
  double t11859;
  double t11866;
  double t5198;
  double t11936;
  double t11937;
  double t11938;
  double t11939;
  double t11940;
  double t11950;
  double t11951;
  double t11952;
  double t11956;
  double t11957;
  double t11958;
  double t11964;
  double t11867;
  double t11869;
  double t11891;
  double t11928;
  double t11929;
  double t11930;
  double t11968;
  double t11969;
  double t11970;
  double t11971;
  double t11972;
  double t11973;
  double t11988;
  double t11989;
  double t11998;
  double t11999;
  double t12000;
  double t12002;
  double t12003;
  double t12004;
  double t12008;
  double t12009;
  double t12010;
  double t12014;
  double t12015;
  double t11991;
  double t11992;
  double t11993;
  double t11965;
  double t11966;
  double t11967;
  double t11985;
  double t11986;
  double t11941;
  double t11942;
  double t11949;
  double t11960;
  double t11961;
  double t11962;
  double t11975;
  double t11976;
  double t11977;
  double t11987;
  double t11990;
  double t11994;
  double t11995;
  double t11996;
  double t12001;
  double t12005;
  double t12006;
  double t12011;
  double t12012;
  double t12013;
  double t12016;
  double t12017;
  double t12019;
  double t12020;
  double t12021;
  double t12023;
  double t12024;
  double t12025;
  double t12026;
  double t12027;
  double t12045;
  double t12046;
  double t12047;
  double t12048;
  double t12049;
  double t12007;
  double t12018;
  double t12022;
  double t12028;
  double t12029;
  double t12034;
  double t12035;
  double t12036;
  double t12037;
  double t12038;
  double t11959;
  double t11963;
  double t11974;
  double t11978;
  double t11979;
  double t12054;
  double t12055;
  double t12056;
  double t12057;
  double t12058;
  t11815 = Cos(var1[5]);
  t5201 = Cos(var1[6]);
  t6261 = Sin(var1[5]);
  t11851 = Sin(var1[6]);
  t11868 = Sin(var1[2]);
  t6293 = -1.*t5201*t6261;
  t11859 = -1.*t11815*t11851;
  t11866 = t6293 + t11859;
  t5198 = Cos(var1[2]);
  t11936 = -1.*t5201;
  t11937 = 1. + t11936;
  t11938 = 0.4*t11937;
  t11939 = 0.64*t5201;
  t11940 = t11938 + t11939;
  t11950 = t11868*t11866;
  t11951 = t11815*t5201;
  t11952 = -1.*t6261*t11851;
  t11956 = t11951 + t11952;
  t11957 = t5198*t11956;
  t11958 = t11950 + t11957;
  t11964 = t11940*t5201;
  t11867 = t5198*t11866;
  t11869 = -1.*t11815*t5201;
  t11891 = t6261*t11851;
  t11928 = t11869 + t11891;
  t11929 = t11868*t11928;
  t11930 = t11867 + t11929;
  t11968 = t5201*t6261;
  t11969 = t11815*t11851;
  t11970 = t11968 + t11969;
  t11971 = t5198*t11970;
  t11972 = t11868*t11956;
  t11973 = t11971 + t11972;
  t11988 = -1.*t11868*t11956;
  t11989 = t11867 + t11988;
  t11998 = t11940*t6261;
  t11999 = 0.24*t11815*t11851;
  t12000 = t11998 + t11999;
  t12002 = t11815*t11940;
  t12003 = -0.24*t6261*t11851;
  t12004 = t12002 + t12003;
  t12008 = -0.24*t5201*t6261;
  t12009 = -0.24*t11815*t11851;
  t12010 = t12008 + t12009;
  t12014 = 0.24*t11815*t5201;
  t12015 = t12014 + t12003;
  t11991 = -1.*t11868*t11866;
  t11992 = t5198*t11928;
  t11993 = t11991 + t11992;
  t11965 = Power(t5201,2);
  t11966 = -0.24*t11965;
  t11967 = t11964 + t11966;
  t11985 = -1.*t11868*t11970;
  t11986 = t11985 + t11957;
  t11941 = t11940*t11851;
  t11942 = -0.24*t5201*t11851;
  t11949 = t11941 + t11942;
  t11960 = -1.*t11940*t11851;
  t11961 = 0.24*t5201*t11851;
  t11962 = t11960 + t11961;
  t11975 = Power(t11851,2);
  t11976 = 0.24*t11975;
  t11977 = t11964 + t11976;
  t11987 = 3.2*t11958*t11986;
  t11990 = 3.2*t11989*t11973;
  t11994 = 3.2*t11958*t11993;
  t11995 = 3.2*t11989*t11930;
  t11996 = t11987 + t11990 + t11994 + t11995;
  t12001 = -1.*t12000*t11956;
  t12005 = -1.*t11866*t12004;
  t12006 = t12001 + t12005;
  t12011 = t12010*t11956;
  t12012 = t12000*t11956;
  t12013 = t11866*t12004;
  t12016 = t11970*t12015;
  t12017 = t12011 + t12012 + t12013 + t12016;
  t12019 = t12000*t11970;
  t12020 = t11956*t12004;
  t12021 = t12019 + t12020;
  t12023 = -1.*t11866*t12010;
  t12024 = -1.*t11866*t12000;
  t12025 = -1.*t11956*t12015;
  t12026 = -1.*t12004*t11928;
  t12027 = t12023 + t12024 + t12025 + t12026;
  t12045 = 3.2*t11989*t12006;
  t12046 = 3.2*t11989*t12017;
  t12047 = 3.2*t12021*t11993;
  t12048 = 3.2*t11986*t12027;
  t12049 = t12045 + t12046 + t12047 + t12048;
  t12007 = 3.2*t11958*t12006;
  t12018 = 3.2*t11958*t12017;
  t12022 = 3.2*t12021*t11930;
  t12028 = 3.2*t11973*t12027;
  t12029 = t12007 + t12018 + t12022 + t12028;
  t12034 = 3.2*t11967*t11986;
  t12035 = 3.2*t11949*t11989;
  t12036 = 3.2*t11962*t11989;
  t12037 = 3.2*t11977*t11993;
  t12038 = t12034 + t12035 + t12036 + t12037;
  t11959 = 3.2*t11949*t11958;
  t11963 = 3.2*t11962*t11958;
  t11974 = 3.2*t11967*t11973;
  t11978 = 3.2*t11977*t11930;
  t11979 = t11959 + t11963 + t11974 + t11978;
  t12054 = 3.2*t11967*t12006;
  t12055 = 3.2*t11962*t12021;
  t12056 = 3.2*t11977*t12017;
  t12057 = 3.2*t11949*t12027;
  t12058 = t12054 + t12055 + t12056 + t12057;
  p_output1[0]=var2[6]*(-0.5*(6.4*t11930*t11958 + 6.4*t11958*t11973)*var2[0] - 0.5*t11996*var2[1] - 0.5*t12029*var2[2] - 0.5*t11979*var2[5] - 0.384*t11930*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t11996*var2[0] - 0.5*(6.4*t11986*t11989 + 6.4*t11989*t11993)*var2[1] - 0.5*t12049*var2[2] - 0.5*t12038*var2[5] - 0.384*t11993*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t12029*var2[0] - 0.5*t12049*var2[1] - 0.5*(6.4*t12017*t12021 + 6.4*t12006*t12027)*var2[2] - 0.5*t12058*var2[5] - 0.384*t12017*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t11979*var2[0] - 0.5*t12038*var2[1] - 0.5*t12058*var2[2] - 0.5*(6.4*t11949*t11967 + 6.4*t11962*t11977)*var2[5] - 0.384*t11962*var2[6]);
  p_output1[6]=(-0.384*t11930*var2[0] - 0.384*t11993*var2[1] - 0.384*t12017*var2[2] - 0.384*t11962*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace SymFunction
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
