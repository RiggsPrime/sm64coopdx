#pragma once
#include "djui.h"

struct DjuiRect {
    struct DjuiBase base;
};

bool djui_rect_render(struct DjuiBase* base);
struct DjuiRect* djui_rect_create(struct DjuiBase* parent);
