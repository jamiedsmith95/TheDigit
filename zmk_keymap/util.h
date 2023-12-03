#define COMBO(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <65>; \
  bindings = <keypress>; \
  slow-release;\
  key-positions = <keypos>; \
};
#define COMBOS(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <50>; \
  bindings = <keypress>; \
  slow-release;\
  key-positions = <keypos>; \
};
#define COMBOLL(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <75>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  slow-release;\
  key-positions = <keypos>; \
};
#define COMBOLS(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <50>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  slow-release;\
  key-positions = <keypos>; \
};
#define COMBOL(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <60>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  slow-release;\
  key-positions = <keypos>; \
};
#define COMBOSR(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <70>; \
  bindings = <keypress>; \
  require-prior-idle-ms = <250>;\
  slow-release;\
  key-positions = <keypos>; \
};
