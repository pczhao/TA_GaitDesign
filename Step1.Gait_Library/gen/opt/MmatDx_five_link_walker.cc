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
  double t5650;
  double t5518;
  double t5623;
  double t5658;
  double t5684;
  double t5502;
  double t5640;
  double t5659;
  double t5673;
  double t5676;
  double t5685;
  double t5704;
  double t5708;
  double t5711;
  double t5712;
  double t5749;
  double t5754;
  double t5755;
  double t5761;
  double t5764;
  double t5805;
  double t5801;
  double t5802;
  double t5806;
  double t5804;
  double t5815;
  double t5816;
  double t5820;
  double t5829;
  double t5831;
  double t5832;
  double t5838;
  double t5839;
  double t5847;
  double t5848;
  double t5852;
  double t5853;
  double t5854;
  double t5721;
  double t5732;
  double t5733;
  double t5791;
  double t5792;
  double t5793;
  double t5795;
  double t5796;
  double t5797;
  double t5841;
  double t5843;
  double t5844;
  double t5882;
  double t5887;
  double t5893;
  double t5894;
  double t5895;
  double t5910;
  double t6553;
  double t6562;
  double t6651;
  double t6836;
  double t6851;
  double t6869;
  double t9285;
  double t9309;
  double t9315;
  double t9322;
  double t9323;
  double t9328;
  double t9448;
  double t9453;
  double t9454;
  double t9456;
  double t9467;
  double t9468;
  double t6747;
  double t6748;
  double t6789;
  double t5926;
  double t5928;
  double t5931;
  double t5784;
  double t5789;
  double t5790;
  double t6803;
  double t6808;
  double t5770;
  double t5771;
  double t5775;
  double t5781;
  double t6890;
  double t6927;
  double t6930;
  double t6816;
  double t6819;
  double t6822;
  double t5871;
  double t5874;
  double t5879;
  double t6940;
  double t6949;
  double t5855;
  double t5856;
  double t5857;
  double t5862;
  double t6979;
  double t7053;
  double t7061;
  double t7068;
  double t7109;
  double t7201;
  double t7248;
  double t7285;
  double t5939;
  double t6669;
  double t6796;
  double t6812;
  double t6829;
  double t6880;
  double t6936;
  double t6973;
  double t6975;
  double t9190;
  double t9210;
  double t9224;
  double t9240;
  double t9264;
  double t9321;
  double t9340;
  double t9395;
  double t9423;
  double t9424;
  double t9426;
  double t9433;
  double t9434;
  double t9437;
  double t9438;
  double t9441;
  double t9455;
  double t9478;
  double t9479;
  double t9481;
  double t9482;
  double t9485;
  double t9182;
  double t9267;
  double t9410;
  double t9428;
  double t9447;
  double t9480;
  double t9488;
  double t9496;
  double t9575;
  double t9576;
  double t9577;
  double t9586;
  double t9594;
  double t9598;
  double t9603;
  double t9605;
  double t9506;
  double t9507;
  double t9510;
  double t9511;
  double t5747;
  double t5783;
  double t5798;
  double t5799;
  double t9611;
  double t9619;
  double t9623;
  double t9628;
  double t9692;
  double t9693;
  double t9608;
  double t9609;
  double t9519;
  double t9524;
  double t9525;
  double t9526;
  double t5846;
  double t5863;
  double t5911;
  double t5912;
  double t9643;
  double t9644;
  double t9646;
  double t9647;
  double t9732;
  double t9733;
  double t9635;
  double t9636;
  t5650 = Cos(var1[3]);
  t5518 = Cos(var1[4]);
  t5623 = Sin(var1[3]);
  t5658 = Sin(var1[4]);
  t5684 = Cos(var1[2]);
  t5502 = Sin(var1[2]);
  t5640 = -1.*t5518*t5623;
  t5659 = -1.*t5650*t5658;
  t5673 = t5640 + t5659;
  t5676 = t5502*t5673;
  t5685 = t5650*t5518;
  t5704 = -1.*t5623*t5658;
  t5708 = t5685 + t5704;
  t5711 = t5684*t5708;
  t5712 = t5676 + t5711;
  t5749 = -1.*t5518;
  t5754 = 1. + t5749;
  t5755 = 0.4*t5754;
  t5761 = 0.64*t5518;
  t5764 = t5755 + t5761;
  t5805 = Cos(var1[5]);
  t5801 = Cos(var1[6]);
  t5802 = Sin(var1[5]);
  t5806 = Sin(var1[6]);
  t5804 = -1.*t5801*t5802;
  t5815 = -1.*t5805*t5806;
  t5816 = t5804 + t5815;
  t5820 = t5502*t5816;
  t5829 = t5805*t5801;
  t5831 = -1.*t5802*t5806;
  t5832 = t5829 + t5831;
  t5838 = t5684*t5832;
  t5839 = t5820 + t5838;
  t5847 = -1.*t5801;
  t5848 = 1. + t5847;
  t5852 = 0.4*t5848;
  t5853 = 0.64*t5801;
  t5854 = t5852 + t5853;
  t5721 = t5684*t5650;
  t5732 = -1.*t5502*t5623;
  t5733 = t5721 + t5732;
  t5791 = t5518*t5623;
  t5792 = t5650*t5658;
  t5793 = t5791 + t5792;
  t5795 = t5684*t5793;
  t5796 = t5502*t5708;
  t5797 = t5795 + t5796;
  t5841 = t5684*t5805;
  t5843 = -1.*t5502*t5802;
  t5844 = t5841 + t5843;
  t5882 = t5801*t5802;
  t5887 = t5805*t5806;
  t5893 = t5882 + t5887;
  t5894 = t5684*t5893;
  t5895 = t5502*t5832;
  t5910 = t5894 + t5895;
  t6553 = t5650*t5502;
  t6562 = t5684*t5623;
  t6651 = t6553 + t6562;
  t6836 = t5805*t5502;
  t6851 = t5684*t5802;
  t6869 = t6836 + t6851;
  t9285 = t5764*t5623;
  t9309 = 0.24*t5650*t5658;
  t9315 = t9285 + t9309;
  t9322 = t5650*t5764;
  t9323 = -0.24*t5623*t5658;
  t9328 = t9322 + t9323;
  t9448 = t5854*t5802;
  t9453 = 0.24*t5805*t5806;
  t9454 = t9448 + t9453;
  t9456 = t5805*t5854;
  t9467 = -0.24*t5802*t5806;
  t9468 = t9456 + t9467;
  t6747 = t5684*t5673;
  t6748 = -1.*t5502*t5708;
  t6789 = t6747 + t6748;
  t5926 = -1.*t5650*t5502;
  t5928 = -1.*t5684*t5623;
  t5931 = t5926 + t5928;
  t5784 = t5764*t5658;
  t5789 = -0.24*t5518*t5658;
  t5790 = t5784 + t5789;
  t6803 = -1.*t5502*t5793;
  t6808 = t6803 + t5711;
  t5770 = t5764*t5518;
  t5771 = Power(t5658,2);
  t5775 = 0.24*t5771;
  t5781 = t5770 + t5775;
  t6890 = t5684*t5816;
  t6927 = -1.*t5502*t5832;
  t6930 = t6890 + t6927;
  t6816 = -1.*t5805*t5502;
  t6819 = -1.*t5684*t5802;
  t6822 = t6816 + t6819;
  t5871 = t5854*t5806;
  t5874 = -0.24*t5801*t5806;
  t5879 = t5871 + t5874;
  t6940 = -1.*t5502*t5893;
  t6949 = t6940 + t5838;
  t5855 = t5854*t5801;
  t5856 = Power(t5806,2);
  t5857 = 0.24*t5856;
  t5862 = t5855 + t5857;
  t6979 = Power(t5684,2);
  t7053 = -12.*t6979;
  t7061 = Power(t5502,2);
  t7068 = -12.*t7061;
  t7109 = Power(t5733,2);
  t7201 = -6.8*t7109;
  t7248 = Power(t5844,2);
  t7285 = -6.8*t7248;
  t5939 = -6.8*t5931*t5733;
  t6669 = -6.8*t6651*t5733;
  t6796 = -3.2*t5712*t6789;
  t6812 = -3.2*t6808*t5797;
  t6829 = -6.8*t6822*t5844;
  t6880 = -6.8*t6869*t5844;
  t6936 = -3.2*t5839*t6930;
  t6973 = -3.2*t6949*t5910;
  t6975 = t5939 + t6669 + t6796 + t6812 + t6829 + t6880 + t6936 + t6973;
  t9190 = Power(t5650,2);
  t9210 = 0.11*t9190;
  t9224 = Power(t5623,2);
  t9240 = 0.11*t9224;
  t9264 = t9210 + t9240;
  t9321 = -1.*t9315*t5708;
  t9340 = -1.*t5673*t9328;
  t9395 = t9321 + t9340;
  t9423 = t9315*t5793;
  t9424 = t5708*t9328;
  t9426 = t9423 + t9424;
  t9433 = Power(t5805,2);
  t9434 = 0.11*t9433;
  t9437 = Power(t5802,2);
  t9438 = 0.11*t9437;
  t9441 = t9434 + t9438;
  t9455 = -1.*t9454*t5832;
  t9478 = -1.*t5816*t9468;
  t9479 = t9455 + t9478;
  t9481 = t9454*t5893;
  t9482 = t5832*t9468;
  t9485 = t9481 + t9482;
  t9182 = -2.88*t5684;
  t9267 = -6.8*t5733*t9264;
  t9410 = -3.2*t5797*t9395;
  t9428 = -3.2*t5712*t9426;
  t9447 = -6.8*t5844*t9441;
  t9480 = -3.2*t5910*t9479;
  t9488 = -3.2*t5839*t9485;
  t9496 = t9182 + t9267 + t9410 + t9428 + t9447 + t9480 + t9488;
  t9575 = 2.88*t5502;
  t9576 = -6.8*t5931*t9264;
  t9577 = -3.2*t6808*t9395;
  t9586 = -3.2*t6789*t9426;
  t9594 = -6.8*t6822*t9441;
  t9598 = -3.2*t6949*t9479;
  t9603 = -3.2*t6930*t9485;
  t9605 = t9575 + t9576 + t9577 + t9586 + t9594 + t9598 + t9603;
  t9506 = -0.748*t5931;
  t9507 = -3.2*t5790*t6808;
  t9510 = -3.2*t5781*t6789;
  t9511 = t9506 + t9507 + t9510;
  t5747 = -0.748*t5733;
  t5783 = -3.2*t5781*t5712;
  t5798 = -3.2*t5790*t5797;
  t5799 = t5747 + t5783 + t5798;
  t9611 = -0.748*t9264;
  t9619 = -3.2*t5790*t9395;
  t9623 = -3.2*t5781*t9426;
  t9628 = -0.67 + t9611 + t9619 + t9623;
  t9692 = -0.768*t5781;
  t9693 = -0.2 + t9692;
  t9608 = -0.768*t9426;
  t9609 = -0.2 + t9608;
  t9519 = -0.748*t6822;
  t9524 = -3.2*t5879*t6949;
  t9525 = -3.2*t5862*t6930;
  t9526 = t9519 + t9524 + t9525;
  t5846 = -0.748*t5844;
  t5863 = -3.2*t5862*t5839;
  t5911 = -3.2*t5879*t5910;
  t5912 = t5846 + t5863 + t5911;
  t9643 = -0.748*t9441;
  t9644 = -3.2*t5879*t9479;
  t9646 = -3.2*t5862*t9485;
  t9647 = -0.67 + t9643 + t9644 + t9646;
  t9732 = -0.768*t5862;
  t9733 = -0.2 + t9732;
  t9635 = -0.768*t9485;
  t9636 = -0.2 + t9635;
  p_output1[0]=(-3.2*Power(t5712,2) - 3.2*Power(t5797,2) - 3.2*Power(t5839,2) - 3.2*Power(t5910,2) - 6.8*Power(t6651,2) - 6.8*Power(t6869,2) + t7053 + t7068 + t7201 + t7285)*var2[0] + t6975*var2[1] + t9496*var2[2] + t5799*var2[3] - 0.768*t5712*var2[4] + t5912*var2[5] - 0.768*t5839*var2[6];
  p_output1[1]=t6975*var2[0] + (-6.8*Power(t5931,2) - 3.2*Power(t6789,2) - 3.2*Power(t6808,2) - 6.8*Power(t6822,2) - 3.2*Power(t6930,2) - 3.2*Power(t6949,2) + t7053 + t7068 + t7201 + t7285)*var2[1] + t9605*var2[2] + t9511*var2[3] - 0.768*t6789*var2[4] + t9526*var2[5] - 0.768*t6930*var2[6];
  p_output1[2]=t9496*var2[0] + t9605*var2[1] + (-3.3612 - 6.8*Power(t9264,2) - 3.2*Power(t9395,2) - 3.2*Power(t9426,2) - 6.8*Power(t9441,2) - 3.2*Power(t9479,2) - 3.2*Power(t9485,2))*var2[2] + t9628*var2[3] + t9609*var2[4] + t9647*var2[5] + t9636*var2[6];
  p_output1[3]=t5799*var2[0] + t9511*var2[1] + t9628*var2[2] + (-1.58228 - 3.2*Power(t5781,2) - 3.2*Power(t5790,2))*var2[3] + t9693*var2[4];
  p_output1[4]=-0.768*t5712*var2[0] - 0.768*t6789*var2[1] + t9609*var2[2] + t9693*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t5912*var2[0] + t9526*var2[1] + t9647*var2[2] + (-1.58228 - 3.2*Power(t5862,2) - 3.2*Power(t5879,2))*var2[5] + t9733*var2[6];
  p_output1[6]=-0.768*t5839*var2[0] - 0.768*t6930*var2[1] + t9636*var2[2] + t9733*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
