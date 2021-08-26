#include <iostream>
#include <unordered_map>
#include "tinyxml2.h"
#include <algorithm>
#include <Windows.h>

using namespace std;

unordered_map<string, string>* kanaMap = new unordered_map<string, string>;

void map_init() {
    kanaMap->emplace("a", "あ");
    kanaMap->emplace("i", "い");
    kanaMap->emplace("u", "う");
    kanaMap->emplace("e", "え");
    kanaMap->emplace("o", "お");
    kanaMap->emplace("ka", "か");
    kanaMap->emplace("ki", "き");
    kanaMap->emplace("ku", "く");
    kanaMap->emplace("ke", "け");
    kanaMap->emplace("ko", "こ");
    kanaMap->emplace("kya", "きゃ");
    kanaMap->emplace("kyi", "きぃ");
    kanaMap->emplace("kyu", "きゅ");
    kanaMap->emplace("kye", "きぇ");
    kanaMap->emplace("kyo", "きょ");
    kanaMap->emplace("kwa", "くぁ");
    kanaMap->emplace("kka", "っか");
    kanaMap->emplace("kki", "っき");
    kanaMap->emplace("kku", "っく");
    kanaMap->emplace("kke", "っけ");
    kanaMap->emplace("kko", "っこ");
    kanaMap->emplace("kkya", "っきゃ");
    kanaMap->emplace("kkyi", "っきぃ");
    kanaMap->emplace("kkyu", "っきゅ");
    kanaMap->emplace("kkye", "っきぇ");
    kanaMap->emplace("kkyo", "っきょ");
    kanaMap->emplace("kkwa", "っくぁ");
    kanaMap->emplace("sa", "さ");
    kanaMap->emplace("si", "し");
    kanaMap->emplace("su", "す");
    kanaMap->emplace("se", "せ");
    kanaMap->emplace("so", "そ");
    kanaMap->emplace("sya", "しゃ");
    kanaMap->emplace("syi", "しぃ");
    kanaMap->emplace("syu", "しゅ");
    kanaMap->emplace("sye", "しぇ");
    kanaMap->emplace("syo", "しょ");
    kanaMap->emplace("swa", "すぁ");
    kanaMap->emplace("swi", "すぃ");
    kanaMap->emplace("swu", "すぅ");
    kanaMap->emplace("swe", "すぇ");
    kanaMap->emplace("swo", "すぉ");
    kanaMap->emplace("sha", "しゃ");
    kanaMap->emplace("shi", "し");
    kanaMap->emplace("shu", "しゅ");
    kanaMap->emplace("she", "しぇ");
    kanaMap->emplace("sho", "しょ");
    kanaMap->emplace("shya", "しゃ");
    kanaMap->emplace("shyi", "しぃ");
    kanaMap->emplace("shyu", "しゅ");
    kanaMap->emplace("shye", "しぇ");
    kanaMap->emplace("shyo", "しょ");
    kanaMap->emplace("ssa", "っさ");
    kanaMap->emplace("ssi", "っし");
    kanaMap->emplace("ssu", "っす");
    kanaMap->emplace("sse", "っせ");
    kanaMap->emplace("sso", "っそ");
    kanaMap->emplace("ssya", "っしゃ");
    kanaMap->emplace("ssyi", "っしぃ");
    kanaMap->emplace("ssyu", "っしゅ");
    kanaMap->emplace("ssye", "っしぇ");
    kanaMap->emplace("ssyo", "っしょ");
    kanaMap->emplace("sswa", "っすぁ");
    kanaMap->emplace("sswi", "っすぃ");
    kanaMap->emplace("sswu", "っすぅ");
    kanaMap->emplace("sswe", "っすぇ");
    kanaMap->emplace("sswo", "っすぉ");
    kanaMap->emplace("ssha", "っしゃ");
    kanaMap->emplace("sshi", "っし");
    kanaMap->emplace("sshu", "っしゅ");
    kanaMap->emplace("sshe", "っしぇ");
    kanaMap->emplace("ssho", "っしょ");
    kanaMap->emplace("sshya", "っしゃ");
    kanaMap->emplace("sshyi", "っしぃ");
    kanaMap->emplace("sshyu", "っしゅ");
    kanaMap->emplace("sshye", "っしぇ");
    kanaMap->emplace("sshyo", "っしょ");
    kanaMap->emplace("ta", "た");
    kanaMap->emplace("ti", "ち");
    kanaMap->emplace("tu", "つ");
    kanaMap->emplace("te", "て");
    kanaMap->emplace("to", "と");
    kanaMap->emplace("tya", "ちゃ");
    kanaMap->emplace("tyi", "ちぃ");
    kanaMap->emplace("tyu", "ちゅ");
    kanaMap->emplace("tye", "ちぇ");
    kanaMap->emplace("tyo", "ちょ");
    kanaMap->emplace("tsa", "つぁ");
    kanaMap->emplace("tsi", "つぃ");
    kanaMap->emplace("tsu", "つ");
    kanaMap->emplace("tse", "つぇ");
    kanaMap->emplace("tso", "つぉ");
    kanaMap->emplace("tha", "てゃ");
    kanaMap->emplace("thi", "てぃ");
    kanaMap->emplace("thu", "てゅ");
    kanaMap->emplace("the", "てぇ");
    kanaMap->emplace("tho", "てょ");
    kanaMap->emplace("twa", "とぁ");
    kanaMap->emplace("twi", "とぃ");
    kanaMap->emplace("twu", "とぅ");
    kanaMap->emplace("twe", "とぇ");
    kanaMap->emplace("two", "とぉ");
    kanaMap->emplace("tta", "った");
    kanaMap->emplace("tti", "っち");
    kanaMap->emplace("ttu", "っつ");
    kanaMap->emplace("tte", "って");
    kanaMap->emplace("tto", "っと");
    kanaMap->emplace("ttya", "っちゃ");
    kanaMap->emplace("ttyi", "っちぃ");
    kanaMap->emplace("ttyu", "っちゅ");
    kanaMap->emplace("ttye", "っちぇ");
    kanaMap->emplace("ttyo", "っちょ");
    kanaMap->emplace("ttsa", "っつぁ");
    kanaMap->emplace("ttsi", "っつぃ");
    kanaMap->emplace("ttsu", "っつ");
    kanaMap->emplace("ttse", "っつぇ");
    kanaMap->emplace("ttso", "っつぉ");
    kanaMap->emplace("ttha", "ってゃ");
    kanaMap->emplace("tthi", "ってぃ");
    kanaMap->emplace("tthu", "ってゅ");
    kanaMap->emplace("tthe", "ってぇ");
    kanaMap->emplace("ttho", "ってょ");
    kanaMap->emplace("ttwa", "っとぁ");
    kanaMap->emplace("ttwi", "っとぃ");
    kanaMap->emplace("ttwu", "っとぅ");
    kanaMap->emplace("ttwe", "っとぇ");
    kanaMap->emplace("ttwo", "っとぉ");
    kanaMap->emplace("na", "な");
    kanaMap->emplace("ni", "に");
    kanaMap->emplace("nu", "ぬ");
    kanaMap->emplace("ne", "ね");
    kanaMap->emplace("no", "の");
    kanaMap->emplace("nya", "にゃ");
    kanaMap->emplace("nyi", "にぃ");
    kanaMap->emplace("nyu", "にゅ");
    kanaMap->emplace("nye", "にぇ");
    kanaMap->emplace("nyo", "にょ");
    kanaMap->emplace("n", "ん");
    kanaMap->emplace("n'", "ん");
    kanaMap->emplace("ha", "は");
    kanaMap->emplace("hi", "ひ");
    kanaMap->emplace("hu", "ふ");
    kanaMap->emplace("he", "へ");
    kanaMap->emplace("ho", "ほ");
    kanaMap->emplace("hya", "ひゃ");
    kanaMap->emplace("hyi", "ひぃ");
    kanaMap->emplace("hyu", "ひゅ");
    kanaMap->emplace("hye", "ひぇ");
    kanaMap->emplace("hyo", "ひょ");
    kanaMap->emplace("hha", "っは");
    kanaMap->emplace("hhi", "っひ");
    kanaMap->emplace("hhu", "っふ");
    kanaMap->emplace("hhe", "っへ");
    kanaMap->emplace("hho", "っほ");
    kanaMap->emplace("hhya", "っひゃ");
    kanaMap->emplace("hhyi", "っひぃ");
    kanaMap->emplace("hhyu", "っひゅ");
    kanaMap->emplace("hhye", "っひぇ");
    kanaMap->emplace("hhyo", "っひょ");
    kanaMap->emplace("ma", "ま");
    kanaMap->emplace("mi", "み");
    kanaMap->emplace("mu", "む");
    kanaMap->emplace("me", "め");
    kanaMap->emplace("mo", "も");
    kanaMap->emplace("mya", "みゃ");
    kanaMap->emplace("myi", "みぃ");
    kanaMap->emplace("myu", "みゅ");
    kanaMap->emplace("mye", "みぇ");
    kanaMap->emplace("myo", "みょ");
    kanaMap->emplace("mma", "っま");
    kanaMap->emplace("mmi", "っみ");
    kanaMap->emplace("mmu", "っむ");
    kanaMap->emplace("mme", "っめ");
    kanaMap->emplace("mmo", "っも");
    kanaMap->emplace("mmya", "っみゃ");
    kanaMap->emplace("mmyi", "っみぃ");
    kanaMap->emplace("mmyu", "っみゅ");
    kanaMap->emplace("mmye", "っみぇ");
    kanaMap->emplace("mmyo", "っみょ");
    kanaMap->emplace("ya", "や");
    kanaMap->emplace("yu", "ゆ");
    kanaMap->emplace("yo", "よ");
    kanaMap->emplace("yi", "い");
    kanaMap->emplace("ye", "いぇ");
    kanaMap->emplace("yya", "っや");
    kanaMap->emplace("yyu", "っゆ");
    kanaMap->emplace("yyo", "っよ");
    kanaMap->emplace("yyi", "っい");
    kanaMap->emplace("yye", "っいぇ");
    kanaMap->emplace("ra", "ら");
    kanaMap->emplace("ri", "り");
    kanaMap->emplace("ru", "る");
    kanaMap->emplace("re", "れ");
    kanaMap->emplace("ro", "ろ");
    kanaMap->emplace("rya", "りゃ");
    kanaMap->emplace("ryi", "りぃ");
    kanaMap->emplace("ryu", "りゅ");
    kanaMap->emplace("rye", "りぇ");
    kanaMap->emplace("ryo", "りょ");
    kanaMap->emplace("rra", "っら");
    kanaMap->emplace("rri", "っり");
    kanaMap->emplace("rru", "っる");
    kanaMap->emplace("rre", "っれ");
    kanaMap->emplace("rro", "っろ");
    kanaMap->emplace("rrya", "っりゃ");
    kanaMap->emplace("rryi", "っりぃ");
    kanaMap->emplace("rryu", "っりゅ");
    kanaMap->emplace("rrye", "っりぇ");
    kanaMap->emplace("rryo", "っりょ");
    kanaMap->emplace("wa", "わ");
    kanaMap->emplace("wi", "うぃ");
    kanaMap->emplace("we", "うぇ");
    kanaMap->emplace("wo", "を");
    kanaMap->emplace("wha", "うぁ");
    kanaMap->emplace("whi", "うぃ");
    kanaMap->emplace("whu", "う");
    kanaMap->emplace("whe", "うぇ");
    kanaMap->emplace("who", "うぉ");
    kanaMap->emplace("wu", "う");
    kanaMap->emplace("wwa", "っわ");
    kanaMap->emplace("wwi", "っうぃ");
    kanaMap->emplace("wwe", "っうぇ");
    kanaMap->emplace("wwo", "っを");
    kanaMap->emplace("wwha", "っうぁ");
    kanaMap->emplace("wwhi", "っうぃ");
    kanaMap->emplace("wwhu", "っう");
    kanaMap->emplace("wwhe", "っうぇ");
    kanaMap->emplace("wwho", "っうぉ");
    kanaMap->emplace("wwu", "っう");
    kanaMap->emplace("ga", "が");
    kanaMap->emplace("gi", "ぎ");
    kanaMap->emplace("gu", "ぐ");
    kanaMap->emplace("ge", "げ");
    kanaMap->emplace("go", "ご");
    kanaMap->emplace("gya", "ぎゃ");
    kanaMap->emplace("gyi", "ぎぃ");
    kanaMap->emplace("gyu", "ぎゅ");
    kanaMap->emplace("gye", "ぎぇ");
    kanaMap->emplace("gyo", "ぎょ");
    kanaMap->emplace("gwa", "ぐぁ");
    kanaMap->emplace("gwi", "ぐぃ");
    kanaMap->emplace("gwu", "ぐぅ");
    kanaMap->emplace("gwe", "ぐぇ");
    kanaMap->emplace("gwo", "ぐぉ");
    kanaMap->emplace("gga", "っが");
    kanaMap->emplace("ggi", "っぎ");
    kanaMap->emplace("ggu", "っぐ");
    kanaMap->emplace("gge", "っげ");
    kanaMap->emplace("ggo", "っご");
    kanaMap->emplace("ggya", "っぎゃ");
    kanaMap->emplace("ggyi", "っぎぃ");
    kanaMap->emplace("ggyu", "っぎゅ");
    kanaMap->emplace("ggye", "っぎぇ");
    kanaMap->emplace("ggyo", "っぎょ");
    kanaMap->emplace("ggwa", "っぐぁ");
    kanaMap->emplace("ggwi", "っぐぃ");
    kanaMap->emplace("ggwu", "っぐぅ");
    kanaMap->emplace("ggwe", "っぐぇ");
    kanaMap->emplace("ggwo", "っぐぉ");
    kanaMap->emplace("za", "ざ");
    kanaMap->emplace("zi", "じ");
    kanaMap->emplace("zu", "ず");
    kanaMap->emplace("ze", "ぜ");
    kanaMap->emplace("zo", "ぞ");
    kanaMap->emplace("zya", "じゃ");
    kanaMap->emplace("zyi", "じぃ");
    kanaMap->emplace("zyu", "じゅ");
    kanaMap->emplace("zye", "じぇ");
    kanaMap->emplace("zyo", "じょ");
    kanaMap->emplace("zza", "っざ");
    kanaMap->emplace("zzi", "っじ");
    kanaMap->emplace("zzu", "っず");
    kanaMap->emplace("zze", "っぜ");
    kanaMap->emplace("zzo", "っぞ");
    kanaMap->emplace("zzya", "っじゃ");
    kanaMap->emplace("zzyi", "っじぃ");
    kanaMap->emplace("zzyu", "っじゅ");
    kanaMap->emplace("zzye", "っじぇ");
    kanaMap->emplace("zzyo", "っじょ");
    kanaMap->emplace("da", "だ");
    kanaMap->emplace("di", "ぢ");
    kanaMap->emplace("du", "づ");
    kanaMap->emplace("de", "で");
    kanaMap->emplace("do", "ど");
    kanaMap->emplace("dya", "ぢゃ");
    kanaMap->emplace("dyi", "ぢぃ");
    kanaMap->emplace("dyu", "ぢゅ");
    kanaMap->emplace("dye", "ぢぇ");
    kanaMap->emplace("dyo", "ぢょ");
    kanaMap->emplace("dha", "でゃ");
    kanaMap->emplace("dhi", "でぃ");
    kanaMap->emplace("dhu", "でゅ");
    kanaMap->emplace("dhe", "でぇ");
    kanaMap->emplace("dho", "でょ");
    kanaMap->emplace("dwa", "どぁ");
    kanaMap->emplace("dwi", "どぃ");
    kanaMap->emplace("dwu", "どぅ");
    kanaMap->emplace("dwe", "どぇ");
    kanaMap->emplace("dwo", "どぉ");
    kanaMap->emplace("dda", "っだ");
    kanaMap->emplace("ddi", "っぢ");
    kanaMap->emplace("ddu", "っづ");
    kanaMap->emplace("dde", "っで");
    kanaMap->emplace("ddo", "っど");
    kanaMap->emplace("ddya", "っぢゃ");
    kanaMap->emplace("ddyi", "っぢぃ");
    kanaMap->emplace("ddyu", "っぢゅ");
    kanaMap->emplace("ddye", "っぢぇ");
    kanaMap->emplace("ddyo", "っぢょ");
    kanaMap->emplace("ddha", "っでゃ");
    kanaMap->emplace("ddhi", "っでぃ");
    kanaMap->emplace("ddhu", "っでゅ");
    kanaMap->emplace("ddhe", "っでぇ");
    kanaMap->emplace("ddho", "っでょ");
    kanaMap->emplace("ddwa", "っどぁ");
    kanaMap->emplace("ddwi", "っどぃ");
    kanaMap->emplace("ddwu", "っどぅ");
    kanaMap->emplace("ddwe", "っどぇ");
    kanaMap->emplace("ddwo", "っどぉ");
    kanaMap->emplace("ba", "ば");
    kanaMap->emplace("bi", "び");
    kanaMap->emplace("bu", "ぶ");
    kanaMap->emplace("be", "べ");
    kanaMap->emplace("bo", "ぼ");
    kanaMap->emplace("bya", "びゃ");
    kanaMap->emplace("byi", "びぃ");
    kanaMap->emplace("byu", "びゅ");
    kanaMap->emplace("bye", "びぇ");
    kanaMap->emplace("byo", "びょ");
    kanaMap->emplace("bba", "っば");
    kanaMap->emplace("bbi", "っび");
    kanaMap->emplace("bbu", "っぶ");
    kanaMap->emplace("bbe", "っべ");
    kanaMap->emplace("bbo", "っぼ");
    kanaMap->emplace("bbya", "っびゃ");
    kanaMap->emplace("bbyi", "っびぃ");
    kanaMap->emplace("bbyu", "っびゅ");
    kanaMap->emplace("bbye", "っびぇ");
    kanaMap->emplace("bbyo", "っびょ");
    kanaMap->emplace("pa", "ぱ");
    kanaMap->emplace("pi", "ぴ");
    kanaMap->emplace("pu", "ぷ");
    kanaMap->emplace("pe", "ぺ");
    kanaMap->emplace("po", "ぽ");
    kanaMap->emplace("pya", "ぴゃ");
    kanaMap->emplace("pyi", "ぴぃ");
    kanaMap->emplace("pyu", "ぴゅ");
    kanaMap->emplace("pye", "ぴぇ");
    kanaMap->emplace("pyo", "ぴょ");
    kanaMap->emplace("ppa", "っぱ");
    kanaMap->emplace("ppi", "っぴ");
    kanaMap->emplace("ppu", "っぷ");
    kanaMap->emplace("ppe", "っぺ");
    kanaMap->emplace("ppo", "っぽ");
    kanaMap->emplace("ppya", "っぴゃ");
    kanaMap->emplace("ppyi", "っぴぃ");
    kanaMap->emplace("ppyu", "っぴゅ");
    kanaMap->emplace("ppye", "っぴぇ");
    kanaMap->emplace("ppyo", "っぴょ");
    kanaMap->emplace("va", "?ぁ");
    kanaMap->emplace("vi", "?ぃ");
    kanaMap->emplace("vu", "?");
    kanaMap->emplace("ve", "?ぇ");
    kanaMap->emplace("vo", "?ぉ");
    kanaMap->emplace("vya", "?ゃ");
    kanaMap->emplace("vyi", "?ぃ");
    kanaMap->emplace("vyu", "?ゅ");
    kanaMap->emplace("vye", "?ぇ");
    kanaMap->emplace("vyo", "?ょ");
    kanaMap->emplace("vva", "っ?ぁ");
    kanaMap->emplace("vvi", "っ?ぃ");
    kanaMap->emplace("vvu", "っ?");
    kanaMap->emplace("vve", "っ?ぇ");
    kanaMap->emplace("vvo", "っ?ぉ");
    kanaMap->emplace("vvya", "っ?ゃ");
    kanaMap->emplace("vvyi", "っ?ぃ");
    kanaMap->emplace("vvyu", "っ?ゅ");
    kanaMap->emplace("vvye", "っ?ぇ");
    kanaMap->emplace("vvyo", "っ?ょ");
    kanaMap->emplace("qya", "くゃ");
    kanaMap->emplace("qyi", "くぃ");
    kanaMap->emplace("qyu", "くゅ");
    kanaMap->emplace("qye", "くぇ");
    kanaMap->emplace("qyo", "くょ");
    kanaMap->emplace("qwa", "くぁ");
    kanaMap->emplace("qwi", "くぃ");
    kanaMap->emplace("qwu", "くぅ");
    kanaMap->emplace("qwe", "くぇ");
    kanaMap->emplace("qwo", "くぉ");
    kanaMap->emplace("qa", "くぁ");
    kanaMap->emplace("qi", "くぃ");
    kanaMap->emplace("qu", "くぅ");
    kanaMap->emplace("qe", "くぇ");
    kanaMap->emplace("qo", "くぉ");
    kanaMap->emplace("qqya", "っくゃ");
    kanaMap->emplace("qqyi", "っくぃ");
    kanaMap->emplace("qqyu", "っくゅ");
    kanaMap->emplace("qqye", "っくぇ");
    kanaMap->emplace("qqyo", "っくょ");
    kanaMap->emplace("qqwa", "っくぁ");
    kanaMap->emplace("qqwi", "っくぃ");
    kanaMap->emplace("qqwu", "っくぅ");
    kanaMap->emplace("qqwe", "っくぇ");
    kanaMap->emplace("qqwo", "っくぉ");
    kanaMap->emplace("qqa", "っくぁ");
    kanaMap->emplace("qqi", "っくぃ");
    kanaMap->emplace("qqu", "っくぅ");
    kanaMap->emplace("qqe", "っくぇ");
    kanaMap->emplace("qqo", "っくぉ");
    kanaMap->emplace("fya", "ふゃ");
    kanaMap->emplace("fyi", "ふぃ");
    kanaMap->emplace("fyu", "ふゅ");
    kanaMap->emplace("fye", "ふぇ");
    kanaMap->emplace("fyo", "ふょ");
    kanaMap->emplace("fwa", "ふぁ");
    kanaMap->emplace("fwi", "ふぃ");
    kanaMap->emplace("fwu", "ふぅ");
    kanaMap->emplace("fwe", "ふぇ");
    kanaMap->emplace("fwo", "ふぉ");
    kanaMap->emplace("fa", "ふぁ");
    kanaMap->emplace("fi", "ふぃ");
    kanaMap->emplace("fu", "ふ");
    kanaMap->emplace("fe", "ふぇ");
    kanaMap->emplace("fo", "ふぉ");
    kanaMap->emplace("ffya", "っふゃ");
    kanaMap->emplace("ffyi", "っふぃ");
    kanaMap->emplace("ffyu", "っふゅ");
    kanaMap->emplace("ffye", "っふぇ");
    kanaMap->emplace("ffyo", "っふょ");
    kanaMap->emplace("ffwa", "っふぁ");
    kanaMap->emplace("ffwi", "っふぃ");
    kanaMap->emplace("ffwu", "っふぅ");
    kanaMap->emplace("ffwe", "っふぇ");
    kanaMap->emplace("ffwo", "っふぉ");
    kanaMap->emplace("ffa", "っふぁ");
    kanaMap->emplace("ffi", "っふぃ");
    kanaMap->emplace("ffu", "っふ");
    kanaMap->emplace("ffe", "っふぇ");
    kanaMap->emplace("ffo", "っふぉ");
    kanaMap->emplace(".", "。");
    kanaMap->emplace(",", "、");
    kanaMap->emplace(":", "：");
    kanaMap->emplace("/", "?");
    kanaMap->emplace("!", "！");
    kanaMap->emplace("?", "？");
    kanaMap->emplace("~", "?");
    kanaMap->emplace("-", "ー");
    kanaMap->emplace("‘", "「");
    kanaMap->emplace("’", "」");
    kanaMap->emplace("“", "『");
    kanaMap->emplace("”", "』");
    kanaMap->emplace("[", "［");
    kanaMap->emplace("]", "］");
    kanaMap->emplace("(", "（");
    kanaMap->emplace(")", "）");
    kanaMap->emplace("{", "｛");
    kanaMap->emplace("}", "｝");
    kanaMap->emplace("xn", "ん");
    kanaMap->emplace("xtu", "っ");
    kanaMap->emplace("xtsu", "っ");
    kanaMap->emplace("xwa", "ゎ");
    kanaMap->emplace("xka", "ヵ");
    kanaMap->emplace("xke", "ヶ");
    kanaMap->emplace("xca", "ヵ");
    kanaMap->emplace("xce", "ヶ");
    kanaMap->emplace("xa", "ぁ");
    kanaMap->emplace("xi", "ぃ");
    kanaMap->emplace("xu", "ぅ");
    kanaMap->emplace("xe", "ぇ");
    kanaMap->emplace("xo", "ぉ");
    kanaMap->emplace("xya", "ゃ");
    kanaMap->emplace("xyi", "ぃ");
    kanaMap->emplace("xyu", "ゅ");
    kanaMap->emplace("xye", "ぇ");
    kanaMap->emplace("xyo", "ょ");
    kanaMap->emplace("ca", "か");
    kanaMap->emplace("ci", "き");
    kanaMap->emplace("cu", "く");
    kanaMap->emplace("ce", "け");
    kanaMap->emplace("co", "こ");
    kanaMap->emplace("cya", "ちゃ");
    kanaMap->emplace("cyi", "ちぃ");
    kanaMap->emplace("cyu", "ちゅ");
    kanaMap->emplace("cye", "ちぇ");
    kanaMap->emplace("cyo", "ちょ");
    kanaMap->emplace("cha", "ちゃ");
    kanaMap->emplace("chi", "ち");
    kanaMap->emplace("chu", "ちゅ");
    kanaMap->emplace("che", "ちぇ");
    kanaMap->emplace("cho", "ちょ");
    kanaMap->emplace("chya", "ちゃ");
    kanaMap->emplace("chyi", "ちぃ");
    kanaMap->emplace("chyu", "ちゅ");
    kanaMap->emplace("chye", "ちぇ");
    kanaMap->emplace("chyo", "ちょ");
    kanaMap->emplace("cca", "っか");
    kanaMap->emplace("cci", "っき");
    kanaMap->emplace("ccu", "っく");
    kanaMap->emplace("cce", "っけ");
    kanaMap->emplace("cco", "っこ");
    kanaMap->emplace("ccya", "っちゃ");
    kanaMap->emplace("ccyi", "っちぃ");
    kanaMap->emplace("ccyu", "っちゅ");
    kanaMap->emplace("ccye", "っちぇ");
    kanaMap->emplace("ccyo", "っちょ");
    kanaMap->emplace("ccha", "っちゃ");
    kanaMap->emplace("cchi", "っち");
    kanaMap->emplace("cchu", "っちゅ");
    kanaMap->emplace("cche", "っちぇ");
    kanaMap->emplace("ccho", "っちょ");
    kanaMap->emplace("cchya", "っちゃ");
    kanaMap->emplace("cchyi", "っちぃ");
    kanaMap->emplace("cchyu", "っちゅ");
    kanaMap->emplace("cchye", "っちぇ");
    kanaMap->emplace("cchyo", "っちょ");
    kanaMap->emplace("ja", "じゃ");
    kanaMap->emplace("ji", "じ");
    kanaMap->emplace("ju", "じゅ");
    kanaMap->emplace("je", "じぇ");
    kanaMap->emplace("jo", "じょ");
    kanaMap->emplace("jya", "じゃ");
    kanaMap->emplace("jyi", "じぃ");
    kanaMap->emplace("jyu", "じゅ");
    kanaMap->emplace("jye", "じぇ");
    kanaMap->emplace("jyo", "じょ");
    kanaMap->emplace("jja", "っじゃ");
    kanaMap->emplace("jji", "っじ");
    kanaMap->emplace("jju", "っじゅ");
    kanaMap->emplace("jje", "っじぇ");
    kanaMap->emplace("jjo", "っじょ");
    kanaMap->emplace("jjya", "っじゃ");
    kanaMap->emplace("jjyi", "っじぃ");
    kanaMap->emplace("jjyu", "っじゅ");
    kanaMap->emplace("jjye", "っじぇ");
    kanaMap->emplace("jjyo", "っじょ");
    kanaMap->emplace("ltu", "っ");
    kanaMap->emplace("ltsu", "っ");
    kanaMap->emplace("lwa", "ゎ");
    kanaMap->emplace("lka", "ヵ");
    kanaMap->emplace("lke", "ヶ");
    kanaMap->emplace("lca", "ヵ");
    kanaMap->emplace("lce", "ヶ");
    kanaMap->emplace("la", "ぁ");
    kanaMap->emplace("li", "ぃ");
    kanaMap->emplace("lu", "ぅ");
    kanaMap->emplace("le", "ぇ");
    kanaMap->emplace("lo", "ぉ");
    kanaMap->emplace("lya", "ゃ");
    kanaMap->emplace("lyi", "ぃ");
    kanaMap->emplace("lyu", "ゅ");
    kanaMap->emplace("lye", "ぇ");
    kanaMap->emplace("lyo", "ょ");
}

