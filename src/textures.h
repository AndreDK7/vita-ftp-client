#ifndef LAUNCHER_TEXTURES_H
#define LAUNCHER_TEXTURES_H

#include <string>
#include <vita2d.h>

typedef struct {
    vita2d_texture *id=0;
    int width;
    int height;
} Tex;

extern Tex connect_icon;
extern Tex disconnect_icon;
extern Tex search_icon;
extern Tex refresh_icon;

extern Tex square_icon;
extern Tex triangle_icon;
extern Tex circle_icon;
extern Tex cross_icon;

extern Tex folder_icon;
extern Tex file_icon;

namespace Textures {
    void LoadFonts(Tex *font_texture);
    bool LoadImageFile(const std::string filename, Tex *texture);
    void Init(void);
    void Exit(void);
    void Free(Tex *texture);
}

#endif
