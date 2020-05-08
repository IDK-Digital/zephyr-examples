##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=docs
ConfigurationName      :=Zephyr
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/GoogleDrive/prgDecawave/DecawaveWorkSpace
ProjectPath            :=D:/GoogleDrive/prgDecawave/zephyr-examples/DS-TWR
IntermediateDirectory  :=../../DecawaveWorkSpace/build-$(ConfigurationName)/__/zephyr-examples/DS-TWR
OutDir                 :=../../DecawaveWorkSpace/build-$(ConfigurationName)/__/zephyr-examples/DS-TWR
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ricardo
Date                   :=07/05/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=D:/msys64/mingw64/bin/g++.exe
SharedObjectLinkerName :=D:/msys64/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\..\DecawaveWorkSpace\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=D:/msys64/mingw64/bin/windres.exe
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/msys64/mingw64/bin/ar.exe rcu
CXX      := D:/msys64/mingw64/bin/g++.exe
CC       := D:/msys64/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := D:/msys64/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
ZEPHYR_BASE:=c:\ricardo\zephyr


Objects=

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../DecawaveWorkSpace/build-$(ConfigurationName)/__/zephyr-examples/DS-TWR/.d $(Objects) 

PostBuild:
	@echo Executing Post Build commands ...
	C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Typora $(ProjectPath)\DS-TWR.md
	@echo Done

MakeIntermediateDirs:
	@if not exist "..\..\DecawaveWorkSpace\build-$(ConfigurationName)\__\zephyr-examples\DS-TWR" mkdir "..\..\DecawaveWorkSpace\build-$(ConfigurationName)\__\zephyr-examples\DS-TWR"
	@if not exist ""..\..\DecawaveWorkSpace\build-$(ConfigurationName)\bin"" mkdir ""..\..\DecawaveWorkSpace\build-$(ConfigurationName)\bin""

../../DecawaveWorkSpace/build-$(ConfigurationName)/__/zephyr-examples/DS-TWR/.d:
	@if not exist "..\..\DecawaveWorkSpace\build-$(ConfigurationName)\__\zephyr-examples\DS-TWR" mkdir "..\..\DecawaveWorkSpace\build-$(ConfigurationName)\__\zephyr-examples\DS-TWR"

PreBuild:
	@echo Executing Pre Build commands ...
	"C:\Program Files\Typora\Typora.exe"  DS-TWR.md
	@echo Done


##
## Objects
##

-include ../../DecawaveWorkSpace/build-$(ConfigurationName)/__/zephyr-examples/DS-TWR//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


