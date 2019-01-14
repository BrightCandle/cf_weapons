set MAKE=%ARMAKE_HOME%\armake_w64.exe

set BUILD=build
set MOD=build\@cf_weapons
set ADDONS=build\@cf_weapons\addons

del /Q /S %BUILD%

mkdir %BUILD%
mkdir %MOD%
mkdir %ADDONS%

copy README.md %MOD%
copy Readme.txt %MOD%

%MAKE% build cf_weap_flares %ADDONS%\cf_weap_flares.pbo
%MAKE% build cf_weap_main %ADDONS%\cf_weap_main.pbo
%MAKE% build cf_weap_nia_m14 %ADDONS%\cf_weap_nia_m14.pbo
%MAKE% build cf_weap_po %ADDONS%\cf_weap_po.pbo
%MAKE% build cf_weap_rhs_afrf %ADDONS%\cf_weap_rhs_afrf.pbo
%MAKE% build cf_weap_rhs_gref %ADDONS%\cf_weap_rhs_gref.pbo
%MAKE% build cf_weap_rhs_saf %ADDONS%\cf_weap_rhs_saf.pbo
%MAKE% build cf_weap_rhs_usf %ADDONS%\cf_weap_rhs_usf.pbo
%MAKE% build cf_weap_vanilla %ADDONS%\cf_weap_vanilla.pbo

pause