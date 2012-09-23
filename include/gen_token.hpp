typedef enum {
	Return,
	Add,
	Sub,
	Mul,
	Div,
	Greater,
	Less,
	AddEqual,
	SubEqual,
	MulEqual,
	DivEqual,
	StringAdd,
	GreaterEqual,
	LessEqual,
	EqualEqual,
	NotEqual,
	Inc,
	Dec,
	LeftShift,
	RightShift,
	VarDecl,
	FunctionDecl,
	Assign,
	Is,
	IsNot,
	BuiltinFunc,
	IfStmt,
	ElseStmt,
	ElsifStmt,
	UnlessStmt,
	Comma,
	SemiColon,
	LeftParenthesis,
	RightParenthesis,
	LeftBrace,
	RightBrace,
	LeftBracket,
	RightBracket,
	ArrayDereference,
	HashDereference,
	Key,
	Arrow,
	Pointer,
	Package,
	Class,
	Shift,
	CallDecl,
	CodeRef,
	WhileStmt,
	ForStmt,
	ForeachStmt,
	ArgumentArray,
	SpecificValue,
	ProgramArgument,
	FieldDecl,
	TypeRef,
	LabelRef,
	LocalVarDecl,
	GlobalVarDecl,
	MultiLocalVarDecl,
	MultiGlobalVarDecl,
	Var,
	CodeVar,
	ArrayVar,
	HashVar,
	Int,
	Double,
	String,
	Object,
	Array,
	Hash,
	Operator,
	LocalVar,
	LocalArrayVar,
	LocalHashVar,
	GlobalVar,
	GlobalArrayVar,
	GlobalHashVar,
	ArrayRef,
	HashRef,
	ArrayAt,
	HashAt,
	ArraySet,
	HashSet,
	Function,
	Call,
	Argument,
	List,
	Default,
	Undefined,
} GPerlT;

typedef struct _GPerlTokenInfo {
	GPerlT type;
	const char *name;
	const char *data;
} GPerlTokenInfo;
