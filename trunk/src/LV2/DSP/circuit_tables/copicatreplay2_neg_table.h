
// copicatreplay2_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -6.000000
 // --table_div  9.124721
 // --table_op  2.000000

struct tablecopicatreplay2_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tablecopicatreplay2_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tablecopicatreplay2_neg&() const { return *(tablecopicatreplay2_neg*)this; }
};

 static tablecopicatreplay2_neg_imp<2048> copicatreplay2_neg_table __rt_data = {
	0,0.714937,682.333,2048, {
	0.000000000000,0.000757713156,0.001514764563,0.002271154801,0.003026884455,
	0.003781954107,0.004536364340,0.005290115736,0.006043208876,0.006795644343,
	0.007547422714,0.008298544572,0.009049010494,0.009798821060,0.010547976847,
	0.011296478434,0.012044326397,0.012791521312,0.013538063756,0.014283954304,
	0.015029193530,0.015773782010,0.016517720315,0.017261009021,0.018003648699,
	0.018745639921,0.019486983259,0.020227679283,0.020967728565,0.021707131673,
	0.022445889178,0.023184001648,0.023921469650,0.024658293754,0.025394474525,
	0.026130012530,0.026864908336,0.027599162508,0.028332775611,0.029065748208,
	0.029798080865,0.030529774143,0.031260828607,0.031991244818,0.032721023338,
	0.033450164728,0.034178669548,0.034906538359,0.035633771720,0.036360370190,
	0.037086334327,0.037811664690,0.038536361836,0.039260426321,0.039983858703,
	0.040706659536,0.041428829376,0.042150368777,0.042871278294,0.043591558481,
	0.044311209890,0.045030233074,0.045748628585,0.046466396975,0.047183538794,
	0.047900054594,0.048615944923,0.049331210332,0.050045851369,0.050759868583,
	0.051473262521,0.052186033730,0.052898182758,0.053609710151,0.054320616454,
	0.055030902213,0.055740567972,0.056449614276,0.057158041667,0.057865850690,
	0.058573041887,0.059279615799,0.059985572969,0.060690913937,0.061395639244,
	0.062099749431,0.062803245035,0.063506126597,0.064208394655,0.064910049747,
	0.065611092410,0.066311523181,0.067011342597,0.067710551193,0.068409149504,
	0.069107138067,0.069804517414,0.070501288080,0.071197450599,0.071893005502,
	0.072587953322,0.073282294592,0.073976029841,0.074669159602,0.075361684404,
	0.076053604778,0.076744921251,0.077435634354,0.078125744614,0.078815252560,
	0.079504158717,0.080192463614,0.080880167776,0.081567271729,0.082253775999,
	0.082939681109,0.083624987585,0.084309695949,0.084993806726,0.085677320438,
	0.086360237607,0.087042558754,0.087724284402,0.088405415071,0.089085951280,
	0.089765893551,0.090445242401,0.091123998350,0.091802161917,0.092479733618,
	0.093156713971,0.093833103493,0.094508902700,0.095184112108,0.095858732232,
	0.096532763587,0.097206206687,0.097879062047,0.098551330179,0.099223011596,
	0.099894106812,0.100564616336,0.101234540682,0.101903880359,0.102572635879,
	0.103240807750,0.103908396483,0.104575402587,0.105241826570,0.105907668940,
	0.106572930204,0.107237610870,0.107901711444,0.108565232431,0.109228174339,
	0.109890537671,0.110552322933,0.111213530628,0.111874161260,0.112534215332,
	0.113193693348,0.113852595808,0.114510923216,0.115168676072,0.115825854877,
	0.116482460131,0.117138492334,0.117793951985,0.118448839584,0.119103155629,
	0.119756900617,0.120410075047,0.121062679414,0.121714714216,0.122366179949,
	0.123017077108,0.123667406189,0.124317167686,0.124966362092,0.125614989903,
	0.126263051610,0.126910547708,0.127557478687,0.128203845041,0.128849647260,
	0.129494885835,0.130139561256,0.130783674014,0.131427224598,0.132070213498,
	0.132712641201,0.133354508195,0.133995814969,0.134636562010,0.135276749804,
	0.135916378837,0.136555449596,0.137193962565,0.137831918230,0.138469317075,
	0.139106159584,0.139742446240,0.140378177526,0.141013353925,0.141647975920,
	0.142282043991,0.142915558621,0.143548520289,0.144180929476,0.144812786662,
	0.145444092326,0.146074846947,0.146705051004,0.147334704975,0.147963809337,
	0.148592364567,0.149220371143,0.149847829539,0.150474740233,0.151101103699,
	0.151726920413,0.152352190848,0.152976915478,0.153601094778,0.154224729220,
	0.154847819277,0.155470365422,0.156092368124,0.156713827857,0.157334745091,
	0.157955120296,0.158574953943,0.159194246500,0.159812998437,0.160431210222,
	0.161048882325,0.161666015211,0.162282609349,0.162898665206,0.163514183248,
	0.164129163941,0.164743607750,0.165357515141,0.165970886578,0.166583722525,
	0.167196023447,0.167807789806,0.168419022065,0.169029720688,0.169639886136,
	0.170249518870,0.170858619351,0.171467188042,0.172075225401,0.172682731888,
	0.173289707964,0.173896154086,0.174502070714,0.175107458306,0.175712317319,
	0.176316648211,0.176920451438,0.177523727457,0.178126476724,0.178728699694,
	0.179330396823,0.179931568565,0.180532215374,0.181132337704,0.181731936010,
	0.182331010742,0.182929562355,0.183527591300,0.184125098029,0.184722082994,
	0.185318546644,0.185914489431,0.186509911804,0.187104814213,0.187699197108,
	0.188293060936,0.188886406147,0.189479233187,0.190071542506,0.190663334549,
	0.191254609763,0.191845368594,0.192435611489,0.193025338892,0.193614551249,
	0.194203249003,0.194791432600,0.195379102483,0.195966259094,0.196552902878,
	0.197139034276,0.197724653730,0.198309761682,0.198894358574,0.199478444845,
	0.200062020937,0.200645087289,0.201227644340,0.201809692531,0.202391232299,
	0.202972264084,0.203552788322,0.204132805451,0.204712315909,0.205291320131,
	0.205869818555,0.206447811617,0.207025299750,0.207602283391,0.208178762975,
	0.208754738934,0.209330211704,0.209905181717,0.210479649407,0.211053615206,
	0.211627079546,0.212200042860,0.212772505577,0.213344468130,0.213915930949,
	0.214486894464,0.215057359105,0.215627325301,0.216196793481,0.216765764073,
	0.217334237507,0.217902214208,0.218469694606,0.219036679127,0.219603168196,
	0.220169162242,0.220734661688,0.221299666961,0.221864178485,0.222428196686,
	0.222991721986,0.223554754810,0.224117295582,0.224679344724,0.225240902659,
	0.225801969808,0.226362546594,0.226922633439,0.227482230762,0.228041338985,
	0.228599958528,0.229158089811,0.229715733252,0.230272889272,0.230829558288,
	0.231385740719,0.231941436983,0.232496647498,0.233051372679,0.233605612945,
	0.234159368710,0.234712640392,0.235265428406,0.235817733166,0.236369555088,
	0.236920894585,0.237471752073,0.238022127963,0.238572022671,0.239121436607,
	0.239670370186,0.240218823818,0.240766797915,0.241314292889,0.241861309151,
	0.242407847111,0.242953907179,0.243499489765,0.244044595278,0.244589224127,
	0.245133376721,0.245677053468,0.246220254776,0.246762981052,0.247305232703,
	0.247847010137,0.248388313758,0.248929143974,0.249469501189,0.250009385809,
	0.250548798239,0.251087738883,0.251626208146,0.252164206430,0.252701734139,
	0.253238791676,0.253775379443,0.254311497843,0.254847147278,0.255382328148,
	0.255917040855,0.256451285800,0.256985063383,0.257518374003,0.258051218061,
	0.258583595955,0.259115508084,0.259646954847,0.260177936642,0.260708453866,
	0.261238506917,0.261768096192,0.262297222087,0.262825884998,0.263354085321,
	0.263881823453,0.264409099787,0.264935914719,0.265462268643,0.265988161953,
	0.266513595042,0.267038568305,0.267563082133,0.268087136920,0.268610733057,
	0.269133870937,0.269656550950,0.270178773488,0.270700538942,0.271221847702,
	0.271742700158,0.272263096699,0.272783037716,0.273302523596,0.273821554728,
	0.274340131501,0.274858254302,0.275375923519,0.275893139540,0.276409902749,
	0.276926213535,0.277442072283,0.277957479379,0.278472435208,0.278986940155,
	0.279500994605,0.280014598941,0.280527753549,0.281040458810,0.281552715110,
	0.282064522829,0.282575882352,0.283086794059,0.283597258334,0.284107275556,
	0.284616846107,0.285125970369,0.285634648720,0.286142881542,0.286650669214,
	0.287158012114,0.287664910623,0.288171365119,0.288677375979,0.289182943583,
	0.289688068306,0.290192750527,0.290696990623,0.291200788970,0.291704145943,
	0.292207061919,0.292709537274,0.293211572382,0.293713167618,0.294214323357,
	0.294715039972,0.295215317838,0.295715157327,0.296214558813,0.296713522668,
	0.297212049265,0.297710138976,0.298207792172,0.298705009225,0.299201790505,
	0.299698136384,0.300194047231,0.300689523417,0.301184565311,0.301679173282,
	0.302173347699,0.302667088931,0.303160397346,0.303653273312,0.304145717197,
	0.304637729367,0.305129310189,0.305620460031,0.306111179258,0.306601468236,
	0.307091327330,0.307580756907,0.308069757330,0.308558328964,0.309046472174,
	0.309534187322,0.310021474774,0.310508334891,0.310994768037,0.311480774574,
	0.311966354864,0.312451509270,0.312936238152,0.313420541872,0.313904420790,
	0.314387875268,0.314870905665,0.315353512340,0.315835695655,0.316317455967,
	0.316798793636,0.317279709020,0.317760202478,0.318240274366,0.318719925043,
	0.319199154866,0.319677964192,0.320156353377,0.320634322777,0.321111872749,
	0.321589003647,0.322065715828,0.322542009645,0.323017885454,0.323493343609,
	0.323968384464,0.324443008372,0.324917215686,0.325391006760,0.325864381945,
	0.326337341596,0.326809886062,0.327282015697,0.327753730850,0.328225031875,
	0.328695919120,0.329166392936,0.329636453674,0.330106101682,0.330575337312,
	0.331044160910,0.331512572827,0.331980573411,0.332448163009,0.332915341970,
	0.333382110641,0.333848469369,0.334314418501,0.334779958384,0.335245089363,
	0.335709811785,0.336174125995,0.336638032338,0.337101531160,0.337564622804,
	0.338027307616,0.338489585939,0.338951458116,0.339412924492,0.339873985409,
	0.340334641209,0.340794892236,0.341254738832,0.341714181337,0.342173220094,
	0.342631855444,0.343090087727,0.343547917284,0.344005344456,0.344462369582,
	0.344918993001,0.345375215054,0.345831036078,0.346286456414,0.346741476398,
	0.347196096369,0.347650316665,0.348104137623,0.348557559580,0.349010582873,
	0.349463207839,0.349915434814,0.350367264133,0.350818696132,0.351269731146,
	0.351720369511,0.352170611561,0.352620457630,0.353069908053,0.353518963162,
	0.353967623293,0.354415888776,0.354863759946,0.355311237135,0.355758320675,
	0.356205010898,0.356651308136,0.357097212719,0.357542724980,0.357987845248,
	0.358432573854,0.358876911127,0.359320857399,0.359764412998,0.360207578254,
	0.360650353494,0.361092739049,0.361534735246,0.361976342413,0.362417560878,
	0.362858390968,0.363298833010,0.363738887331,0.364178554258,0.364617834117,
	0.365056727233,0.365495233933,0.365933354541,0.366371089382,0.366808438782,
	0.367245403064,0.367681982553,0.368118177572,0.368553988446,0.368989415496,
	0.369424459047,0.369859119421,0.370293396939,0.370727291925,0.371160804700,
	0.371593935585,0.372026684902,0.372459052971,0.372891040113,0.373322646648,
	0.373753872897,0.374184719178,0.374615185812,0.375045273117,0.375474981413,
	0.375904311017,0.376333262249,0.376761835425,0.377190030864,0.377617848884,
	0.378045289800,0.378472353931,0.378899041592,0.379325353100,0.379751288770,
	0.380176848919,0.380602033861,0.381026843912,0.381451279387,0.381875340600,
	0.382299027865,0.382722341496,0.383145281807,0.383567849111,0.383990043721,
	0.384411865951,0.384833316112,0.385254394516,0.385675101477,0.386095437305,
	0.386515402311,0.386934996808,0.387354221105,0.387773075513,0.388191560343,
	0.388609675904,0.389027422506,0.389444800458,0.389861810070,0.390278451651,
	0.390694725508,0.391110631950,0.391526171286,0.391941343823,0.392356149868,
	0.392770589728,0.393184663711,0.393598372123,0.394011715270,0.394424693459,
	0.394837306994,0.395249556183,0.395661441329,0.396072962737,0.396484120714,
	0.396894915561,0.397305347585,0.397715417089,0.398125124376,0.398534469749,
	0.398943453512,0.399352075967,0.399760337417,0.400168238164,0.400575778510,
	0.400982958756,0.401389779204,0.401796240154,0.402202341909,0.402608084768,
	0.403013469031,0.403418494999,0.403823162971,0.404227473246,0.404631426125,
	0.405035021905,0.405438260886,0.405841143366,0.406243669642,0.406645840014,
	0.407047654777,0.407449114230,0.407850218670,0.408250968393,0.408651363696,
	0.409051404875,0.409451092227,0.409850426045,0.410249406627,0.410648034267,
	0.411046309261,0.411444231902,0.411841802485,0.412239021304,0.412635888654,
	0.413032404827,0.413428570117,0.413824384816,0.414219849219,0.414614963616,
	0.415009728301,0.415404143565,0.415798209700,0.416191926997,0.416585295748,
	0.416978316244,0.417370988775,0.417763313631,0.418155291103,0.418546921480,
	0.418938205053,0.419329142110,0.419719732941,0.420109977834,0.420499877078,
	0.420889430961,0.421278639771,0.421667503797,0.422056023325,0.422444198642,
	0.422832030037,0.423219517795,0.423606662203,0.423993463547,0.424379922114,
	0.424766038188,0.425151812056,0.425537244002,0.425922334312,0.426307083269,
	0.426691491160,0.427075558267,0.427459284875,0.427842671267,0.428225717726,
	0.428608424537,0.428990791981,0.429372820341,0.429754509901,0.430135860941,
	0.430516873743,0.430897548590,0.431277885763,0.431657885543,0.432037548210,
	0.432416874045,0.432795863329,0.433174516342,0.433552833363,0.433930814673,
	0.434308460549,0.434685771273,0.435062747122,0.435439388374,0.435815695310,
	0.436191668205,0.436567307339,0.436942612989,0.437317585431,0.437692224944,
	0.438066531805,0.438440506288,0.438814148672,0.439187459232,0.439560438245,
	0.439933085984,0.440305402727,0.440677388747,0.441049044321,0.441420369722,
	0.441791365225,0.442162031104,0.442532367633,0.442902375085,0.443272053734,
	0.443641403853,0.444010425715,0.444379119593,0.444747485758,0.445115524483,
	0.445483236041,0.445850620702,0.446217678738,0.446584410421,0.446950816021,
	0.447316895808,0.447682650054,0.448048079029,0.448413183002,0.448777962243,
	0.449142417022,0.449506547608,0.449870354270,0.450233837276,0.450596996896,
	0.450959833397,0.451322347048,0.451684538116,0.452046406870,0.452407953575,
	0.452769178499,0.453130081910,0.453490664073,0.453850925256,0.454210865724,
	0.454570485742,0.454929785578,0.455288765496,0.455647425760,0.456005766638,
	0.456363788392,0.456721491287,0.457078875588,0.457435941559,0.457792689463,
	0.458149119564,0.458505232125,0.458861027409,0.459216505679,0.459571667197,
	0.459926512227,0.460281041029,0.460635253867,0.460989151000,0.461342732692,
	0.461695999203,0.462048950793,0.462401587725,0.462753910257,0.463105918651,
	0.463457613166,0.463808994063,0.464160061600,0.464510816037,0.464861257633,
	0.465211386647,0.465561203337,0.465910707963,0.466259900781,0.466608782050,
	0.466957352028,0.467305610972,0.467653559139,0.468001196787,0.468348524172,
	0.468695541550,0.469042249178,0.469388647313,0.469734736209,0.470080516122,
	0.470425987309,0.470771150023,0.471116004521,0.471460551056,0.471804789884,
	0.472148721258,0.472492345432,0.472835662661,0.473178673197,0.473521377295,
	0.473863775207,0.474205867187,0.474547653486,0.474889134358,0.475230310054,
	0.475571180827,0.475911746928,0.476252008610,0.476591966122,0.476931619717,
	0.477270969645,0.477610016158,0.477948759504,0.478287199935,0.478625337701,
	0.478963173051,0.479300706235,0.479637937502,0.479974867101,0.480311495282,
	0.480647822292,0.480983848381,0.481319573796,0.481654998786,0.481990123598,
	0.482324948479,0.482659473678,0.482993699441,0.483327626016,0.483661253648,
	0.483994582584,0.484327613071,0.484660345354,0.484992779680,0.485324916294,
	0.485656755441,0.485988297366,0.486319542315,0.486650490532,0.486981142261,
	0.487311497747,0.487641557234,0.487971320965,0.488300789185,0.488629962137,
	0.488958840064,0.489287423208,0.489615711814,0.489943706122,0.490271406376,
	0.490598812817,0.490925925688,0.491252745231,0.491579271686,0.491905505295,
	0.492231446299,0.492557094938,0.492882451455,0.493207516088,0.493532289077,
	0.493856770664,0.494180961088,0.494504860588,0.494828469404,0.495151787774,
	0.495474815938,0.495797554134,0.496120002602,0.496442161578,0.496764031301,
	0.497085612010,0.497406903941,0.497727907332,0.498048622421,0.498369049444,
	0.498689188638,0.499009040240,0.499328604486,0.499647881612,0.499966871854,
	0.500285575449,0.500603992631,0.500922123636,0.501239968699,0.501557528055,
	0.501874801938,0.502191790584,0.502508494226,0.502824913099,0.503141047436,
	0.503456897471,0.503772463438,0.504087745570,0.504402744099,0.504717459260,
	0.505031891284,0.505346040403,0.505659906851,0.505973490858,0.506286792658,
	0.506599812481,0.506912550559,0.507225007124,0.507537182405,0.507849076634,
	0.508160690042,0.508472022859,0.508783075315,0.509093847640,0.509404340064,
	0.509714552817,0.510024486127,0.510334140225,0.510643515338,0.510952611696,
	0.511261429528,0.511569969061,0.511878230524,0.512186214145,0.512493920151,
	0.512801348771,0.513108500231,0.513415374759,0.513721972581,0.514028293925,
	0.514334339017,0.514640108083,0.514945601350,0.515250819043,0.515555761388,
	0.515860428611,0.516164820937,0.516468938591,0.516772781798,0.517076350784,
	0.517379645772,0.517682666986,0.517985414652,0.518287888993,0.518590090233,
	0.518892018596,0.519193674304,0.519495057581,0.519796168650,0.520097007734,
	0.520397575055,0.520697870836,0.520997895299,0.521297648666,0.521597131159,
	0.521896342999,0.522195284408,0.522493955607,0.522792356817,0.523090488259,
	0.523388350154,0.523685942722,0.523983266183,0.524280320757,0.524577106664,
	0.524873624125,0.525169873358,0.525465854582,0.525761568017,0.526057013882,
	0.526352192395,0.526647103775,0.526941748241,0.527236126009,0.527530237299,
	0.527824082328,0.528117661313,0.528410974473,0.528704022024,0.528996804182,
	0.529289321166,0.529581573191,0.529873560474,0.530165283232,0.530456741679,
	0.530747936032,0.531038866508,0.531329533320,0.531619936685,0.531910076817,
	0.532199953932,0.532489568244,0.532778919967,0.533068009316,0.533356836506,
	0.533645401750,0.533933705261,0.534221747254,0.534509527942,0.534797047537,
	0.535084306254,0.535371304305,0.535658041902,0.535944519258,0.536230736586,
	0.536516694097,0.536802392003,0.537087830516,0.537373009847,0.537657930208,
	0.537942591811,0.538226994865,0.538511139582,0.538795026172,0.539078654846,
	0.539362025814,0.539645139286,0.539927995472,0.540210594582,0.540492936825,
	0.540775022410,0.541056851547,0.541338424444,0.541619741310,0.541900802355,
	0.542181607785,0.542462157810,0.542742452637,0.543022492475,0.543302277531,
	0.543581808012,0.543861084127,0.544140106081,0.544418874082,0.544697388336,
	0.544975649051,0.545253656432,0.545531410687,0.545808912020,0.546086160638,
	0.546363156746,0.546639900551,0.546916392256,0.547192632068,0.547468620191,
	0.547744356831,0.548019842191,0.548295076476,0.548570059891,0.548844792639,
	0.549119274925,0.549393506951,0.549667488923,0.549941221042,0.550214703512,
	0.550487936537,0.550760920318,0.551033655060,0.551306140963,0.551578378230,
	0.551850367064,0.552122107667,0.552393600239,0.552664844984,0.552935842102,
	0.553206591794,0.553477094261,0.553747349705,0.554017358326,0.554287120324,
	0.554556635901,0.554825905255,0.555094928588,0.555363706099,0.555632237987,
	0.555900524453,0.556168565695,0.556436361912,0.556703913304,0.556971220069,
	0.557238282407,0.557505100514,0.557771674591,0.558038004834,0.558304091441,
	0.558569934612,0.558835534542,0.559100891429,0.559366005471,0.559630876865,
	0.559895505808,0.560159892496,0.560424037125,0.560687939893,0.560951600996,
	0.561215020628,0.561478198988,0.561741136269,0.562003832668,0.562266288380,
	0.562528503599,0.562790478522,0.563052213343,0.563313708257,0.563574963458,
	0.563835979140,0.564096755498,0.564357292725,0.564617591016,0.564877650565,
	0.565137471563,0.565397054206,0.565656398686,0.565915505196,0.566174373929,
	0.566433005077,0.566691398833,0.566949555390,0.567207474939,0.567465157673,
	0.567722603783,0.567979813461,0.568236786899,0.568493524287,0.568750025817,
	0.569006291680,0.569262322067,0.569518117168,0.569773677174,0.570029002275,
	0.570284092661,0.570538948523,0.570793570050,0.571047957431,0.571302110857,
	0.571556030517,0.571809716599,0.572063169293,0.572316388788,0.572569375272,
	0.572822128933,0.573074649961,0.573326938544,0.573578994868,0.573830819123,
	0.574082411496,0.574333772174,0.574584901345,0.574835799196,0.575086465914,
	0.575336901686,0.575587106698,0.575837081138,0.576086825191,0.576336339045,
	0.576585622884,0.576834676895,0.577083501263,0.577332096175,0.577580461815,
	0.577828598369,0.578076506022,0.578324184959,0.578571635365,0.578818857423,
	0.579065851320,0.579312617239,0.579559155364,0.579805465879,0.580051548968,
	0.580297404815,0.580543033604,0.580788435516,0.581033610737,0.581278559448,
	0.581523281833,0.581767778074,0.582012048355,0.582256092856,0.582499911761,
	0.582743505252,0.582986873510,0.583230016718,0.583472935057,0.583715628708,
	0.583958097853,0.584200342673,0.584442363348,0.584684160061,0.584925732990,
	0.585167082318,0.585408208223,0.585649110887,0.585889790490,0.586130247211,
	0.586370481230,0.586610492726,0.586850281880,0.587089848870,0.587329193876,
	0.587568317076,0.587807218649,0.588045898774,0.588284357630,0.588522595394,
	0.588760612245,0.588998408361,0.589235983920,0.589473339100,0.589710474078,
	0.589947389031,0.590184084137,0.590420559573,0.590656815516,0.590892852143,
	0.591128669630,0.591364268154,0.591599647891,0.591834809017,0.592069751709,
	0.592304476143,0.592538982493,0.592773270936,0.593007341648,0.593241194802,
	0.593474830576,0.593708249142,0.593941450678,0.594174435356,0.594407203352,
	0.594639754840,0.594872089994,0.595104208988,0.595336111997,0.595567799193,
	0.595799270751,0.596030526845,0.596261567647,0.596492393330,0.596723004068,
	0.596953400034,0.597183581400,0.597413548339,0.597643301024,0.597872839625,
	0.598102164317,0.598331275271,0.598560172658,0.598788856650,0.599017327419,
	0.599245585137,0.599473629974,0.599701462101,0.599929081691,0.600156488912,
	0.600383683937,0.600610666935,0.600837438077,0.601063997534,0.601290345474,
	0.601516482069,0.601742407488,0.601968121901,0.602193625476,0.602418918384,
	0.602644000794,0.602868872874,0.603093534794,0.603317986723,0.603542228828,
	0.603766261279,0.603990084244,0.604213697891,0.604437102388,0.604660297903,
	0.604883284604,0.605106062658,0.605328632232,0.605550993495,0.605773146613,
	0.605995091754,0.606216829084,0.606438358769,0.606659680978,0.606880795875,
	0.607101703628,0.607322404402,0.607542898364,0.607763185679,0.607983266514,
	0.608203141033,0.608422809402,0.608642271788,0.608861528354,0.609080579265,
	0.609299424688,0.609518064786,0.609736499724,0.609954729666,0.610172754778,
	0.610390575222,0.610608191164,0.610825602767,0.611042810194,0.611259813610,
	0.611476613178,0.611693209061,0.611909601423,0.612125790426,0.612341776233,
	0.612557559008,0.612773138913,0.612988516110,0.613203690762,0.613418663030,
	0.613633433078,0.613848001067,0.614062367159,0.614276531516,0.614490494298,
	0.614704255668,0.614917815787,0.615131174815,0.615344332914,0.615557290246,
	0.615770046969,0.615982603245,0.616194959235,0.616407115098,0.616619070996,
	0.616830827087,0.617042383532,0.617253740490,0.617464898121,0.617675856585,
	0.617886616041,0.618097176648,0.618307538566,0.618517701952,0.618727666966,
	0.618937433767,0.619147002513,0.619356373362,0.619565546473,0.619774522004,
	0.619983300112,0.620191880957,0.620400264694,0.620608451483,0.620816441480,
	0.621024234842,0.621231831728,0.621439232293,0.621646436695,0.621853445091,
	0.622060257637,0.622266874489,0.622473295805,0.622679521740,0.622885552450,
	0.623091388092,0.623297028820,0.623502474792,0.623707726162,0.623912783086,
	0.624117645719,0.624322314217,0.624526788734,0.624731069425,0.624935156445,
	0.625139049949,0.625342750091,0.625546257026,0.625749570907,0.625952691890,
	0.626155620127,0.626358355773,0.626560898982,0.626763249906,0.626965408700,
	0.627167375517,0.627369150510,0.627570733833,0.627772125637,0.627973326076,
	0.628174335302,0.628375153469,0.628575780728,0.628776217232,0.628976463132,
	0.629176518582,0.629376383732,0.629576058735,0.629775543742,0.629974838905,
	0.630173944375,0.630372860303,0.630571586841,0.630770124139,0.630968472348,
	0.631166631620,0.631364602104,0.631562383951,0.631759977312,0.631957382336,
	0.632154599174,0.632351627975,0.632548468891,0.632745122069,0.632941587660,
	0.633137865814,0.633333956679,0.633529860405,0.633725577141,0.633921107036,
	0.634116450238,0.634311606897,0.634506577160,0.634701361177,0.634895959096,
	0.635090371064,0.635284597231,0.635478637743,0.635672492748,0.635866162395,
	0.636059646831,0.636252946203,0.636446060659,0.636638990346,0.636831735410,
	0.637024295999,0.637216672260,0.637408864339,0.637600872383,0.637792696538,
	0.637984336950,0.638175793767,0.638367067133,0.638558157195,0.638749064098,
	0.638939787988,0.639130329012,0.639320687313,0.639510863038,0.639700856332,
	0.639890667339,0.640080296206,0.640269743075,0.640459008093,0.640648091404,
	0.640836993152,0.641025713482,0.641214252537,0.641402610463,0.641590787402,
	0.641778783499,0.641966598898,0.642154233741,0.642341688173,0.642528962337,
	0.642716056375,0.642902970432,0.643089704651,0.643276259173,0.643462634142,
	0.643648829700,0.643834845991,0.644020683155,0.644206341336,0.644391820676,
	0.644577121317,0.644762243400,0.644947187068,0.645131952462,0.645316539723,
	0.645500948993,0.645685180414,0.645869234126,0.646053110271,0.646236808989,
	0.646420330422,0.646603674709,0.646786841992,0.646969832412,0.647152646108,
	0.647335283220,0.647517743889,0.647700028255,0.647882136458,0.648064068636,
	0.648245824931,0.648427405482,0.648608810427,0.648790039907,0.648971094059,
	0.649151973025,0.649332676941,0.649513205948,0.649693560184,0.649873739787,
	0.650053744895,0.650233575648,0.650413232184,0.650592714640,0.650772023154,
	0.650951157865,0.651130118910,0.651308906427,0.651487520553,0.651665961426,
	0.651844229182,0.652022323960,0.652200245896,0.652377995128,0.652555571791,
	0.652732976023,0.652910207960,0.653087267739,0.653264155496,0.653440871368,
	0.653617415490,0.653793787998,0.653969989029,0.654146018718,0.654321877201,
	0.654497564614,0.654673081091,0.654848426769,0.655023601782,0.655198606266,
	0.655373440355,0.655548104184,0.655722597889,0.655896921603,0.656071075462,
	0.656245059600,0.656418874151,0.656592519248,0.656765995028,0.656939301622,
	0.657112439166,0.657285407793,0.657458207636,0.657630838829,0.657803301505,
	0.657975595798,0.658147721842,0.658319679768,0.658491469710,0.658663091800,
	0.658834546173,0.659005832959,0.659176952292,0.659347904303,0.659518689126,
	0.659689306893,0.659859757735,0.660030041784,0.660200159173,0.660370110033,
	0.660539894495,0.660709512691,0.660878964753,0.661048250811,0.661217370998,
	0.661386325443,0.661555114279,0.661723737635,0.661892195642,0.662060488432,
	0.662228616134,0.662396578880,0.662564376799,0.662732010021,0.662899478676,
	0.663066782896,0.663233922808,0.663400898544,0.663567710232,0.663734358003,
	0.663900841985,0.664067162308,0.664233319102,0.664399312494,0.664565142615,
	0.664730809593,0.664896313557,0.665061654635,0.665226832957,0.665391848649,
	0.665556701842,0.665721392662,0.665885921239,0.666050287700,0.666214492173,
	0.666378534785,0.666542415666,0.666706134941,0.666869692739,0.667033089186,
	0.667196324411,0.667359398540,0.667522311700,0.667685064019,0.667847655623,
	0.668010086638,0.668172357192,0.668334467411,0.668496417421,0.668658207349,
	0.668819837320,0.668981307462,0.669142617899,0.669303768758,0.669464760164,
	0.669625592244,0.669786265122,0.669946778924,0.670107133776,0.670267329803,
	0.670427367129,0.670587245880,0.670746966181,0.670906528157,0.671065931931,
	0.671225177630,0.671384265377,0.671543195297,0.671701967514,0.671860582152,
	0.672019039336,0.672177339189,0.672335481835,0.672493467398,0.672651296002,
	0.672808967770,0.672966482826,0.673123841293,0.673281043294,0.673438088952,
	0.673594978391,0.673751711733,0.673908289102,0.674064710620,0.674220976409,
	0.674377086592,0.674533041292,0.674688840631,0.674844484731,0.674999973715,
	0.675155307703,0.675310486819,0.675465511184,0.675620380920,0.675775096147,
	0.675929656989,0.676084063566,0.676238316000,0.676392414411,0.676546358921,
	0.676700149651,0.676853786722,0.677007270254,0.677160600368,0.677313777186,
	0.677466800826,0.677619671411,0.677772389059,0.677924953892,0.678077366029,
	0.678229625590,0.678381732695,0.678533687464,0.678685490017,0.678837140474,
	0.678988638953,0.679139985574,0.679291180456,0.679442223719,0.679593115482,
	0.679743855863,0.679894444982,0.680044882958,0.680195169908,0.680345305952,
	0.680495291208,0.680645125795,0.680794809831,0.680944343433,0.681093726721,
	0.681242959812,0.681392042823,0.681540975874,0.681689759081,0.681838392562,
	0.681986876435,0.682135210817,0.682283395825,0.682431431577,0.682579318189,
	0.682727055779,0.682874644464,0.683022084360,0.683169375585,0.683316518254,
	0.683463512484,0.683610358392,0.683757056094,0.683903605706,0.684050007345,
	0.684196261126,0.684342367166,0.684488325580,0.684634136484,0.684779799993,
	0.684925316224,0.685070685292,0.685215907311,0.685360982398,0.685505910667,
	0.685650692234,0.685795327214,0.685939815721,0.686084157870,0.686228353776,
	0.686372403553,0.686516307317,0.686660065181,0.686803677259,0.686947143667,
	0.687090464518,0.687233639925,0.687376670004,0.687519554868,0.687662294630,
	0.687804889404,0.687947339304,0.688089644444,0.688231804936,0.688373820894,
	0.688515692430,0.688657419659,0.688799002693,0.688940441645,0.689081736628,
	0.689222887754,0.689363895137,0.689504758888,0.689645479120,0.689786055945,
	0.689926489476,0.690066779824,0.690206927103,0.690346931423,0.690486792896,
	0.690626511635,0.690766087751,0.690905521355,0.691044812560,0.691183961476,
	0.691322968214,0.691461832887,0.691600555605,0.691739136478,0.691877575619,
	0.692015873138,0.692154029145,0.692292043752,0.692429917068,0.692567649205,
	0.692705240272,0.692842690380,0.692979999640,0.693117168160,0.693254196052,
	0.693391083425,0.693527830390,0.693664437054,0.693800903530,0.693937229925,
	0.694073416349,0.694209462913,0.694345369724,0.694481136893,0.694616764528,
	0.694752252738,0.694887601632,0.695022811320,0.695157881909,0.695292813509,
	0.695427606228,0.695562260175,0.695696775457,0.695831152183,0.695965390462,
	0.696099490401,0.696233452109,0.696367275693,0.696500961261,0.696634508922,
	0.696767918782,0.696901190949,0.697034325530,0.697167322634,0.697300182367,
	0.697432904837,0.697565490151,0.697697938415,0.697830249736,0.697962424223,
	0.698094461980,0.698226363116,0.698358127736,0.698489755947,0.698621247856,
	0.698752603568,0.698883823191,0.699014906829,0.699145854590,0.699276666579,
	0.699407342902,0.699537883665,0.699668288973,0.699798558933,0.699928693649,
	0.700058693228,0.700188557774,0.700318287393,0.700447882190,0.700577342270,
	0.700706667738,0.700835858699,0.700964915258,0.701093837519,0.701222625588,
	0.701351279568,0.701479799565,0.701608185682,0.701736438025,0.701864556697,
	0.701992541802,0.702120393444,0.702248111728,0.702375696757,0.702503148635,
	0.702630467466,0.702757653354,0.702884706401,0.703011626712,0.703138414389,
	0.703265069537,0.703391592258,0.703517982655,0.703644240831,0.703770366890,
	0.703896360934,0.704022223066,0.704147953388,0.704273552004,0.704399019015,
	0.704524354525,0.704649558635,0.704774631447,0.704899573065,0.705024383590,
	0.705149063123,0.705273611768,0.705398029625,0.705522316797,0.705646473385,
	0.705770499491,0.705894395216,0.706018160662,0.706141795929,0.706265301120,
	0.706388676336,0.706511921677,0.706635037244,0.706758023139,0.706880879462,
	0.707003606314,0.707126203795,0.707248672007,0.707371011050,0.707493221024,
	0.707615302029,0.707737254166,0.707859077534,0.707980772235,0.708102338368,
	0.708223776032,0.708345085329,0.708466266356,0.708587319215,0.708708244004,
	0.708829040824,0.708949709773,0.709070250952,0.709190664458,0.709310950392,
	0.709431108852,0.709551139938,0.709671043749,0.709790820382,0.709910469938,
	0.710029992514,0.710149388210,0.710268657123,0.710387799353,0.710506814997,
	0.710625704155,0.710744466923,0.710863103401,0.710981613686,0.711099997876,
	0.711218256069,0.711336388364,0.711454394856,0.711572275645,0.711690030828,
	0.711807660502,0.711925164765,0.712042543713,0.712159797445,0.712276926057,
	0.712393929646,0.712510808310,0.712627562145,0.712744191248,0.712860695717,
	0.712977075646,0.713093331134,0.713209462276,0.713325469169,0.713441351910,
	0.713557110594,0.713672745318,0.713788256179,0.713903643271,0.714018906691,
	0.714134046535,0.714249062898,0.714363955877,0.714478725567,0.714593372063,
	0.714707895461,0.714822295857,0.714936573346
	}
};

double always_inline copicatreplay2_negclip(double x) {
    double f = fabs(x);
    f = f * copicatreplay2_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = copicatreplay2_neg_table.data[0];
    } else if (i >= copicatreplay2_neg_table.size-1) {
        f = copicatreplay2_neg_table.data[copicatreplay2_neg_table.size-1];
    } else {
    f -= i;
    f = copicatreplay2_neg_table.data[i]*(1-f) + copicatreplay2_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}
