// Generated from /home/eric/project/NCParser/src/g4/NCLexer.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NCLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Def=1, Int=2, Real=3, Bool=4, LessThan=5, GreaterThan=6, Equal=7, And=8, 
		Or=9, Plus=10, Minus=11, Star=12, Div=13, LParen=14, RParen=15, LBrack=16, 
		RBrack=17, DecimalLiteral=18, BoolLiteral=19, ID=20;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Def", "Int", "Real", "Bool", "LessThan", "GreaterThan", "Equal", "And", 
			"Or", "Plus", "Minus", "Star", "Div", "LParen", "RParen", "LBrack", "RBrack", 
			"DecimalLiteral", "Digit", "BoolLiteral", "ID", "Letter"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'DEF'", "'INT'", "'REAL'", "'BOOL'", "'<'", "'>'", "'='", "'AND'", 
			"'OR'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Def", "Int", "Real", "Bool", "LessThan", "GreaterThan", "Equal", 
			"And", "Or", "Plus", "Minus", "Star", "Div", "LParen", "RParen", "LBrack", 
			"RBrack", "DecimalLiteral", "BoolLiteral", "ID"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public NCLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "NCLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\26}\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\3\2\3\2\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3"+
		"\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16"+
		"\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\6\23`\n\23\r\23\16\23a\3"+
		"\24\6\24e\n\24\r\24\16\24f\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\5\25r\n\25\3\26\3\26\3\26\7\26w\n\26\f\26\16\26z\13\26\3\27\3\27\2\2"+
		"\30\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35"+
		"\20\37\21!\22#\23%\24\'\2)\25+\26-\2\3\2\4\3\2\62;\4\2C\\c|\2\177\2\3"+
		"\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2"+
		"\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31"+
		"\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2"+
		"\2%\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\3/\3\2\2\2\5\63\3\2\2\2\7\67\3\2\2\2"+
		"\t<\3\2\2\2\13A\3\2\2\2\rC\3\2\2\2\17E\3\2\2\2\21G\3\2\2\2\23K\3\2\2\2"+
		"\25N\3\2\2\2\27P\3\2\2\2\31R\3\2\2\2\33T\3\2\2\2\35V\3\2\2\2\37X\3\2\2"+
		"\2!Z\3\2\2\2#\\\3\2\2\2%_\3\2\2\2\'d\3\2\2\2)q\3\2\2\2+s\3\2\2\2-{\3\2"+
		"\2\2/\60\7F\2\2\60\61\7G\2\2\61\62\7H\2\2\62\4\3\2\2\2\63\64\7K\2\2\64"+
		"\65\7P\2\2\65\66\7V\2\2\66\6\3\2\2\2\678\7T\2\289\7G\2\29:\7C\2\2:;\7"+
		"N\2\2;\b\3\2\2\2<=\7D\2\2=>\7Q\2\2>?\7Q\2\2?@\7N\2\2@\n\3\2\2\2AB\7>\2"+
		"\2B\f\3\2\2\2CD\7@\2\2D\16\3\2\2\2EF\7?\2\2F\20\3\2\2\2GH\7C\2\2HI\7P"+
		"\2\2IJ\7F\2\2J\22\3\2\2\2KL\7Q\2\2LM\7T\2\2M\24\3\2\2\2NO\7-\2\2O\26\3"+
		"\2\2\2PQ\7/\2\2Q\30\3\2\2\2RS\7,\2\2S\32\3\2\2\2TU\7\61\2\2U\34\3\2\2"+
		"\2VW\7*\2\2W\36\3\2\2\2XY\7+\2\2Y \3\2\2\2Z[\7]\2\2[\"\3\2\2\2\\]\7_\2"+
		"\2]$\3\2\2\2^`\5\'\24\2_^\3\2\2\2`a\3\2\2\2a_\3\2\2\2ab\3\2\2\2b&\3\2"+
		"\2\2ce\t\2\2\2dc\3\2\2\2ef\3\2\2\2fd\3\2\2\2fg\3\2\2\2g(\3\2\2\2hi\7V"+
		"\2\2ij\7T\2\2jk\7W\2\2kr\7G\2\2lm\7H\2\2mn\7C\2\2no\7N\2\2op\7U\2\2pr"+
		"\7G\2\2qh\3\2\2\2ql\3\2\2\2r*\3\2\2\2sx\5-\27\2tw\5-\27\2uw\t\2\2\2vt"+
		"\3\2\2\2vu\3\2\2\2wz\3\2\2\2xv\3\2\2\2xy\3\2\2\2y,\3\2\2\2zx\3\2\2\2{"+
		"|\t\3\2\2|.\3\2\2\2\b\2afqvx\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}