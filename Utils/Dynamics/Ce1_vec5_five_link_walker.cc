/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:46:58 GMT-04:00
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
  double t1801;
  double t1653;
  double t1682;
  double t1820;
  double t1625;
  double t1786;
  double t1824;
  double t1830;
  double t3551;
  double t5002;
  double t5534;
  double t6273;
  double t6315;
  double t6366;
  double t7844;
  double t5230;
  double t5239;
  double t5240;
  double t8833;
  double t11213;
  double t11218;
  double t11243;
  double t11244;
  double t11246;
  double t11250;
  double t11251;
  double t11265;
  double t11266;
  double t11271;
  double t11253;
  double t11261;
  double t11262;
  double t11263;
  double t11264;
  double t11272;
  double t11273;
  double t11274;
  double t11275;
  t1801 = Cos(var1[3]);
  t1653 = Cos(var1[4]);
  t1682 = Sin(var1[3]);
  t1820 = Sin(var1[4]);
  t1625 = Cos(var1[2]);
  t1786 = -1.*t1653*t1682;
  t1824 = -1.*t1801*t1820;
  t1830 = t1786 + t1824;
  t3551 = t1625*t1830;
  t5002 = Sin(var1[2]);
  t5534 = -1.*t1801*t1653;
  t6273 = t1682*t1820;
  t6315 = t5534 + t6273;
  t6366 = t5002*t6315;
  t7844 = t3551 + t6366;
  t5230 = t1801*t1653;
  t5239 = -1.*t1682*t1820;
  t5240 = t5230 + t5239;
  t8833 = -1.*t5002*t1830;
  t11213 = t1625*t6315;
  t11218 = t8833 + t11213;
  t11243 = -1.*t1653;
  t11244 = 1. + t11243;
  t11246 = 0.4*t11244;
  t11250 = 0.64*t1653;
  t11251 = t11246 + t11250;
  t11265 = t1801*t11251;
  t11266 = -0.24*t1682*t1820;
  t11271 = t11265 + t11266;
  t11253 = -0.24*t1801*t1820;
  t11261 = t11251*t1682;
  t11262 = 0.24*t1801*t1820;
  t11263 = t11261 + t11262;
  t11264 = t11263*t5240;
  t11272 = t1830*t11271;
  t11273 = t1653*t1682;
  t11274 = t1801*t1820;
  t11275 = t11273 + t11274;
  p_output1[0]=var2[4]*(-0.384*(t3551 - 1.*t5002*t5240)*var2[2] - 0.384*t7844*var2[3] - 0.384*t7844*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(-1.*t1625*t5240 + t8833)*var2[2] - 0.384*t11218*var2[3] - 0.384*t11218*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t11264 + t11272 + t11271*t11275 + (t11253 - 1.*t11251*t1682)*t5240)*var2[3] - 0.384*(t11264 + t11272 + t11275*(t11266 + 0.24*t1653*t1801) + (t11253 - 0.24*t1653*t1682)*t5240)*var2[4]);
  p_output1[3]=-0.384*(-1.*t11251*t1820 + 0.24*t1653*t1820)*Power(var2[4],2);
  p_output1[4]=0;
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

#include "Ce1_vec5_five_link_walker.hh"

namespace SymFunction
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
