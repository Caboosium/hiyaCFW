#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace gpu {
        const u32 TOP_WIDTH = 400;
        const u32 TOP_HEIGHT = 240;
        const u32 BOTTOM_WIDTH = 320;
        const u32 BOTTOM_HEIGHT = 240;

        typedef enum {
            SCREEN_TOP = 0,
            SCREEN_BOTTOM = 1
        } Screen;

        typedef enum {
            SIDE_LEFT,
            SIDE_RIGHT
        } ScreenSide;

        typedef enum {
            CULL_NONE = 0x0,
            CULL_FRONT_CCW = 0x1,
            CULL_BACK_CCW = 0x2
        } CullMode;

        typedef enum {
            TEST_NEVER = 0x0,
            TEST_ALWAYS = 0x1,
            TEST_EQUAL = 0x2,
            TEST_NOTEQUAL = 0x3,
            TEST_LESS = 0x4,
            TEST_LEQUAL = 0x5,
            TEST_GREATER = 0x6,
            TEST_GEQUAL = 0x7
        } TestFunc;

        typedef enum {
            STENCIL_OP_KEEP = 0x0,
            STENCIL_OP_ZERO = 0x1,
            STENCIL_OP_REPLACE = 0x2,
            STENCIL_OP_INCR = 0x3,
            STENCIL_OP_DECR = 0x4,
            STENCIL_OP_INVERT = 0x5,
            STENCIL_OP_INCR_WRAP = 0x6,
            STENCIL_OP_DECR_WRAP = 0x7
        } StencilOp;

        typedef enum {
            BLEND_ADD = 0x0,
            BLEND_SUBTRACT = 0x1,
            BLEND_REVERSE_SUBTRACT = 0x2,
            BLEND_MIN = 0x3,
            BLEND_MAX = 0x4
        } BlendEquation;

        typedef enum {
            FACTOR_ZERO = 0x0,
            FACTOR_ONE = 0x1,
            FACTOR_SRC_COLOR = 0x2,
            FACTOR_ONE_MINUS_SRC_COLOR = 0x3,
            FACTOR_DST_COLOR = 0x4,
            FACTOR_ONE_MINUS_DST_COLOR = 0x5,
            FACTOR_SRC_ALPHA = 0x6,
            FACTOR_ONE_MINUS_SRC_ALPHA = 0x7,
            FACTOR_DST_ALPHA = 0x8,
            FACTOR_ONE_MINUS_DST_ALPHA = 0x9,
            FACTOR_CONSTANT_COLOR = 0xA,
            FACTOR_ONE_MINUS_CONSTANT_COLOR = 0xB,
            FACTOR_CONSTANT_ALPHA = 0xC,
            FACTOR_ONE_MINUS_CONSTANT_ALPHA = 0xD,
            FACTOR_SRC_ALPHA_SATURATE = 0xE
        } BlendFactor;

        typedef enum {
            SHADER_VERTEX = 0x0,
            SHADER_GEOMETRY = 0x1
        } ShaderType;

        typedef enum {
            PRIM_TRIANGLES = 0x0000,
            PRIM_TRIANGLE_STRIP = 0x0100,
            PRIM_TRIANGLE_FAN = 0x0200,
            PRIM_UNKPRIM = 0x0300
        } Primitive;

        typedef enum {
            ATTR_BYTE = 0x0,
            ATTR_UNSIGNED_BYTE = 0x1,
            ATTR_SHORT = 0x2,
            ATTR_FLOAT = 0x3
        } AttributeType;

        typedef enum {
            SOURCE_PRIMARY_COLOR = 0x0,
            SOURCE_TEXTURE0 = 0x3,
            SOURCE_TEXTURE1 = 0x4,
            SOURCE_TEXTURE2 = 0x5,
            SOURCE_TEXTURE3 = 0x6,
            SOURCE_CONSTANT = 0xE,
            SOURCE_PREVIOUS = 0xF
        } TexEnvSource;

        typedef enum {
            TEXENV_OP_RGB_SRC_COLOR = 0x00,
            TEXENV_OP_RGB_ONE_MINUS_SRC_COLOR = 0x01,
            TEXENV_OP_RGB_SRC_ALPHA = 0x02,
            TEXENV_OP_RGB_ONE_MINUS_SRC_ALPHA = 0x03,
            TEXENV_OP_RGB_SRC0_RGB = 0x04,
            TEXENV_OP_RGB_0x05 = 0x05,
            TEXENV_OP_RGB_0x06 = 0x06,
            TEXENV_OP_RGB_0x07 = 0x07,
            TEXENV_OP_RGB_SRC1_RGB = 0x08,
            TEXENV_OP_RGB_0x09 = 0x09,
            TEXENV_OP_RGB_0x0A = 0x0A,
            TEXENV_OP_RGB_0x0B = 0x0B,
            TEXENV_OP_RGB_SRC2_RGB = 0x0C,
            TEXENV_OP_RGB_0x0D = 0x0D,
            TEXENV_OP_RGB_0x0E = 0x0E,
            TEXENV_OP_RGB_0x0F = 0x0F,
        } TexEnvOpRGB;

        typedef enum {
            TEXENV_OP_A_SRC_ALPHA = 0x00,
            TEXENV_OP_A_ONE_MINUS_SRC_ALPHA = 0x01,
            TEXENV_OP_A_SRC0_RGB = 0x02,
            TEXENV_OP_A_SRC1_RGB = 0x04,
            TEXENV_OP_A_SRC2_RGB = 0x06,
        } TexEnvOpA;

        typedef enum {
            COMBINE_REPLACE = 0x0,
            COMBINE_MODULATE = 0x1,
            COMBINE_ADD = 0x2,
            COMBINE_ADD_SIGNED = 0x3,
            COMBINE_INTERPOLATE = 0x4,
            COMBINE_SUBTRACT = 0x5,
            COMBINE_DOT3_RGB = 0x6
        } CombineFunc;

        typedef enum {
            TEXUNIT0 = 0x1,
            TEXUNIT1 = 0x2,
            TEXUNIT2 = 0x4
        } TexUnit;

        typedef enum {
            FILTER_NEAREST = 0x0,
            FILTER_LINEAR = 0x1
        } TextureFilter;

        typedef enum {
            WRAP_CLAMP_TO_EDGE = 0x0,
            WRAP_CLAMP_TO_BORDER = 0x1,
            WRAP_REPEAT = 0x2,
            WRAP_MIRRORED_REPEAT = 0x3
        } TextureWrap;

        typedef enum {
            PIXEL_RGBA8 = 0x0,
            PIXEL_RGB8 = 0x1,
            PIXEL_RGBA5551 = 0x2,
            PIXEL_RGB565 = 0x3,
            PIXEL_RGBA4 = 0x4,
            PIXEL_LA8 = 0x5,
            PIXEL_HILO8 = 0x6,
            PIXEL_L8 = 0x7,
            PIXEL_A8 = 0x8,
            PIXEL_LA4 = 0x9,
            PIXEL_L4 = 0xA,
            PIXEL_A4 = 0xB,
            PIXEL_ETC1 = 0xC,
            PIXEL_ETC1A4 = 0xD
        } PixelFormat;

        typedef enum {
            SCISSOR_DISABLE = 0x0,
            SCISSOR_INVERT = 0x1,
            SCISSOR_NORMAL = 0x3
        } ScissorMode;

        typedef enum {
            TEXTURE_PLACE_RAM = 0,
            TEXTURE_PLACE_VRAM = 1
        } TexturePlace;

        inline u32 bitsPerPixel(PixelFormat format) {
            static const u32 bitsPerPixelFormat[] = {
                    32, // RGBA8
                    24, // RGB8
                    16, // RGBA5551
                    16, // RGB565
                    16, // RGBA4
                    16, // LA8
                    16, // HILO8
                    8,  // L8
                    8,  // A8
                    8,  // LA4
                    4,  // L4
                    4,  // A4
                    4,  // ETC1
                    8,  // ETC1A4
            };

            return bitsPerPixelFormat[format];
        }

        inline u32 bitsPerAttribute(AttributeType type) {
            static const u32 bitsPerAttributeType[] = {
                    8,  // ATTR_BYTE
                    8,  // ATTR_UNSIGNED_BYTE
                    16, // ATTR_SHORT
                    32, // ATTR_FLOAT
            };

            return bitsPerAttributeType[type];
        }

        inline u32 vboAttribute(u32 index, u32 size, AttributeType type) {
            return (((size - 1) << 2) | (type & 3)) << (index * 4);
        }

        inline u16 texEnvSources(TexEnvSource src0, TexEnvSource src1, TexEnvSource src2) {
            return (u16) (src0 | (src1 << 4) | (src2 << 8));
        }

        inline u16 texEnvOperands(u32 src0, u32 src1, u32 src2) {
            return (u16) (src0 | (src1 << 4) | (src2 << 8));
        }

        inline u32 textureMinFilter(TextureFilter filter) {
            return (filter & 1) << 2;
        }

        inline u32 textureMagFilter(TextureFilter filter) {
            return (filter & 1) << 1;
        }

        inline u32 textureWrapS(TextureWrap wrap) {
            return (wrap & 3) << 12;
        }

        inline u32 textureWrapT(TextureWrap wrap) {
            return (wrap & 3) << 8;
        }

        inline u32 textureIndex(u32 x, u32 y, u32 w, u32 h) {
            return (((y >> 3) * (w >> 3) + (x >> 3)) << 6) + ((x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3));
        }

        void* galloc(u32 size);
        void gfree(void* mem);

        void flushCommands();
        void flushBuffer();
        void swapBuffers(bool vblank);

        void dumpScreen(ctr::gpu::Screen screen, ctr::gpu::ScreenSide side, void** pixels, PixelFormat* format, u32* width, u32* height);

        void clear();

        void setClearColor(u8 red, u8 green, u8 blue, u8 alpha);
        void setClearDepth(u32 depth);

        void setAllow3d(bool allow3d);
        void setScreenSide(ScreenSide side);

        void getViewportWidth(u32* out);
        void getViewportHeight(u32* out);

        void setViewport(Screen screen, u32 x, u32 y, u32 width, u32 height);
        void setScissorTest(ScissorMode mode, int x, int y, u32 width, u32 height);
        void setDepthMap(float zScale, float zOffset);

        void setCullMode(CullMode mode);

        void setStencilTest(bool enable, TestFunc func, u8 ref, u8 inputMask, u8 writeMask);
        void setStencilOp(StencilOp fail, StencilOp zfail, StencilOp zpass);

        void setBlendColor(u8 red, u8 green, u8 blue, u8 alpha);
        void setBlendFunc(BlendEquation colorEquation, BlendEquation alphaEquation, BlendFactor colorSrc, BlendFactor colorDst, BlendFactor alphaSrc, BlendFactor alphaDst);

        void setAlphaTest(bool enable, TestFunc func, u8 ref);

        void setDepthTest(bool enable, TestFunc func);

        void setColorMask(bool red, bool green, bool blue, bool alpha);
        void setDepthMask(bool depth);

        void createShader(u32* shader);
        void freeShader(u32 shader);
        void loadShader(u32 shader, const void* data, u32 size, u8 geometryStride = 0);
        void useShader(u32 shader);
        void getUniform(u32 shader, ShaderType type, const std::string name, float* data, u32 elements);
        void setUniform(u32 shader, ShaderType type, const std::string name, const float* data, u32 elements);
        void getUniformBool(u32 shader, ShaderType type, int id, bool* value);
        void setUniformBool(u32 shader, ShaderType type, int id, bool value);

        void createVbo(u32* vbo);
        void freeVbo(u32 vbo);
        void getVboData(u32 vbo, void** out);
        void setVboDataInfo(u32 vbo, u32 numVertices, Primitive primitive);
        void setVboData(u32 vbo, const void *data, u32 numVertices, Primitive primitive);
        void getVboIndices(u32 vbo, void** out);
        void setVboIndicesInfo(u32 vbo, u32 size);
        void setVboIndices(u32 vbo, const void *data, u32 size);
        void setVboAttributes(u32 vbo, u64 attributes, u8 attributeCount);
        void drawVbo(u32 vbo);

        void setTexEnv(u32 env, u16 rgbSources, u16 alphaSources, u16 rgbOperands, u16 alphaOperands, CombineFunc rgbCombine, CombineFunc alphaCombine, u32 constantColor);

        void createTexture(u32* texture);
        void freeTexture(u32 texture);
        void getTextureData(u32 texture, void** out);
        void setTextureInfo(u32 texture, u32 width, u32 height, PixelFormat format, u32 params, TexturePlace place = TEXTURE_PLACE_RAM);
        void setTextureData(u32 texture, const void *data, u32 width, u32 height, PixelFormat format, u32 params, TexturePlace place = TEXTURE_PLACE_RAM);
        void setTextureBorderColor(u32 texture, u8 red, u8 green, u8 blue, u8 alpha);
        void bindTexture(TexUnit unit, u32 texture);
    }
}
