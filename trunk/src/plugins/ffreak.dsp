// generated automatically
// DO NOT MODIFY!
declare id "ffreak";
declare name "Fat Furry Freak";
declare category "Distortion";
declare shortname "Fat Freak";
declare description "Extreme Bass Fuzz Monster";

import("filter.lib");

process = pre : _<:*(dry),(*(wet) : iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0,b5/a0),(a1/a0,a2/a0,a3/a0,a4/a0,a5/a0))):>_ with {
    LogPot(a, x) = if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = if(b, 1 - x, x);
    s = 0.993;
    fs = float(SR);
    pre = _;
    wet = vslider("wet_dry[name:wet/dry][tooltip:percentage of processed signal in output signal]",  100, 0, 100, 1) : /(100);
    dry = 1 - wet;

    
        Fuzz = vslider("Fuzz[name:Fuzz]", 0.5, 0, 1, 0.01) : Inverted(0) : LogPot(0) : smooth(s);
    
        Tone = vslider("Tone[name:Tone]", 0.5, 0, 1, 0.01) : Inverted(0) : LogPot(0) : smooth(s);
    
        Gate = vslider("Gate[name:Gate]", 0.5, 0, 1, 0.01) : Inverted(0) : LogPot(0) : smooth(s);
    
        Volume = vslider("Volume[name:Volume]", 0.5, 0, 1, 0.01) : Inverted(0) : LogPot(0) : smooth(s);
    
    b0 = Gate*(Tone*Volume*(Fuzz*pow(fs,4)*(2.3166360517034e-21*fs + 1.15904771305196e-17) + pow(fs,3)*(fs*(-3.33595591445278e-21*fs - 1.66926037039994e-17) - 1.15904771305196e-17)) + Volume*(Fuzz*pow(fs,3)*(1.5588772005669e-18*fs + 1.29589876827259e-14) + pow(fs,2)*(fs*(-2.24478316881626e-18*fs - 1.86625011403253e-14) - 1.29589876827259e-14))) + Tone*Volume*(Fuzz*pow(fs,4)*(-2.79019064029245e-21*fs - 1.39597416617602e-17) + pow(fs,3)*(fs*(4.01337447559171e-21*fs + 2.00823037773142e-17) + 1.39597416617602e-17)) + Volume*(Fuzz*pow(fs,3)*(-1.87753470001854e-18*fs - 1.56079959618259e-14) + pow(fs,2)*(fs*(2.70062186191777e-18*fs + 2.24522189930045e-14) + 1.56079959618259e-14));

    b1 = Gate*(Tone*Volume*(Fuzz*pow(fs,4)*(-1.1583180258517e-20*fs - 3.47714313915589e-17) + pow(fs,3)*(fs*(1.66797795722639e-20*fs + 5.00778111119983e-17) + 1.15904771305196e-17)) + Volume*(Fuzz*pow(fs,3)*(-4.67663160170071e-18*fs - 1.29589876827259e-14) + pow(fs,2)*(fs*(6.73434950644879e-18*fs + 1.86625011403253e-14) - 1.29589876827259e-14))) + Tone*Volume*(Fuzz*pow(fs,4)*(1.39509532014623e-20*fs + 4.18792249852806e-17) + pow(fs,3)*(fs*(-2.00668723779585e-20*fs - 6.02469113319426e-17) - 1.39597416617602e-17)) + Volume*(Fuzz*pow(fs,3)*(5.63260410005562e-18*fs + 1.56079959618259e-14) + pow(fs,2)*(fs*(-8.10186558575332e-18*fs - 2.24522189930045e-14) + 1.56079959618259e-14));

    b2 = Gate*(Tone*Volume*(Fuzz*pow(fs,4)*(2.3166360517034e-20*fs + 2.31809542610393e-17) + pow(fs,3)*(fs*(-3.33595591445278e-20*fs - 3.33852074079988e-17) + 2.31809542610393e-17)) + Volume*(Fuzz*pow(fs,3)*(3.1177544011338e-18*fs - 2.59179753654518e-14) + pow(fs,2)*(fs*(-4.48956633763253e-18*fs + 3.73250022806505e-14) + 2.59179753654518e-14))) + Tone*Volume*(Fuzz*pow(fs,4)*(-2.79019064029245e-20*fs - 2.79194833235204e-17) + pow(fs,3)*(fs*(4.01337447559171e-20*fs + 4.01646075546284e-17) - 2.79194833235204e-17)) + Volume*(Fuzz*pow(fs,3)*(-3.75506940003708e-18*fs + 3.12159919236519e-14) + pow(fs,2)*(fs*(5.40124372383555e-18*fs - 4.4904437986009e-14) - 3.12159919236519e-14));

    b3 = Gate*(Tone*Volume*(Fuzz*pow(fs,4)*(-2.3166360517034e-20*fs + 2.31809542610393e-17) + pow(fs,3)*(fs*(3.33595591445278e-20*fs - 3.33852074079988e-17) - 2.31809542610393e-17)) + Volume*(Fuzz*pow(fs,3)*(3.1177544011338e-18*fs + 2.59179753654518e-14) + pow(fs,2)*(fs*(-4.48956633763253e-18*fs - 3.73250022806505e-14) + 2.59179753654518e-14))) + Tone*Volume*(Fuzz*pow(fs,4)*(2.79019064029245e-20*fs - 2.79194833235204e-17) + pow(fs,3)*(fs*(-4.01337447559171e-20*fs + 4.01646075546284e-17) + 2.79194833235204e-17)) + Volume*(Fuzz*pow(fs,3)*(-3.75506940003708e-18*fs - 3.12159919236519e-14) + pow(fs,2)*(fs*(5.40124372383555e-18*fs + 4.4904437986009e-14) - 3.12159919236519e-14));

    b4 = Gate*(Tone*Volume*(Fuzz*pow(fs,4)*(1.1583180258517e-20*fs - 3.47714313915589e-17) + pow(fs,3)*(fs*(-1.66797795722639e-20*fs + 5.00778111119983e-17) - 1.15904771305196e-17)) + Volume*(Fuzz*pow(fs,3)*(-4.67663160170071e-18*fs + 1.29589876827259e-14) + pow(fs,2)*(fs*(6.73434950644879e-18*fs - 1.86625011403253e-14) - 1.29589876827259e-14))) + Tone*Volume*(Fuzz*pow(fs,4)*(-1.39509532014623e-20*fs + 4.18792249852806e-17) + pow(fs,3)*(fs*(2.00668723779585e-20*fs - 6.02469113319426e-17) + 1.39597416617602e-17)) + Volume*(Fuzz*pow(fs,3)*(5.63260410005562e-18*fs - 1.56079959618259e-14) + pow(fs,2)*(fs*(-8.10186558575332e-18*fs + 2.24522189930045e-14) + 1.56079959618259e-14));

    b5 = Gate*(Tone*Volume*(Fuzz*pow(fs,4)*(-2.3166360517034e-21*fs + 1.15904771305196e-17) + pow(fs,3)*(fs*(3.33595591445278e-21*fs - 1.66926037039994e-17) + 1.15904771305196e-17)) + Volume*(Fuzz*pow(fs,3)*(1.5588772005669e-18*fs - 1.29589876827259e-14) + pow(fs,2)*(fs*(-2.24478316881626e-18*fs + 1.86625011403253e-14) - 1.29589876827259e-14))) + Tone*Volume*(Fuzz*pow(fs,4)*(2.79019064029245e-21*fs - 1.39597416617602e-17) + pow(fs,3)*(fs*(-4.01337447559171e-21*fs + 2.00823037773142e-17) - 1.39597416617602e-17)) + Volume*(Fuzz*pow(fs,3)*(-1.87753470001854e-18*fs + 1.56079959618259e-14) + pow(fs,2)*(fs*(2.70062186191777e-18*fs - 2.24522189930045e-14) + 1.56079959618259e-14));

    a0 = Fuzz*fs*(fs*(fs*(fs*(-7.85412319843039e-24*fs - 7.78792746651557e-20) - 9.37831383212833e-17) - 2.23954390036707e-14) - 6.98094898928731e-15) + Gate*(Fuzz*fs*(fs*(fs*(fs*(6.5437965336828e-24*fs + 5.81782503663661e-20) + 1.85568523263077e-17) + 1.66102929456909e-16) + 5.00381548719698e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(6.5437965336828e-24*fs + 5.62612870500992e-20) + 3.66325429672488e-18) + 2.81398235873666e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-4.65295447579145e-24*fs - 2.3734396603456e-20) - 2.32762902199934e-18) - 1.88310920685509e-17) + fs*(fs*(fs*(fs*(4.76440117855884e-24*fs + 2.43075314241076e-20) + 2.40711435730575e-18) + 2.16097599157672e-17) + 1.88310920685509e-17)) + fs*(fs*(fs*(fs*(-6.70053233478594e-24*fs - 5.76153907610498e-20) - 3.80725717138185e-18) - 3.24770777204502e-17) - 2.81398235873666e-17)) + fs*(fs*(fs*(fs*(-6.70053233478594e-24*fs - 5.95782688271891e-20) - 1.90595008624394e-17) - 1.88638248347695e-16) - 2.17339588935373e-16) - 5.00381548719698e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-7.85412319843039e-24*fs - 7.55784595381368e-20) - 7.35486357301907e-17) - 3.92585764869983e-15) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(5.58465983797742e-24*fs + 3.42119219586653e-20) + 3.19454127568418e-17) + 2.62717307381705e-15) + fs*(fs*(fs*(fs*(-5.71839588129828e-24*fs - 3.49001694087957e-20) - 3.20489931550839e-17) - 2.65988017960024e-15) - 2.62717307381705e-15)) + fs*(fs*(fs*(fs*(8.04220615975416e-24*fs + 7.72040670186403e-20) + 7.37353569889028e-17) + 4.00054450346221e-15) + 3.92585764869983e-15)) + fs*(fs*(fs*(fs*(8.04220615975416e-24*fs + 7.95599798455062e-20) + 9.44004344622598e-17) + 2.24958749395832e-14) + 2.93784119708281e-14) + 6.98094898928731e-15;

    a1 = Fuzz*fs*(fs*(fs*(fs*(3.92706159921519e-23*fs + 2.33637823995467e-19) + 9.37831383212833e-17) - 2.23954390036707e-14) - 2.09428469678619e-14) + Gate*(Fuzz*fs*(fs*(fs*(fs*(-3.2718982668414e-23*fs - 1.74534751099098e-19) - 1.85568523263077e-17) + 1.66102929456909e-16) + 1.50114464615909e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-3.2718982668414e-23*fs - 1.68783861150298e-19) - 3.66325429672488e-18) + 2.81398235873666e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(2.32647723789573e-23*fs + 7.12031898103681e-20) + 2.32762902199934e-18) - 1.88310920685509e-17) + fs*(fs*(fs*(fs*(-2.38220058927942e-23*fs - 7.29225942723227e-20) - 2.40711435730575e-18) + 2.16097599157672e-17) + 5.64932762056526e-17)) + fs*(fs*(fs*(fs*(3.35026616739297e-23*fs + 1.72846172283149e-19) + 3.80725717138185e-18) - 3.24770777204502e-17) - 8.44194707620996e-17)) + fs*(fs*(fs*(fs*(3.35026616739297e-23*fs + 1.78734806481567e-19) + 1.90595008624394e-17) - 1.88638248347695e-16) - 6.5201876680612e-16) - 2.50190774359849e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(3.92706159921519e-23*fs + 2.2673537861441e-19) + 7.35486357301907e-17) - 3.92585764869983e-15) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-2.79232991898871e-23*fs - 1.02635765875996e-19) - 3.19454127568418e-17) + 2.62717307381705e-15) + fs*(fs*(fs*(fs*(2.85919794064914e-23*fs + 1.04700508226387e-19) + 3.20489931550839e-17) - 2.65988017960024e-15) - 7.88151922145115e-15)) + fs*(fs*(fs*(fs*(-4.02110307987708e-23*fs - 2.31612201055921e-19) - 7.37353569889028e-17) + 4.00054450346221e-15) + 1.17775729460995e-14)) + fs*(fs*(fs*(fs*(-4.02110307987708e-23*fs - 2.38679939536519e-19) - 9.44004344622598e-17) + 2.24958749395832e-14) + 8.81352359124845e-14) + 3.49047449464365e-14;

    a2 = Fuzz*fs*(fs*(fs*(fs*(-7.85412319843039e-23*fs - 1.55758549330311e-19) + 1.87566276642567e-16) + 4.47908780073414e-14) - 1.39618979785746e-14) + Gate*(Fuzz*fs*(fs*(fs*(fs*(6.5437965336828e-23*fs + 1.16356500732732e-19) - 3.71137046526154e-17) - 3.32205858913818e-16) + 1.0007630974394e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(6.5437965336828e-23*fs + 1.12522574100198e-19) - 7.32650859344976e-18) - 5.62796471747331e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-4.65295447579145e-23*fs - 4.74687932069121e-20) + 4.65525804399867e-18) + 3.76621841371018e-17) + fs*(fs*(fs*(fs*(4.76440117855884e-23*fs + 4.86150628482152e-20) - 4.81422871461151e-18) - 4.32195198315344e-17) + 3.76621841371018e-17)) + fs*(fs*(fs*(fs*(-6.70053233478594e-23*fs - 1.152307815221e-19) + 7.61451434276371e-18) + 6.49541554409003e-17) - 5.62796471747331e-17)) + fs*(fs*(fs*(fs*(-6.70053233478594e-23*fs - 1.19156537654378e-19) + 3.81190017248789e-17) + 3.77276496695391e-16) - 4.34679177870747e-16) - 5.00381548719698e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-7.85412319843039e-23*fs - 1.51156919076274e-19) + 1.47097271460381e-16) + 7.85171529739967e-15) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(5.58465983797742e-23*fs + 6.84238439173305e-20) - 6.38908255136836e-17) - 5.2543461476341e-15) + fs*(fs*(fs*(fs*(-5.71839588129828e-23*fs - 6.98003388175914e-20) + 6.40979863101677e-17) + 5.31976035920048e-15) - 5.2543461476341e-15)) + fs*(fs*(fs*(fs*(8.04220615975416e-23*fs + 1.54408134037281e-19) - 1.47470713977806e-16) - 8.00108900692442e-15) + 7.85171529739967e-15)) + fs*(fs*(fs*(fs*(8.04220615975416e-23*fs + 1.59119959691012e-19) - 1.8880086892452e-16) - 4.49917498791663e-14) + 5.87568239416563e-14) + 6.98094898928731e-14;

    a3 = Fuzz*fs*(fs*(fs*(fs*(7.85412319843039e-23*fs - 1.55758549330311e-19) - 1.87566276642567e-16) + 4.47908780073414e-14) + 1.39618979785746e-14) + Gate*(Fuzz*fs*(fs*(fs*(fs*(-6.5437965336828e-23*fs + 1.16356500732732e-19) + 3.71137046526154e-17) - 3.32205858913818e-16) - 1.0007630974394e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-6.5437965336828e-23*fs + 1.12522574100198e-19) + 7.32650859344976e-18) - 5.62796471747331e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(4.65295447579145e-23*fs - 4.74687932069121e-20) - 4.65525804399867e-18) + 3.76621841371018e-17) + fs*(fs*(fs*(fs*(-4.76440117855884e-23*fs + 4.86150628482152e-20) + 4.81422871461151e-18) - 4.32195198315344e-17) - 3.76621841371018e-17)) + fs*(fs*(fs*(fs*(6.70053233478594e-23*fs - 1.152307815221e-19) - 7.61451434276371e-18) + 6.49541554409003e-17) + 5.62796471747331e-17)) + fs*(fs*(fs*(fs*(6.70053233478594e-23*fs - 1.19156537654378e-19) - 3.81190017248789e-17) + 3.77276496695391e-16) + 4.34679177870747e-16) - 5.00381548719698e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(7.85412319843039e-23*fs - 1.51156919076274e-19) - 1.47097271460381e-16) + 7.85171529739967e-15) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-5.58465983797742e-23*fs + 6.84238439173305e-20) + 6.38908255136836e-17) - 5.2543461476341e-15) + fs*(fs*(fs*(fs*(5.71839588129828e-23*fs - 6.98003388175914e-20) - 6.40979863101677e-17) + 5.31976035920048e-15) + 5.2543461476341e-15)) + fs*(fs*(fs*(fs*(-8.04220615975416e-23*fs + 1.54408134037281e-19) + 1.47470713977806e-16) - 8.00108900692442e-15) - 7.85171529739967e-15)) + fs*(fs*(fs*(fs*(-8.04220615975416e-23*fs + 1.59119959691012e-19) + 1.8880086892452e-16) - 4.49917498791663e-14) - 5.87568239416563e-14) + 6.98094898928731e-14;

    a4 = Fuzz*fs*(fs*(fs*(fs*(-3.92706159921519e-23*fs + 2.33637823995467e-19) - 9.37831383212833e-17) - 2.23954390036707e-14) + 2.09428469678619e-14) + Gate*(Fuzz*fs*(fs*(fs*(fs*(3.2718982668414e-23*fs - 1.74534751099098e-19) + 1.85568523263077e-17) + 1.66102929456909e-16) - 1.50114464615909e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(3.2718982668414e-23*fs - 1.68783861150298e-19) + 3.66325429672488e-18) + 2.81398235873666e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-2.32647723789573e-23*fs + 7.12031898103681e-20) - 2.32762902199934e-18) - 1.88310920685509e-17) + fs*(fs*(fs*(fs*(2.38220058927942e-23*fs - 7.29225942723227e-20) + 2.40711435730575e-18) + 2.16097599157672e-17) - 5.64932762056526e-17)) + fs*(fs*(fs*(fs*(-3.35026616739297e-23*fs + 1.72846172283149e-19) - 3.80725717138185e-18) - 3.24770777204502e-17) + 8.44194707620996e-17)) + fs*(fs*(fs*(fs*(-3.35026616739297e-23*fs + 1.78734806481567e-19) - 1.90595008624394e-17) - 1.88638248347695e-16) + 6.5201876680612e-16) - 2.50190774359849e-16) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-3.92706159921519e-23*fs + 2.2673537861441e-19) - 7.35486357301907e-17) - 3.92585764869983e-15) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(2.79232991898871e-23*fs - 1.02635765875996e-19) + 3.19454127568418e-17) + 2.62717307381705e-15) + fs*(fs*(fs*(fs*(-2.85919794064914e-23*fs + 1.04700508226387e-19) - 3.20489931550839e-17) - 2.65988017960024e-15) + 7.88151922145115e-15)) + fs*(fs*(fs*(fs*(4.02110307987708e-23*fs - 2.31612201055921e-19) + 7.37353569889028e-17) + 4.00054450346221e-15) - 1.17775729460995e-14)) + fs*(fs*(fs*(fs*(4.02110307987708e-23*fs - 2.38679939536519e-19) + 9.44004344622598e-17) + 2.24958749395832e-14) - 8.81352359124845e-14) + 3.49047449464365e-14;

    a5 = Fuzz*fs*(fs*(fs*(fs*(7.85412319843039e-24*fs - 7.78792746651557e-20) + 9.37831383212833e-17) - 2.23954390036707e-14) + 6.98094898928731e-15) + Gate*(Fuzz*fs*(fs*(fs*(fs*(-6.5437965336828e-24*fs + 5.81782503663661e-20) - 1.85568523263077e-17) + 1.66102929456909e-16) - 5.00381548719698e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-6.5437965336828e-24*fs + 5.62612870500992e-20) - 3.66325429672488e-18) + 2.81398235873666e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(4.65295447579145e-24*fs - 2.3734396603456e-20) + 2.32762902199934e-18) - 1.88310920685509e-17) + fs*(fs*(fs*(fs*(-4.76440117855884e-24*fs + 2.43075314241076e-20) - 2.40711435730575e-18) + 2.16097599157672e-17) - 1.88310920685509e-17)) + fs*(fs*(fs*(fs*(6.70053233478594e-24*fs - 5.76153907610498e-20) + 3.80725717138185e-18) - 3.24770777204502e-17) + 2.81398235873666e-17)) + fs*(fs*(fs*(fs*(6.70053233478594e-24*fs - 5.95782688271891e-20) + 1.90595008624394e-17) - 1.88638248347695e-16) + 2.17339588935373e-16) - 5.00381548719698e-17) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(7.85412319843039e-24*fs - 7.55784595381368e-20) + 7.35486357301907e-17) - 3.92585764869983e-15) + Tone*(Fuzz*pow(fs,2)*(fs*(fs*(-5.58465983797742e-24*fs + 3.42119219586653e-20) - 3.19454127568418e-17) + 2.62717307381705e-15) + fs*(fs*(fs*(fs*(5.71839588129828e-24*fs - 3.49001694087957e-20) + 3.20489931550839e-17) - 2.65988017960024e-15) + 2.62717307381705e-15)) + fs*(fs*(fs*(fs*(-8.04220615975416e-24*fs + 7.72040670186403e-20) - 7.37353569889028e-17) + 4.00054450346221e-15) - 3.92585764869983e-15)) + fs*(fs*(fs*(fs*(-8.04220615975416e-24*fs + 7.95599798455062e-20) - 9.44004344622598e-17) + 2.24958749395832e-14) - 2.93784119708281e-14) + 6.98094898928731e-15;
};