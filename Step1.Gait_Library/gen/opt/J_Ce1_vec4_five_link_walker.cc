/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:13 GMT-04:00
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
  double t2167;
  double t1936;
  double t1959;
  double t1797;
  double t5331;
  double t120;
  double t2190;
  double t2250;
  double t2358;
  double t3020;
  double t3183;
  double t5731;
  double t5767;
  double t5803;
  double t1885;
  double t2065;
  double t2081;
  double t2145;
  double t5927;
  double t5952;
  double t5956;
  double t5437;
  double t5540;
  double t5543;
  double t6542;
  double t3244;
  double t5336;
  double t5415;
  double t5436;
  double t5648;
  double t6020;
  double t6056;
  double t6102;
  double t6670;
  double t6678;
  double t6714;
  double t6722;
  double t6750;
  double t6752;
  double t6763;
  double t6770;
  double t6779;
  double t6783;
  double t6799;
  double t6814;
  double t6832;
  double t6835;
  double t8155;
  double t8161;
  double t8174;
  double t8177;
  double t8182;
  double t8186;
  double t6911;
  double t6993;
  double t7149;
  double t6834;
  double t6898;
  double t6908;
  double t7797;
  double t7815;
  double t8210;
  double t8212;
  double t8215;
  double t8222;
  double t8231;
  double t8861;
  double t8862;
  double t8865;
  double t8874;
  double t8904;
  double t9339;
  double t9403;
  double t9524;
  double t8523;
  double t8767;
  double t8768;
  double t9621;
  double t10016;
  double t10061;
  double t10120;
  double t5873;
  double t10197;
  double t10206;
  double t10232;
  double t10233;
  double t5877;
  double t11825;
  double t12103;
  double t6365;
  double t6583;
  double t12184;
  double t12185;
  double t12186;
  double t12188;
  double t12217;
  double t12254;
  double t12257;
  double t12193;
  double t12194;
  double t12198;
  double t12267;
  double t12335;
  double t12339;
  double t8288;
  double t8294;
  double t8295;
  double t5899;
  double t6608;
  double t6635;
  double t6636;
  double t7943;
  double t12433;
  double t12434;
  double t12435;
  double t12416;
  double t12419;
  double t12428;
  double t12474;
  double t12475;
  double t12480;
  double t12460;
  double t12469;
  double t12470;
  double t12437;
  double t12521;
  double t12522;
  double t12481;
  double t12486;
  double t12525;
  double t12526;
  double t12528;
  double t12529;
  double t12500;
  double t12508;
  double t12509;
  double t12510;
  double t12518;
  double t12519;
  double t12520;
  double t12523;
  double t12524;
  double t12527;
  double t12530;
  double t12531;
  double t12533;
  double t12536;
  double t12537;
  double t12538;
  double t12539;
  double t12540;
  double t12548;
  double t12549;
  double t12550;
  double t12551;
  double t12552;
  double t12553;
  double t12554;
  double t12555;
  double t12556;
  double t12557;
  double t12558;
  double t12559;
  double t12564;
  double t12565;
  double t12567;
  double t12568;
  double t12570;
  double t12576;
  double t12577;
  double t12583;
  double t12584;
  double t12585;
  double t12604;
  double t12605;
  double t12606;
  double t12607;
  double t12608;
  double t12632;
  double t12633;
  double t12634;
  t2167 = Cos(var1[4]);
  t1936 = Sin(var1[2]);
  t1959 = Sin(var1[3]);
  t1797 = Cos(var1[3]);
  t5331 = Sin(var1[4]);
  t120 = Cos(var1[2]);
  t2190 = -1.*t2167;
  t2250 = 1. + t2190;
  t2358 = 0.4*t2250;
  t3020 = 0.64*t2167;
  t3183 = t2358 + t3020;
  t5731 = t1797*t2167;
  t5767 = -1.*t1959*t5331;
  t5803 = t5731 + t5767;
  t1885 = -1.*t120*t1797;
  t2065 = t1936*t1959;
  t2081 = t1885 + t2065;
  t2145 = 0.748*t2081;
  t5927 = t3183*t5331;
  t5952 = -0.24*t2167*t5331;
  t5956 = t5927 + t5952;
  t5437 = -1.*t2167*t1959;
  t5540 = -1.*t1797*t5331;
  t5543 = t5437 + t5540;
  t6542 = -1.*t1936*t5803;
  t3244 = t3183*t2167;
  t5336 = Power(t5331,2);
  t5415 = 0.24*t5336;
  t5436 = t3244 + t5415;
  t5648 = -1.*t1936*t5543;
  t6020 = t2167*t1959;
  t6056 = t1797*t5331;
  t6102 = t6020 + t6056;
  t6670 = t120*t5543;
  t6678 = t6670 + t6542;
  t6714 = 3.2*t5956*t6678;
  t6722 = -1.*t1797*t2167;
  t6750 = t1959*t5331;
  t6752 = t6722 + t6750;
  t6763 = t120*t6752;
  t6770 = t5648 + t6763;
  t6779 = 3.2*t5436*t6770;
  t6783 = t2145 + t6714 + t6779;
  t6799 = Power(t2167,2);
  t6814 = -0.24*t6799;
  t6832 = t3244 + t6814;
  t6835 = t120*t5803;
  t8155 = t1936*t6102;
  t8161 = t8155 + t6763;
  t8174 = 3.2*t5436*t8161;
  t8177 = t1936*t6752;
  t8182 = t6670 + t8177;
  t8186 = 3.2*t5956*t8182;
  t6911 = -1.*t3183*t5331;
  t6993 = 0.24*t2167*t5331;
  t7149 = t6911 + t6993;
  t6834 = -1.*t1936*t6102;
  t6898 = t6834 + t6835;
  t6908 = 3.2*t6832*t6898;
  t7797 = 3.2*t7149*t6678;
  t7815 = t6908 + t6714 + t7797 + t6779;
  t8210 = t1936*t5543;
  t8212 = t8210 + t6835;
  t8215 = 3.2*t6832*t8212;
  t8222 = 3.2*t7149*t8182;
  t8231 = t8215 + t8174 + t8186 + t8222;
  t8861 = -1.*t1797*t1936;
  t8862 = -1.*t120*t1959;
  t8865 = t8861 + t8862;
  t8874 = 0.748*t8865;
  t8904 = 3.2*t5956*t6898;
  t9339 = 3.2*t5436*t6678;
  t9403 = t8874 + t8904 + t9339;
  t9524 = 3.2*t5956*t8212;
  t8523 = t120*t6102;
  t8767 = t1936*t5803;
  t8768 = t8523 + t8767;
  t9621 = 3.2*t5436*t8182;
  t10016 = 3.2*t7149*t8212;
  t10061 = 3.2*t6832*t8768;
  t10120 = t9524 + t10016 + t10061 + t9621;
  t5873 = -1.*t120*t5803;
  t10197 = t1797*t1936;
  t10206 = t120*t1959;
  t10232 = t10197 + t10206;
  t10233 = 0.748*t10232;
  t5877 = t5648 + t5873;
  t11825 = -1.*t120*t5543;
  t12103 = 3.2*t5956*t5877;
  t6365 = -1.*t120*t6102;
  t6583 = t6365 + t6542;
  t12184 = -1.*t1936*t6752;
  t12185 = t11825 + t12184;
  t12186 = 3.2*t5436*t12185;
  t12188 = t10233 + t12103 + t12186;
  t12217 = 3.2*t5956*t6770;
  t12254 = t8523 + t12184;
  t12257 = 3.2*t5436*t12254;
  t12193 = 3.2*t7149*t5877;
  t12194 = 3.2*t6832*t6583;
  t12198 = t12103 + t12193 + t12194 + t12186;
  t12267 = 3.2*t6832*t6678;
  t12335 = 3.2*t7149*t6770;
  t12339 = t12267 + t12217 + t12335 + t12257;
  t8288 = -1.*t3183*t2167;
  t8294 = 0.24*t6799;
  t8295 = t8288 + t8294;
  t5899 = 3.2*t5436*t5877;
  t6608 = 3.2*t5956*t6583;
  t6635 = t2145 + t5899 + t6608;
  t6636 = -0.5*var2[2]*t6635;
  t7943 = -0.5*var2[4]*t7815;
  t12433 = t1797*t3183;
  t12434 = -0.24*t1959*t5331;
  t12435 = t12433 + t12434;
  t12416 = -1.*t3183*t1959;
  t12419 = -0.24*t1797*t5331;
  t12428 = t12416 + t12419;
  t12474 = t3183*t1959;
  t12475 = 0.24*t1797*t5331;
  t12480 = t12474 + t12475;
  t12460 = -1.*t1797*t3183;
  t12469 = 0.24*t1959*t5331;
  t12470 = t12460 + t12469;
  t12437 = -1.*t6102*t12435;
  t12521 = -0.24*t2167*t1959;
  t12522 = t12521 + t12419;
  t12481 = -1.*t12480*t6752;
  t12486 = t5543*t12480;
  t12525 = 0.24*t1797*t2167;
  t12526 = t12525 + t12434;
  t12528 = -0.24*t1797*t2167;
  t12529 = t12528 + t12469;
  t12500 = t12435*t6752;
  t12508 = t12428*t5803;
  t12509 = t12480*t5803;
  t12510 = t5543*t12435;
  t12518 = t6102*t12435;
  t12519 = t12508 + t12509 + t12510 + t12518;
  t12520 = 3.2*t7149*t12519;
  t12523 = -1.*t12522*t5803;
  t12524 = -1.*t5543*t12435;
  t12527 = -1.*t5543*t12526;
  t12530 = -1.*t5543*t12529;
  t12531 = -1.*t12428*t6752;
  t12533 = -1.*t12522*t6752;
  t12536 = t12523 + t12524 + t12437 + t12527 + t12530 + t12531 + t12533 + t12481;
  t12537 = 3.2*t5956*t12536;
  t12538 = -1.*t5543*t12428;
  t12539 = -1.*t5543*t12480;
  t12540 = -1.*t5803*t12435;
  t12548 = -1.*t12435*t6752;
  t12549 = t12538 + t12539 + t12540 + t12548;
  t12550 = 3.2*t6832*t12549;
  t12551 = t5543*t12428;
  t12552 = t5543*t12522;
  t12553 = t12522*t6102;
  t12554 = t5803*t12435;
  t12555 = t5803*t12526;
  t12556 = t5803*t12529;
  t12557 = t12551 + t12552 + t12486 + t12553 + t12554 + t12555 + t12556 + t12500;
  t12558 = 3.2*t5436*t12557;
  t12559 = t12520 + t12537 + t12550 + t12558;
  t12564 = -1.*t12480*t5803;
  t12565 = t12564 + t12524;
  t12567 = t12480*t6102;
  t12568 = t12567 + t12554;
  t12570 = t12522*t5803;
  t12576 = t6102*t12526;
  t12577 = t12570 + t12509 + t12510 + t12576;
  t12583 = -1.*t5543*t12522;
  t12584 = -1.*t5803*t12526;
  t12585 = t12583 + t12539 + t12584 + t12548;
  t12604 = 3.2*t6832*t12565;
  t12605 = 3.2*t7149*t12568;
  t12606 = 3.2*t5436*t12577;
  t12607 = 3.2*t5956*t12585;
  t12608 = t12604 + t12605 + t12606 + t12607;
  t12632 = 6.4*t6832*t5956;
  t12633 = 6.4*t7149*t5436;
  t12634 = t12632 + t12633;
  p_output1[0]=var2[3]*(t6636 + t7943 - 0.5*t6783*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t6783*var2[2] - 0.5*(t2145 + t8174 + t8186)*var2[3] - 0.5*t8231*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t7815*var2[2] - 0.5*t8231*var2[3] - 0.5*(t8174 + 6.4*t7149*t8182 + t8186 + 6.4*t6832*t8212 + 3.2*t8212*t8295 + 3.2*t7149*t8768)*var2[4]);
  p_output1[3]=-0.5*t9403*var2[3];
  p_output1[4]=-0.5*t9403*var2[2] - 1.*(t8874 + t9524 + t9621)*var2[3] - 0.5*t10120*var2[4];
  p_output1[5]=-0.5*t10120*var2[3];
  p_output1[6]=var2[3]*(-0.5*(t10233 + 3.2*t5956*(t5873 + t8155) + 3.2*t5436*(t11825 + t8767))*var2[2] - 0.5*t12188*var2[3] - 0.5*t12198*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t12188*var2[2] - 0.5*(t10233 + t12217 + t12257)*var2[3] - 0.5*t12339*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t12198*var2[2] - 0.5*t12339*var2[3] - 0.5*(t12217 + t12257 + 6.4*t6678*t6832 + 6.4*t6770*t7149 + 3.2*t6898*t7149 + 3.2*t6678*t8295)*var2[4]);
  p_output1[9]=-0.5*t6635*var2[3];
  p_output1[10]=t6636 + t7943 - 1.*t6783*var2[3];
  p_output1[11]=-0.5*t7815*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t5436*(t12486 + t12500 + 2.*t12428*t5543 + 2.*t12435*t5803 + t12470*t5803 + t12428*t6102) + 3.2*t5956*(t12437 + t12481 - 2.*t12435*t5543 - 1.*t12470*t5543 - 1.*t12428*t5803 - 2.*t12428*t6752))*var2[3] - 0.5*t12559*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t12559*var2[3] - 0.5*(3.2*t5436*(t12486 + t12500 + t12553 + t12556 + 2.*t12522*t5543 + 2.*t12526*t5803) + 3.2*t5956*(t12437 + t12481 + t12523 + t12530 - 2.*t12526*t5543 - 2.*t12522*t6752) + 6.4*t12585*t6832 + 3.2*t12565*t7149 + 6.4*t12577*t7149 + 3.2*t12568*t8295)*var2[4]);
  p_output1[14]=-1.*(3.2*t12519*t5436 + 3.2*t12549*t5956)*var2[3] - 0.5*t12608*var2[4];
  p_output1[15]=-0.5*t12608*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t6832,2) + 6.4*t5956*t7149 + 6.4*Power(t7149,2) + 6.4*t5436*t8295)*var2[3]*var2[4];
  p_output1[17]=-0.5*t12634*var2[4];
  p_output1[18]=-0.5*t12634*var2[3];
  p_output1[19]=-0.384*t8295*var2[3]*var2[4];
  p_output1[20]=-0.384*t7149*var2[4];
  p_output1[21]=-0.384*t7149*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
