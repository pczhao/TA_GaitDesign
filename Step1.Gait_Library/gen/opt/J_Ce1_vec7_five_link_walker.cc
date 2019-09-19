/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:16 GMT-04:00
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
  double t327;
  double t249;
  double t258;
  double t2011;
  double t17;
  double t321;
  double t2059;
  double t2175;
  double t2204;
  double t2235;
  double t5667;
  double t5982;
  double t6037;
  double t6646;
  double t6663;
  double t6971;
  double t7003;
  double t7010;
  double t7064;
  double t7156;
  double t6872;
  double t7159;
  double t7280;
  double t8309;
  double t8310;
  double t2906;
  double t2907;
  double t3147;
  double t8358;
  double t8424;
  double t8495;
  double t8811;
  double t8812;
  double t10560;
  double t10629;
  double t10630;
  double t10718;
  double t10722;
  double t10717;
  double t10726;
  double t10733;
  double t10734;
  double t10744;
  double t5024;
  double t5025;
  double t6721;
  double t5624;
  double t6672;
  double t10774;
  double t10783;
  double t10788;
  double t10796;
  double t10797;
  double t10809;
  double t10817;
  double t10823;
  double t10851;
  double t10852;
  double t10853;
  double t10828;
  double t10833;
  double t10837;
  double t10843;
  double t10984;
  double t11629;
  double t10875;
  double t10927;
  double t10948;
  double t12594;
  double t12624;
  double t12628;
  double t12635;
  double t12660;
  double t12661;
  double t12667;
  double t12668;
  double t12669;
  double t12670;
  double t12702;
  double t12712;
  double t12713;
  double t12728;
  double t12729;
  t327 = Cos(var1[5]);
  t249 = Cos(var1[6]);
  t258 = Sin(var1[5]);
  t2011 = Sin(var1[6]);
  t17 = Sin(var1[2]);
  t321 = -1.*t249*t258;
  t2059 = -1.*t327*t2011;
  t2175 = t321 + t2059;
  t2204 = -1.*t17*t2175;
  t2235 = Cos(var1[2]);
  t5667 = -1.*t327*t249;
  t5982 = t258*t2011;
  t6037 = t5667 + t5982;
  t6646 = t2235*t6037;
  t6663 = t2204 + t6646;
  t6971 = t249*t258;
  t7003 = t327*t2011;
  t7010 = t6971 + t7003;
  t7064 = t17*t7010;
  t7156 = t7064 + t6646;
  t6872 = -0.384*var2[2]*t6663;
  t7159 = -0.384*var2[5]*t7156;
  t7280 = -0.384*var2[6]*t7156;
  t8309 = t6872 + t7159 + t7280;
  t8310 = var2[6]*t8309;
  t2906 = t327*t249;
  t2907 = -1.*t258*t2011;
  t3147 = t2906 + t2907;
  t8358 = t2235*t2175;
  t8424 = -1.*t17*t3147;
  t8495 = t8358 + t8424;
  t8811 = t17*t6037;
  t8812 = t8358 + t8811;
  t10560 = -1.*t2235*t2175;
  t10629 = -1.*t17*t6037;
  t10630 = t10560 + t10629;
  t10718 = t2235*t7010;
  t10722 = t10718 + t10629;
  t10717 = -0.384*var2[2]*t10630;
  t10726 = -0.384*var2[5]*t10722;
  t10733 = -0.384*var2[6]*t10722;
  t10734 = t10717 + t10726 + t10733;
  t10744 = var2[6]*t10734;
  t5024 = -1.*t2235*t3147;
  t5025 = t2204 + t5024;
  t6721 = -0.384*var2[6]*t6663;
  t5624 = -0.384*var2[2]*t5025;
  t6672 = -0.384*var2[5]*t6663;
  t10774 = -1.*t249;
  t10783 = 1. + t10774;
  t10788 = 0.4*t10783;
  t10796 = 0.64*t249;
  t10797 = t10788 + t10796;
  t10809 = -1.*t10797*t258;
  t10817 = -0.24*t327*t2011;
  t10823 = t10809 + t10817;
  t10851 = t327*t10797;
  t10852 = -0.24*t258*t2011;
  t10853 = t10851 + t10852;
  t10828 = t10797*t258;
  t10833 = 0.24*t327*t2011;
  t10837 = t10828 + t10833;
  t10843 = t2175*t10837;
  t10984 = -0.24*t249*t258;
  t11629 = t10984 + t10817;
  t10875 = 0.24*t258*t2011;
  t10927 = t10853*t6037;
  t10948 = t2175*t10823;
  t12594 = t2175*t11629;
  t12624 = t11629*t7010;
  t12628 = t3147*t10853;
  t12635 = 0.24*t327*t249;
  t12660 = t12635 + t10852;
  t12661 = t3147*t12660;
  t12667 = -0.24*t327*t249;
  t12668 = t12667 + t10875;
  t12669 = t3147*t12668;
  t12670 = t10948 + t12594 + t10843 + t12624 + t12628 + t12661 + t12669 + t10927;
  t12702 = t10823*t3147;
  t12712 = t10837*t3147;
  t12713 = t2175*t10853;
  t12728 = t7010*t10853;
  t12729 = t12702 + t12712 + t12713 + t12728;
  p_output1[0]=(t5624 + t6672 + t6721)*var2[6];
  p_output1[1]=t8310;
  p_output1[2]=t8310;
  p_output1[3]=-0.384*t8495*var2[6];
  p_output1[4]=-0.384*t8812*var2[6];
  p_output1[5]=-0.384*t8495*var2[2] - 0.384*t8812*var2[5] - 0.768*t8812*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t10560 + t17*t3147)*var2[2] - 0.384*t10630*var2[5] - 0.384*t10630*var2[6]);
  p_output1[7]=t10744;
  p_output1[8]=t10744;
  p_output1[9]=-0.384*t5025*var2[6];
  p_output1[10]=t6721;
  p_output1[11]=t5624 + t6672 - 0.768*t6663*var2[6];
  p_output1[12]=var2[6]*(-0.384*(t10843 + t10927 + 2.*t10823*t2175 + 2.*t10853*t3147 + t3147*(t10875 - 1.*t10797*t327) + t10823*t7010)*var2[5] - 0.384*t12670*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t12670*var2[5] - 0.384*(t10843 + t10927 + t12624 + t12669 + 2.*t11629*t2175 + 2.*t12660*t3147)*var2[6]);
  p_output1[14]=-0.384*t12729*var2[6];
  p_output1[15]=-0.384*t12729*var2[5] - 0.768*(t12712 + t12713 + t11629*t3147 + t12660*t7010)*var2[6];
  p_output1[16]=-0.384*(-1.*t10797*t249 + 0.24*Power(t249,2))*Power(var2[6],2);
  p_output1[17]=-0.768*(-1.*t10797*t2011 + 0.24*t2011*t249)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec7_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
