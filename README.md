# Leveraging the Template and Anchor Framework for Safe, Online Robotic Gait Design
This code implements a novel method to perform safe, online gait design on a [RABBIT](https://ieeexplore.ieee.org/stamp/stamp.jsp?arnumber=1234651) model in simulation.

# Installation Requirements
To run the code in this repository, you will need the following:
- MATLAB R2017b
- [FROST](https://ayonga.github.io/frost-dev/index.html) for generating robot dynamics and solving offline trajectory optimization problems
- [spotless ](https://github.com/spot-toolbox/spotless) for computing FRS and deriving set inclusion arguments ([provided](https://github.com/pczhao/TA_GaitDesign))
- [MOSEK](https://www.mosek.com/) for solving SOS programs
- [polyfitn](https://www.mathworks.com/matlabcentral/fileexchange/34765-polyfitn) for fitting polynomial to data ([provided](https://github.com/pczhao/TA_GaitDesign))
# Overview
## 0. Initialization
Properly install the above toolboxes, and run [`install.m`](https://github.com/pczhao/TA_GaitDesign).
## 1. Generating Gait Library
Each trajectory in the *gait library* is parameterized by a pair of *gait parameters* `(p1,p2)`defined as

- `p1`: average horizontal velocity
- `p2`: step length

To solve for a periodic trajectory, change the values of `p1` and `p2` in lines 4 and 5 of [`GL_opt.m`](https://github.com/pczhao/TA_GaitDesign), and run.
## 2. Walking Controller
Walking controller uses PD feedback to track trajectories drawn from the gait library, and is implemented in [`Sim_RABBIT_walking.m`](https://github.com/pczhao/TA_GaitDesign). The parameters are:

- `q0`: initial configuration
- `dq0`: initial velocities
- `p1`, `p2`: gait parameters
- `plot_flag`: flag that toggles plotting

## 3. Bounding Dynamics of RABBIT
Run [`generate_indicator_fun_v2.m`](https://github.com/pczhao/TA_GaitDesign)

## 4. Computing Forward Reachable Set (FRS)
Run ['run_FRS_fun.m'](https://github.com/pczhao/TA_GaitDesign)

## 5. Set Inclusion Arguments
Run [`gen_ell.m`](https://github.com/pczhao/TA_GaitDesign)

## 6. Online MPC
To run the proposed method on a speed-tracking problem, run [`run_Example_proposed.m`](https://github.com/pczhao/TA_GaitDesign)

To solve the same problem using naive method, run [`run_Example_naive.m`](https://github.com/pczhao/TA_GaitDesign)

# Acknowledgements
Special thanks to my collaborators Jinsun Liu, Zhenyu Gan, Matthew Johnson-Roberson, and Ram Vasudevan.
