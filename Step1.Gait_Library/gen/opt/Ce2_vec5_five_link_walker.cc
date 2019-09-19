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
  double t3362;
  double t2085;
  double t2225;
  double t5688;
  double t5737;
  double t2243;
  double t5689;
  double t5699;
  double t1153;
  double t5937;
  double t5938;
  double t5940;
  double t5941;
  double t5942;
  double t5962;
  double t5963;
  double t5966;
  double t5975;
  double t5976;
  double t5978;
  double t5985;
  double t5700;
  double t5842;
  double t5858;
  double t5920;
  double t5921;
  double t5924;
  double t5990;
  double t5991;
  double t5992;
  double t5993;
  double t5995;
  double t6003;
  double t6034;
  double t6035;
  double t6047;
  double t6048;
  double t6052;
  double t6054;
  double t6055;
  double t6058;
  double t6068;
  double t6079;
  double t6080;
  double t6098;
  double t6099;
  double t6040;
  double t6041;
  double t6042;
  double t5987;
  double t5988;
  double t5989;
  double t6031;
  double t6032;
  double t5944;
  double t5945;
  double t5960;
  double t5980;
  double t5981;
  double t5983;
  double t6005;
  double t6006;
  double t6016;
  double t6033;
  double t6036;
  double t6043;
  double t6044;
  double t6045;
  double t6053;
  double t6059;
  double t6060;
  double t6081;
  double t6082;
  double t6096;
  double t6100;
  double t6101;
  double t6118;
  double t6120;
  double t6121;
  double t6125;
  double t6155;
  double t6169;
  double t6170;
  double t6802;
  double t7150;
  double t7151;
  double t7203;
  double t7207;
  double t7214;
  double t6061;
  double t6117;
  double t6122;
  double t6883;
  double t6913;
  double t7054;
  double t7058;
  double t7080;
  double t7081;
  double t7084;
  double t5979;
  double t5984;
  double t6004;
  double t6017;
  double t6018;
  double t8020;
  double t8026;
  double t8173;
  double t8175;
  double t8189;
  t3362 = Cos(var1[3]);
  t2085 = Cos(var1[4]);
  t2225 = Sin(var1[3]);
  t5688 = Sin(var1[4]);
  t5737 = Sin(var1[2]);
  t2243 = -1.*t2085*t2225;
  t5689 = -1.*t3362*t5688;
  t5699 = t2243 + t5689;
  t1153 = Cos(var1[2]);
  t5937 = -1.*t2085;
  t5938 = 1. + t5937;
  t5940 = 0.4*t5938;
  t5941 = 0.64*t2085;
  t5942 = t5940 + t5941;
  t5962 = t5737*t5699;
  t5963 = t3362*t2085;
  t5966 = -1.*t2225*t5688;
  t5975 = t5963 + t5966;
  t5976 = t1153*t5975;
  t5978 = t5962 + t5976;
  t5985 = t5942*t2085;
  t5700 = t1153*t5699;
  t5842 = -1.*t3362*t2085;
  t5858 = t2225*t5688;
  t5920 = t5842 + t5858;
  t5921 = t5737*t5920;
  t5924 = t5700 + t5921;
  t5990 = t2085*t2225;
  t5991 = t3362*t5688;
  t5992 = t5990 + t5991;
  t5993 = t1153*t5992;
  t5995 = t5737*t5975;
  t6003 = t5993 + t5995;
  t6034 = -1.*t5737*t5975;
  t6035 = t5700 + t6034;
  t6047 = t5942*t2225;
  t6048 = 0.24*t3362*t5688;
  t6052 = t6047 + t6048;
  t6054 = t3362*t5942;
  t6055 = -0.24*t2225*t5688;
  t6058 = t6054 + t6055;
  t6068 = -0.24*t2085*t2225;
  t6079 = -0.24*t3362*t5688;
  t6080 = t6068 + t6079;
  t6098 = 0.24*t3362*t2085;
  t6099 = t6098 + t6055;
  t6040 = -1.*t5737*t5699;
  t6041 = t1153*t5920;
  t6042 = t6040 + t6041;
  t5987 = Power(t2085,2);
  t5988 = -0.24*t5987;
  t5989 = t5985 + t5988;
  t6031 = -1.*t5737*t5992;
  t6032 = t6031 + t5976;
  t5944 = t5942*t5688;
  t5945 = -0.24*t2085*t5688;
  t5960 = t5944 + t5945;
  t5980 = -1.*t5942*t5688;
  t5981 = 0.24*t2085*t5688;
  t5983 = t5980 + t5981;
  t6005 = Power(t5688,2);
  t6006 = 0.24*t6005;
  t6016 = t5985 + t6006;
  t6033 = 3.2*t5978*t6032;
  t6036 = 3.2*t6035*t6003;
  t6043 = 3.2*t5978*t6042;
  t6044 = 3.2*t6035*t5924;
  t6045 = t6033 + t6036 + t6043 + t6044;
  t6053 = -1.*t6052*t5975;
  t6059 = -1.*t5699*t6058;
  t6060 = t6053 + t6059;
  t6081 = t6080*t5975;
  t6082 = t6052*t5975;
  t6096 = t5699*t6058;
  t6100 = t5992*t6099;
  t6101 = t6081 + t6082 + t6096 + t6100;
  t6118 = t6052*t5992;
  t6120 = t5975*t6058;
  t6121 = t6118 + t6120;
  t6125 = -1.*t5699*t6080;
  t6155 = -1.*t5699*t6052;
  t6169 = -1.*t5975*t6099;
  t6170 = -1.*t6058*t5920;
  t6802 = t6125 + t6155 + t6169 + t6170;
  t7150 = 3.2*t6035*t6060;
  t7151 = 3.2*t6035*t6101;
  t7203 = 3.2*t6121*t6042;
  t7207 = 3.2*t6032*t6802;
  t7214 = t7150 + t7151 + t7203 + t7207;
  t6061 = 3.2*t5978*t6060;
  t6117 = 3.2*t5978*t6101;
  t6122 = 3.2*t6121*t5924;
  t6883 = 3.2*t6003*t6802;
  t6913 = t6061 + t6117 + t6122 + t6883;
  t7054 = 3.2*t5989*t6032;
  t7058 = 3.2*t5960*t6035;
  t7080 = 3.2*t5983*t6035;
  t7081 = 3.2*t6016*t6042;
  t7084 = t7054 + t7058 + t7080 + t7081;
  t5979 = 3.2*t5960*t5978;
  t5984 = 3.2*t5983*t5978;
  t6004 = 3.2*t5989*t6003;
  t6017 = 3.2*t6016*t5924;
  t6018 = t5979 + t5984 + t6004 + t6017;
  t8020 = 3.2*t5989*t6060;
  t8026 = 3.2*t5983*t6121;
  t8173 = 3.2*t6016*t6101;
  t8175 = 3.2*t5960*t6802;
  t8189 = t8020 + t8026 + t8173 + t8175;
  p_output1[0]=var2[4]*(-0.5*(6.4*t5924*t5978 + 6.4*t5978*t6003)*var2[0] - 0.5*t6045*var2[1] - 0.5*t6913*var2[2] - 0.5*t6018*var2[3] - 0.384*t5924*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t6045*var2[0] - 0.5*(6.4*t6032*t6035 + 6.4*t6035*t6042)*var2[1] - 0.5*t7214*var2[2] - 0.5*t7084*var2[3] - 0.384*t6042*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t6913*var2[0] - 0.5*t7214*var2[1] - 0.5*(6.4*t6101*t6121 + 6.4*t6060*t6802)*var2[2] - 0.5*t8189*var2[3] - 0.384*t6101*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t6018*var2[0] - 0.5*t7084*var2[1] - 0.5*t8189*var2[2] - 0.5*(6.4*t5960*t5989 + 6.4*t5983*t6016)*var2[3] - 0.384*t5983*var2[4]);
  p_output1[4]=(-0.384*t5924*var2[0] - 0.384*t6042*var2[1] - 0.384*t6101*var2[2] - 0.384*t5983*var2[3])*var2[4];
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

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
