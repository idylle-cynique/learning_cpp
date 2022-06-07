chcp 65001
$now_path = Split-Path $MyInvocation.MyCommand.Path
rm --force --recursive build
mkdir -Force build
cd build
cmake -G "MinGW Makefiles" ..
make 

echo "START...`n"
./main.exe
echo "`n...END"
Pause