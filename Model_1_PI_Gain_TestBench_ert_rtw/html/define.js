function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:41,type:"fcn"};this.def["main"] = {file: "ert_main_c.html",line:127,type:"fcn"};this.def["rtDW"] = {file: "Model_1_PI_Gain_TestBench_c.html",line:68,type:"var"};this.def["rtM_"] = {file: "Model_1_PI_Gain_TestBench_c.html",line:71,type:"var"};this.def["rtM"] = {file: "Model_1_PI_Gain_TestBench_c.html",line:72,type:"var"};this.def["Model_1_PI_Gain_TestBench_step0"] = {file: "Model_1_PI_Gain_TestBench_c.html",line:75,type:"fcn"};this.def["Model_1_PI_Gain_TestBench_step1"] = {file: "Model_1_PI_Gain_TestBench_c.html",line:197,type:"fcn"};this.def["Model_1_PI_Gain_TestBench_initialize"] = {file: "Model_1_PI_Gain_TestBench_c.html",line:315,type:"fcn"};this.def["RT_MODEL"] = {file: "Model_1_PI_Gain_TestBench_h.html",line:42,type:"type"};this.def["DW"] = {file: "Model_1_PI_Gain_TestBench_h.html",line:93,type:"type"};this.def["ConstP"] = {file: "Model_1_PI_Gain_TestBench_h.html",line:101,type:"type"};this.def["rtConstP"] = {file: "Model_1_PI_Gain_TestBench_data_c.html",line:27,type:"var"};this.def["int8_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};this.def["uint8_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};this.def["int16_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};this.def["uint16_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};this.def["int32_T"] = {file: "rtwtypes_h.html",line:59,type:"type"};this.def["uint32_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};this.def["int64_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};this.def["uint64_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};this.def["real32_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};this.def["real64_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};this.def["real_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};this.def["time_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};this.def["boolean_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};this.def["int_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};this.def["uint_T"] = {file: "rtwtypes_h.html",line:74,type:"type"};this.def["ulong_T"] = {file: "rtwtypes_h.html",line:75,type:"type"};this.def["ulonglong_T"] = {file: "rtwtypes_h.html",line:76,type:"type"};this.def["char_T"] = {file: "rtwtypes_h.html",line:77,type:"type"};this.def["uchar_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};this.def["byte_T"] = {file: "rtwtypes_h.html",line:79,type:"type"};this.def["pointer_T"] = {file: "rtwtypes_h.html",line:100,type:"type"};}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Model_1_PI_Gain_TestBench_c.html"] = "../Model_1_PI_Gain_TestBench.c";
	this.html2Root["Model_1_PI_Gain_TestBench_c.html"] = "Model_1_PI_Gain_TestBench_c.html";
	this.html2SrcPath["Model_1_PI_Gain_TestBench_h.html"] = "../Model_1_PI_Gain_TestBench.h";
	this.html2Root["Model_1_PI_Gain_TestBench_h.html"] = "Model_1_PI_Gain_TestBench_h.html";
	this.html2SrcPath["Model_1_PI_Gain_TestBench_data_c.html"] = "../Model_1_PI_Gain_TestBench_data.c";
	this.html2Root["Model_1_PI_Gain_TestBench_data_c.html"] = "Model_1_PI_Gain_TestBench_data_c.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Model_1_PI_Gain_TestBench_c.html","Model_1_PI_Gain_TestBench_h.html","Model_1_PI_Gain_TestBench_data_c.html","rtwtypes_h.html"];
