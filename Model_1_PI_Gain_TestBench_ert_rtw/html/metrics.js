function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtDW"] = {file: "C:\\Users\\yenna\\Downloads\\Motor_Control_Model_Package (1)\\Model_1_PI_Gain_TestBench_ert_rtw\\Model_1_PI_Gain_TestBench.c",
	size: 396};
	 this.metricsArray.var["rtM_"] = {file: "C:\\Users\\yenna\\Downloads\\Motor_Control_Model_Package (1)\\Model_1_PI_Gain_TestBench_ert_rtw\\Model_1_PI_Gain_TestBench.c",
	size: 9};
	 this.metricsArray.fcn["Model_1_PI_Gain_TestBench_initialize"] = {file: "C:\\Users\\yenna\\Downloads\\Motor_Control_Model_Package (1)\\Model_1_PI_Gain_TestBench_ert_rtw\\Model_1_PI_Gain_TestBench.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["Model_1_PI_Gain_TestBench_step0"] = {file: "C:\\Users\\yenna\\Downloads\\Motor_Control_Model_Package (1)\\Model_1_PI_Gain_TestBench_ert_rtw\\Model_1_PI_Gain_TestBench.c",
	stack: 72,
	stackTotal: 72};
	 this.metricsArray.fcn["Model_1_PI_Gain_TestBench_step1"] = {file: "C:\\Users\\yenna\\Downloads\\Motor_Control_Model_Package (1)\\Model_1_PI_Gain_TestBench_ert_rtw\\Model_1_PI_Gain_TestBench.c",
	stack: 64,
	stackTotal: 64};
	 this.metricsArray.fcn["calloc"] = {file: "C:\\Program Files\\MATLAB\\R2018b\\sys\\lcc\\include\\stdlib.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["cos"] = {file: "C:\\Program Files\\MATLAB\\R2018b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["sin"] = {file: "C:\\Program Files\\MATLAB\\R2018b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="Model_1_PI_Gain_TestBench_metrics.html">Global Memory: 405(bytes) Maximum Stack: 72(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
