
//Functions Prototypes
//Macros
//Definitions

struct finger{
    int volt;
    int degree;
};
struct wrist {
    int volt;
    int degree;
    struct finger *f;
    };
struct elbow{
int volt;
int degree;
struct wrist *w;
};
struct shoulder{
    int volt;
    int degree;
    struct elbow *e;

};

struct ARM {
    struct shoulder S;
    struct elbow E;
    struct wrist W;
    struct finger f;
}RA,LA;

struct ankle{
int volt;
int degree;
};
struct knee{
int volt;
int degree;
struct ankle *a;
};
struct waist_end{
int volt;
int degree;
struct knee *k;
};
struct LEG{
struct waist_end WE;
struct knee K;
struct ankle A;
}LL,RL;
