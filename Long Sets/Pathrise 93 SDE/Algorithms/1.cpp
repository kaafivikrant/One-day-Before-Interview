#include <iostream>
#include <utility>
#include <vector>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double
#include <stack>
#include <chrono>
#include <thread>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <forward_list>

using namespace std;

int main(){

    vector<char> smallAlpha;

    char small = 'a';
    for(int i=0;i<26;i++){
        smallAlpha.push_back(small+i);
    }

//    for(const auto& itr: smallAlpha){
//        cout<<itr<<" ";
//    }

    cout<<endl;

    vector<char> largeAlpha;

    char large = 'A';
    for(int i=0;i<26;i++){
        largeAlpha.push_back(large+i);
    }

//    for(const auto& itr: largeAlpha){
//        cout<<itr<<" ";
//    }

    vector<string> final;

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            char r = smallAlpha[i];
            char k = smallAlpha[j];
            string finalAlpha1(1,r);
            finalAlpha1+=k;
            final.push_back(finalAlpha1);

            char x = smallAlpha[i];
            char y = largeAlpha[j];
            string finalAlpha(1,x);
            finalAlpha+=y;
            final.push_back(finalAlpha);

            char a = largeAlpha[i];
            char b = smallAlpha[j];
            string finalAlpha3(1,a);
            finalAlpha3+=b;
            final.push_back(finalAlpha3);

            char d = largeAlpha[i];
            char c = largeAlpha[j];
            string finalAlpha2(1,d);
            finalAlpha2+=c;
            final.push_back(finalAlpha2);
        }
    }

    for(const auto& itr: final){
        cout<<itr<<" ";
    }
    
    /*
     * 
     * aa aA Aa AA ab aB Ab AB ac aC Ac AC ad aD Ad AD ae aE Ae AE af aF Af AF ag aG Ag AG ah aH Ah AH ai aI Ai AI aj aJ Aj AJ
ak aK Ak AK al aL Al AL am aM Am AM an aN An AN ao aO Ao AO ap aP Ap AP aq aQ Aq AQ ar aR Ar AR as aS As AS at aT At AT
au aU Au AU av aV Av AV aw aW Aw AW ax aX Ax AX ay aY Ay AY az aZ Az AZ ba bA Ba BA bb bB Bb BB bc bC Bc BC bd bD Bd BD
be bE Be BE bf bF Bf BF bg bG Bg BG bh bH Bh BH bi bI Bi BI bj bJ Bj BJ bk bK Bk BK bl bL Bl BL bm bM Bm BM bn bN Bn BN
bo bO Bo BO bp bP Bp BP bq bQ Bq BQ br bR Br BR bs bS Bs BS bt bT Bt BT bu bU Bu BU bv bV Bv BV bw bW Bw BW bx bX Bx BX
by bY By BY bz bZ Bz BZ ca cA Ca CA cb cB Cb CB cc cC Cc CC cd cD Cd CD ce cE Ce CE cf cF Cf CF cg cG Cg CG ch cH Ch CH
ci cI Ci CI cj cJ Cj CJ ck cK Ck CK cl cL Cl CL cm cM Cm CM cn cN Cn CN co cO Co CO cp cP Cp CP cq cQ Cq CQ cr cR Cr CR
cs cS Cs CS ct cT Ct CT cu cU Cu CU cv cV Cv CV cw cW Cw CW cx cX Cx CX cy cY Cy CY cz cZ Cz CZ da dA Da DA db dB Db DB
dc dC Dc DC dd dD Dd DD de dE De DE df dF Df DF dg dG Dg DG dh dH Dh DH di dI Di DI dj dJ Dj DJ dk dK Dk DK dl dL Dl DL
dm dM Dm DM dn dN Dn DN do dO Do DO dp dP Dp DP dq dQ Dq DQ dr dR Dr DR ds dS Ds DS dt dT Dt DT du dU Du DU dv dV Dv DV
dw dW Dw DW dx dX Dx DX dy dY Dy DY dz dZ Dz DZ ea eA Ea EA eb eB Eb EB ec eC Ec EC ed eD Ed ED ee eE Ee EE ef eF Ef EF
eg eG Eg EG eh eH Eh EH ei eI Ei EI ej eJ Ej EJ ek eK Ek EK el eL El EL em eM Em EM en eN En EN eo eO Eo EO ep eP Ep EP
eq eQ Eq EQ er eR Er ER es eS Es ES et eT Et ET eu eU Eu EU ev eV Ev EV ew eW Ew EW ex eX Ex EX ey eY Ey EY ez eZ Ez EZ
fa fA Fa FA fb fB Fb FB fc fC Fc FC fd fD Fd FD fe fE Fe FE ff fF Ff FF fg fG Fg FG fh fH Fh FH fi fI Fi FI fj fJ Fj FJ
fk fK Fk FK fl fL Fl FL fm fM Fm FM fn fN Fn FN fo fO Fo FO fp fP Fp FP fq fQ Fq FQ fr fR Fr FR fs fS Fs FS ft fT Ft FT
fu fU Fu FU fv fV Fv FV fw fW Fw FW fx fX Fx FX fy fY Fy FY fz fZ Fz FZ ga gA Ga GA gb gB Gb GB gc gC Gc GC gd gD Gd GD
ge gE Ge GE gf gF Gf GF gg gG Gg GG gh gH Gh GH gi gI Gi GI gj gJ Gj GJ gk gK Gk GK gl gL Gl GL gm gM Gm GM gn gN Gn GN
go gO Go GO gp gP Gp GP gq gQ Gq GQ gr gR Gr GR gs gS Gs GS gt gT Gt GT gu gU Gu GU gv gV Gv GV gw gW Gw GW gx gX Gx GX
gy gY Gy GY gz gZ Gz GZ ha hA Ha HA hb hB Hb HB hc hC Hc HC hd hD Hd HD he hE He HE hf hF Hf HF hg hG Hg HG hh hH Hh HH
hi hI Hi HI hj hJ Hj HJ hk hK Hk HK hl hL Hl HL hm hM Hm HM hn hN Hn HN ho hO Ho HO hp hP Hp HP hq hQ Hq HQ hr hR Hr HR
hs hS Hs HS ht hT Ht HT hu hU Hu HU hv hV Hv HV hw hW Hw HW hx hX Hx HX hy hY Hy HY hz hZ Hz HZ ia iA Ia IA ib iB Ib IB
ic iC Ic IC id iD Id ID ie iE Ie IE if iF If IF ig iG Ig IG ih iH Ih IH ii iI Ii II ij iJ Ij IJ ik iK Ik IK il iL Il IL
im iM Im IM in iN In IN io iO Io IO ip iP Ip IP iq iQ Iq IQ ir iR Ir IR is iS Is IS it iT It IT iu iU Iu IU iv iV Iv IV
iw iW Iw IW ix iX Ix IX iy iY Iy IY iz iZ Iz IZ ja jA Ja JA jb jB Jb JB jc jC Jc JC jd jD Jd JD je jE Je JE jf jF Jf JF
jg jG Jg JG jh jH Jh JH ji jI Ji JI jj jJ Jj JJ jk jK Jk JK jl jL Jl JL jm jM Jm JM jn jN Jn JN jo jO Jo JO jp jP Jp JP
jq jQ Jq JQ jr jR Jr JR js jS Js JS jt jT Jt JT ju jU Ju JU jv jV Jv JV jw jW Jw JW jx jX Jx JX jy jY Jy JY jz jZ Jz JZ
ka kA Ka KA kb kB Kb KB kc kC Kc KC kd kD Kd KD ke kE Ke KE kf kF Kf KF kg kG Kg KG kh kH Kh KH ki kI Ki KI kj kJ Kj KJ
kk kK Kk KK kl kL Kl KL km kM Km KM kn kN Kn KN ko kO Ko KO kp kP Kp KP kq kQ Kq KQ kr kR Kr KR ks kS Ks KS kt kT Kt KT
ku kU Ku KU kv kV Kv KV kw kW Kw KW kx kX Kx KX ky kY Ky KY kz kZ Kz KZ la lA La LA lb lB Lb LB lc lC Lc LC ld lD Ld LD
le lE Le LE lf lF Lf LF lg lG Lg LG lh lH Lh LH li lI Li LI lj lJ Lj LJ lk lK Lk LK ll lL Ll LL lm lM Lm LM ln lN Ln LN
lo lO Lo LO lp lP Lp LP lq lQ Lq LQ lr lR Lr LR ls lS Ls LS lt lT Lt LT lu lU Lu LU lv lV Lv LV lw lW Lw LW lx lX Lx LX
ly lY Ly LY lz lZ Lz LZ ma mA Ma MA mb mB Mb MB mc mC Mc MC md mD Md MD me mE Me ME mf mF Mf MF mg mG Mg MG mh mH Mh MH
mi mI Mi MI mj mJ Mj MJ mk mK Mk MK ml mL Ml ML mm mM Mm MM mn mN Mn MN mo mO Mo MO mp mP Mp MP mq mQ Mq MQ mr mR Mr MR
ms mS Ms MS mt mT Mt MT mu mU Mu MU mv mV Mv MV mw mW Mw MW mx mX Mx MX my mY My MY mz mZ Mz MZ na nA Na NA nb nB Nb NB
nc nC Nc NC nd nD Nd ND ne nE Ne NE nf nF Nf NF ng nG Ng NG nh nH Nh NH ni nI Ni NI nj nJ Nj NJ nk nK Nk NK nl nL Nl NL
nm nM Nm NM nn nN Nn NN no nO No NO np nP Np NP nq nQ Nq NQ nr nR Nr NR ns nS Ns NS nt nT Nt NT nu nU Nu NU nv nV Nv NV
nw nW Nw NW nx nX Nx NX ny nY Ny NY nz nZ Nz NZ oa oA Oa OA ob oB Ob OB oc oC Oc OC od oD Od OD oe oE Oe OE of oF Of OF
og oG Og OG oh oH Oh OH oi oI Oi OI oj oJ Oj OJ ok oK Ok OK ol oL Ol OL om oM Om OM on oN On ON oo oO Oo OO op oP Op OP
oq oQ Oq OQ or oR Or OR os oS Os OS ot oT Ot OT ou oU Ou OU ov oV Ov OV ow oW Ow OW ox oX Ox OX oy oY Oy OY oz oZ Oz OZ
pa pA Pa PA pb pB Pb PB pc pC Pc PC pd pD Pd PD pe pE Pe PE pf pF Pf PF pg pG Pg PG ph pH Ph PH pi pI Pi PI pj pJ Pj PJ
pk pK Pk PK pl pL Pl PL pm pM Pm PM pn pN Pn PN po pO Po PO pp pP Pp PP pq pQ Pq PQ pr pR Pr PR ps pS Ps PS pt pT Pt PT
pu pU Pu PU pv pV Pv PV pw pW Pw PW px pX Px PX py pY Py PY pz pZ Pz PZ qa qA Qa QA qb qB Qb QB qc qC Qc QC qd qD Qd QD
qe qE Qe QE qf qF Qf QF qg qG Qg QG qh qH Qh QH qi qI Qi QI qj qJ Qj QJ qk qK Qk QK ql qL Ql QL qm qM Qm QM qn qN Qn QN
qo qO Qo QO qp qP Qp QP qq qQ Qq QQ qr qR Qr QR qs qS Qs QS qt qT Qt QT qu qU Qu QU qv qV Qv QV qw qW Qw QW qx qX Qx QX
qy qY Qy QY qz qZ Qz QZ ra rA Ra RA rb rB Rb RB rc rC Rc RC rd rD Rd RD re rE Re RE rf rF Rf RF rg rG Rg RG rh rH Rh RH
ri rI Ri RI rj rJ Rj RJ rk rK Rk RK rl rL Rl RL rm rM Rm RM rn rN Rn RN ro rO Ro RO rp rP Rp RP rq rQ Rq RQ rr rR Rr RR
rs rS Rs RS rt rT Rt RT ru rU Ru RU rv rV Rv RV rw rW Rw RW rx rX Rx RX ry rY Ry RY rz rZ Rz RZ sa sA Sa SA sb sB Sb SB
sc sC Sc SC sd sD Sd SD se sE Se SE sf sF Sf SF sg sG Sg SG sh sH Sh SH si sI Si SI sj sJ Sj SJ sk sK Sk SK sl sL Sl SL
sm sM Sm SM sn sN Sn SN so sO So SO sp sP Sp SP sq sQ Sq SQ sr sR Sr SR ss sS Ss SS st sT St ST su sU Su SU sv sV Sv SV
sw sW Sw SW sx sX Sx SX sy sY Sy SY sz sZ Sz SZ ta tA Ta TA tb tB Tb TB tc tC Tc TC td tD Td TD te tE Te TE tf tF Tf TF
tg tG Tg TG th tH Th TH ti tI Ti TI tj tJ Tj TJ tk tK Tk TK tl tL Tl TL tm tM Tm TM tn tN Tn TN to tO To TO tp tP Tp TP
tq tQ Tq TQ tr tR Tr TR ts tS Ts TS tt tT Tt TT tu tU Tu TU tv tV Tv TV tw tW Tw TW tx tX Tx TX ty tY Ty TY tz tZ Tz TZ
ua uA Ua UA ub uB Ub UB uc uC Uc UC ud uD Ud UD ue uE Ue UE uf uF Uf UF ug uG Ug UG uh uH Uh UH ui uI Ui UI uj uJ Uj UJ
uk uK Uk UK ul uL Ul UL um uM Um UM un uN Un UN uo uO Uo UO up uP Up UP uq uQ Uq UQ ur uR Ur UR us uS Us US ut uT Ut UT
uu uU Uu UU uv uV Uv UV uw uW Uw UW ux uX Ux UX uy uY Uy UY uz uZ Uz UZ va vA Va VA vb vB Vb VB vc vC Vc VC vd vD Vd VD
ve vE Ve VE vf vF Vf VF vg vG Vg VG vh vH Vh VH vi vI Vi VI vj vJ Vj VJ vk vK Vk VK vl vL Vl VL vm vM Vm VM vn vN Vn VN
vo vO Vo VO vp vP Vp VP vq vQ Vq VQ vr vR Vr VR vs vS Vs VS vt vT Vt VT vu vU Vu VU vv vV Vv VV vw vW Vw VW vx vX Vx VX
vy vY Vy VY vz vZ Vz VZ wa wA Wa WA wb wB Wb WB wc wC Wc WC wd wD Wd WD we wE We WE wf wF Wf WF wg wG Wg WG wh wH Wh WH
wi wI Wi WI wj wJ Wj WJ wk wK Wk WK wl wL Wl WL wm wM Wm WM wn wN Wn WN wo wO Wo WO wp wP Wp WP wq wQ Wq WQ wr wR Wr WR
ws wS Ws WS wt wT Wt WT wu wU Wu WU wv wV Wv WV ww wW Ww WW wx wX Wx WX wy wY Wy WY wz wZ Wz WZ xa xA Xa XA xb xB Xb XB
xc xC Xc XC xd xD Xd XD xe xE Xe XE xf xF Xf XF xg xG Xg XG xh xH Xh XH xi xI Xi XI xj xJ Xj XJ xk xK Xk XK xl xL Xl XL
xm xM Xm XM xn xN Xn XN xo xO Xo XO xp xP Xp XP xq xQ Xq XQ xr xR Xr XR xs xS Xs XS xt xT Xt XT xu xU Xu XU xv xV Xv XV
xw xW Xw XW xx xX Xx XX xy xY Xy XY xz xZ Xz XZ ya yA Ya YA yb yB Yb YB yc yC Yc YC yd yD Yd YD ye yE Ye YE yf yF Yf YF
yg yG Yg YG yh yH Yh YH yi yI Yi YI yj yJ Yj YJ yk yK Yk YK yl yL Yl YL ym yM Ym YM yn yN Yn YN yo yO Yo YO yp yP Yp YP
yq yQ Yq YQ yr yR Yr YR ys yS Ys YS yt yT Yt YT yu yU Yu YU yv yV Yv YV yw yW Yw YW yx yX Yx YX yy yY Yy YY yz yZ Yz YZ
za zA Za ZA zb zB Zb ZB zc zC Zc ZC zd zD Zd ZD ze zE Ze ZE zf zF Zf ZF zg zG Zg ZG zh zH Zh ZH zi zI Zi ZI zj zJ Zj ZJ
zk zK Zk ZK zl zL Zl ZL zm zM Zm ZM zn zN Zn ZN zo zO Zo ZO zp zP Zp ZP zq zQ Zq ZQ zr zR Zr ZR zs zS Zs ZS zt zT Zt ZT
zu zU Zu ZU zv zV Zv ZV zw zW Zw ZW zx zX Zx ZX zy zY Zy ZY zz zZ Zz ZZ
     * 
     * */

    return 0;
}

