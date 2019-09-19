/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:58 GMT-04:00
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
  double t3257;
  double t1891;
  double t2682;
  double t5368;
  double t5707;
  double t257;
  double t5711;
  double t5716;
  double t5721;
  double t2683;
  double t5548;
  double t5676;
  double t5685;
  double t5736;
  double t5756;
  double t5871;
  double t5882;
  double t5887;
  double t5764;
  double t5770;
  double t5784;
  double t5791;
  double t5792;
  double t5795;
  double t5796;
  double t5800;
  double t5820;
  double t5821;
  double t5829;
  double t5830;
  double t5838;
  double t5840;
  double t5854;
  double t5855;
  double t5869;
  double t5894;
  double t5895;
  double t5913;
  double t6504;
  double t6505;
  double t6839;
  double t6890;
  double t6948;
  double t6950;
  double t6969;
  double t7102;
  double t7165;
  double t7164;
  double t7166;
  double t7168;
  double t7206;
  double t7220;
  double t7224;
  double t7227;
  double t9095;
  double t9102;
  double t9154;
  double t7202;
  double t7247;
  double t9322;
  double t9423;
  double t9424;
  double t7249;
  double t6851;
  double t6893;
  double t6929;
  double t6976;
  double t6977;
  double t7069;
  double t7071;
  double t7094;
  double t9482;
  double t9497;
  double t9499;
  double t9501;
  double t9514;
  double t9518;
  double t9527;
  double t6800;
  double t6813;
  double t6730;
  double t6747;
  double t9553;
  double t9556;
  double t9559;
  double t9567;
  double t9568;
  double t9571;
  double t9572;
  double t9606;
  double t9607;
  double t9610;
  double t9630;
  double t9641;
  double t9648;
  double t9649;
  double t9650;
  double t9658;
  double t9166;
  double t9285;
  double t7288;
  double t8465;
  double t9711;
  double t9687;
  double t9688;
  double t9696;
  double t9697;
  double t9698;
  double t9704;
  double t9705;
  double t9709;
  double t9710;
  double t9757;
  double t9762;
  double t9763;
  double t9764;
  double t9765;
  double t9769;
  double t9801;
  double t9802;
  double t9803;
  double t9804;
  double t9805;
  double t9809;
  double t9810;
  double t9811;
  double t9813;
  double t9814;
  double t9815;
  double t9824;
  double t9825;
  double t9826;
  double t9812;
  double t9816;
  double t9817;
  double t9823;
  double t9828;
  double t9829;
  double t9833;
  double t9834;
  double t9835;
  double t9836;
  double t9868;
  double t9869;
  double t9852;
  double t9871;
  double t9872;
  double t9859;
  double t9776;
  double t9777;
  double t9797;
  double t9798;
  double t9799;
  double t9800;
  double t9895;
  double t9896;
  double t9898;
  double t9899;
  double t9900;
  double t9901;
  double t9902;
  double t9903;
  double t9905;
  double t9906;
  double t9907;
  double t9885;
  double t9888;
  double t9889;
  double t9890;
  double t9891;
  double t9894;
  double t9904;
  double t9908;
  double t9909;
  double t9911;
  double t9912;
  double t9913;
  double t9919;
  double t9921;
  double t9922;
  double t9917;
  double t9926;
  double t9927;
  double t9931;
  double t9940;
  double t9941;
  double t9933;
  double t9943;
  double t9946;
  double t9935;
  double t9960;
  double t9961;
  double t9962;
  double t9963;
  double t9965;
  double t9966;
  double t9967;
  double t9968;
  double t9972;
  double t9973;
  double t9993;
  double t9994;
  double t9995;
  double t9996;
  double t9998;
  double t9999;
  double t10000;
  double t10001;
  double t10005;
  double t10006;
  t3257 = Cos(var1[3]);
  t1891 = Cos(var1[4]);
  t2682 = Sin(var1[3]);
  t5368 = Sin(var1[4]);
  t5707 = Cos(var1[2]);
  t257 = Sin(var1[2]);
  t5711 = t3257*t1891;
  t5716 = -1.*t2682*t5368;
  t5721 = t5711 + t5716;
  t2683 = -1.*t1891*t2682;
  t5548 = -1.*t3257*t5368;
  t5676 = t2683 + t5548;
  t5685 = t257*t5676;
  t5736 = t5707*t5721;
  t5756 = t5685 + t5736;
  t5871 = t5707*t3257;
  t5882 = -1.*t257*t2682;
  t5887 = t5871 + t5882;
  t5764 = t1891*t2682;
  t5770 = t3257*t5368;
  t5784 = t5764 + t5770;
  t5791 = t5707*t5784;
  t5792 = t257*t5721;
  t5795 = t5791 + t5792;
  t5796 = 6.4*t5756*t5795;
  t5800 = t5707*t5676;
  t5820 = -1.*t3257*t1891;
  t5821 = t2682*t5368;
  t5829 = t5820 + t5821;
  t5830 = t257*t5829;
  t5838 = t5800 + t5830;
  t5840 = 6.4*t5756*t5838;
  t5854 = -1.*t3257*t257;
  t5855 = -1.*t5707*t2682;
  t5869 = t5854 + t5855;
  t5894 = 13.6*t5869*t5887;
  t5895 = t3257*t257;
  t5913 = t5707*t2682;
  t6504 = t5895 + t5913;
  t6505 = 13.6*t6504*t5887;
  t6839 = Cos(var1[5]);
  t6890 = Sin(var1[5]);
  t6948 = t5707*t6839;
  t6950 = -1.*t257*t6890;
  t6969 = t6948 + t6950;
  t7102 = Cos(var1[6]);
  t7165 = Sin(var1[6]);
  t7164 = -1.*t7102*t6890;
  t7166 = -1.*t6839*t7165;
  t7168 = t7164 + t7166;
  t7206 = t6839*t7102;
  t7220 = -1.*t6890*t7165;
  t7224 = t7206 + t7220;
  t7227 = t5707*t7224;
  t9095 = t7102*t6890;
  t9102 = t6839*t7165;
  t9154 = t9095 + t9102;
  t7202 = t257*t7168;
  t7247 = t7202 + t7227;
  t9322 = t5707*t9154;
  t9423 = t257*t7224;
  t9424 = t9322 + t9423;
  t7249 = t5707*t7168;
  t6851 = -1.*t6839*t257;
  t6893 = -1.*t5707*t6890;
  t6929 = t6851 + t6893;
  t6976 = 13.6*t6929*t6969;
  t6977 = t6839*t257;
  t7069 = t5707*t6890;
  t7071 = t6977 + t7069;
  t7094 = 13.6*t7071*t6969;
  t9482 = 6.4*t7247*t9424;
  t9497 = -1.*t6839*t7102;
  t9499 = t6890*t7165;
  t9501 = t9497 + t9499;
  t9514 = t257*t9501;
  t9518 = t7249 + t9514;
  t9527 = 6.4*t7247*t9518;
  t6800 = -1.*t257*t5784;
  t6813 = t6800 + t5736;
  t6730 = -1.*t257*t5721;
  t6747 = t5800 + t6730;
  t9553 = 3.2*t5756*t6813;
  t9556 = 3.2*t6747*t5795;
  t9559 = -1.*t257*t5676;
  t9567 = t5707*t5829;
  t9568 = t9559 + t9567;
  t9571 = 3.2*t5756*t9568;
  t9572 = 3.2*t6747*t5838;
  t9606 = Power(t5869,2);
  t9607 = 6.8*t9606;
  t9610 = 6.8*t5869*t6504;
  t9630 = Power(t5887,2);
  t9641 = 6.8*t9630;
  t9648 = -1.*t5707*t3257;
  t9649 = t257*t2682;
  t9650 = t9648 + t9649;
  t9658 = 6.8*t5887*t9650;
  t9166 = -1.*t257*t9154;
  t9285 = t9166 + t7227;
  t7288 = -1.*t257*t7224;
  t8465 = t7249 + t7288;
  t9711 = -1.*t257*t7168;
  t9687 = Power(t6929,2);
  t9688 = 6.8*t9687;
  t9696 = 6.8*t6929*t7071;
  t9697 = Power(t6969,2);
  t9698 = 6.8*t9697;
  t9704 = -1.*t5707*t6839;
  t9705 = t257*t6890;
  t9709 = t9704 + t9705;
  t9710 = 6.8*t6969*t9709;
  t9757 = 3.2*t7247*t9285;
  t9762 = 3.2*t8465*t9424;
  t9763 = t5707*t9501;
  t9764 = t9711 + t9763;
  t9765 = 3.2*t7247*t9764;
  t9769 = 3.2*t8465*t9518;
  t9801 = -1.*t1891;
  t9802 = 1. + t9801;
  t9803 = 0.4*t9802;
  t9804 = 0.64*t1891;
  t9805 = t9803 + t9804;
  t9809 = t9805*t2682;
  t9810 = 0.24*t3257*t5368;
  t9811 = t9809 + t9810;
  t9813 = t3257*t9805;
  t9814 = -0.24*t2682*t5368;
  t9815 = t9813 + t9814;
  t9824 = -1.*t9805*t2682;
  t9825 = -0.24*t3257*t5368;
  t9826 = t9824 + t9825;
  t9812 = -1.*t9811*t5721;
  t9816 = -1.*t5676*t9815;
  t9817 = t9812 + t9816;
  t9823 = 3.2*t5756*t9817;
  t9828 = t9811*t5721;
  t9829 = t5676*t9815;
  t9833 = t9811*t5784;
  t9834 = t5721*t9815;
  t9835 = t9833 + t9834;
  t9836 = 3.2*t9835*t5838;
  t9868 = -0.24*t1891*t2682;
  t9869 = t9868 + t9825;
  t9852 = -1.*t5676*t9811;
  t9871 = 0.24*t3257*t1891;
  t9872 = t9871 + t9814;
  t9859 = -1.*t9815*t5829;
  t9776 = Power(t3257,2);
  t9777 = 0.11*t9776;
  t9797 = Power(t2682,2);
  t9798 = 0.11*t9797;
  t9799 = t9777 + t9798;
  t9800 = 6.8*t5869*t9799;
  t9895 = -1.*t7102;
  t9896 = 1. + t9895;
  t9898 = 0.4*t9896;
  t9899 = 0.64*t7102;
  t9900 = t9898 + t9899;
  t9901 = t9900*t6890;
  t9902 = 0.24*t6839*t7165;
  t9903 = t9901 + t9902;
  t9905 = t6839*t9900;
  t9906 = -0.24*t6890*t7165;
  t9907 = t9905 + t9906;
  t9885 = Power(t6839,2);
  t9888 = 0.11*t9885;
  t9889 = Power(t6890,2);
  t9890 = 0.11*t9889;
  t9891 = t9888 + t9890;
  t9894 = 6.8*t6929*t9891;
  t9904 = -1.*t9903*t7224;
  t9908 = -1.*t7168*t9907;
  t9909 = t9904 + t9908;
  t9911 = t9903*t9154;
  t9912 = t7224*t9907;
  t9913 = t9911 + t9912;
  t9919 = -1.*t9900*t6890;
  t9921 = -0.24*t6839*t7165;
  t9922 = t9919 + t9921;
  t9917 = 3.2*t7247*t9909;
  t9926 = t9903*t7224;
  t9927 = t7168*t9907;
  t9931 = 3.2*t9913*t9518;
  t9940 = -0.24*t7102*t6890;
  t9941 = t9940 + t9921;
  t9933 = -1.*t7168*t9903;
  t9943 = 0.24*t6839*t7102;
  t9946 = t9943 + t9906;
  t9935 = -1.*t9907*t9501;
  t9960 = 0.748*t5869;
  t9961 = t9805*t5368;
  t9962 = -0.24*t1891*t5368;
  t9963 = t9961 + t9962;
  t9965 = t9805*t1891;
  t9966 = Power(t5368,2);
  t9967 = 0.24*t9966;
  t9968 = t9965 + t9967;
  t9972 = 3.2*t9963*t5756;
  t9973 = 3.2*t9968*t5838;
  t9993 = 0.748*t6929;
  t9994 = t9900*t7165;
  t9995 = -0.24*t7102*t7165;
  t9996 = t9994 + t9995;
  t9998 = t9900*t7102;
  t9999 = Power(t7165,2);
  t10000 = 0.24*t9999;
  t10001 = t9998 + t10000;
  t10005 = 3.2*t9996*t7247;
  t10006 = 3.2*t10001*t9518;
  p_output1[0]=var2[0]*(-0.5*(t5894 + t6505 + 6.4*t5756*t6747 + 6.4*t5795*t6813 + t6976 + t7094 + 6.4*t7247*t8465 + 6.4*t9285*t9424)*var2[2] - 0.5*(t5796 + t5840 + t5894 + t6505)*var2[3] - 0.5*(t5796 + t5840)*var2[4] - 0.5*(t6976 + t7094 + t9482 + t9527)*var2[5] - 0.5*(t9482 + t9527)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*t5795*(-1.*t5707*t5784 + t6730) + 3.2*Power(t6747,2) + 3.2*Power(t6813,2) + 3.2*Power(t8465,2) + 3.2*Power(t9285,2) + 3.2*(t7288 - 1.*t5707*t9154)*t9424 + 3.2*t5756*(-1.*t5707*t5721 + t9559) + t9607 + t9610 + t9641 + t9658 + t9688 + t9696 + t9698 + t9710 + 3.2*t7247*(-1.*t5707*t7224 + t9711))*var2[2] - 0.5*(t9553 + t9556 + t9571 + t9572 + t9607 + t9610 + t9641 + t9658)*var2[3] - 0.5*(t9553 + t9556 + t9571 + t9572)*var2[4] - 0.5*(t9688 + t9696 + t9698 + t9710 + t9757 + t9762 + t9765 + t9769)*var2[5] - 0.5*(t9757 + t9762 + t9765 + t9769)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(-2.88*t257 + t9800 + 3.2*t6813*t9817 + 3.2*t6747*t9835 + t9894 + 3.2*t9285*t9909 + 3.2*t8465*t9913)*var2[2] - 0.5*(t9800 + t9823 + 3.2*t5756*(t5784*t9815 + t5721*t9826 + t9828 + t9829) + t9836 + 3.2*t5795*(-1.*t5721*t9815 - 1.*t5676*t9826 + t9852 + t9859))*var2[3] - 0.5*(t9823 + t9836 + 3.2*t5795*(t9852 + t9859 - 1.*t5676*t9869 - 1.*t5721*t9872) + 3.2*t5756*(t9828 + t9829 + t5721*t9869 + t5784*t9872))*var2[4] - 0.5*(t9894 + t9917 + 3.2*t7247*(t9154*t9907 + t7224*t9922 + t9926 + t9927) + t9931 + 3.2*t9424*(-1.*t7224*t9907 - 1.*t7168*t9922 + t9933 + t9935))*var2[5] - 0.5*(t9917 + t9931 + 3.2*t9424*(t9933 + t9935 - 1.*t7168*t9941 - 1.*t7224*t9946) + 3.2*t7247*(t9926 + t9927 + t7224*t9941 + t9154*t9946))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t9960 + 3.2*t6813*t9963 + 3.2*t6747*t9968)*var2[2] - 0.5*(t9960 + t9972 + t9973)*var2[3] - 0.5*(3.2*t5756*(0.24*t1891*t5368 - 1.*t5368*t9805) + 3.2*t5795*(-0.24*Power(t1891,2) + t9965) + t9972 + t9973)*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t6747*var2[2] - 0.384*t5838*var2[3] - 0.384*t5838*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(3.2*t10001*t8465 + t9993 + 3.2*t9285*t9996)*var2[2] - 0.5*(t10005 + t10006 + t9993)*var2[5] - 0.5*(t10005 + t10006 + 3.2*t7247*(0.24*t7102*t7165 - 1.*t7165*t9900) + 3.2*t9424*(-0.24*Power(t7102,2) + t9998))*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t8465*var2[2] - 0.384*t9518*var2[5] - 0.384*t9518*var2[6]);
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

#include "Ce1_vec1_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
