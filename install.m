s = filesep;
root_dir = pwd;

addpath(genpath(pwd));
cd Utils/spotless/
spot_install;


frost_addpath;
cd(root_dir);