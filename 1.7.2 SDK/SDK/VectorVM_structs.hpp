#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVectorVMOp : uint8
{
	Done                           = 0,
	Add                            = 1,
	Sub                            = 2,
	Mul                            = 3,
	Div                            = 4,
	Mad                            = 5,
	Lerp                           = 6,
	Rcp                            = 7,
	Rsq                            = 8,
	Sqrt                           = 9,
	Neg                            = 10,
	Abs                            = 11,
	Exp                            = 12,
	Exp2                           = 13,
	Log                            = 14,
	Log2                           = 15,
	Sin                            = 16,
	Cos                            = 17,
	Tan                            = 18,
	Asin                           = 19,
	Acos                           = 20,
	Atan                           = 21,
	Atan2                          = 22,
	Ceil                           = 23,
	Floor                          = 24,
	Fmod                           = 25,
	Frac                           = 26,
	Trunc                          = 27,
	Clamp                          = 28,
	Min                            = 29,
	Max                            = 30,
	Pow                            = 31,
	Sign                           = 32,
	Step                           = 33,
	Random                         = 34,
	Noise                          = 35,
	Output                         = 36,
	Cmplt                          = 37,
	Cmple                          = 38,
	Cmpgt                          = 39,
	Cmpge                          = 40,
	Cmpeq                          = 41,
	Cmpneq                         = 42,
	Select                         = 43,
	Addi                           = 44,
	Subi                           = 45,
	Muli                           = 46,
	Clampi                         = 47,
	Mini                           = 48,
	Maxi                           = 49,
	Absi                           = 50,
	Negi                           = 51,
	Signi                          = 52,
	Cmplti                         = 53,
	Cmplei                         = 54,
	Cmpgti                         = 55,
	Cmpgei                         = 56,
	Cmpeqi                         = 57,
	Cmpneqi                        = 58,
	bit_and                        = 59,
	bit_or                         = 60,
	bit_xor                        = 61,
	bit_not                        = 62,
	Logic_and                      = 63,
	Logic_or                       = 64,
	Logic_xor                      = 65,
	Logic_not                      = 66,
	F2i                            = 67,
	I2f                            = 68,
	F2b                            = 69,
	b2f                            = 70,
	I2b                            = 71,
	b2i                            = 72,
	Inputdata_32bit                = 73,
	Inputdata_noadvance_32bit      = 74,
	Outputdata_32bit               = 75,
	Acquireindex                   = 76,
	External_func_call             = 77,
	Exec_index                     = 78,
	Noise2D                        = 79,
	Noise3D                        = 80,
	NumOpcodes                     = 81,
	EVectorVMOp_MAX                = 82,
};

enum class EVectorVMOperandLocation : uint8
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3,
};

enum class EVectorVMBaseTypes : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