// std::string 转换为 UTF-8 编码
std::string string_To_UTF8(const std::string& str)
{
    int nwLen = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, NULL, 0);

    wchar_t* pwBuf = new wchar_t[nwLen + 1];//一定要加1，不然会出现尾巴 
    ZeroMemory(pwBuf, nwLen * 2 + 2);

    MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.length(), pwBuf, nwLen);

    int nLen = WideCharToMultiByte(CP_UTF8, 0, pwBuf, -1, NULL, NULL, NULL, NULL);

    char* pBuf = new char[nLen + 1];
    ZeroMemory(pBuf, nLen + 1);

    WideCharToMultiByte(CP_UTF8, 0, pwBuf, nwLen, pBuf, nLen, NULL, NULL);

    std::string retStr(pBuf);

    delete[]pwBuf;
    delete[]pBuf;

    pwBuf = NULL;
    pBuf = NULL;

    return retStr;
}

string romajiToKana(string romaji) {
    string res,ori;
    ori = romaji;
    transform(romaji.begin(), romaji.end(), romaji.begin(), tolower);
    while (!romaji.empty())
    {
        int len = romaji.length();
        for (size_t i = 0; i < len; i++)
        {
            string subromaji = romaji.substr(0, len - i);
            auto it = kanaMap->find(subromaji);
            if (it != kanaMap->end()) {
                res += it->second;
                romaji = romaji.substr(len - i);
                break;
            }
            else if (len - i == 1) {
                return ori;
            }
        }
    }

    return res;
}

