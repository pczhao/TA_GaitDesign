/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:05 GMT-04:00
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
  double t1992;
  double t12744;
  double t12752;
  double t12760;
  double t12761;
  double t12765;
  double t12774;
  double t12783;
  double t12805;
  double t12806;
  double t12816;
  double t12819;
  double t12829;
  double t12830;
  double t12831;
  double t12832;
  double t12833;
  double t12835;
  double t12839;
  double t12840;
  double t12841;
  double t12842;
  double t12775;
  double t12785;
  double t12786;
  double t12804;
  double t12822;
  double t12823;
  double t12824;
  double t12825;
  double t12826;
  double t12827;
  double t12828;
  double t12853;
  double t12854;
  double t12855;
  double t12834;
  double t12836;
  double t12837;
  double t12838;
  double t12843;
  double t12844;
  double t12845;
  double t12846;
  double t12847;
  double t12848;
  double t12849;
  double t12864;
  double t12865;
  double t12866;
  t1992 = Sin(var1[2]);
  t12744 = Cos(var1[3]);
  t12752 = -1.*t12744*t1992;
  t12760 = Cos(var1[2]);
  t12761 = Sin(var1[3]);
  t12765 = -1.*t12760*t12761;
  t12774 = t12752 + t12765;
  t12783 = Cos(var1[4]);
  t12805 = -1.*t12760*t12744;
  t12806 = t1992*t12761;
  t12816 = t12805 + t12806;
  t12819 = Sin(var1[4]);
  t12829 = Cos(var1[5]);
  t12830 = -1.*t12829*t1992;
  t12831 = Sin(var1[5]);
  t12832 = -1.*t12760*t12831;
  t12833 = t12830 + t12832;
  t12835 = Cos(var1[6]);
  t12839 = -1.*t12760*t12829;
  t12840 = t1992*t12831;
  t12841 = t12839 + t12840;
  t12842 = Sin(var1[6]);
  t12775 = -7.33788*t12774;
  t12785 = -1.*t12783;
  t12786 = 1. + t12785;
  t12804 = 0.4*t12786*t12774;
  t12822 = -0.4*t12816*t12819;
  t12823 = t12783*t12774;
  t12824 = t12816*t12819;
  t12825 = t12823 + t12824;
  t12826 = 0.64*t12825;
  t12827 = t12804 + t12822 + t12826;
  t12828 = -31.392000000000003*t12827;
  t12853 = t12760*t12744;
  t12854 = -1.*t1992*t12761;
  t12855 = t12853 + t12854;
  t12834 = -7.33788*t12833;
  t12836 = -1.*t12835;
  t12837 = 1. + t12836;
  t12838 = 0.4*t12837*t12833;
  t12843 = -0.4*t12841*t12842;
  t12844 = t12835*t12833;
  t12845 = t12841*t12842;
  t12846 = t12844 + t12845;
  t12847 = 0.64*t12846;
  t12848 = t12838 + t12843 + t12847;
  t12849 = -31.392000000000003*t12848;
  t12864 = t12760*t12829;
  t12865 = -1.*t1992*t12831;
  t12866 = t12864 + t12865;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t12775 + t12828 + t12834 + t12849 + 28.252799999999997*t1992;
  p_output1[3]=t12775 + t12828;
  p_output1[4]=-31.392000000000003*(-0.4*t12774*t12783 + 0.4*t12819*t12855 + 0.64*(t12823 - 1.*t12819*t12855));
  p_output1[5]=t12834 + t12849;
  p_output1[6]=-31.392000000000003*(-0.4*t12833*t12835 + 0.4*t12842*t12866 + 0.64*(t12844 - 1.*t12842*t12866));
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

#include "Ge_vec_five_link_walker.hh"

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
