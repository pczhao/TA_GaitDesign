/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:03 GMT-04:00
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
  double t3200;
  double t3337;
  double t3362;
  double t3357;
  double t3425;
  double t3448;
  double t5053;
  double t5056;
  double t5057;
  double t5184;
  double t5211;
  double t5222;
  double t5231;
  double t5233;
  double t8621;
  double t8829;
  double t12126;
  double t5235;
  double t5236;
  double t5496;
  double t3436;
  double t3452;
  double t4889;
  double t12162;
  double t12163;
  double t12164;
  double t12321;
  double t12349;
  double t12376;
  double t12381;
  double t12403;
  double t12419;
  double t12423;
  double t12426;
  double t12427;
  double t12436;
  double t12437;
  double t12440;
  double t12457;
  double t12458;
  double t12459;
  double t12441;
  double t12448;
  double t12449;
  double t12380;
  double t12382;
  double t12383;
  double t12461;
  double t12463;
  double t12465;
  double t3374;
  double t3384;
  double t3389;
  double t3393;
  double t3405;
  double t8095;
  double t12188;
  double t12248;
  double t5060;
  double t12290;
  double t12305;
  double t12317;
  double t12352;
  double t12356;
  double t12372;
  double t12373;
  double t12374;
  double t12454;
  double t12466;
  double t12467;
  double t12424;
  double t12472;
  double t12473;
  double t12474;
  double t12531;
  double t12532;
  double t12534;
  double t12536;
  double t12538;
  double t12539;
  double t12540;
  double t12541;
  double t3352;
  double t3363;
  double t3372;
  double t3422;
  double t12491;
  double t12492;
  double t12274;
  double t12554;
  double t12555;
  double t12556;
  double t12483;
  double t12484;
  double t12487;
  double t12551;
  double t12552;
  double t12553;
  double t12557;
  double t12560;
  double t12479;
  double t12480;
  double t12481;
  double t12482;
  double t12574;
  double t12575;
  double t12543;
  double t12544;
  double t12545;
  double t12546;
  double t12593;
  double t12594;
  double t12595;
  double t12596;
  double t12597;
  double t12598;
  double t12599;
  double t12548;
  double t12549;
  double t12550;
  double t12566;
  double t12568;
  double t12569;
  double t12570;
  double t12610;
  double t12611;
  double t12612;
  double t12576;
  double t12578;
  double t12579;
  double t12580;
  double t12581;
  double t12582;
  double t12583;
  double t12630;
  double t12631;
  double t12632;
  double t12633;
  double t12634;
  double t12635;
  double t12636;
  double t12637;
  double t12348;
  double t12350;
  double t12351;
  double t12375;
  double t12510;
  double t12513;
  double t12469;
  double t12650;
  double t12651;
  double t12652;
  double t12498;
  double t12499;
  double t12500;
  double t12647;
  double t12648;
  double t12649;
  double t12653;
  double t12654;
  double t12494;
  double t12495;
  double t12496;
  double t12497;
  double t12666;
  double t12667;
  double t12639;
  double t12640;
  double t12641;
  double t12642;
  double t12685;
  double t12686;
  double t12687;
  double t12688;
  double t12689;
  double t12690;
  double t12691;
  double t12644;
  double t12645;
  double t12646;
  double t12658;
  double t12660;
  double t12661;
  double t12662;
  double t12702;
  double t12703;
  double t12704;
  double t12668;
  double t12670;
  double t12671;
  double t12672;
  double t12673;
  double t12674;
  double t12675;
  t3200 = Cos(var1[2]);
  t3337 = Cos(var1[3]);
  t3362 = Sin(var1[3]);
  t3357 = Sin(var1[2]);
  t3425 = Cos(var1[4]);
  t3448 = Sin(var1[4]);
  t5053 = t3337*t3425;
  t5056 = -1.*t3362*t3448;
  t5057 = t5053 + t5056;
  t5184 = -1.*t3425;
  t5211 = 1. + t5184;
  t5222 = 0.4*t5211;
  t5231 = 0.64*t3425;
  t5233 = t5222 + t5231;
  t8621 = -1.*t3425*t3362;
  t8829 = -1.*t3337*t3448;
  t12126 = t8621 + t8829;
  t5235 = t5233*t3362;
  t5236 = 0.24*t3337*t3448;
  t5496 = t5235 + t5236;
  t3436 = t3425*t3362;
  t3452 = t3337*t3448;
  t4889 = t3436 + t3452;
  t12162 = t3337*t5233;
  t12163 = -0.24*t3362*t3448;
  t12164 = t12162 + t12163;
  t12321 = Cos(var1[5]);
  t12349 = Sin(var1[5]);
  t12376 = Cos(var1[6]);
  t12381 = Sin(var1[6]);
  t12403 = t12321*t12376;
  t12419 = -1.*t12349*t12381;
  t12423 = t12403 + t12419;
  t12426 = -1.*t12376;
  t12427 = 1. + t12426;
  t12436 = 0.4*t12427;
  t12437 = 0.64*t12376;
  t12440 = t12436 + t12437;
  t12457 = -1.*t12376*t12349;
  t12458 = -1.*t12321*t12381;
  t12459 = t12457 + t12458;
  t12441 = t12440*t12349;
  t12448 = 0.24*t12321*t12381;
  t12449 = t12441 + t12448;
  t12380 = t12376*t12349;
  t12382 = t12321*t12381;
  t12383 = t12380 + t12382;
  t12461 = t12321*t12440;
  t12463 = -0.24*t12349*t12381;
  t12465 = t12461 + t12463;
  t3374 = Power(t3337,2);
  t3384 = 0.11*t3374;
  t3389 = Power(t3362,2);
  t3393 = 0.11*t3389;
  t3405 = t3384 + t3393;
  t8095 = -1.*t5496*t5057;
  t12188 = -1.*t12126*t12164;
  t12248 = t8095 + t12188;
  t5060 = -1.*t3357*t5057;
  t12290 = t5496*t4889;
  t12305 = t5057*t12164;
  t12317 = t12290 + t12305;
  t12352 = Power(t12321,2);
  t12356 = 0.11*t12352;
  t12372 = Power(t12349,2);
  t12373 = 0.11*t12372;
  t12374 = t12356 + t12373;
  t12454 = -1.*t12449*t12423;
  t12466 = -1.*t12459*t12465;
  t12467 = t12454 + t12466;
  t12424 = -1.*t3357*t12423;
  t12472 = t12449*t12383;
  t12473 = t12423*t12465;
  t12474 = t12472 + t12473;
  t12531 = -1.*t5233*t3362;
  t12532 = -0.24*t3337*t3448;
  t12534 = t12531 + t12532;
  t12536 = t12534*t5057;
  t12538 = t5496*t5057;
  t12539 = t12126*t12164;
  t12540 = t4889*t12164;
  t12541 = t12536 + t12538 + t12539 + t12540;
  t3352 = -1.*t3200*t3337;
  t3363 = t3357*t3362;
  t3372 = t3352 + t3363;
  t3422 = -6.8*t3372*t3405;
  t12491 = t3200*t12126;
  t12492 = t12491 + t5060;
  t12274 = -1.*t3357*t12126;
  t12554 = -1.*t3337*t3425;
  t12555 = t3362*t3448;
  t12556 = t12554 + t12555;
  t12483 = -1.*t3357*t4889;
  t12484 = t3200*t5057;
  t12487 = t12483 + t12484;
  t12551 = -1.*t12126*t12534;
  t12552 = -1.*t12126*t5496;
  t12553 = -1.*t5057*t12164;
  t12557 = -1.*t12164*t12556;
  t12560 = t12551 + t12552 + t12553 + t12557;
  t12479 = -1.*t3337*t3357;
  t12480 = -1.*t3200*t3362;
  t12481 = t12479 + t12480;
  t12482 = -6.8*t12481*t3405;
  t12574 = t3357*t12126;
  t12575 = t12574 + t12484;
  t12543 = t5233*t3425;
  t12544 = Power(t3448,2);
  t12545 = 0.24*t12544;
  t12546 = t12543 + t12545;
  t12593 = -0.24*t3425*t3362;
  t12594 = t12593 + t12532;
  t12595 = t12594*t5057;
  t12596 = 0.24*t3337*t3425;
  t12597 = t12596 + t12163;
  t12598 = t4889*t12597;
  t12599 = t12595 + t12538 + t12539 + t12598;
  t12548 = t5233*t3448;
  t12549 = -0.24*t3425*t3448;
  t12550 = t12548 + t12549;
  t12566 = -3.2*t12492*t12248;
  t12568 = t3200*t12556;
  t12569 = t12274 + t12568;
  t12570 = -3.2*t12317*t12569;
  t12610 = -1.*t12126*t12594;
  t12611 = -1.*t5057*t12597;
  t12612 = t12610 + t12552 + t12611 + t12557;
  t12576 = -3.2*t12575*t12248;
  t12578 = t3357*t12556;
  t12579 = t12491 + t12578;
  t12580 = -3.2*t12317*t12579;
  t12581 = t3200*t4889;
  t12582 = t3357*t5057;
  t12583 = t12581 + t12582;
  t12630 = -1.*t12440*t12349;
  t12631 = -0.24*t12321*t12381;
  t12632 = t12630 + t12631;
  t12633 = t12632*t12423;
  t12634 = t12449*t12423;
  t12635 = t12459*t12465;
  t12636 = t12383*t12465;
  t12637 = t12633 + t12634 + t12635 + t12636;
  t12348 = -1.*t3200*t12321;
  t12350 = t3357*t12349;
  t12351 = t12348 + t12350;
  t12375 = -6.8*t12351*t12374;
  t12510 = t3200*t12459;
  t12513 = t12510 + t12424;
  t12469 = -1.*t3357*t12459;
  t12650 = -1.*t12321*t12376;
  t12651 = t12349*t12381;
  t12652 = t12650 + t12651;
  t12498 = -1.*t3357*t12383;
  t12499 = t3200*t12423;
  t12500 = t12498 + t12499;
  t12647 = -1.*t12459*t12632;
  t12648 = -1.*t12459*t12449;
  t12649 = -1.*t12423*t12465;
  t12653 = -1.*t12465*t12652;
  t12654 = t12647 + t12648 + t12649 + t12653;
  t12494 = -1.*t12321*t3357;
  t12495 = -1.*t3200*t12349;
  t12496 = t12494 + t12495;
  t12497 = -6.8*t12496*t12374;
  t12666 = t3357*t12459;
  t12667 = t12666 + t12499;
  t12639 = t12440*t12376;
  t12640 = Power(t12381,2);
  t12641 = 0.24*t12640;
  t12642 = t12639 + t12641;
  t12685 = -0.24*t12376*t12349;
  t12686 = t12685 + t12631;
  t12687 = t12686*t12423;
  t12688 = 0.24*t12321*t12376;
  t12689 = t12688 + t12463;
  t12690 = t12383*t12689;
  t12691 = t12687 + t12634 + t12635 + t12690;
  t12644 = t12440*t12381;
  t12645 = -0.24*t12376*t12381;
  t12646 = t12644 + t12645;
  t12658 = -3.2*t12513*t12467;
  t12660 = t3200*t12652;
  t12661 = t12469 + t12660;
  t12662 = -3.2*t12474*t12661;
  t12702 = -1.*t12459*t12686;
  t12703 = -1.*t12423*t12689;
  t12704 = t12702 + t12648 + t12703 + t12653;
  t12668 = -3.2*t12667*t12467;
  t12670 = t3357*t12652;
  t12671 = t12510 + t12670;
  t12672 = -3.2*t12474*t12671;
  t12673 = t3200*t12383;
  t12674 = t3357*t12423;
  t12675 = t12673 + t12674;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t12482 - 3.2*t12248*t12487 - 3.2*t12317*t12492 + t12497 - 3.2*t12467*t12500 - 3.2*t12474*t12513 + 2.88*t3357)*var2[0] - 0.5*(t12375 + 2.88*t3200 - 3.2*t12467*(t12424 - 1.*t12383*t3200) - 3.2*t12474*(t12469 - 1.*t12423*t3200) + t3422 - 3.2*t12317*(t12274 - 1.*t3200*t5057) - 3.2*t12248*(-1.*t3200*t4889 + t5060))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t12482 - 3.2*t12541*t12575 + t12576 + t12580 - 3.2*t12560*t12583)*var2[0] - 0.5*(-3.2*t12492*t12541 - 3.2*t12487*t12560 + t12566 + t12570 + t3422)*var2[1] - 0.5*(-6.4*t12317*t12541 - 6.4*t12248*t12560)*var2[2] - 0.5*(-3.2*t12541*t12546 - 3.2*t12550*t12560)*var2[3] + 0.384*t12541*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t12576 + t12580 - 3.2*t12575*t12599 - 3.2*t12583*t12612)*var2[0] - 0.5*(t12566 + t12570 - 3.2*t12492*t12599 - 3.2*t12487*t12612)*var2[1] - 0.5*(-6.4*t12317*t12599 - 6.4*t12248*t12612)*var2[2] - 0.5*(-3.2*t12546*t12599 - 3.2*t12550*t12612 - 3.2*t12248*(t12543 - 0.24*Power(t3425,2)) - 3.2*t12317*(0.24*t3425*t3448 - 1.*t3448*t5233))*var2[3] + 0.384*t12599*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t12497 - 3.2*t12637*t12667 + t12668 + t12672 - 3.2*t12654*t12675)*var2[0] - 0.5*(t12375 - 3.2*t12513*t12637 - 3.2*t12500*t12654 + t12658 + t12662)*var2[1] - 0.5*(-6.4*t12474*t12637 - 6.4*t12467*t12654)*var2[2] - 0.5*(-3.2*t12637*t12642 - 3.2*t12646*t12654)*var2[5] + 0.384*t12637*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t12668 + t12672 - 3.2*t12667*t12691 - 3.2*t12675*t12704)*var2[0] - 0.5*(t12658 + t12662 - 3.2*t12513*t12691 - 3.2*t12500*t12704)*var2[1] - 0.5*(-6.4*t12474*t12691 - 6.4*t12467*t12704)*var2[2] - 0.5*(-3.2*(0.24*t12376*t12381 - 1.*t12381*t12440)*t12474 - 3.2*t12467*(-0.24*Power(t12376,2) + t12639) - 3.2*t12642*t12691 - 3.2*t12646*t12704)*var2[5] + 0.384*t12691*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace SymFunction
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
