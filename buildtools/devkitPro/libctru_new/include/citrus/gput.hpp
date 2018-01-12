#pragma once

#include "citrus/gpu.hpp"
#include "citrus/types.hpp"

namespace ctr {
    namespace gput {
        void useDefaultShader();

        void multMatrix(float* out, const float* m1, const float* m2);
        void setIdentityMatrix(float* out);
        void setOrthoMatrix(float* out, float left, float right, float bottom, float top, float near, float far);
        void setPerspectiveMatrix(float* out, float fovy, float aspect, float near, float far);
        void setTranslationMatrix(float* out, float x, float y, float z);
        void setRotationMatrixX(float* out, float rotation);
        void setRotationMatrixY(float* out, float rotation);
        void setRotationMatrixZ(float* out, float rotation);
        void setScaleMatrix(float* out, float x, float y, float z);

        void pushProjection();
        void popProjection();
        float* getProjection();
        void setProjection(float* matrix);
        void setOrtho(float left, float right, float bottom, float top, float near, float far);
        void setPerspective(float fovy, float aspect, float near, float far);

        void pushModelView();
        void popModelView();
        float* getModelView();
        void setModelView(float* matrix);
        void translate(float x, float y, float z);
        void rotateX(float rotation);
        void rotateY(float rotation);
        void rotateZ(float rotation);
        void rotate(float x, float y, float z);
        void scale(float x, float y, float z);

        void setFont(void* image, u32 width, u32 height, u32 charWidth, u32 charHeight, gpu::PixelFormat format);
        float getStringWidth(const std::string str, float charWidth);
        float getStringHeight(const std::string str, float charHeight);
        void drawString(const std::string str, float x, float y, float charWidth, float charHeight, u8 red = 0xFF, u8 green = 0xFF, u8 blue = 0xFF, u8 alpha = 0xFF);

        void takeScreenshot(bool top = true, bool bottom = true);
    }
}