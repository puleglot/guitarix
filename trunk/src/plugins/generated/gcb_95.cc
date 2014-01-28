// generated from file '../src/plugins/gcb_95.dsp' by dsp2cc:
// Code generated with Faust 0.9.58 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace pluginlib {
namespace gcb_95 {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	FAUSTFLOAT 	fslider0;
	double 	fRec0[2];
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fVec0[2];
	double 	fConst29;
	double 	fRec2[2];
	double 	fRec1[5];
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int samplingFreq, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "GCB_95";
	name = N_("GCB 95");
	groups = 0;
	description = N_("Linear filter simulating the GCB 95 crybaby circuit"); // description (tooltip)
	category = N_("Guitar Effects");       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<5; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (1.08819023657393e-20 * fConst1);
	fConst3 = (1.29191360120173e-11 + (fConst1 * (5.44712113689982e-13 + (fConst1 * (2.80985481683452e-17 + fConst2)))));
	fConst4 = (6.9672955745145e-20 * fConst1);
	fConst5 = (fConst1 * ((fConst1 * (0 - (9.30061422376548e-18 + fConst4))) - 9.53707992555105e-14));
	fConst6 = (3.8766476861454e-19 * fConst1);
	fConst7 = (2.16751816489796e-12 + (fConst1 * (7.68323461702748e-14 + (fConst1 * (2.92076464853813e-17 + fConst6)))));
	fConst8 = faustpower<2>(fConst1);
	fConst9 = (7.39345574993849e-13 - (4.44810233000624e-20 * fConst8));
	fConst10 = ((1.18100662298107e-20 * fConst8) - 1.61894098654543e-13);
	fConst11 = (1.64286470664228e-13 - (1.17991949262113e-20 * fConst8));
	fConst12 = (4.3527609462957e-20 * fConst1);
	fConst13 = (2.58382720240347e-11 + (fConst8 * (0 - (5.61970963366905e-17 + fConst12))));
	fConst14 = (2.7869182298058e-19 * fConst1);
	fConst15 = (fConst8 * (1.8601228447531e-17 + fConst14));
	fConst16 = (1.55065907445816e-18 * fConst1);
	fConst17 = (4.33503632979593e-12 + (fConst8 * (0 - (5.84152929707626e-17 + fConst16))));
	fConst18 = (1.90741598511021e-13 - (4.1803773447087e-19 * fConst8));
	fConst19 = ((2.32598861168724e-18 * fConst8) - 1.5366469234055e-13);
	fConst20 = ((6.52914141944355e-20 * fConst8) - 1.08942422737996e-12);
	fConst21 = ((fConst8 * (5.61970963366905e-17 - fConst12)) - 2.58382720240347e-11);
	fConst22 = (fConst8 * (fConst14 - 1.8601228447531e-17));
	fConst23 = ((fConst8 * (5.84152929707626e-17 - fConst16)) - 4.33503632979593e-12);
	fConst24 = ((fConst1 * (5.44712113689982e-13 + (fConst1 * (fConst2 - 2.80985481683452e-17)))) - 1.29191360120173e-11);
	fConst25 = (fConst1 * ((fConst1 * (9.30061422376548e-18 - fConst4)) - 9.53707992555105e-14));
	fConst26 = ((fConst1 * (7.68323461702748e-14 + (fConst1 * (fConst6 - 2.92076464853813e-17)))) - 2.16751816489796e-12);
	fConst27 = (716.6140154481191 / double(iConst0));
	fConst28 = (1 - fConst27);
	fConst29 = (1.0 / (1 + fConst27));
	fConst30 = (7.41350388334374e-21 * fConst1);
	fConst31 = ((fConst1 * ((fConst1 * (0 - (2.47418541205506e-16 + fConst30))) - 3.69672787496925e-13)) - 1.8397056665289e-12);
	fConst32 = (1.96834437163512e-21 * fConst1);
	fConst33 = (fConst1 * (8.09470493272714e-14 + (fConst1 * (5.48587515516469e-17 + fConst32))));
	fConst34 = (1.96653248770188e-21 * fConst1);
	fConst35 = ((fConst1 * ((fConst1 * (0 - (5.48942867863191e-17 + fConst34))) - 8.21432353321142e-14)) - 1.78155704878595e-12);
	fConst36 = (2.9654015533375e-20 * fConst1);
	fConst37 = ((fConst8 * (4.94837082411013e-16 + fConst36)) - 3.67941133305779e-12);
	fConst38 = (7.87337748654046e-21 * fConst1);
	fConst39 = (fConst8 * (0 - (1.09717503103294e-16 + fConst38)));
	fConst40 = (7.86612995080753e-21 * fConst1);
	fConst41 = ((fConst8 * (1.09788573572638e-16 + fConst40)) - 3.56311409757189e-12);
	fConst42 = (3.67941133305779e-12 + (fConst8 * (fConst36 - 4.94837082411013e-16)));
	fConst43 = (fConst8 * (1.09717503103294e-16 - fConst38));
	fConst44 = (3.56311409757189e-12 + (fConst8 * (fConst40 - 1.09788573572638e-16)));
	fConst45 = (1.8397056665289e-12 + (fConst1 * ((fConst1 * (2.47418541205506e-16 - fConst30)) - 3.69672787496925e-13)));
	fConst46 = (fConst1 * (8.09470493272714e-14 + (fConst1 * (fConst32 - 5.48587515516469e-17))));
	fConst47 = (1.78155704878595e-12 + (fConst1 * ((fConst1 * (5.48942867863191e-17 - fConst34)) - 8.21432353321142e-14)));
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlow0 = (4.748558434412966e-05 * (exp((5 * (1 - fslider0))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (4.92617764749537e-11 + (fConst1 * ((fRec0[0] * (fConst7 + (fConst5 * fRec0[0]))) + fConst3)));
		double fTemp1 = (double)input0[i];
		fVec0[0] = fTemp1;
		fRec2[0] = (fConst29 * ((fVec0[0] - fVec0[1]) + (fConst28 * fRec2[1])));
		fRec1[0] = (fRec2[0] - (((fRec1[4] * (4.92617764749537e-11 + (fConst1 * ((fRec0[0] * (fConst26 + (fConst25 * fRec0[0]))) + fConst24)))) + ((fRec1[3] * (1.97047105899815e-10 + (fConst1 * ((fRec0[0] * (fConst23 + (fConst22 * fRec0[0]))) + fConst21)))) + ((fRec1[2] * (2.95570658849723e-10 + (fConst8 * (fConst20 + (fRec0[0] * (fConst19 + (fConst18 * fRec0[0]))))))) + (fRec1[1] * (1.97047105899815e-10 + (fConst1 * ((fRec0[0] * (fConst17 + (fConst15 * fRec0[0]))) + fConst13))))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst1 * (((fRec1[4] * ((fRec0[0] * (fConst47 + (fConst46 * fRec0[0]))) + fConst45)) + ((fRec1[3] * ((fRec0[0] * (fConst44 + (fConst43 * fRec0[0]))) + fConst42)) + (((fRec1[1] * ((fRec0[0] * (fConst41 + (fConst39 * fRec0[0]))) + fConst37)) + (fRec1[0] * ((fRec0[0] * (fConst35 + (fConst33 * fRec0[0]))) + fConst31))) + (fConst1 * (fRec1[2] * ((fRec0[0] * (fConst11 + (fConst10 * fRec0[0]))) + fConst9)))))) / fTemp0));
		// post processing
		for (int i=4; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec2[1] = fRec2[0];
		fVec0[1] = fVec0[0];
		fRec0[1] = fRec0[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("GCB_95.hotpotz",N_("Wah"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("GCB_95" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("hotpotz"), 0);
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("hotpotz"), 0);
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace gcb_95
} // end namespace pluginlib
