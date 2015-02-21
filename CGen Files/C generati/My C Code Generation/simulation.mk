# For simulation run-time library
SIM_CLFLAGS = /D "_CRT_SECURE_NO_WARNINGS" /GF /EHsc /MT /Zp4 /Gy /W3 /nologo /TC
SIM_INCLUDES = /I "$(LVPATH)\cintools"

SIM_SRCS = $(notdir $(wildcard $(LVPATH)\CCodeGen\Simulation/*.c))

SIM_OBJDIR = .\simobj
SIM_OBJS = $(patsubst %.c,$(SIM_OBJDIR)\\%.obj,$(SIM_SRCS))

$(SIM_OBJDIR)\\%.obj: $(LVPATH)\\CCodeGen\\Simulation\\%.c LVFuncsUsed.h LVForms.h LVGlobs.h
	@if not exist ".\simobj" mkdir simobj
	@$(CL) /c $(SIM_CLFLAGS) $(INCLUDES) $(SIM_INCLUDES) /Fo".\simobj\\" $<

clean: sim_clean

sim_clean:
	del /f/s/q simobj