void FindElements_Impl(vector<tinyxml2::XMLElement*> & container, tinyxml2::XMLElement* parentElement, const char* name) {
    if (strcmp(parentElement->Name(),name)==0) {
        container.push_back(parentElement);
    }
    tinyxml2::XMLElement* child = parentElement->FirstChildElement();
    while (child)
    {
        FindElements_Impl(container, child, name);
        child = child->NextSiblingElement();
    }
}

vector<tinyxml2::XMLElement*> FindElements(tinyxml2::XMLElement *parentElement ,const char * name) {
    vector<tinyxml2::XMLElement*> elements;
    FindElements_Impl(elements, parentElement, name);
    return elements;
}

int main(int argc, char* argv[])
{
    map_init(); 
    tinyxml2::XMLDocument doc;
    string input_file_path;
    if (argc >= 2) {
        input_file_path = argv[1];
    }
    else
    {
        cout << "参数中没有路径，请输入文件（musicxml）" << endl;
        cin >> input_file_path;
    }

    if (doc.LoadFile(input_file_path.c_str())) {
        doc.PrintError();
        return -1;
    }

    for (tinyxml2::XMLElement* element : FindElements(doc.FirstChildElement(),"lyric")) {
        tinyxml2::XMLElement* textElement = element->FirstChildElement("text");
        const char* romaji = textElement->FirstChild()->Value();
        string kana = romajiToKana(romaji);
        cout << romaji << "->" << kana << endl;
        textElement->SetText(string_To_UTF8(kana).c_str());
    }
    string out_file_path = input_file_path.substr(0,input_file_path.find_last_of('.'))+"_k.musicxml";
    FILE* output;
    
    if (fopen_s(&output, out_file_path.c_str(), "w+")) {
        cout << "fail open output file" << endl;
        doc.Print();
        return -1;
    }
        
    tinyxml2::XMLPrinter* printer = new tinyxml2::XMLPrinter(output);
    doc.Print(printer);
    delete printer;
    if (output)
        fclose(output);
     
    return 0;
}
